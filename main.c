#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int    count;
    double mean, median, stdDev, min, max;
} Stats;

static int compareDoubles(const void* a, const void* b) {
    double da = *(double*)a, db = *(double*)b;
    return (da > db) - (da < db);
}

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
