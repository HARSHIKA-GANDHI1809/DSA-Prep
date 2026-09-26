
#Maximum-subarray-sum
##Problem:-
 Given an array of size of n  we have to find the subarray which gives maximum sum 
##Example:-
 Arr[]={-2,-3,4,-1,-2,1,5,-3}
 output=7
 ##Approach:-
   Using Kadane's Algorithm:-
     Will iterate an array and see if sum of i,i-1 element gives sum<0 or sum>0
     if sum<0 then will not carry that element further 
     if sum >0 then take it forward and keep on adding
     simultaneously will check for maxsum 
 ##Complexity:-
    Time complexity:-O(n)
    Space complexity:-O(1)
 
