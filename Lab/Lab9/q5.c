#include <stdio.h>
#include <stdlib.h>

char perfect(int n){

	int i;
	int sum=0;

	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}

	if(sum==n){
		return 't';
	}
	else{
		return 'f';
	}

}


int main(void) {


	int n;
	scanf("%d", &n);

    printf("%c",perfect(n));

	return 0;

}

