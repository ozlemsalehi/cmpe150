### Multidimensional Arrays

#### Q1) Matrix Operations (PS 14.3)

We have two two-dimensional matrices whose dimensions are 2x4.
Write a function for computing the sum of these two matrices. Write another function to compute the transpose of a give matrix

|INPUT| OUTPUT| 
|-----------|--------------|
|10 3 7 8 <br> 1 2 -1 4  <br> 1 0 3 4  <br> 3 2 9 8 |Sum: <br> 11 3 10 12  <br> 4 4 8 12 <br> Transpose of the sum: <br> 11 4 <br> 3 4 <br> 10 8 <br> 12 12| 

#### Q2) Student grades and average

Read the number of students m and the number of courses n.

Read each student's grade from the user. Then user will enter
a student number (0...m-1) and you will print the student's 
average grade.

|Input|Output|
|-----------|--------------|
|3 4 <br>80 70 100 40 <br> 60 20 10 30 <br> 0 10 40 30<br>2 |Average of student 2: 20.00|


Now read also a course number from the user and
calculate and output that course's average and students who are above 
average.

|Input|Output|
|-----------|--------------|
|3 4 <br> 80 70 100 40<br> 60 20 10 30 <br> 0 10 40 30<br>2 <br> 1|Average of student 2: 20.00 <br> Average of course 1: 33.33 <br> Students above average: 0|

### Strings

#### Ex1) String functions, reading and printing strings

#### Ex2) Length of a string (PS 13.1)

Calculate the length of a string

#### Q3) Copying strings (PS 13.1)

Write a function that copies a source string to the destination string. 
You can assume that (you should ensure that) destination string is large enough:

#### Q4) Compare strings

Write a function which returs 0  if two strings are same and -1 otherwise

### Additional problems on multidimensional arrays

#### P1) Random matrices

Read the size m and n of the matrices from the user and read two integers min and max. Create two mxn matrices with random entries between min and max. Find their sum and print.

#### P2) Chess (Lab 9.2)

Write a program which reads a chessboard as an8x8 matrix from the user. In the chessboard,there will be one rook (kale) represented byinteger: 8, and multiple pawns (piyonlar) representedby integer: 1. The rest will be empty: 0. 

The rook will capture the closest possible pawn.Your program should print the chessboard to the screenafter the capture. 

#### P3) Grid (Lab 9.3) 

Write a program which reads a 10x10 matrixfrom the user. This matrix will represent agrid world, and each element represents a cell.A cell is empty if it is 0, and blocked if it is 1. 

Assume a player will start from thetop-left, (0,0), and will try to reach thebottom-right (9, 9) of the grid. Player is allowedto go up, down, left, right, and one cell each time.The top-left and bottom-right corners will always begiven empty. 

Your program should find if there is such a possible path.Print yes, or no accordingly. 




