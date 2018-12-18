/*
 ============================================================================
 Name        : PS-Week13-Example1-String_copy.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <teachingcodes.h>
#include <string.h>

void copy(char source[], char destination[]){
	int i;
	for(i=0;i<strlen(source);i++){
		destination[i]=source[i];
	}
	destination[i]='\0'; //Mark the end of the string.
	                     //Otherwise, you will have wrong output when
	                     //Destination is longer than the source
}


int main(){

	TC_BEGIN;

	char str1[50];
	char str2[50];

	gets(str1); //source
	gets(str2); //destination

	copy(str1,str2);
	printf("Source string: %s", str1);
	printf("Destination string: %s", str2);

	TC_END;
    return 0;
}
