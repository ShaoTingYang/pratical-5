#include <vector>

class QuickSort {
public:
    static std::vector<int> sort(std::vector<int> list) {
        if (list.size() <= 1) {
            return list;
        }
        
        int pivot = list[list.size() / 3]; // Choose the third value as the pivot
        std::vector<int> less, equal, greater;
        
        for (int num : list) {
            if (num < pivot) {
                less.push_back(num);
            } else if (num == pivot) {
                equal.push_back(num);
            } else {
                greater.push_back(num);
            }
        }
        
        std::vector<int> sorted;
        sorted = concatenate(sort(less), equal);
        sorted = concatenate(sorted, sort(greater));
        
        return sorted;
    }

private:
    static std::vector<int> concatenate(const std::vector<int>& a, const std::vector<int>& b) {
        std::vector<int> result = a;
        result.insert(result.end(), b.begin(), b.end());
        return result;
    }
};
