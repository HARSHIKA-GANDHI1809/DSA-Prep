#Search Insert Position
## Problem:-
  Given an array and target element we have to find the position of target element.
## Example:-
  Arr[]={1,3,5,6} target=5
  output=2
## Approach:-
   will take mid =left+right/2
   if target is at mid then return mid
   else if target is more than arr[mid] then will take left position at mid+1 agn check for position of target element
   else if target is less than arr[mid] then will take right position at mid-1 agn check for position of target element
## Complexity:-
   Time complexity=O(nlogn)
   Space complexity=O(1)
