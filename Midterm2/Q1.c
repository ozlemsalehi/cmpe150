// separator	Question1.c_0_false.txt
// Question 1

#include <stdio.h>
#include <stdlib.h>


int main(void)
{


	// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// separator	Question1.c_1_true.txt

//Two alternative solutions

	char ch,ch_last;
		scanf("%c",&ch);
    
		while(ch!='\n'){
			if(('a'<=ch && ch <='z') || ('A'<=ch && ch <='Z') || ch== ' '){
				printf("%c",ch);
			}
			ch_last=ch;
			scanf("%c",&ch);
		}
		if((ch < 'a' || ch >'z') && (ch<'A' || ch >'Z') && ch!=' '){ //not small-case and not upper-case && not space 
			printf("%c",ch_last);
		}
/*
      int flag=0;
      while(ch!='\n'){
			
      if(('a'<=ch && ch <='z') || ('A'<=ch && ch <='Z') || ch== ' '){
				printf("%c",ch);
				flag=0;
			}
			else{
			    flag=1;  //mark that current character is not upper-case,not lower-case,not space
			}
			ch_last=ch;
			scanf("%c",&ch);
		}
		if(flag==1){ //not small-case and not upper-case && not space 
			printf("%c",ch_last);
		}
*/

// separator	Question1.c_2_false.txt
	// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE


	return 0;
}

// Question 1

