

#include <stdio.h>
#include <stdlib.h>


int isPrime(int n){
    int i;
    
    if(n==1){
        return 0;
    }
    else{
        for(i=2;i<n;i++){
            if(n%i==0)    //If a divisor is found 
                return 0;  
        }
        
        return 1;  //If no divisors are found
    }

}



int main() {

	int n;
	scanf("%d",&n);

    if(isPrime(n)==1){  //equivalently if(isPrime(n))
        printf("prime");
    }	
    else{
        printf("not prime");
    }


	return 0;

}
