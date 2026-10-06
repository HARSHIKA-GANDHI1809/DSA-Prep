# Merge Intervals
## Problem:-
    Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
## Example:-
    Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
    Output: [[1,6],[8,10],[15,18]]
## Approach:-
    Sort the input array based on the starting values intervals[i][0].
        Sorted Input: [[1,3], [2,6], [8,10], [15,18]]
    Processing [1, 3]:
        ans is currently empty.
        Action: Push [1, 3] into ans.
        State: ans = [[1, 3]]
     Processing [2, 6]:
        Compare start value 2 with last merged end value ans.back()[1] = 3.
        Since 2<=3, there is an overlap.
        Action: Update the end boundary of the last merged interval:{ans.back()}[1] = max(3, 6) = 6
        State: ans = [[1, 6]]   
     Processing [8, 10]:
       Compare start value 8 with last merged end value ans.back()[1] = 6.
       Since 8>6, there is no overlap.
       Action: Push [8, 10] into ans.
       State: ans = [[1, 6], [8, 10]]Processing [15, 18]:
     Compare start value 15 with last merged end value ans.back()[1] = 10.
        Since 15>10, there is no overlap.
        Action: Push [15, 18] into ans.
        State: ans = [[1, 6], [8, 10], [15, 18]]   
    Return Result;
 ## Complexity:-
     Time Complexity:-O(nlogn)+O(n)
     Space Complexity:-o(n){storing}
    
        
