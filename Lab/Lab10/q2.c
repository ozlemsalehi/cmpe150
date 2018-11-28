
#include <stdio.h>

int main()
{
    int arr[50];
    int i,n;
    int sum=0;
    float average,variance=0;
    
    //reading n numbers into an array 
    
    
    scanf("%d",&n);// read n from the user
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    //find the sum of the numbers
    for(i=0;i<n;i++){ 
        sum+=arr[i];
    }
    
    average = (float)sum/n;
   
    printf("Average: %f\n",average);
    
    for(i=0;i<n;i++){ //Be careful with the indices
        variance+=(arr[i]-average)*(arr[i]-average);
    }
    variance = variance/(n-1);
    
    printf("Variance: %f",variance);
    
    
    return 0;
}
