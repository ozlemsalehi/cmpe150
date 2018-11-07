

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>


void sayHello(){

	printf("Hello\n");
}

void printAsTime(int h, int m, int s){

	if(h<10){
		printf("0%d:",h);
	}
	else
		printf("%d:",h);
	if(m<10)
		printf("0%d:",m);
	else
		printf("%d:",m);
	if(s<10)
		printf("0%d",s);
	else
		printf("%d",s);
}

int main() {
	TC_BEGIN;
	int hour,minute,second;
	scanf("%d %d %d",&hour, &minute,&second);
	printAsTime(hour,minute,second);

	TC_END;

	return 0;
}
