#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>


int maximum(int array[],int n){
	int max=array[0]; //initialize to first element of the list
	int i;
	for(i=1;i<n;i++){
		if(max<array[i]){
			max=array[i];
		}
	}

	return max;
}

int main(void) {
	TC_BEGIN;

	int array[50];

	int i,n;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printf("Maximum element is %d", maximum(array,n));



	TC_END;
	return 0;
}
