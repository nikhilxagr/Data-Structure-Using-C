<div align="center">

![Header](https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,11,20&height=200&section=header&text=Data%20Structures%20in%20C&fontSize=50&fontColor=fff&animation=twinkling&fontAlignY=35)

<img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="C Logo" width="100" height="100"/>

### 📖 Mastering Data Structures from Ground Up

[![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://www.cprogramming.com/)
[![Learning](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)](https://github.com/nikhilxagr)
[![GitHub](https://img.shields.io/badge/GitHub-nikhilxagr-181717?style=for-the-badge&logo=github)](https://github.com/nikhilxagr)

---

_A comprehensive collection of Data Structure implementations in pure C programming_

</div>

<br/>

## 📋 Table of Contents

- [About](#-about)
- [Learning Path](#-learning-path)
- [Topics Covered](#-topics-covered)
- [Code Structure](#-code-structure)
- [Progress](#-progress)
- [Code Examples](#-code-examples)
- [Time Complexity](#-time-complexity-reference)
- [Resources](#-resources)
- [Getting Started](#-getting-started)

<br/>

## 🎯 About

This repository documents my complete journey of learning and implementing Data Structures using pure C programming. Each implementation includes detailed explanations, well-commented code, and practical examples to demonstrate real-world applications.

**What's Inside:**

- ✨ 100% Pure C implementations
- 📝 Comprehensive documentation
- 💡 Practical, interview-ready examples
- 🎯 Topic-wise organized structure
- 🚀 Beginner to advanced concepts
- ⚡ Optimized algorithms with time complexity analysis

<br/>

## 🗺️ Learning Path

<div align="center">

```
┌─────────────┐      ┌─────────────┐      ┌─────────────┐
│   Basics    │  →   │   Linear    │  →   │ Non-Linear  │
│  & Arrays   │      │  Structures │      │  Structures │
└─────────────┘      └─────────────┘      └─────────────┘
      ↓                     ↓                     ↓
  C Fundamentals      Linked Lists             Trees
  Array Operations    Stacks & Queues       Graphs
  ADT Concepts        Sorting Algos         Hashing
  Pointers           Searching              Advanced DS
```

</div>

<br/>

## 📚 Topics Covered

### **1. C Programming Fundamentals**

<table>
<tr>
<td width="50%">

**📌 Core Concepts**

- Variables & Constants
- Data Types & Type Casting
- Pointers & Memory Management
- Structures & Unions
- Dynamic Memory (`malloc`, `calloc`, `free`)
- File Handling

</td>
<td width="50%">

**🔄 Advanced Concepts**

- Pointer Arithmetic
- Double Pointers
- Function Pointers
- Memory Leaks Prevention
- Recursion
- Preprocessor Directives

</td>
</tr>
</table>

### **2. Array & ADT**

<table>
<tr>
<td width="50%">

**📊 Array Operations**

- Array Declaration & Initialization
- Traversal & Searching
- Insertion & Deletion
- Multi-dimensional Arrays
- Array Rotation
- Matrix Operations

</td>
<td width="50%">

**🎯 Abstract Data Types**

- ADT Concepts
- Array ADT Implementation
- Generic Operations
- Time Complexity Analysis
- Space Optimization
- Real-world Applications

</td>
</tr>
</table>

### **3. Linked Lists**

<table>
<tr>
<td width="50%">

**🔗 Types of Linked Lists**

- **Singly Linked List** - One-way traversal
- **Doubly Linked List** - Bidirectional traversal
- **Circular Linked List** - Loop structure
- **Circular Doubly List** - Advanced traversal

</td>
<td width="50%">

**⚙️ Operations**

- Insert (Beginning, End, Middle)
- Delete (By Value, Position)
- Search & Display
- Reverse & Sort
- Concatenation
- Finding Middle Element

</td>
</tr>
</table>

### **4. Stack Data Structure**

<table>
<tr>
<td width="50%">

**📚 Stack Fundamentals**

- LIFO Principle
- Array-based Stack
- Linked List-based Stack
- Dynamic Stack
- Multiple Stacks

</td>
<td width="50%">

**🎯 Applications**

- **Parenthesis Matching** - Expression validation
- **Infix to Postfix** - Expression conversion
- **Expression Evaluation** - Calculate results
- **Function Calls** - Call stack simulation
- **Browser History** - Navigation

</td>
</tr>
</table>

### **5. Queue Data Structure**

<table>
<tr>
<td width="50%">

**📥 Queue Types**

- **Simple Queue** - FIFO principle
- **Circular Queue** - Efficient space usage
- **Priority Queue** - Priority-based
- **Deque** - Double-ended operations

</td>
<td width="50%">

**⚙️ Operations & Uses**

- Enqueue & Dequeue
- Front & Rear Access
- Queue Overflow/Underflow
- CPU Scheduling
- Breadth-First Search
- Print Spooling

</td>
</tr>
</table>

### **6. Tree Data Structures**

<table>
<tr>
<td width="50%">

**🌳 Tree Types**

- **Binary Tree** - Max 2 children
- **Binary Search Tree** - Ordered binary tree
- **AVL Tree** - Self-balancing BST
- **Heap** - Complete binary tree
- **Expression Tree** - Mathematical expressions

</td>
<td width="50%">

**🔄 Tree Operations**

- Insertion & Deletion
- Tree Traversals:
  - Inorder (Left-Root-Right)
  - Preorder (Root-Left-Right)
  - Postorder (Left-Right-Root)
  - Level Order (BFS)
- Height & Depth Calculation
- Balance Factor

</td>
</tr>
</table>

### **7. Sorting Algorithms**

<table>
<tr>
<td width="50%">

**🔄 Simple Sorts**

- **Bubble Sort** - Adjacent comparisons
- **Selection Sort** - Minimum selection
- **Insertion Sort** - Incremental sorting

</td>
<td width="50%">

**⚡ Advanced Sorts**

- **Merge Sort** - Divide & Conquer
- **Quick Sort** - Partition-based
- **Heap Sort** - Heap-based sorting

</td>
</tr>
</table>

<br/>

## 📁 Code Structure

```
DSA-in-C/
│
├── 📂 01_Basics of C Programming/
│   ├── pointers.c
│   ├── structures.c
│   ├── dynamic_memory.c
│   └── file_handling.c
│
├── 📂 02_Array Operation/
│   ├── array_basics.c
│   ├── insertion_deletion.c
│   ├── searching.c
│   └── rotation.c
│
├── 📂 03_Array and ADT/
│   ├── adt_implementation.c
│   ├── generic_operations.c
│   └── time_complexity.c
│
├── 📂 04_Linked List/
│   ├── singly_linked_list.c
│   ├── doubly_linked_list.c
│   ├── circular_linked_list.c
│   └── operations.c
│
├── 📂 05_Stack/
│   ├── array_stack.c
│   ├── linked_stack.c
│   ├── parenthesis_match.c
│   └── infix_postfix.c
│
├── 📂 06_Queue/
│   ├── simple_queue.c
│   ├── circular_queue.c
│   ├── priority_queue.c
│   └── deque.c
│
├── 📂 07_Tree Data Structure/
│   ├── binary_tree.c
│   ├── binary_search_tree.c
│   ├── tree_traversals.c
│   └── avl_tree.c
│
├── 📂 08_Sorting/
│   ├── bubble_sort.c
│   ├── selection_sort.c
│   ├── insertion_sort.c
│   ├── merge_sort.c
│   ├── quick_sort.c
│   └── heap_sort.c
│
├── 📂 09_A to Z Practice/
│   └── [Practice Problems]
│
├── 📂 10_Time Complexity Ques/
│   └── [Analysis Problems]
│
└── README.MD
```

<br/>

## 📊 Progress

<div align="center">

| Topic              | Status |             Completion             |
| :----------------- | :----: | :--------------------------------: |
| C Basics           |   ✅   | ![](https://geps.dev/progress/100) |
| Array & ADT        |   ✅   | ![](https://geps.dev/progress/100) |
| Linked Lists       |   ✅   | ![](https://geps.dev/progress/100) |
| Stack              |   ✅   | ![](https://geps.dev/progress/100) |
| Queue              |   🔄   | ![](https://geps.dev/progress/80)  |
| Tree Structures    |   🔄   | ![](https://geps.dev/progress/70)  |
| Sorting Algorithms |   🔄   | ![](https://geps.dev/progress/60)  |
| Advanced Topics    |   ⏳   | ![](https://geps.dev/progress/30)  |

**Legend:** ✅ Completed | 🔄 In Progress | ⏳ Upcoming

</div>

<br/>

## 📖 Resources

### **📚 Documentation**

- [Official C Documentation](https://devdocs.io/c/)
- [C Tutorial - W3Schools](https://www.w3schools.com/c/)
- [GeeksforGeeks C Programming](https://www.geeksforgeeks.org/c-programming-language/)

### **🎥 Video Tutorials**

- YouTube C Programming Playlists
- Online Course Platforms (Udemy, Coursera)

### **📝 Practice Platforms**

- [LeetCode](https://leetcode.com/)
- [HackerRank](https://www.hackerrank.com/domains/c)
- [CodeChef](https://www.codechef.com/)

<br/>

## 🚀 Getting Started

### **Prerequisites**

- C Compiler (GCC, MinGW, or Clang)
- Any IDE (VS Code, Code::Blocks, Dev-C++)

### **Setup & Run**

```bash
# Clone the repository
git clone https://github.com/nikhilxagr/DSA-in-C.git

# Navigate to the directory
cd "DSA in C"

# Compile a C file
gcc filename.c -o output

# Run the program
./output           # Linux/Mac
output.exe         # Windows
```

<br/>

## 🎯 Learning Goals

- [x] ✅ Master C programming fundamentals
- [x] ✅ Understand pointers and memory management
- [x] ✅ Complete array and ADT implementations
- [x] ✅ Implement all linked list types
- [x] ✅ Master stack data structure
- [ ] 🎯 Complete queue implementations
- [ ] 🎯 Implement all tree structures
- [ ] 🎯 Master sorting algorithms
- [ ] 🎯 Solve 100+ DSA problems

<br/>

## 🤝 Connect With Me

<div align="center">

[![GitHub](https://img.shields.io/badge/GitHub-nikhilxagr-181717?style=for-the-badge&logo=github)](https://github.com/nikhilxagr)
[![Repository](https://img.shields.io/badge/Repository-DSA--in--C-blue?style=for-the-badge&logo=github)](https://github.com/nikhilxagr/DSA-in-C)

</div>

<br/>

<div align="center">

---

### ⭐ If you find this helpful, consider starring the repository!

**Made with ❤️ and ☕ by Nikhil**

_Happy Learning! Keep Coding!_ 🚀

![Footer](https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,11,20&height=100&section=footer)

</div>
