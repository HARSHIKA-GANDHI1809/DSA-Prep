# Find Missing and Repeated Number
## Problem:-
     You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.
     Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.
## Example:-
    Input: grid = [[1,3],[2,2]]
    Output: [2,4]
 ## Approach:-
     Since the grid is n*n, let N = n^2. The expected numbers are 1, 2, 3, .... N.
     Expected Sum (S_N): Sum of first N natural numbers:-
                   S_N = {N(N + 1)}/{2}
     Expected Sum of Squares (S_{2N}): Sum of squares of first N natural numbers:-
                   S_{2N} = {N(N + 1)(2N + 1)}/{6}
     Actual Sum (S): Iterate over all grid elements and sum them up.
     Actual Sum of Squares (S_2): Iterate over all grid elements and sum their squares.         
     Difference in Sums ({val1}):
                    {val1} = S - S_N = a - b
     Difference in Sum of Squares ({val2}):               
                    {val2} = S_2 - S_{2N} = a^2 - b^2
     Using the algebraic identity a^2 - b^2 = (a - b)(a + b):
                     {val2}/{val1}= a+b;
     Now we have two linear equations:a - b = {val1}
                                      a + b = {val2}/{val1}
     Adding both equations gives:
                    2a = {val1} + {val2}/{val1} 
                     a =  {val1} + {val2}/{val1} /2
      Then find b: a=val1
## Complexity:-
      Time Complexity:-O(n^2)
      Space Complexity:-O(1)                     
