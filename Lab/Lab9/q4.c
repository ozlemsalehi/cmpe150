#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    int prev2=0;
    int prev1=1;
    int current;

    int i;

    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        for(i=1;i<=n-2;i++){
            current = prev2 + prev1;
            prev2=prev1;
            prev1=current;
        }
        return current;
    }

}


int main(void) {


	int n;
	scanf("%d", &n);

    printf("%d",fibonacci(n));

	return 0;

}

