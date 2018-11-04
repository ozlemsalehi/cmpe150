#include <stdio.h>

int main()
{
    char ch;
    int number=0;
    
    scanf("%c",&ch);
    
    while(ch<'a' && ch <='9'){
        number*=10;         // We multiply by 10 to add the next digit. ex: 1234 = 123*10 + 4 
        number += ch-'0';   // We subtract the ASCII Codes of ch and '0', which gives us the integer value of ch  
                            // Note that 0,1,2,3,4,5,6,7,8,9 are conecutive in the ASCII table
        
        scanf("%c",&ch);
    }
    printf("%d",number);
    return 0;
}
