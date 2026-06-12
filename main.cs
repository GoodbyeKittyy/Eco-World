using System;
using System.Collections.Generic;

public class Statistics
{
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
}

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
