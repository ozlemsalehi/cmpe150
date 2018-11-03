#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(void)
{
	TC_BEGIN;
	
	char ch;

	// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

	scanf("%c", &ch);
	while(ch>'9' || ch<'0'){
		if(ch>='a' && ch<='z'){
			printf("%c", ch-('b'-'B'));
		}else{
			printf("%c", ch);
		}		

		scanf("%c", &ch);
	}

	// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

	TC_END;
	return 0;
}
