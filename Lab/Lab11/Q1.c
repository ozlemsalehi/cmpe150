/*
 ============================================================================
 Name        : PS-Week12-Example1-Passing_Array_to_Functions.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int modify(int array[] ,int size, int a, int b){

	int i,count=0;

	for(i=0;i<size;i++){
		if(array[i]==a){
			array[i]=b;
			count++;
		}
	}
	return count;
}
int main(){
	TC_BEGIN;

	int n,i,a,b;
	scanf("%d",&n);
	int array[n];


	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	scanf("%d %d", &a ,&b);
	int changes= modify(array,n,a,b);

	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	printf("Number of changes: \n%d",changes );

	TC_END;
	return 0;
}

