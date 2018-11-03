#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	
	// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
    int x;
    scanf("%d", &x);
    if(x%2==0){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        printf("%d", a+b+c);
    }else{
        int a,b;
        scanf("%d %d", &a, &b);
        printf("%d", a*b);
    }
	// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

	return 0;
}
