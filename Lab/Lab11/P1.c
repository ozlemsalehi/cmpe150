#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

//write the function here
void merge(int array1[],int array2[],int array3[],int m,int n){
	int index1=0,index2=0,index3=0;

	while(index1<n&& index2<m){
		if(array1[index1]<array2[index2]){
			array3[index3]=array1[index1];
			index1++;
			index3++;
		}
		else{
			array3[index3]=array2[index2];
			index2++;
			index3++;
		}
	}

	while(index1<n){
		array3[index3]=array1[index1];
		index1++;
		index3++;
	}


	while(index2<m){
		array3[index3]=array2[index2];
		index2++;
		index3++;
	}
}

int main(void) {
	TC_BEGIN;

	//read the arrays and call the function here
	int n,m,i;
	scanf("%d %d",&n ,&m);
	int array1[n];
	int array2[m];
	int array3[n+m];

	for(i=0;i<n;i++){
		scanf("%d",&array1[i]);
	}

	for(i=0;i<m;i++){
		scanf("%d",&array2[i]);
	}
	merge(array1,array2,array3,m,n);
	for(i=0;i<m+n;i++){
		printf("%d ",array3[i]);
	}

	TC_END;
	return 0;
}
