#include <stdio.h>

int main()
{
    int i,n,sum=0;

    
    scanf("%d",&n);
    
    for(i=1;i<=n-1;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)
        printf("Perfect");
    else
        printf("Not perfect");
   

    return 0;
}
