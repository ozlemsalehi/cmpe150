### Passing arrays to functions

#### Q1) Replace (PS 12.1)

You have integers with size n. You want to change all elements which are equal to the given integer value with another given integer. 
Write a function that performs this operation, and returns to the number of the changed numbers.

#### Q2) Sort (PS 12.2) 

Write a function that sorts a given array.

#### Q3) Remove (Lab 8.1)

Write a function which takes two integer arrays arr1, arr2, and their sizes as two integers N and M. 
Then the function should remove all the elements in arr2 from arr1. 
The function should update arr1 so that it no longer contain elements from arr2. The function should return the new size of arr1. 
Hint: you can create and use another temporary array in the function. 

Then in the main program, read two arrays from the user (first their sizes N, M, and then N+M integers as array elements). Then call the function passing the arrays and their sizes. 
Then print the first array to see the updated version

|---INPUT---| ---OUTPUT---| 
|-----------|--------------|
|10 3 <br> 1 2 3 4 7 5 5 12 7 7 <br> 5 3 12 | 1 2 4 7 7 7| 

#### Q4) Maximum

Write a function which takes as input an integer array and its size and returns the maximum element.

### Additional problems on passing arrays to functions

#### P1) Mergesort

Write a function which takes three integer arrays,and the sizes of the first and the second array (n, m).The first and the second arrays will be sorted (ascending) as they are given.The function should merge the first and the second array into the third one in sorted manner.The third array's content is unimportant,and its size should be large enough (>=n+m). It will be used as the output of the function. 

In the main program read two sorted arrays (as you did in the previous question), and create the third one. Then pass them into the function, then print the third array to see the result. 


|---INPUT---|---OUTPUT---| 
|-----------|------------|
|4 5 <br> 1 3 5 8 <br> 2 3 4 5 6 | 1 2 3 3 4 5 5 6 8| 

#### P2) Binary search

Suppose we have a sorted array with size N. Write a function that finds a given number in this array, and returns the index of its location. If the number is not found, your function should return -1. 
Perform search by using binary search algorithm.
