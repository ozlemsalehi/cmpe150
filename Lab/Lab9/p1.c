#include <stdio.h>
#include <stdlib.h>


int binary(int n){

    int digit=1;
    int number=0;
    while(n>0){
	number+=n%2*digit;
	n=n/2;
	digit*=10;  
    }

    return number;

}


int main(void) { //Convert number to binary


    int n;
    scanf("%d", &n);

    printf("%d\n",binary(n)); 

    return 0;

}

