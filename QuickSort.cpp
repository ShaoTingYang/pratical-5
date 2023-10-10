#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    // Implement the Quick Sort algorithm here
    // ...
    return list;
}
    static std::vector<int> concatenate(const std::vector<int>& a, const std::vector<int>& b) {
        std::vector<int> result = a;
        result.insert(result.end(), b.begin(), b.end());
        return result;
    }
};
