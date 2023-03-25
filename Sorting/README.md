# Sorting Algorithms in C++

This repository contains implementations of several sorting algorithms in C++ language.

## Files

- `BubbleSort.cpp`: Implementation of the Bubble Sort algorithm, which compares adjacent elements and swaps them if they are in the wrong order. The algorithm repeats this process until the array is sorted.

- `InsertionSort.cpp`: Implementation of the Insertion Sort algorithm, which works by inserting each element in the proper place in a sorted subarray, shifting the elements as necessary.

- `MergeSort.cpp`: Implementation of the Merge Sort algorithm, which divides the array into two halves, sorts each half recursively, and then merges the sorted halves back together.

- `QuickSort.cpp`: Implementation of the Quick Sort algorithm, which works by selecting a pivot element, partitioning the array around the pivot, and recursively sorting the two resulting subarrays.

- `SelectionSort.cpp`: Implementation of the Selection Sort algorithm, which works by selecting the smallest element in the unsorted portion of the array and swapping it with the first element in the unsorted portion.

## Usage

Each file contains a `main()` function that demonstrates how to use the corresponding sorting algorithm. To run the algorithm, open the file in a compiler and build and run the program. The program will prompt the user to enter the number of elements to be sorted, and then input the elements. The program will then output the sorted array.

## Time Complexity

The time complexity of each algorithm is as follows:

| **Algorithm** | **Best Case** | **Average Case** | **Worst Case** |
|-----------|-----------|--------------|------------|
| Bubble Sort | O(n) | O(n^2) | O(n^2) |
| Insertion Sort | O(n) | O(n^2) | O(n^2) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) |
| Quick Sort | O(n log n) | O(n log n) | O(n^2) |
| Selection Sort | O(n^2) | O(n^2) | O(n^2) |

Note: the best case time complexity of Bubble Sort, Insertion Sort, and Quick Sort is O(n) when the array is already sorted.
