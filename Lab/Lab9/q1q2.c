#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define circleArea(r) PI*(r)*(r) 
#define pr(x) printf("%f",x)

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main(void) {


	int r;
	scanf("%d", &r);

    pr(circleArea(r));
	
	return 0;

}

