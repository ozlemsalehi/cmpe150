#include <stdio.h>
#include <stdlib.h>


void rectangle(int m, int n){

    int i,j;
    
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
   

}


int main(void) { 

    int m,n;
    scanf("%d %d",&m, &n);

    rectangle(m,n);

    return 0;

}
