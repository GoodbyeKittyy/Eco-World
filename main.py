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
