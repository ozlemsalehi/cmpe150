#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

struct Book{
	char name[3];
	int pages;
	int price;
};

void sort(int n, struct Book list[]){

	int i,j;
	struct Book temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(list[i].price < list[j].price){
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
}
int main(void) {
	TC_BEGIN;

	int n;
	scanf("%d",&n);

	int i;
	struct Book list[n];

	for(i=0;i<n;i++){
		scanf("%s",list[i].name);
		scanf("%d",&list[i].pages);
		scanf("%d",&list[i].price);
	}

	sort(n,list);

	for(i=0;i<n;i++){
		printf("%s: %d pages %dTL\n",list[i].name,list[i].pages,list[i].price);
	}

	TC_END;
	return 0;
}
