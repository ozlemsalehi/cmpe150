// separator	Question4.c_0_false.txt
#include <stdio.h>
#include <stdlib.h>


// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// separator	Question4.c_1_true.txt
void complex_power(float a, float b, int p, float *re, float *im)
{
	int i;
    float tempr, tempi;
    *re = a;
    *im = b;
    for(i=2; i<=p; i++){
   	 tempr = a*(*re) - b*(*im);
   	 tempi = a*(*im) + b*(*re);
   	 *re = tempr;
   	 *im = tempi;
    }
}



// separator	Question4.c_2_false.txt
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE


int main(void) {

	float a, b, re, im;
	int p;

	scanf("%f %f %d", &a, &b, &p);

	complex_power(
		// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// separator	Question4.c_3_true.txt


			a, b, p, &re, &im

// separator	Question4.c_4_false.txt
		// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	);

	printf("%.2f %.2f\n", re, im);
	return 0;

}

