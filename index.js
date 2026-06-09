const fs = require('fs');

// ─── Config ───────────────────────────────────────────────────────────────────

const STATE_FILE = '.commit_state.json';

// Each entry: the file to append to, and the exact function block to append.
// The function is always the same "seed" block — identical every time.
const LANGUAGE_FILES = [
  {
    file: 'main.py',
    block: `
def calculate_statistics(numbers):
    """Calculate basic statistics for a list of numbers."""
    if not numbers:
        return None

    count  = len(numbers)
    total  = sum(numbers)
    mean   = total / count

    sorted_nums = sorted(numbers)
    mid = count // 2
    if count % 2 == 0:
        median = (sorted_nums[mid - 1] + sorted_nums[mid]) / 2
    else:
        median = sorted_nums[mid]

    variance  = sum((x - mean) ** 2 for x in numbers) / count
    std_dev   = variance ** 0.5
    minimum   = sorted_nums[0]
    maximum   = sorted_nums[-1]

    return {
        "count": count, "mean": mean, "median": median,
        "std_dev": std_dev, "min": minimum, "max": maximum,
    }
`,
  },
  {
    file: 'Main.java',
    block: `
    public static Map<String, Double> calculateStatistics(List<Double> numbers) {
        if (numbers == null || numbers.isEmpty()) return null;

        int    count   = numbers.size();
        double total   = 0;
        for (double n : numbers) total += n;
        double mean    = total / count;

        List<Double> sorted = new ArrayList<>(numbers);
        Collections.sort(sorted);
        double median;
        if (count % 2 == 0) {
            median = (sorted.get(count / 2 - 1) + sorted.get(count / 2)) / 2.0;
        } else {
            median = sorted.get(count / 2);
        }

        double variance = 0;
        for (double n : numbers) variance += Math.pow(n - mean, 2);
        double stdDev = Math.sqrt(variance / count);

        Map<String, Double> stats = new LinkedHashMap<>();
        stats.put("count",  (double) count);
        stats.put("mean",   mean);
        stats.put("median", median);
        stats.put("stdDev", stdDev);
        stats.put("min",    sorted.get(0));
        stats.put("max",    sorted.get(count - 1));
        return stats;
    }
`,
  },
  {
    file: 'main.cs',
    block: `
public static Dictionary<string, double> CalculateStatistics(List<double> numbers)
{
    if (numbers == null || numbers.Count == 0) return null;

    int    count   = numbers.Count;
    double total   = 0;
    foreach (var n in numbers) total += n;
    double mean    = total / count;

    var sorted = new List<double>(numbers);
    sorted.Sort();
    double median = count % 2 == 0
        ? (sorted[count / 2 - 1] + sorted[count / 2]) / 2.0
        : sorted[count / 2];

    double variance = 0;
    foreach (var n in numbers) variance += Math.Pow(n - mean, 2);
    double stdDev = Math.Sqrt(variance / count);

    return new Dictionary<string, double> {
        { "count",  count  },
        { "mean",   mean   },
        { "median", median },
        { "stdDev", stdDev },
        { "min",    sorted[0]          },
        { "max",    sorted[count - 1]  },
    };
}
`,
  },
  {
    file: 'main.cpp',
    block: `
std::map<std::string, double> calculateStatistics(std::vector<double> numbers) {
    if (numbers.empty()) return {};

    int    count  = numbers.size();
    double total  = 0;
    for (double n : numbers) total += n;
    double mean   = total / count;

    std::vector<double> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());
    double median;
    if (count % 2 == 0)
        median = (sorted[count / 2 - 1] + sorted[count / 2]) / 2.0;
    else
        median = sorted[count / 2];

    double variance = 0;
    for (double n : numbers) variance += std::pow(n - mean, 2);
    double stdDev = std::sqrt(variance / count);

    return {
        {"count",  (double) count},
        {"mean",   mean},
        {"median", median},
        {"stdDev", stdDev},
        {"min",    sorted.front()},
        {"max",    sorted.back()},
    };
}
`,
  },
  {
    file: 'main.c',
    block: `
Stats calculateStatistics(double* numbers, int count) {
    Stats result = {0};
    if (!numbers || count == 0) return result;

    double total = 0;
    for (int i = 0; i < count; i++) total += numbers[i];
    result.mean = total / count;

    double* sorted = (double*) malloc(count * sizeof(double));
    memcpy(sorted, numbers, count * sizeof(double));
    qsort(sorted, count, sizeof(double), compareDoubles);

    if (count % 2 == 0)
        result.median = (sorted[count / 2 - 1] + sorted[count / 2]) / 2.0;
    else
        result.median = sorted[count / 2];

    double variance = 0;
    for (int i = 0; i < count; i++)
        variance += pow(numbers[i] - result.mean, 2);
    result.stdDev = sqrt(variance / count);

    result.min   = sorted[0];
    result.max   = sorted[count - 1];
    result.count = count;

    free(sorted);
    return result;
}
`,
  },
  {
    file: 'main.js',
    block: `
function calculateStatistics(numbers) {
    if (!numbers || numbers.length === 0) return null;

    const count  = numbers.length;
    const total  = numbers.reduce((sum, n) => sum + n, 0);
    const mean   = total / count;

    const sorted = [...numbers].sort((a, b) => a - b);
    const mid    = Math.floor(count / 2);
    const median = count % 2 === 0
        ? (sorted[mid - 1] + sorted[mid]) / 2
        : sorted[mid];

    const variance = numbers.reduce((sum, n) => sum + (n - mean) ** 2, 0) / count;
    const stdDev   = Math.sqrt(variance);

    return {
        count, mean, median, stdDev,
        min: sorted[0],
        max: sorted[count - 1],
    };
}
`,
  },
  {
    file: 'main.ts',
    block: `
interface Statistics {
    count: number; mean: number; median: number;
    stdDev: number; min: number; max: number;
}

function calculateStatistics(numbers: number[]): Statistics | null {
    if (!numbers || numbers.length === 0) return null;

    const count  = numbers.length;
    const total  = numbers.reduce((sum, n) => sum + n, 0);
    const mean   = total / count;

    const sorted = [...numbers].sort((a, b) => a - b);
    const mid    = Math.floor(count / 2);
    const median = count % 2 === 0
        ? (sorted[mid - 1] + sorted[mid]) / 2
        : sorted[mid];

    const variance = numbers.reduce((sum, n) => sum + (n - mean) ** 2, 0) / count;
    const stdDev   = Math.sqrt(variance);

    return { count, mean, median, stdDev, min: sorted[0], max: sorted[count - 1] };
}
`,
  },
  {
    file: 'main.rb',
    block: `
def calculate_statistics(numbers)
  return nil if numbers.nil? || numbers.empty?

  count  = numbers.size
  total  = numbers.sum
  mean   = total.to_f / count

  sorted = numbers.sort
  median = if count.odd?
             sorted[count / 2].to_f
           else
             (sorted[count / 2 - 1] + sorted[count / 2]) / 2.0
           end

  variance = numbers.sum { |n| (n - mean)**2 } / count.to_f
  std_dev  = Math.sqrt(variance)

  {
    count:   count,
    mean:    mean,
    median:  median,
    std_dev: std_dev,
    min:     sorted.first,
    max:     sorted.last,
  }
end
`,
  },
  {
    file: 'main.go',
    block: `
func calculateStatistics(numbers []float64) map[string]float64 {
	if len(numbers) == 0 {
		return nil
	}

	count := float64(len(numbers))
	total := 0.0
	for _, n := range numbers {
		total += n
	}
	mean := total / count

	sorted := make([]float64, len(numbers))
	copy(sorted, numbers)
	sort.Float64s(sorted)

	mid := int(count) / 2
	var median float64
	if int(count)%2 == 0 {
		median = (sorted[mid-1] + sorted[mid]) / 2
	} else {
		median = sorted[mid]
	}

	variance := 0.0
	for _, n := range numbers {
		variance += math.Pow(n-mean, 2)
	}
	stdDev := math.Sqrt(variance / count)

	return map[string]float64{
		"count": count, "mean": mean, "median": median,
		"stdDev": stdDev, "min": sorted[0], "max": sorted[len(sorted)-1],
	}
}
`,
  },
  {
    file: 'main.rs',
    block: `
fn calculate_statistics(numbers: &[f64]) -> Option<HashMap<&str, f64>> {
    if numbers.is_empty() {
        return None;
    }

    let count = numbers.len() as f64;
    let mean  = numbers.iter().sum::<f64>() / count;

    let mut sorted = numbers.to_vec();
    sorted.sort_by(|a, b| a.partial_cmp(b).unwrap());

    let mid    = sorted.len() / 2;
    let median = if sorted.len() % 2 == 0 {
        (sorted[mid - 1] + sorted[mid]) / 2.0
    } else {
        sorted[mid]
    };

    let variance = numbers.iter().map(|n| (n - mean).powi(2)).sum::<f64>() / count;
    let std_dev  = variance.sqrt();

    let mut stats = HashMap::new();
    stats.insert("count",   count);
    stats.insert("mean",    mean);
    stats.insert("median",  median);
    stats.insert("std_dev", std_dev);
    stats.insert("min",     *sorted.first().unwrap());
    stats.insert("max",     *sorted.last().unwrap());
    Some(stats)
}
`,
  },
];

