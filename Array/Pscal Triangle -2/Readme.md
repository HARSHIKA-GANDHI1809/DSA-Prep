# Pascal Triangle-2
## Problem:-
    Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
## Example:-
    Input: rowIndex = 3
    Output: [1,3,3,1]
## Approach:-
    Pascal's Triangle and Combinations:
      Each element at index col in a given row (rowIndex) corresponds to the binomial coefficient {rowIndex},{col} (or ^nC_r, where n = rowIndex and r = col).
    Instead of computing factorials from scratch (which can easily overflow or cause unnecessary computation), you can derive the next combination value from the previous one using this math identity:
       binom{n}{k} = binom{n}{k-1} * {n - k + 1}/{k}
    In the context of the code:
       ans starts at 1 
       For every column from 1 to rowIndex:{ans} ={ans} * ({rowIndex} -{col} + 1)
                                                 {ans} = {ans} / {col}
    Initialize: Create an ansRow vector and push 1 into it (the 0-th element).
    Loop: Run a loop from col = 1 up to rowIndex.
    Update: Apply the formula sequentially to calculate each column's value, and push it into ansRow.
    Return: Once the loop completes, ansRow contains the entire requested row.  
## Compleity:-    
    Time Complexity:-O(rowindex)
    Space Complexity:-O(rowindex)
