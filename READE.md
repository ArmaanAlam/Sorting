#  Sorting Algorithms in C++

A comprehensive collection of sorting algorithms implemented in **C++** with detailed explanations, complexity analysis, recursive and iterative approaches, advantages, disadvantages, and real-world applications.

This repository is designed for:

- Students learning Data Structures & Algorithms (DSA)
- Interview preparation
- Understanding Time & Space Complexity
- Comparing sorting techniques
- Practicing recursion and divide-and-conquer algorithms

---

## 📂 Repository Structure

```bash
Sorting-Algorithms/
│
├── bubble.cpp
├── recursive_bubble.cpp
├── selection.cpp
├── insertion.cpp
├── recursive_insertion.cpp
├── merge.cpp
├── quick.cpp
│
└── README.md
```

---

# Introduction

Sorting is the process of arranging data in a specific order.

Example:

```text
Input:
5 2 8 1 4

Output:
1 2 4 5 8
```

Sorting is fundamental because it improves:

- Searching Efficiency
- Data Processing
- Database Queries
- Scheduling Systems
- Memory Optimization

---

# 🔍 Algorithms Included

| Algorithm | Approach |
|------------|-----------|
| Bubble Sort | Iterative |
| Recursive Bubble Sort | Recursive |
| Selection Sort | Iterative |
| Insertion Sort | Iterative |
| Recursive Insertion Sort | Recursive |
| Merge Sort | Divide & Conquer |
| Quick Sort | Divide & Conquer |

---

# Bubble Sort

## Idea

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

After each pass, the largest unsorted element moves to its correct position.

### Example

```text
5 4 3 2 1

Pass 1:
4 3 2 1 5

Pass 2:
3 2 1 4 5

Pass 3:
2 1 3 4 5

Pass 4:
1 2 3 4 5
```

### Complexity Analysis

| Case | Complexity |
|--------|-----------|
| Best | O(n) |
| Average | O(n²) |
| Worst | O(n²) |

**Space Complexity:** O(1)

### Properties

- Stable 
- In-place 
- Adaptive 

### Advantages

- Easy to understand
- Requires no extra memory
- Good for educational purposes

### Disadvantages

- Very slow for large datasets
- Excessive swapping

---

#  Recursive Bubble Sort

## Idea

The largest element is moved to the end during each recursive call.

The remaining array is recursively sorted.

### Recurrence Relation

```text
T(n) = T(n - 1) + O(n)
```

### Complexity Analysis

| Case | Complexity |
|--------|-----------|
| Best | O(n) |
| Average | O(n²) |
| Worst | O(n²) |

**Space Complexity:** O(n)

### Properties

- Stable 
- Recursive 

### Learning Outcome

Excellent for understanding recursion.

---

# Selection Sort

## Idea

Find the minimum element and place it at the beginning.

Repeat for the remaining unsorted portion.

### Example

```text
64 25 12 22 11

Pass 1:
11 25 12 22 64

Pass 2:
11 12 25 22 64

Pass 3:
11 12 22 25 64

Pass 4:
11 12 22 25 64
```

### Complexity Analysis

| Case | Complexity |
|--------|-----------|
| Best | O(n²) |
| Average | O(n²) |
| Worst | O(n²) |

**Space Complexity:** O(1)

### Properties

- Stable 
- In-place 

### Advantages

- Fewer swaps than Bubble Sort
- Simple implementation

### Disadvantages

- Poor performance on large datasets
- Not adaptive

---

# Insertion Sort

## Idea

Build a sorted section of the array one element at a time.

Each new element is inserted into its correct position.

### Example

```text
5 4 3 2 1

Pass 1:
4 5 3 2 1

Pass 2:
3 4 5 2 1

Pass 3:
2 3 4 5 1

Pass 4:
1 2 3 4 5
```

### Complexity Analysis

| Case | Complexity |
|--------|-----------|
| Best | O(n) |
| Average | O(n²) |
| Worst | O(n²) |

**Space Complexity:** O(1)

### Properties

- Stable 
- In-place 
- Adaptive 

### Advantages

- Fast for small datasets
- Performs well on nearly sorted arrays

### Disadvantages

- Slow for large datasets

---

# Recursive Insertion Sort

## Idea

