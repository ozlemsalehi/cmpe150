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

void printMatrix(int m, int n, int matrix[m][n]){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}



void readMatrix(int m,int n, int matrix[m][n]){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
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

void transpose(int m, int n, int matrix[m][n], int mtrans[n][m]){
    int i,j;
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            mtrans[j][i]=matrix[i][j];
        }
    }
}

int main(){

	int matrix1[2][4];
	int matrix2[2][4];
	int sum[2][4];
	int mtrans[4][2];

	readMatrix(2,4,matrix1);
	readMatrix(2,4,matrix2);
	matrixSum(2,4,matrix1,matrix2,sum);
	transpose(2,4,sum,mtrans);
	
	puts("Sum:");
	printMatrix(2,4,sum);
	puts("Transpose of the sum:");
	printMatrix(4,2,mtrans);
	


	return 0;
}
