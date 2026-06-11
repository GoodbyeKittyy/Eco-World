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
