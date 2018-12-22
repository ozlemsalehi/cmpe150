// separator	Question2.c_0_false.txt
// Question 2

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// separator	Question2.c_1_true.txt

int isPrime(int n){

    int i;

    if(n<2){
        return 0;
    }

    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}



// separator	Question2.c_2_false.txt
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main()
{
	TC_BEGIN;
	
	// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// separator	Question2.c_3_true.txt



	int num,n;
	scanf("%d %d", &num, &n);
	int count=0;

	if(isPrime(num)==1){
        printf("%d ",num);
        count++;
    }


	int i=1;

	while(count<n){
		if(isPrime(num-i)==1){
			printf("%d ",num-i);
			count++;
		}
		if(count==n)   //Think about the input "6 1". If this line is missing, then output will be "5 7" instead of "5"
			break;

		if(isPrime(num+i)==1){
			printf("%d ",num+i);
			count++;
		}
		i++;

	}




// separator	Question2.c_4_false.txt
	// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	
	TC_END;
    return 0;
}

// Question 2

