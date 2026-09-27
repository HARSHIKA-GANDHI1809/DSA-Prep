
# Next permutaion
## Problem:-
  Given an array we have to find next permutaion of it
## Example:-
  Arr[]={3,1,2} next permutaion will be {3,2,1}}
## Approach:-
  Step 1:-Find the Breakpoint (First Decreasing Element)
     Traverse an array from n-2 to 0 
     find first index such tha nums[i]<nums[i+1]
     Why? Elements to the right of ind are in descending order, meaning they are already at their maximum possible permutation. [ind] is the rightmost position where we can increase the value to get a larger permutation.
 Step 2:-Handle the Edge Case (Last Permutation)
     If no such breakpoint exists (ind == -1), the entire array is sorted in descending order (e.g., [3, 2, 1]).
     Reverse the entire array to reset it to the smallest possible permutation (ascending order, e.g., [1, 2, 3]), and return.
 Step 3:-Find the Smallest Larger Element & Swap 
     If a breakpoint is found, traverse the array again from right to left (n - 1 down to ind + 1).
     Find the first element nums[i] that is strictly greater than nums[ind].
     Swap nums[ind] and nums[i].
     Why? Swapping with the smallest larger element ensures we make the smallest possible increase to the prefix.
Step 4:-Reverse the Tail
     Reverse all elements to the right of ind (from index ind + 1 to the end of the array)
     Why? Since the suffix to the right of ind was in descending order, swapping keeps it in descending order. Reversing it turns it into ascending order, guaranteeing the smallest possible arrangement for the trailing digits.   
## Complexity:-
    Time complexity:-O(n)
    Space complexity:-O(n)
     
     
   
