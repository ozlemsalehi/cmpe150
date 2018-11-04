#include <stdio.h>

int main()
{
    char ch;
    
    scanf("%c",&ch);
    
    if('A' <= ch && ch <= 'Z')
        printf("%c",ch-'A'+'a');
    else if ('a' <= ch && ch <= 'z')
        printf("%c",ch-'a'+'A');
    else
        printf("Not a letter");
        
    return 0;
}
