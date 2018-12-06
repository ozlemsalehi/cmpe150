# Cmpe150 Fall 2018 Quiz 1

## Question 1

Write a program which reads a lower-case letter from the user. Print its upper-case version. 
Assume that the input character will always be a lower-case letter.

### Examples:

|INPUT|	OUTPUT|
|------|-------|
|c	|C|
|d	|D|
|h	|H|

## Question 2

Write a program which reads three integers (a,b,c) from the user. Then prints their average as a float with 1 decimal places. (Hint: "%.1f")

### Examples:

|INPUT	| OUTPUT |
|-------|--------|
|5 6 8	|6.3|
|1 3 7	|3.7|
|10 20 30	|10.0|


# Cmpe150 Fall 2018 Quiz 2

## Question 1

Write a program which reads a character and an integer. The integer represents how many years past since a person started working in a company. The character represents the title of a person:

b - boss (10000$)
w - worker (2500$)
s - secretary (2000$)

You can see the base salaries of people with different titles. If a person completes 10 years there will be an addition of 50% to their salaries. Write a program that calculates the current salary of a person and prints it.
Assume: Characters will always be lower-case b, w or s.

### Examples:

| INPUT	| OUTPUT |
| ------|--------|
|b 9	|10000|
|b 10	|15000|
|w 1	|2500|
|s 17 |	3000|

## Question 2

Write a program which reads an integer X, if the integer X is odd your program should read two more integers and print their multiplication. If the integer X is even, your program should read three more integers and print the summation of them.

Notice that in some of the example inputs there are some extra integers. If entered in one line, your program should not take the extra integers into account.

### Examples:

|INPUT	| OUTPUT |
|-------|---------|
|5 7 8	|56|
|4 5 6 7	|18|
|3 9 9 2 3 1	|81|
|2 4 5 6 7	|15|



# Cmpe150 Fall 2018 Quiz 3

## Question

Write a program which reads characters until the user enters a digit. After reading each character your program should check if it's a lower-case letter. If so print its upper-case version. Any other characters should be printed unchanged. Any digit should stop printing and also terminate your program.

Assume: The input will be one line and will include at least one digit.

### Examples:

| INPUT |	OUTPUT |
| ---------------------------------------- | ---------------- |
|lower-case conversion5|	LOWER-CASE CONVERSION|
|a - b + c = d9 shouldn't PRINT this Part|	A - B + C = D|
|Just Use A Loop!8|	JUST USE A LOOP!|
|fD%Hg_?+*3gg**!!cc|	FD%HG_?+*|

# Cmpe150 Fall 2018 Quiz 4

## Question

Write a program which reads an integer N. Then your program should read N more integers and print their factorial.

### Examples:

| INPUT |	OUTPUT |
| ---------------------------------------- | ----------------|
|5 <br> 1 2 3 4 5	|1 2 6 24 120|
|7 <br> 4 3 5 2 6 1 7 2 2 2 2|	24 6 120 2 720 1 5040|
|1 <br> 3|	6 |
|3 <br> 0 4 2 | 1 24 2|


# Cmpe150 Fall 2018 Quiz 5

## Question

In the main function, two integers are read from the user into the variables a and b. Complete the program by writing two functions, divide and print_result. Function divide takes two integers and returns a float value which is the division of the two parameters. In the main function this returned value is assigned to the variable r. Function print_result takes a float parameter and prints it to the console using 2 decimal places. ("%.2f")

Assume: b will not be zero.
Note: Do not edit the main function!

### Examples:

|INPUT	|OUTPUT|
|-------|------|
|50 8	|6.25
|45 100	|0.45
|145 50|	2.90
|4 2|	2.00

# Cmpe150 Fall 2018 Quiz 6

## Question

Write a function named func which takes addresses of three integers as parameters (three integer pointers).
The first pointer will store the summation of those three integer pointers' values.
The second pointer will store the multiplication of those three integer pointers' values.
This function doesn't need to return anything.

The given main program creates three integer variables and reads their values from the user. Then calls the func function, but you should fill in the parameters passed to the call, so that the addresses of these three integer variables are passed to the function. The final version of the function call part should look like this:

                
	func(
	// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
	**,**,**
	// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	);
which is equivalent for compiler to this:

                
	func(**,**,**);
Then the given program prints these changed values to the screen.

### Examples:

|INPUT|	OUTPUT|
|-----|-------|
|1 5 10|	16 50|
|4 4 4|	12 64|
|-5 -10 2|	-13 100|

# Cmpe150 Fall 2018 Quiz 7

## Question

Write a program that will read an integer N and N many numbers into an array. Print the numbers that are greater or equal to the average of the N numbers. Printing should have the same order as the input sequence.

Assume: N < 20

### Examples:

|INPUT|	OUTPUT|
|-----|-------|
|5 <br> 1 2 3 4 5|3 4 5|
|10 <br> 1 10 10 10 10 10 10 10 10 10| 10 10 10 10 10 10 10 10 10|
|7 <br > 1 1 1 1 1 6 7|	6 7|
|3 <br> 1 4 5 | 4 5|

# Cmpe150 Fall 2018 Quiz 8

## Question

Write a program which reads an integer N from the user as the array size, and reads N more integers into an integer array. Then, read another integer M from the user. Program should check if integer M exists in the array, and it should print the index and the value in that index of the array as the result. If M is not found in the array, program should print "Not found" (This is already given in the code). If M occurs in the array more than once, index of the last occurrence should be printed. 

Assume that N < 100.

In the main program, array definition, reading the integer N, and the index definition is given to you. Also, parts to print the index and the value is given. Do not modify those lines.

### Examples:

|INPUT|	OUTPUT|
|-----|-------|
|5 <br> 3 5 7 9 2 <br>|2 7|
|3 <br> 22 12 19<br> 19| 2 19|
|4 <br > 4 6 8 10 <br>| Not found|


