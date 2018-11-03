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

