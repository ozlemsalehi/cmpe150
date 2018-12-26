#include <stdio.h>

struct Employee{
    int ID;
    int salary;
    int performance;
    
};

struct Company{
    struct Employee cDevelopers[3];
    struct Employee javaDevelopers[3];
};

int maxPerformance(struct Employee developers[3]){
    
    int i;
    int maxPerformance=0; //Initilization
    int maxID=-1;
    
    for(i=0;i<3;i++){
        if(developers[i].performance > maxPerformance ){
            maxPerformance = developers[i].performance;
            maxID = developers[i].ID;
        }
    }
    
    return maxID;

}

int main()
{
 	struct Company company;

	int i;
	for(i=0; i < 3; i++){
		scanf("%d", &company.cDevelopers[i].ID);
		scanf("%d", &company.cDevelopers[i].salary);
		scanf("%d", &company.cDevelopers[i].performance);
	}
	for(i=0; i < 3; i++){
		scanf("%d", &company.javaDevelopers[i].ID);
		scanf("%d", &company.javaDevelopers[i].salary);
		scanf("%d", &company.javaDevelopers[i].performance);
	}

	int maxC = maxPerformance(company.cDevelopers);
	int maxJava = maxPerformance(company.javaDevelopers);

	company.cDevelopers[maxC].salary += 500;
	company.javaDevelopers[maxJava].salary += 500;

	printf("%d %d\n", maxC, company.cDevelopers[maxC].salary);
	printf("%d %d\n", maxJava, company.javaDevelopers[maxJava].salary);

	return 0;

}
