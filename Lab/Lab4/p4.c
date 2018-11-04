#include <stdio.h>

int main()
{
    int n,count=0;
    int sum=0;
    
    scanf("%d",&n);
    
    while(n%2==0){
        count++;
        sum+=n;
        scanf("%d",&n);
    }
    
    printf("%.2f",1.0*sum/count);
    return 0;
}
