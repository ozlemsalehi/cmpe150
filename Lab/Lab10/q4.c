
#include <stdio.h>

int main()
{
    char arr[50]; //character array
    char encrypted[50];
    int i,length;
    char ch;
 
    
    //Read until user hits enter
    scanf("%c",&ch);
    
    
    i=0;
    while(ch!='\n'){
        arr[i]=ch;
        scanf("%c",&ch); // read new character
        i++; //helps us to store the character in i'th index
    }
    
    length=i; //length of the sequence is equal to the value of i after exiting the loop

    //print digits
    for(i=0;i<length;i++){   //Note that we reset i
        if('0'<=arr[i] && arr[i]<='9'){
            printf("%c",arr[i]);
        }
    }  
    
    //Print letters
    for(i=0;i<length;i++){   //Note that we reset i
        if(('a'<=arr[i] && arr[i]<='z') || ('A'<=arr[i] && arr[i]<='Z')){
            printf("%c",arr[i]);
        }
    } 
    return 0;
}
