/*
 ============================================================================
 Name        : PS-Week8-Example1-Square.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

char toUpper(char c){

	if('a'<=c && c<='z'){
		return  c-'a'+'A';
	}
	else{
		return c;
	}

}



int main() {

	char ch;
	scanf("%c",&ch);

	while(ch!= '!'){
		printf("%c",toUpper(ch));
		scanf("%c",&ch);
	}


	return 0;

}
