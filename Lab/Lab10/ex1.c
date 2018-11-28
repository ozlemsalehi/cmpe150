
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
    
    //printing the array content
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    //increase each number in the array by 1
    for(i=0;i<n;i++){
        arr[i]++;
    }
    
    
    //print again to see the difference
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
