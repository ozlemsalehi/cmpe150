#include <stdio.h>
#include <stdlib.h>

int reverse(int n){

    int number=0;
    while(n>0){
        number=number*10+n%10;
        n=n/10;
    }
    return number;
}


int binary(int n){

    int number=0;

    while(n>0){
        number=number*10+n%2;
        n=n/2;
    }

    return reverse(number);
}

int binary2(int n){

	int digit=1;
	int number=0;
	while(n>0){
		number+=n%2*digit;
	    n=n/2;
	    digit*=10;
	}

	return number;

}


int main(void) {


	int n;
	scanf("%d", &n);

    printf("%d\n",binary(n));
    printf("%d",binary2(n));

	return 0;

}

