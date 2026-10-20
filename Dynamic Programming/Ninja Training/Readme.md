# Ninja Training:-
## Problem:-
   A ninja has planned a n-day training schedule. Each day he has to perform one of three activities - running, stealth training, or fighting practice. The same activity cannot be done on two consecutive days and the ninja earns a specific number of merit points, based on the activity and the given day.
   Given a n x 3-sized matrix, where matrix[i][0], matrix[i][1], and matrix[i][2], represent the merit points associated with running, stealth and fighting practice, on the (i+1)th day respectively. Return the maximum possible merit points that the ninja can earn.
## Example:-
   Input: matrix = [[10, 40, 70], [20, 50, 80], [30, 60, 90]]
   Output: 210
## Approach:-
   Initialize prev array: Compute the base case values for day = 0 for all possible constraints (last from 0 to 3).
   Loop through days (day = 1 to n-1):
     Create a temporary 1D array temp of size 4.
   For each possible last state (0 to 3), iterate through all possible task choices (0 to 2).
   If task != last, update temp[last] with the maximum points:{temp}[last] = max({temp}[last], {matrix}[day][task] + {prev}[task]).
   After checking all tasks for the current day, copy temp into prev to move to the next day.
   Result: Return prev[3], which represents the maximum points on the final day with no restriction (last = 3).
## Complexity:-
   Time Complexity:-O(N*4*3)
   Space Complexity:-O(4)
