#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

//write the function here
int update(int array1[], int array2[],int n,int m){

	int i,j,index=0,found=0;
	int temp[n];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if (array2[j]==array1[i]){
				found=1;
			}
		}
		if(!found){ //same as found!=1
			temp[index]=array1[i];
			index++;
		}
		found=0;

	}
	for(i=0;i<=index;i++){   //Copy temp into array1
		array1[i]=temp[i];
	}
	return index;
}
int main(void) {
	TC_BEGIN;

	int n,m;
	scanf("%d %d",&n , &m);
	int array1[n];
	int array2[m];

	int i;

	for(i=0;i<n;i++){
		scanf("%d",&array1[i]);
	}

	for(i=0;i<m;i++){
		scanf("%d",&array2[i]);
	}

	int size= update(array1,array2,n,m);

	for(i=0;i<size;i++){
		printf("%d ",array1[i]);
	}


	TC_END;
	return 0;
}
