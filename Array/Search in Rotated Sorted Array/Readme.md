
# Search in Rotated Sorted Array
## Problem:-
  Given an rotated sorted array and index of target element and we have to find element of that targeted index.
## Example:-
  Arr[]={4,5,6,7,0,1,2} target =0
  output=4
## Approach:-
  will find the middle element which will split array 
  if target index is mid then return element of that index 
  else:
   if nums[left]<=nums[mid] ,left half is continuosly sorted 
   otherwise right half is continously sorted
   If the target falls inside the range of the sorted half, narrow the search space to that half (right = mid - 1 or left      =mid+1).
   If it falls outside that range, search in the remaining unsorted half.
##Complexity:-
  Time complexity=O(nlogn)
  Space complexity=O(1)
   
  
  
  
