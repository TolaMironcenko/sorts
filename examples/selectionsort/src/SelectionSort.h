#include <vector>

void SelectionSort(std::vector<int>& values) {
  for (auto i = values.begin(); i != values.end(); ++i) {
    auto j = std::min_element(i, values.end());
    std::swap(*i, *j);
  }
}
