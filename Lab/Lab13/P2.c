/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void findUniqueLowercaseChars(char sentence[],char unique[]){
    int i;
    int j;
    int found=0;
    int index=0;
    for(i=0;i<strlen(sentence);i++){
        for(j=0;j<strlen(sentence);j++){
            if(i!=j && sentence[i]==sentence[j]){  //compare each character with the rest of the characters in the sentence
                found=1;
            }
        }
        if(found==0 && 'a'<= sentence[i] && sentence[i] <='z'){ //if the character is unique then found=0
            unique[index]=sentence[i];
            index++;
        }
        found=0;
    }
    unique[index]='\0';
}

int main()
{
    char sentence[99];
    char unique[99];
    gets(sentence);
    
    findUniqueLowercaseChars(sentence,unique);
    printf("%s",unique);
    return 0;
}
