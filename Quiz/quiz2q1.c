#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(void)
{
	TC_BEGIN;
	
	// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

    int year, base;
    char title;
    scanf("%c %d", &title, &year);
    if(title == 'b'){
        base = 10000;
    }else if(title == 'w'){
        base = 2500;
    }else if(title == 's'){
        base = 2000;
    }
    if(year >= 10){
        base *= 1.5;
    }
    printf("%d", base);

	// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

	TC_END;
	return 0;
}
