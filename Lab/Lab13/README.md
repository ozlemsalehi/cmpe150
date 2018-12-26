### Strings

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


