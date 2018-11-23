#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
void func(int *a, int *b, int *c) {
	int toplam , carpim;
	toplam = *a + *b + *c;
	carpim = *a * *b * *c;

	*a = toplam;
	*b = carpim;
}
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main(void) {
	TC_BEGIN;

	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	func(
	// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
			&a,&b,&c
	// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	);
	printf("%d %d",a, b);

	TC_END;
	return 0;
}

