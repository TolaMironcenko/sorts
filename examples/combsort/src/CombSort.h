#include <vector>

void CombSort(std::vector<int>& values) {
  const double factor = 1.247; // Фактор уменьшения
  double step = values.size() - 1;

  while (step >= 1) {
    for (int i = 0; i + step < values.size(); ++i) {
      if (values[i] > values[i + step]) {
        std::swap(values[i], values[i + step]);
      }
    }
    step /= factor;
  }
  // сортировка пузырьком
  for (size_t idx_i = 0; idx_i + 1 < values.size(); ++idx_i) {
    for (size_t idx_j = 0; idx_j + 1 < values.size() - idx_i; ++idx_j) {
      if (values[idx_j + 1] < values[idx_j]) {
        std::swap(values[idx_j], values[idx_j + 1]);
      }
    }
  }
}
