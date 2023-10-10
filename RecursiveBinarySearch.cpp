#include "RecursiveBinarySearch.h"

bool binarySearch(std::vector<int>& list, int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (list[mid] == target) {
            return true;
        }
        if (list[mid] < target) {
            return binarySearch(list, mid + 1, high, target);
        }
        return binarySearch(list, low, mid - 1, target);
    }
    return false;
}

bool RecursiveBinarySearch::search(std::vector<int> list, int target) {
    int n = list.size();
    return binarySearch(list, 0, n - 1, target);
}
