#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::vector<int> input;
    int num;
    while (std::cin >> num) {
        input.push_back(num);
    }

    QuickSort quickSort;
    input = quickSort.sort(input);

    int target = 1;

    RecursiveBinarySearch binarySearch;
    bool found = binarySearch.search(input, target);

    if (found) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }

    for (int num : input) {
        std::cout << " " << num;
    }

    std::cout << std::endl;

    return 0;
}
