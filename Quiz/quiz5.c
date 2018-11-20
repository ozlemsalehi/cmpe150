#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
float divide(int a, int b){
	return (float)a / b;
}

void print_result(float r){
	printf("%.2f", r);
}
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main(void)
{
	TC_BEGIN;

	int a, b;
	float r;
	scanf("%d %d", &a, &b);
	r = divide(a, b);
	print_result(r);

	TC_END;
	return 0;
}
