
#include <stdio.h>

int main()
{
    char arr[50]; //character array
    char encrypted[50];
    int i,count;
    char ch;
 
    
    //Read until user hits enter
    scanf("%c",&ch);
    
    count=0; //initialize to 0
    i=0;
    while(ch!='\n'){
        arr[i]=ch;
        scanf("%c",&ch); // read new character
        count++; //counts the number of characters
        i++; //helps us to store the character in i'th index
    }
    
    //Actually we can say count=i instead of increasing both of them inside the loop

    //Increase ASCII code of each character by 1 
    for(i=0;i<count;i++){   //Note that we reset i
        encrypted[i]=arr[i]+1;
    }  
    
    //Print  encrypted sequence
    for(i=0;i<count;i++){
        printf("%c",encrypted[i]);
    } 
    return 0;
}
