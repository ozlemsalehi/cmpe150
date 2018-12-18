#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>


int main(void) {
	TC_BEGIN;

	int array[100];
	int N;
	scanf("%d", &N);

	int index = -1;

	// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

	int i;
	for(i=0; i < N; i++){
		scanf("%d", &array[i]);
	}

	int M;
	scanf("%d", &M);

	for(i=0; i < N; i++){

		if(array[i] == M){
			index = i;
		}

	}


	// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

	if(index == -1){
		printf("Not found");
	}
	else{
		printf("%d %d", index, array[index]);
	}


	TC_END;
	return 0;
}
