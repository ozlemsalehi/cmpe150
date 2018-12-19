#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>
#include <string.h>


void getWord(char sentence[], char word[], int n){

	int i,j,count=0;

	sentence[strlen(sentence)-1]=' ';
	//if user enters "aksam oldu", then sentence is "aksam oldu\n" and
	//its length is 11 also counting \n as a character and sentence[10]='\n'
	//what we do here is that we put a space instead of \n
	//because our algorithm works by finding the words between spaces


	for(i=0;sentence[i]!='\0';i++){
		if(sentence[i]==' ')
			count++;

		if(count==n-1){
			if(n!=1){  //If n=1, then there is no need to increment i
				i++; // Otherwise we increment to get the next character after space
			}

			for(j=0;sentence[i]!=' ';j++){
				word[j]=sentence[i];
				i++;
			}
			word[j]='\0'; //indicates that the word has finished
			break;
		}

	}

}
int main(void) {
	TC_BEGIN;

	char sentence[150];
	char word[30];
	int n;

	fgets(sentence,150,stdin); // \n is character is also read
	scanf("%d",&n);

	getWord(sentence,word,n); //word is initially empty

	printf("%s",word);
	TC_END;
	return 0;
}
