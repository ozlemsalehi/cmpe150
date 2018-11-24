// separator	Question.c_0_false.txt

#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    
    int result=1;
    int i;
    
    for(i=1;i<=n;i++){
        result*=i;
    }
    
    return result;
    
}

int sumOfFactorials(int n){
    
    int sum=0;
    int digit;
    
    while(n > 0){
        digit=n%10;
        sum += factorial(digit);
        n/=10;
    }
    return sum;
}

int main() {

    int n;
    scanf("%d",&n);
    
    printf("%d",sumOfFactorials(n));

	return 0;

}

