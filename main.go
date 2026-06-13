package main

import (
	"math"
	"sort"
)

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
