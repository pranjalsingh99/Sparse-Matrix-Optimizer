# Sparse Matrix Optimizer

A C++ based project for analyzing and representing sparse matrices using Data Structures and Algorithms.

## About

A sparse matrix is a matrix in which most of the elements are zero.

This project identifies whether a matrix is sparse and converts it into a memory-efficient 3-Tuple representation.

## Features

- Matrix input
- Matrix display
- Count zero and non-zero elements
- Sparse matrix detection
- 3-Tuple representation
- Menu-driven interface

## Example

### Original Matrix

0 0 3  
0 0 0  
4 0 0  

### 3-Tuple Representation

| Row | Column | Value |
|-----|--------|-------|
| 3 | 3 | 2 |
| 0 | 2 | 3 |
| 2 | 0 | 4 |

The first row represents:

- Number of rows
- Number of columns
- Number of non-zero elements

## Technologies Used

- C++
- Data Structures and Algorithms

## Current Version

Level 1 - Basic Sparse Matrix Operations