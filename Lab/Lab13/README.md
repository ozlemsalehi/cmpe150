### Strings

#### Some useful string functions

char sentence[100];

char word[30];

- strlen(sentence) gives you the length of the sentence array

- strcpy(sentence,word) copies the content of the word array into the sentence array (use when you want to write sentence=word), not safe since word might be longer than sentence and there is no check by the function

- strncpy(sentence,word,10) copies the first 10 characters of the word array into the sentence array

- strcmp(sentence,word) returns 0 if the content of the two arrays are equal (read the details from the slides)

#### Reading strings

- Use %c and read char by char

When to use? You can always use %c to read strings but you may prefer to use especially if you are reading something until a special character is entered (like '*', '\n', '.')
- Use %s

When to use? When you are reading a single word. %s reads a string until it finds a space or a new line. Be careful when using multiple %s since it leaves the space ' ' or new line '\n' in the buffer and the next string you read by %s becomes ' ' or '\n'.

- Use fgets

When to use? When you want to read until user hits enter and when you want to read spaces. Be careful since fgets reads also the new line character '\n'. If the user enters "cmpe", then your array will look like this: 'c' 'm' 'p' 'e' \n','\0'. This is important when you use strcmp since "cmpe" and "cmpe\n" are different strings and strlen will return 5 instead of 4. Other than that, when you print the two strings you will have the same output except an extra space.

- Use gets

When to use? gets is very similar to fgets except that it doesn't include the new line character at the end of the string. Unlike scanf, it doesn't leave it in the buffer neither. '\n' disappears :) However you will see warnings in your code since it is not safe to use. If your array is 10 characters long and if the user enters a longer input string, then you have a problem since gets does not have a limit like fgets.


#### Q1) Find the nth word in a sentence (Lab 8b.2)

Write a function which takes a sentence as a string (char array)with size at most 150, and one integer (x), and another empty
string with size at most 30. The function should put the x.th word of the sentence to the empty string. 

In the main program read a sentence, and an integer from the user, then call the function and print the resulting word to the screen. 
Assume every letter is lower case, and no punctuation will occur, and the sentence will have enough words to return the requested one. 

Make sure your program works when x=1 and when x the number of words in the sentence.

|---INPUT---|---OUTPUT---|
|-------------|-----------------|
|aksam oldu huzunlendim ben yine <br> 3|huzunlendim|

### Struct

#### Ex1) Some examples on structs

#### Q2) Student letter grades (Lab 10.1)

The given code defines a struct: Student. The programcurrently reads an integer: n, then readsmidterm 1, midterm 2 and final grades of n students.Assigns an id to each student from 1000 to 1000+n-1,and gives a letter grade 'I' to each of them. Then printstheir id's and letter grades. 

You should complete the given section to assign anappropriate letter grade to each student. Like: 

100-75: A 

74-50: B 

49-25: C 

24-0: F 

Exam weights are 30%, %30, %40, respectively. 

#### Q3) Richest of the poorest family (Lab 10.3)

Define a struct named: Person which has an age, and a salary.
Define a struct named: Family which has up to 9 persons and personCount (integer). 

Write a function which takes an array of 3 families, and returns the age of the person who earns the most in the family with 
the least total salary. (age of the richest person in the poorest family) 

|---Input---|---Output---|
|-----------|-------------|
|3 <br> 40 2000 <br> 50 8000 <br> 10 0 <br> 2 <br> 30 3500 <br> 35 2300 <br> 2 <br> 60 4000 <br> 55 3500 |Age of the richest in the poorest family: 35|
|1<br>40 5000<br>2<br>50 2000<br>40 5000<br>2<br>30 3500<br>15 500|Age of the richest in the poorest family: 30|


#### Q4) Sort books (Lab 8b.1)

Define a struct named: Book. Each book should have aname with exactly 3 letters (abbreviation). Each book should also have a page count (integer), and a price (integer). 

Write a program which reads an integer n first, thenreads the names, page counts and prices ofn books. 

Write a function which takes an array of books, and sorts them according to their prices. 

Using that function, your program should print the names and page counts of each book with the order of their prices.

|Input|Output|
|-----|-----|
|5 <br> abc 456 67<br>kjh 67 100<br>mkl 200 9<br>lkj 300 14<br>mno 1000 2|kjh: 67 pages 100TL <br>abc: 456 pages 67TL<br>lkj: 300 pages 14TL<br>mkl: 200 pages 9TL<br>mno: 1000 pages 2TL|

### Additional problems on strings

#### P1) Remove given word from a sentence 

Write a program which reads a sentence as a string,and a word as a string. 
Then the program should exclude this word from the sentence if thes entence contains the word, then print the new version 
to the screen. Assume no punctuation will occur, and every letter is lower case. 



|---INPUT---| ---OUTPUT---| 
|------------|-----------|
|merhaba dunyali nasilsin <br>dunyali |merhaba nasilsin|
|hello hey you hello <br> hello | hey you |

#### P2) Unique letters (Archive 20) 

Write a function called findUniqueLowercaseChars that finds and writes the unique lowercase characters of a given string str in the order of appearance into the string distinct. Remember, a unique character is a character that occurs only and exactly once in the input string. 
For instance, if the input string is 'mississippi', the result should be 'm'. The main function is given. The string that will be processed is read from the user in the main function. After calling the findUniqueLowercaseChars function, the resulting string is printed.

NOTES: 
- You can use string.h functions. 
- You may write additional functions as well if you want. 
- If there is no unique lowercase characters you should print empty string. 
- The resulting string is printed in main function, you should not print anything within your function. 
- Assume max. length of str and unique is 99.

|INPUT|	OUTPUT|
|----|-------|
|this is an example|	thnxmpl|
|THIS is the SECOND SENTENCE|	isthe|
|this is the third sentence	|rdc|

### Additional problems on struct 

#### P4) Max performance and salary (Archive 26)

In a startup software company, there are two kinds of employees, C Developers and Java Developers. Each employee has a unique ID as integer, a monthly salary as integer, and performance as integer, which can have an integer value between 1 to 5 (inclusive). 

Furthermore, the startup company has three C Developers and three Java Developers as employees. 

With this information given,

Define a struct with three fields, and name:
Name: Employee
Fields: three integers ID, salary, and performance.
Define another struct with two fields, and name:
Name: Company
Fields: two Employee arrays, one named cDevelopers, and the other one named javaDevelopers, both containing three elements.
Write a function named maxPerformance which takes an array of Employees as input parameter and finds the employee with the highest performance among the given employees and returns the ID of the employee as integer. (Assume that the employee who has the highest performance for each employee type is unique).
Main program is given for you. In main program, information about employees are read from the user, maxPerformance is called twice (once for C Developers and once for Java Developers), salary of the employees with the best performance is increased by 500, and the ID and updated salary of the best performing employees are printed on the screen. Don't change anything in main program.

|INPUT|	OUTPUT|
|-----|-------|
|0 3000 4 <br> 1 3500 3 <br>2 4000 2 <br>0 2250 5 <br>1 2500 3 <br>2 2000 1|0 3500 <br>0 2750 |
