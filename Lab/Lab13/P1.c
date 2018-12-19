#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
 * Alternative solution with 2-D array
 *
 *
 * char sentence[50][20];
	char word[20];
    char ch;

    int n=0,j=0,i=0;
    while(1){
        scanf("%c",&ch);
        if(ch == ' '){
            sentence[n][j]='\0';
            n++;
            j=0;
        }
        else if(ch == '\n'){
            sentence[n][j-1]='\0';
            n++;
            break;
        }
        else{
        sentence[n][j]=ch;
        j++;
        }
    }

    scanf("%s",word);

    for(i=0;i<n;i++){


        if(strcmp(sentence[i],word)!=0){
            printf("%s ",sentence[i]);
        }
    }*/



int main(void) {

	char sentence[100];
	char word[20];

	fgets(sentence,100,stdin);
	scanf("%s",word);

	sentence[strlen(sentence)-1]=' '; //Look at Q1 for explanation

	int i,j;

	int index=0;
	char temp[20];

	while(index<strlen(sentence)){
		i=0;
		while(sentence[index]!=' '){ //get each word into temp
			temp[i]=sentence[index];
			i++;
			index++;
		}
		temp[i]='\0';

		if(strcmp(temp,word)!=0){
			printf("%s ",temp);
		}

		index++;
	}
	return 0;

}
