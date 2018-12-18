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

int compare(char str1[], char str2[]){

	if(strlen(str1)!=strlen(str2)){
		return -1;
	}
	else{
		int i; int value=0;
		for(i=0;i<strlen(str1);i++){
			if(str1[i]!=str2[i]){
				value=-1;

			}
		}
		return value;
	}

}
int main(){

	TC_BEGIN;

	char str1[50];
	char str2[50];

	gets(str1);
	gets(str2);

	if(compare(str1,str2)==0){
		printf("same");
	}
	else if(compare(str1,str2)==-1){
		printf("not same");
	}

	TC_END;
    return 0;
}
