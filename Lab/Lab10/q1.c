
#include <stdio.h>

int main()
{
    int arr[50];
    int i,n;
    
    //reading n numbers into an array 
    
    
    scanf("%d",&n);// read n from the user
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    //printing in reverse order
    for(i=n-1;i>=0;i--){ //Be careful with the indices
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    
    //print only the odd numbers in reverse order
    for(i=n-1;i>=0;i--){
       if(arr[i]%2==1){
            printf("%d ",arr[i]);
       }
    }
    

    
    return 0;
}
