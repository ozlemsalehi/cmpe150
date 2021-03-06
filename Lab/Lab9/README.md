### Macros
#### Ex1) Square(x)

Write a macro for finding the square of a number

#### Q1) circleArea(x)

Write a macro for calculating the area of a circle

#### Q2) pr(x)

Write a macro for printing a float number

### Functions and pointers

#### Q3) removeDigit

Write a function named removeDigit (function name is case sensitive) which takes two parameters: an integer pointer (say: p), and an integer (say x), respectively. The function should remove x digit (from the right) of the integer inside the address: p (divide the number to 10^x). 
The given main program reads two integers: number and digit. Then calls your function removeDigit. You must fill in the parameters. Send the address of the number, and the value of the digit to the function, respectively. 
As a result, that much digit of the number from the right should be removed. The program prints the new version of the number to the screen. 

Be careful: Just enter the two parameters between the given commented space, seperated by a comma. Don't add paranthesis, or semicolon. They are already given outside the commented space, and together they form a function call. 

Assumptions/rules for input:
The number will always have more than digit digits.
The number and digit are positive.
digit is smaller than 10.

#### Examples: 

|INPUT|OUTPUT|
|-----|------|
|1923<br>1|192|
|12453<br>3|12|
|987654<br>5|9|

### Functions

#### Q4) Fibonacci (Lab 5.16)

Write a function that will take a positive integer n, and returns the nth fibonacci number. 

Then write main appropriately to see the result. 

#### Examples: 

|INPUT|OUTPUT|
|-----|------|
|1 |0 |
|2 |1 |
|3 |1 |
|4 |2 |
|5 |3 |
|10 |34| 
|15 |377| 

#### Q5) Perfect number (Lab 5.12)

Write a function that will take an integer n, and returns 't' if it's a perfect number*. Otherwise the function should return 'f'. 
Perfect Number: a positive integer that is equal to the sum of its positive divisors excluding the number itself. 
Then write main appropriately to see the result. 

#### Examples: 

|Parameter Input |Return|
|----------------|------|
|6 |t| 
|28 |t| 
|8128| t| 
|5 |f| 
|1324| f| 



### Additional problems

#### P1) Binary (Lab 5.13)

Write a function that will take an integer as a parameter. 
Then calculates and returns its binary version as another integer. 

Then write main appropriately to see the result. 

#### Examples: 

|INPUT|OUTPUT|
|-----|-----| 
|25 |11001| 
|532| 1000010100| 
|3 |11 |
|5| 101 |

#### P2) Power (Lab 5.11)

Write power function which takes two integer numbers a and b, then calculates and returns a^b. 
Then write main() appropriately to see the result. 

#### P3) Factorial (Lab 5.9)

Write a function that takes an integer as a parameter, and returns the factorial of it. 
Then write main() appropriately to see the result. 

#### P4) Sum of factorials (Lab 5.10)

Write a function that takes an integer as a parameter. 
Then returns the summation of each digits' factorial. 
Then write main() appropriately to see the result. 

|Input|Output|
|-----|------|
|4 |24| 
|3 |6 |
|43 |30 |
|354| 150 |

#### P5) Rectangle (Lab 5.8)

Write a function that takes two integers as parameters n and m, and prints out a rectangle nxm using '*'s. 

#### P6) Reverse of an integer (Lab 5.7)

Write a function that will take an integer number and return its reverse version as another integer. 
Then fill/write main() appropriately to see the result. 

|INPUT|OUTPUT|
|------|-----|
|1234 |4321 |
|68436 |63486| 

#### P7) toUpper (Lab 5.2)

Write a function named toUpper which takes a char as input, and returns the upper case version of the character if it is a lower case letter. Otherwise it should return the same character. 

Then write a program which reads a word from the user until user hits enter, and prints it with upper case characters. Assume valid words will be given. 

|INPUT|OUTPUT|
|------|-----|
|bogazici |BOGAZICI |
|CmpE |CMPE|
|hagi| HAGI|
|cmpe 150| CMPE 150|

#### P8) Sort using pointers

Write a function named sort which takes 3 integers (say n1,n2,n3) and 2 integer parameters (say minPtr, maxPtr). 
The function sorts the three integers n1, n2 and n3 and stores the minimum and maximum values inside min and max pointers.

|INPUT|OUTPUT|
|------|-----|
|4 -7 -7|min: -7 max: 4|
|9 0 20 |min: 0 max: 20|
|-3 -4 -5| min: -5 max: -3|

#### P9) Character sequence

You are going to read a sequence of characters from the user until user hits the enter key and make the the following modifications.

- If the character is lowercase, change it to uppercase

- If the character is uppercase, change it to lowercase

- If the character is a digit, print it using letters

You have to implement the following functions

- isLowerCase: returns 1 if the character is a lowercase letter and 0 otherwise

- isUpperCase: returns 1 if the character is an uppercase letter and 0 otherwise

- isDigit: returns 1 if the character is a digit and 0 otherwise

- toLowerCase: returns the lowercase of the given character

- toUpperCase: returns the uppercase of the given character

- printDigit: void function which prints the given integer


|Input|Output|
|-----|------|
|CmpE150 Boun!!!|cMPEonefivezero bOUN!!!|               
|1234567890 numbers--|onetwothreefourfivesixseveneightninezero NUMBERS--|

