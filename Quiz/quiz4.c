#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(void)
{
	TC_BEGIN;
	
	// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

	int N, num, i, j, result;

	scanf("%d", &N);

	for(i=0; i<N; i++){
		scanf("%d", &num);
		result = 1;
		for(j=1; j<=num; j++){
			result*=j;
		}
		printf("%d ", result);
	}

	// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

	TC_END;
	return 0;
}
