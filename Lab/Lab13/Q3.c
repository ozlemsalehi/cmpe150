#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

struct Person{
	int age;
	int salary;
};

struct Family{
	struct Person members[9];
	int personCount;
};

int findage(struct Family families[3]){
	int totalSalary[3]={0};
	int minSalary=999999;

	int familyIndex;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<9;j++){
			totalSalary[i]+=families[i].members[j].salary;
		}
		if(totalSalary[i]<minSalary){
			familyIndex=i;
			minSalary=totalSalary[i];
		}
	}

	int richest=0;
	int richestAge;
	for(j=0;j<families[familyIndex].personCount;j++){
		if(families[familyIndex].members[j].salary>richest){
			richest=families[familyIndex].members[j].salary;
			richestAge=families[familyIndex].members[j].age;
		}
	}
	return richestAge;
}
int main(void) {
	TC_BEGIN;
	struct Family families[3];
	int i,j;
	for(i=0;i<3;i++){
		scanf("%d",&families[i].personCount);
		for(j=0;j<families[i].personCount;j++){

			scanf("%d",&families[i].members[j].age);
			scanf("%d",&families[i].members[j].salary);
		}
	}

	printf("Age of the richest in the poorest family: %d", findage(families));
	TC_END;
	return 0;
}
