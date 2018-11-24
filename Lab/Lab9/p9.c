#include<stdio.h>

int isLower(char a){ 

	if('a'<=a && a<='z'){
		return 1;
	}
	else{
		return 0;    
	}    
}

int isUpper(char a){

	if('A'<=a && a<='Z'){
		return 1;    
	}  
	else{
		return 0;
	}
}  

int isDigit(char a){

	if('0'<=a && a<='9'){
		return 1;    
	}
	else{
		return 0;    
	}
}
char toUpper(char a){    

	a=a+'A'-'a';
	return a;
}

char toLower(char a){

	a=a+'a'-'A';
	return a;
}   

void printDigit(char a){  
	if(a=='1')
		printf ("one");
	else if (a=='2')
		printf("two");
	else if(a=='3')
		printf("three");
	else if(a=='4')
		printf("four");
	else if(a=='5')
		printf("five");
	else if(a=='6')
		printf("six");
	else if(a=='7')
		printf("seven");
	else if(a=='8')
		printf("eight");
	else if(a=='9')
		printf("nine");
	else if(a=='0')
		printf("zero");
}  


int main(){

	char ch;

	scanf("%c",&ch);

	while (ch!='\n'){
		if (isLower(ch)){
			ch=toUpper(ch); 
			printf("%c",ch);   
		}    
		else if(isUpper(ch)){
			ch=toLower(ch);  
			printf("%c",ch);  
		}     
		else if(isDigit(ch)){
			printDigit(ch);   
		}
		else{
			printf("%c",ch);
		}
		scanf("%c",&ch);
	}



	return 0;

}
