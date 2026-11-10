# 🔀 Merge Sort Implementation — C++

<p align="center">
  <b>Divide. Conquer. Merge. Sort Efficiently.</b>
  <br>
  A C++ implementation of the Merge Sort algorithm using STL vectors and recursion.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge&logo=cplusplus" />
  <img src="https://img.shields.io/badge/Algorithm-Merge%20Sort-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Technique-Divide%20%26%20Conquer-green?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Concept-Recursion-purple?style=for-the-badge" />
</p>

---

## 📌 About the Project

This project demonstrates the implementation of the **Merge Sort algorithm** using C++ and the STL vector container.

Merge Sort is an efficient **Divide and Conquer sorting algorithm** that recursively divides an array into smaller subarrays, sorts them individually, and merges them in the correct order to produce a completely sorted array.

The implementation focuses on understanding recursion, dynamic array storage, merging techniques, and algorithm complexity.

## ✨ Key Features

- 🔢 Accepts the number of elements and array values from the user.
- 📋 Displays the original unsorted array.
- 🔀 Sorts elements using the Merge Sort algorithm.
- 📊 Displays the final sorted array in ascending order.
- 📦 Uses STL `vector` for dynamic array storage.
- 🔁 Uses recursion to divide and sort subarrays.
- ⚡ Achieves consistent O(n log n) time complexity.

## 🧠 Algorithm — Merge Sort

Merge Sort follows the Divide and Conquer approach.

**Working Principle:**

1. **Divide:** Split the array into two halves.
2. **Conquer:** Recursively divide each half until individual elements remain.
3. **Merge:** Compare elements from the smaller subarrays and combine them in sorted order.
4. **Repeat:** Continue merging until the entire array becomes sorted.

## 🔄 Merge Sort Workflow

<LearningViz type_id="MERGE_SORT" initial_values={{"value1":38,"value2":12,"value3":27,"value4":9,"value5":31,"value6":18,"value7":43,"value8":25}}/>

## 🖥️ Sample Input

```text
Enter the Number of Elements: 5
Enter the Element: 38
Enter the Element: 12
Enter the Element: 27
Enter the Element: 9
Enter the Element: 31
```

## 📤 Sample Output

```text
Original Array: 38 12 27 9 31
Sorted Array: 9 12 27 31 38
```

## 📊 Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |

**Space Complexity:** O(n)

**Key Observation:** Merge Sort maintains O(n log n) time complexity in all three cases because it consistently divides the array and merges the subarrays.

## 🛠️ Technology Stack

| Technology | Purpose |
|---|---|
| C++ | Core programming language |
| STL Vector | Dynamic array storage |
| Recursion | Dividing the array into smaller subarrays |
| Divide and Conquer | Algorithmic approach |
| Merge Operation | Combining elements in sorted order |

## 🎯 Project Objectives & Learning Outcomes

This project focuses on understanding the working principle and implementation of an efficient sorting algorithm.

**Key Learning Outcomes:**

- Understanding the Divide and Conquer technique.
- Implementing recursive functions in C++.
- Working with STL vectors.
- Understanding array division and merging.
- Analyzing best, average, and worst-case time complexity.
- Understanding auxiliary space requirements.
- Comparing efficient sorting algorithms with simpler approaches.

## 🔮 Future Enhancements

- 🔄 Implement Merge Sort in descending order.
- 📊 Compare Merge Sort with Quick Sort and Bubble Sort.
- ⏱️ Measure execution time for different input sizes.
- 📈 Visualize the divide-and-merge process.
- 🔢 Extend the implementation to support floating-point values.

## 🎓 Academic Project Details

| Detail | Information |
|---|---|
| **Institution** | Muthoot Institute of Technology and Science (MITS) |
| **Department** | Artificial Intelligence and Data Science |
| **Academic Batch** | 2025–2029 |
| **Project Domain** | Data Structures & Algorithms |
| **Project Title** | Merge Sort Implementation |
| **Programming Language** | C++ |
| **Project Type** | Individual Programming Project |

## 👨‍💻 Author

<p align="center">
  <b>A Sreeram</b>
  <br>
  Artificial Intelligence & Data Science Student
  <br>
  Muthoot Institute of Technology and Science (MITS)
  <br><br>
  💡 Interested in C++, Data Structures, Algorithms and Machine Learning.
</p>

---

<p align="center">
  <b>🔀 Understanding Sorting Through Divide and Conquer.</b>
  <br><br>
  ⭐ If you find this project useful, consider giving this repository a star!
  <br><br>
  <b>Made with ❤️ and C++.</b>
</p>
