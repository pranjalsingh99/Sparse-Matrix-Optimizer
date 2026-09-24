# Sparse Matrix Optimizer

A C++ based project for analyzing and representing sparse matrices using
Data Structures and Object-Oriented Programming.

## About

A sparse matrix is a matrix in which most of the elements are zero.

This project started as a basic Data Structures implementation and was
later upgraded using Object-Oriented Programming and additional analysis
features.

## Project Progress

### Level 1 - Basic Implementation

The first version focused on understanding the basic operations of a
sparse matrix.

Features:
- Matrix input
- Matrix display
- Zero and non-zero element counting
- Sparse matrix detection
- 3-Tuple representation
- Menu-driven interface

### Level 2 - OOP & Analysis

The project was upgraded using a C++ class and additional analysis
features.

Features:
- Object-Oriented implementation
- Sparse matrix detection
- 3-Tuple representation
- Sparsity percentage calculation
- Memory comparison
- Menu-driven interface

## 3-Tuple Representation

Example matrix:

0 0 3
0 0 0
4 0 0

Its 3-Tuple representation:

| Row | Column | Value |
|-----|--------|-------|
| 3   | 3      | 2     |
| 0   | 2      | 3     |
| 2   | 0      | 4     |

The first row represents:

- Number of rows
- Number of columns
- Number of non-zero elements

The remaining rows store the position and value of each non-zero
element.

## Level 2 Analysis

### Sparsity Percentage

The project calculates the percentage of zero elements in the matrix.

### Memory Comparison

The project compares the memory required by:

- Normal matrix representation
- 3-Tuple representation

This helps demonstrate why sparse representations can be useful when a
matrix contains many zero elements.

## Technologies Used

- C++
- Data Structures
- Object-Oriented Programming
- Git & GitHub

## Project Structure

```text
Sparse-Matrix-Optimizer
│
├── level-1
│   └── main.cpp
│
├── level-2
│   └── main.cpp
│
├── README.md
└── .gitignore