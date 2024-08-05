#include <vector>

void ShakerSort(std::vector<int>& values) {
  if (values.empty()) {
    return;
  }
  int left = 0;
  int right = values.size() - 1;
  while (left <= right) {
    for (int i = right; i > left; --i) {
      if (values[i - 1] > values[i]) {
        std::swap(values[i - 1], values[i]);
      }
    }
    ++left;
    for (int i = left; i < right; ++i) {
      if (values[i] > values[i + 1]) {
        std::swap(values[i], values[i + 1]);
      }
    }
    --right;
  }
}
