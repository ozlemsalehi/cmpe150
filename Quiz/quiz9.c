#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

void read_array(int arr[][10], int N, int M){
	int i, j;
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
			scanf("%d", &arr[i][j]);
}
void print_array(int arr[][10], int N, int M){
	int i, j;
	for(i=0; i<N; i++){
		for(j=0; j<M; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
void fill_rows_with_max(int arr[][10], int N, int M){
	int i, j, max;
	for(i=0; i<N; i++){
		max = -99999;
		for(j=0; j<M; j++)
			if (max < arr[i][j])
				max = arr[i][j];
		for(j=0; j<M; j++)
			arr[i][j] = max;
	}
}
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main(void)
{
	TC_BEGIN;

	int arr[10][10], N, M;
	scanf("%d %d", &N, &M);
	read_array(arr, N, M);
	fill_rows_with_max(arr, N, M);
	print_array(arr, N, M);

	TC_END;
	return 0;
}
