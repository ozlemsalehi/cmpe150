#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>
//write the swap function here

void swap(int *x, int *y ){

	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}


int main(void) {
	TC_BEGIN;

	//create two integers, scan and print their values here

	int a,b;
	scanf("%d %d",&a,&b);

	//call the swap function with the addresses of
	//these integers, and print the result here

	swap(&a,&b);
	printf("a:%d b:%d", a,b);


	TC_END;
	return 0;
}
