import java.util.*;

public class Main {

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
}

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
