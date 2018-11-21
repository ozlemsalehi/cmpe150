#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

void removeDigit(int *p, int x){

	int i;
	for(i=1;i<=x;i++){
		*p=*p/10;
	}
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main(void) {
	TC_BEGIN;

	int number, digit;
	scanf("%d%d", &number, &digit);

	removeDigit(
	// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
		&number,digit
	// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	);

	printf("%d", number);

	TC_END;
	return EXIT_SUCCESS;
}

