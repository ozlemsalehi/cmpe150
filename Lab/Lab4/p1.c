#include <stdio.h>

int main()
{
    char ch;
    int count=0;
    
    scanf("%c",&ch);
    
    while(ch!='*'){
        if('a'<= ch && ch <= 'z'){
            count++;
        }    
        scanf("%c",&ch);
    }
    printf("%d",count);
    return 0;
}
