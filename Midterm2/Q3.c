// separator	Question3.c_0_false.txt
#include <stdio.h>
#include <stdlib.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// separator	Question3.c_1_true.txt



#include <stdio.h>

void b_digital_sum(int n,int b, int *result){

    *result=0;

     while(n>0){
   	  *result+= n%b;   //No need to store the number. Just add digits.
   	   n /= b;
    }
}



// separator	Question3.c_2_false.txt
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE


int main(void) {

	int number, b, result=0;
	scanf("%d %d", &number, &b);

	b_digital_sum(
		// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// separator	Question3.c_3_true.txt


number,b,&result

// separator	Question3.c_4_false.txt
		// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	);

	printf("%d", result);
	return 0;
}

