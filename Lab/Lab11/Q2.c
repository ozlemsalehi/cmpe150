/*
 ============================================================================
 Name        : PS-Week12-Example1-Passing_Array_to_Functions_Sort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>
#include <time.h>

#define MAX_SIZE 100

void printArray(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int numbers[],int size){
	int i;
	int changed=1;
	while(changed){
		changed=0;
		for(i=0;i<size-1;i++){
			if(numbers[i]>numbers[i+1]){
				swap(&numbers[i],&numbers[i+1]);
					changed=1;

			}
		}
	}

}

void sort(int numbers[], int size){

	int i,j;

	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(numbers[i]>numbers[j]){
				swap(&numbers[i],&numbers[j]);
			}
		}
	}
}

int main(){
	TC_BEGIN;
    int array[MAX_SIZE], size, i;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    if(size<=0 || size > MAX_SIZE){
        printf("Error: invalid size. Size must be between 0 and %d\n",MAX_SIZE);
      return -1;
    }
    srand(time(0));//initialize random seed
    for (i = 0; i < size; i++){
        array[i] = rand()%10 +1;
    }
    printf("array before sort:\n");
    printArray(array,size);

    sort(array,size);
    //bubble_sort(array,size);
    printf("array after sort:\n");
    printArray(array,size);


    TC_END;
    return 0;
}
