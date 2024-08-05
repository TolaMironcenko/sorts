#include <vector>

void BubbleSort(std::vector<int> &values)
{
    for (size_t idx_i = 0; idx_i + 1 < values.size(); ++idx_i)
    {
        for (size_t idx_j = 0; idx_j + 1 < values.size() - idx_i; ++idx_j)
        {
            if (values[idx_j + 1] < values[idx_j])
            {
                std::swap(values[idx_j], values[idx_j + 1]);
            }
        }
    }
}