// ─── Helpers ──────────────────────────────────────────────────────────────────

function loadState() {
  if (fs.existsSync(STATE_FILE)) {
    try { return JSON.parse(fs.readFileSync(STATE_FILE, 'utf8')); } catch (_) {}
  }
  return { date: '', target: 0, count: 0 };
}

function saveState(state) {
  fs.writeFileSync(STATE_FILE, JSON.stringify(state));
}

function signalWorkflow(shouldCommit) {
  if (process.env.GITHUB_OUTPUT) {
    fs.appendFileSync(process.env.GITHUB_OUTPUT, `should_commit=${shouldCommit}\n`);
  }
}

// ─── Main ─────────────────────────────────────────────────────────────────────

function run() {
  const today = new Date().toISOString().slice(0, 10);
  const state = loadState();

  // New day → fresh random target
  if (state.date !== today) {
    state.date   = today;
    state.target = Math.floor(Math.random() * 9) + 2; // 2–10
    state.count  = 0;
    console.log(`New day! Target commits: ${state.target}`);
  }

  // Already hit today's target → skip
  if (state.count >= state.target) {
    console.log(`Already at ${state.count}/${state.target} commits today. Skipping.`);
    saveState(state);
    signalWorkflow('false');
    return;
  }

  // Append one function block to EVERY language file
  for (const { file, block } of LANGUAGE_FILES) {
    fs.appendFileSync(file, block);
    console.log(`  → appended to ${file}`);
  }

  state.count += 1;
  console.log(`Commit ${state.count}/${state.target} done.`);
  saveState(state);
  signalWorkflow('true');
}

run();
