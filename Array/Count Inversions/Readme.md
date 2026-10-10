# Count the no of inversions
## Problem:-
   Given an integer array nums. Return the number of inversions in the array.
   Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
   It indicates how close an array is to being sorted.
   A sorted array has an inversion count of 0.
   An array sorted in descending order has maximum inversion.
## Example:-
  Input: nums = [2, 3, 7, 1, 3, 5]
  Output: 5
## Approach:-
  merge(arr, low, mid, high)
     This function takes two sorted adjacent subarrays—arr[low...mid] and arr[mid+1...high]—and counts how many pairs(i, j) exist 
     Initialize two pointers:left = low (points to start of left subarray)
                             right = mid + 1 (points to start of right subarray)
       Create an empty temporary array temp and set count = 0.
       Compare elements pointed to by left and right:
             Case 1 (arr[left] <= arr[right]):No inversion. Push arr[left] to temp and increment left.
             Case 2 (arr[left] > arr[right]):Inversion detected! Because the left subarray is already sorted, all elements from left up to mid are greater than arr[right].
       Add (mid - left + 1) to count.Push arr[right] to temp and increment right.
       Append any remaining elements from either subarray to temp.
       Copy all elements back from temp to arr[low...high].Return count.
 mergeSort(arr, low, high)
    Base Case: If low >= high, the subarray has 0 or 1 element return 0.
    Find the middle index:mid = low + {high - low}/{2}
    Recursively compute inversions in both halves:
       left_inversions = mergeSort(arr, low, mid)
       right_inversions = mergeSort(arr, mid + 1, high)
    Compute cross-inversions during merge:
       cross_inversions = merge(arr, low, mid, high)
   Return left_inversions + right_inversions + cross_inversions. 
## Complexity:-
   Time Complexity:-O(nlogn)
   Space Complexity:-O(n)
  
  
   