Sort the first n−1 elements recursively and insert the nth element into its correct position.

### Recurrence Relation

```text
T(n) = T(n-1) + O(n)
```

### Complexity Analysis

| Case | Complexity |
|--------|-----------|
| Best | O(n) |
| Average | O(n²) |
| Worst | O(n²) |

**Space Complexity:** O(n)

### Properties

- Stable 
- Recursive 

### Learning Outcome

Helps understand recursive insertion logic.

---

# Merge Sort

## Divide and Conquer

Merge Sort divides the array into smaller halves until only one element remains.

The smaller sorted arrays are merged back together.

### Visualization

```text
8 3 5 4 7 6 1 2

             8 3 5 4 7 6 1 2
            /               \
        8 3 5 4           7 6 1 2
        /    \            /    \
      8 3    5 4        7 6    1 2
```

### Complexity Analysis

| Case | Complexity |
|--------|-----------|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n log n) |

**Space Complexity:** O(n)

### Properties

- Stable 
- Divide & Conquer 

### Advantages

- Guaranteed O(n log n)
- Stable sorting
- Efficient for linked lists

### Disadvantages

- Requires extra memory
- More complex implementation

---

# Quick Sort

## Divide and Conquer

Quick Sort selects a pivot element and partitions the array.

Elements smaller than the pivot go left and larger elements go right.

### Example

```text
8 3 5 4 7 6 1 2

Pivot = 8

3 5 4 7 6 1 2 | 8
```

### Complexity Analysis

| Case | Complexity |
|--------|-----------|
| Best | O(n log n) |
| Average | O(n log n) |
| Worst | O(n²) |

**Space Complexity:** O(log n)


### Advantages

- Fastest average-case sorting
- Cache friendly
- Widely used in practice

### Disadvantages

- Worst-case O(n²)
- Performance depends on pivot selection

---

# 📊 Complete Comparison Table

| Algorithm | Best | Average | Worst | Space |
|------------|---------|---------|---------|---------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) |  
| Recursive Bubble Sort | O(n) | O(n²) | O(n²) | O(n) |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) |  |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | 
| Recursive Insertion Sort | O(n) | O(n²) | O(n²) | O(n) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | 

---

#  Which Algorithm Should You Choose?

| Situation | Recommended Algorithm |
|------------|----------------------|
| Small Arrays | Insertion Sort |
| Nearly Sorted Data | Insertion Sort |
| Educational Learning | Bubble Sort |
| Learning Recursion | Recursive Bubble / Recursive Insertion |
| Guaranteed O(n log n) | Merge Sort |
| Fastest Practical Performance | Quick Sort |
| Memory Efficient | Quick Sort |
| Stable Sorting Required | Merge Sort |

---

# Time Complexity Ranking

Fastest → Slowest

```text
Quick Sort
Merge Sort
Insertion Sort
Selection Sort
Bubble Sort
```

---

# Space Complexity Ranking

Least Memory → Most Memory

```text
Bubble Sort
Selection Sort
Insertion Sort
Quick Sort
Merge Sort
```

---

# Code Improvement Notes

### Recursive Bubble Sort

Current code:

```cpp
if(didswap = 0)
```

Should be:

```cpp
if(didswap == 0)
```

### Selection Sort

Current implementation swaps inside the inner loop.

Recommended:

```cpp
for(int i = 0; i < n-1; i++){
    int min_index = i;

    for(int j = i+1; j < n; j++){
        if(arr[j] < arr[min_index]){
            min_index = j;
        }
    }

    swap(arr[i], arr[min_index]);
}
```

---

#  Learning Outcomes

By studying this repository, you will understand:

- Sorting Fundamentals
- Iterative Algorithms
- Recursive Algorithms
- Divide & Conquer Strategy
- Stability in Sorting
- Time Complexity Analysis
- Space Complexity Analysis
- Best, Average, and Worst Cases
- Practical Algorithm Selection

---

#  Contributing

Contributions are welcome!

You can contribute by:

- Adding Heap Sort
- Adding Counting Sort
- Adding Radix Sort
- Adding Shell Sort
- Optimizing existing implementations
- Improving documentation

---

#  Support

If this repository helped you understand sorting algorithms, consider giving it a **Star ⭐** on GitHub.

Happy Coding 