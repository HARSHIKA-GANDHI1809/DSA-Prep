# Degree of each vertex:-
## Problem:-
  You are given a 2D integer array matrix of size n x n representing the adjacency matrix of an undirected graph with n vertices labeled from 0 to n - 1.
    matrix[i][j] = 1 indicates that there is an edge between vertices i and j.
    matrix[i][j] = 0 indicates that there is no edge between vertices i and j.
  The degree of a vertex is the number of edges connected to it.
## Example:-
  Input: matrix = [[0,1,1],[1,0,1],[1,1,0]]
  Output: [2,2,2]
## Approach:-
  Initialize Result Array: Create a vector ans of size n, initialized to 0, where n is the number of rows in the matrix.
  Iterate Through Each Vertex: 
    For each vertex i from 0 to n - 1, traverse its corresponding row in the matrix.
    Count how many entries in row $i$ are equal to 1.
    Store and Return:
       Set ans[i] to the counted degree for vertex i.
    Once all rows are processed, return ans.
## Complexity:-
  Time Complexity:-O(n^2)
  Space Complexity:-O(n)
