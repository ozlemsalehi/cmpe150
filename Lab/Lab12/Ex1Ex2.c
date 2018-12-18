/*
 ============================================================================
 Name        : PS-Week13-Example2-String_length.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <teachingcodes.h>
#include <string.h>

int main(){
	TC_BEGIN;

	int i;

	//Strings are character arrays and they are terminated with '\0'
	char b[]="red";// 'r','e','d','\0'

	//You don't need to know the length of the string
	for(i=0;b[i]!='\0';i++){
		printf("%c",b[i]);
	}

	printf("\n");

	puts(b); //Prints the string and a new line


	int length;
	for(i=0;b[i]!='\0';i++);	//calculate string length
	length=i;

	printf("%s %d\n",b,length); //You can use %s to print strings


	char a[] = {'b','l','u','e','\0'};
	a[4] = '*';         /* it is OK, but you lose the ending point  (null character)
	                      information as the result of this statement */

	printf("%s %lu\n",a, strlen(a)); //Strlen is a built-in function which
	                                 //returns string length as a long unsigned int (%lu)

	char user_str1[50];
	char user_str2[50];
	char user_str3[50];


	gets(user_str1); //gets reads string until new line. Not safe since user may enter a longer
	                 //string then the array can hold
	fgets(user_str2,30,stdin); //fgets reads at most some specified number of characters ('30')
	                           //from 'stdin' which is keyboard into user_str3.
	                           //Be careful since it also reads the new line.
	scanf("%s",user_str3); //scanf reads string until space or new line


	printf("%s %lu\n", user_str1, strlen(user_str1) );
	printf("%s %lu\n", user_str2, strlen(user_str2) ); //Notice the new line and the length
	printf("%s %lu\n", user_str2, strlen(user_str3) );

	gets(user_str1); //Be careful after scanf. It reads until space or \n and leaves the rest in the buffer
	puts(user_str1);
	puts("hello");
	
	gets(user_str1); //No problem with multiple gets
	gets(user_str2);
	puts(user_str1);
	puts(user_str2);
	
	TC_END;
    return 0;
}
