#include <stdio.h>
#include <math.h>

void divide(int a,int b, int *c, int *d){
    
    *c=a/b;
    *d=a%b;
}

int main()
{
    int a,b,result,remainder;
    
    scanf("%d %d",&a,&b);
    
    divide(a,b,&result,&remainder);
    
    printf("%d %d\n",result,remainder);

    return 0;
}
