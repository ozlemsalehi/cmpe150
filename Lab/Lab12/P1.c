/*
 ============================================================================
 Name        : PS-Week14-Example2-Matrix_sum_transpose.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define RANDINT(a,b) rand()%(b-a+1) + a

void printMatrix(int m, int n, int matrix[m][n]){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

void randomMatrix(int m, int n, int matrix[m][n],int min, int max){

	int i,j;

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			matrix[i][j]=RANDINT(min,max);
		}
	}
}

void matrixSum(int m, int n, int matrix1[m][n],int matrix2[m][n], int sum[m][n]){

	int i,j;

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
}

int main(){

  int m,n,min,max;
	scanf("%d %d",&m, &n);
	scanf("%d %d",&min, &max);

	int matrix1[m][n];
	int matrix2[m][n];
	int sum[m][n];

	randomMatrix(m,n,matrix1,min,max);
	randomMatrix(m,n,matrix2,min,max);
	matrixSum(m,n,matrix1,matrix2,sum);

	printf("Matrix1\n");
	printMatrix(m,n,matrix1);
	printf("Matrix2\n");
	printMatrix(m,n,matrix2);
	printf("Sum\n");
	printMatrix(m,n,sum);

	return 0;
}
