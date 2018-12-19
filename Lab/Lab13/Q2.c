#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

struct Student{
	int id;
	int mid1grade;
	int mid2grade;
	int finalGrade;
	char letterGrade;
};

int main(void) {
	TC_BEGIN;

	struct Student students[100];

	int n, i;

	scanf("%d", &n);

	for(i = 0; i<n; i++)
	{
		students[i].id = 1000+i;
		scanf("%d", &students[i].mid1grade);
		scanf("%d", &students[i].mid2grade);
		scanf("%d", &students[i].finalGrade);
		students[i].letterGrade = 'I';
	}

	// CHANGE STARTS BELOW THIS LINE
	float grade;
	for(i = 0; i<n; i++)
		{
			grade=students[i].mid1grade*0.3 + students[i].mid2grade*0.3 + students[i].finalGrade*0.4;
			if(grade >= 75){
				students[i].letterGrade='A';
			}
			else if(grade>= 50){
				students[i].letterGrade='B';
			}
			else if(grade >= 25){
				students[i].letterGrade='C';
			}
			else{
				students[i].letterGrade='F';
			}
		}

	// CHANGE ENDS ABOVE THIS LINE

	for(i = 0; i<n; i++)
	{
		printf("%d: %c \n",students[i].id, students[i].letterGrade);
	}

	TC_END;
	return 0;
}
