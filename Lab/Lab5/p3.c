#include <stdio.h>

int main()
{
    int i,n,m;
    int gcd=1; //This is the worst case (when two relatively prime numbers are entered)

    
    scanf("%d %d",&m, &n);
    
    //Now we try to find a larger common divisor
    for(i=2;i<=m && i<=n;i++){  //The greatest common divisor should be smaller than both m and n
        if(m%i==0 && n%i ==0){
            gcd=i; // At each iteration, if i divides both m and n, we find a larger divisor
        }
    }
    printf("%d\n",gcd);
   
   
   //Alternative solution using break
   
    if(m<n)
        i=m;
    else
        i=n;
    
    for(;i>=2;i--){
        if(m%i==0 && n%i==0){
            gcd=i;
            break;
        }   
    }
    printf("%d",gcd);


    return 0;
}
