# Merge Sort Implementation in C++

## Description
This project demonstrates the implementation of the Merge Sort algorithm using C++ and the STL vector container.

Merge Sort is a Divide and Conquer sorting algorithm that divides an array into smaller subarrays, sorts them recursively, and merges them to produce a sorted array.

## Features
- Accepts array elements from the user.
- Displays the original array.
- Sorts elements using Merge Sort.
- Displays the sorted array.
- Uses C++ vectors for dynamic array storage.

## Algorithm
1. Divide the array into two halves.
2. Recursively divide each half until individual elements remain.
3. Merge the smaller arrays in sorted order.
4. Continue merging until the complete array is sorted.

## Sample Input
```text
Enter the Number of Elements: 5
Enter the Element: 38
Enter the Element: 12
Enter the Element: 27
Enter the Element: 9
Enter the Element: 31
```

## Sample Output
```text
Original Array: 38 12 27 9 31
Sorted Array: 9 12 27 31 38
```

## Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |

**Space Complexity:** O(n)

## Technologies Used
- C++
- STL Vector
- Recursion
- Divide and Conquer
