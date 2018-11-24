

#include <stdio.h>
#include <stdlib.h>


char toUpper(char c){

	if('a'<=c && c<='z'){
		return  c-'a'+'A';
	}
	else{
		return c;
	}

}



int main() {

	char ch;
	scanf("%c",&ch);

	while(ch!= '\n'){ //Read until user hits enter
		printf("%c",toUpper(ch));
		scanf("%c",&ch);
	}


	return 0;

}
