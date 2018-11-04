#include <stdio.h>

int main()
{
    int i,n;
    
    //fib_n = fib_(n-1) + fib_(n-2)

    int fibn_2=0; // This will hold fib_(n-2). It holds fib_1 (1'st Fibonacci number) at the beginning 
    int fibn_1=1; // This will hold fib_(n-1). It holds fib_2 (2'nd Fibonacci number) at the beginning
    int fib_n; // This will hold fib_n.
    
    scanf("%d",&n);
    
    if(n==1){
        printf("%d",fibn_2);
    }
    else if(n==2){
        printf("%d",fibn_1);
    }
    else{  //We need to compute the Fibonacci number if the user enters a number greater than or equal to 3
        for(i=3;i<=n;i++){
            fib_n=fibn_1 + fibn_2; //calculate the current Fibonacci number
         
            //Note that the order of the following two lines is important
            fibn_2=fibn_1; // n-2'nd Fibonacci number should be the current n-1'st Fibonaccci number in the next iteration
            fibn_1=fib_n; // n-1'st Fibonacci number should be the current Fibonacci number in the next iteration
        }
        printf("%d",fib_n);
    }
   

    return 0;
}
