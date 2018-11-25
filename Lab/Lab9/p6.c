#include <stdio.h>
#include <stdlib.h>


int reverse(int n){

    int i;
    int number=0;
    
    while(n>0){
        number*=10;
        number += n%10;
        n/=10;
    }
   
    return number;
}


int main(void) { //Convert number to binary


    int m,n;
    scanf("%d",&n);

    printf("%d",reverse(n));

    return 0;

}
