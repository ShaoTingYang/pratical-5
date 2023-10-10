#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    // Create an unsorted list of integers
    std::vector<int> unsortedList = {1, 3, 5, 4, -5, 100, 7777, 2014};
    
    // Create an instance of BubbleSort and use it to sort the list
    BubbleSort bubbleSort;
    std::vector<int> sortedList = bubbleSort.sort(unsortedList);
    
    // Output the sorted list
    std::cout << "Sorted list: ";
    for (int num : sortedList) {
        std::cout << num << " ";
    }
    
    // Create an instance of QuickSort and use it to sort the list
    QuickSort quickSort;
    sortedList = quickSort.sort(unsortedList);
    
    // Output the sorted list
    std::cout << "\nSorted list (QuickSort): ";
    for (int num : sortedList) {
        std::cout << num << " ";
    }
    
    // Perform a binary search on the sorted list
    RecursiveBinarySearch binarySearch;
    int target = 1;
    bool found = binarySearch.search(sortedList, target);
    
    // Output the search result
    if (found) {
        std::cout << "\n" << target << " exists in the list." << std::endl;
    } else {
        std::cout << "\n" << target << " does not exist in the list." << std::endl;
    }
    
    return 0;
}
