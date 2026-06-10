#include <algorithm>
#include <cmath>
#include <map>
#include <string>
#include <vector>

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
