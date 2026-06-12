use std::collections::HashMap;

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
