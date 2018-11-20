#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>
//write the swap function here

int numOfDivisors(int n){

	int i,count=0;

	for(i=1;i<=n;i++){
		if(n%i==0)
			count++;
	}

	return count;
}

int isPrime(int n){

	if (numOfDivisors(n)==2)
		return 1;
	else
		return 0;
}

void allPrimes(int a, int b){

	int i;

	for(i=a;i<=b;i++){
		if(isPrime(i)){    //(isPrime(i)==1)
			printf("%d ",i);
		}
	}
}

int main(void) {
	TC_BEGIN;


	int a,b;
	scanf("%d %d",&a,&b);
	allPrimes(a,b);


	TC_END;
	return 0;
}
