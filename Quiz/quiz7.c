#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>


int main()
{
	TC_BEGIN;

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
    int i, n, arr[20];
    float avg=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<n; i++){
        avg += arr[i];
    }
    avg /= n;
    
    for(i=0; i<n; i++){
        if(avg <= arr[i]){
            printf("%d ", arr[i]);
        }
    }
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

	TC_END;
	return 0;
}
