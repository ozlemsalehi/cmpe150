/*
 ============================================================================
 Name        : PS-Week14-Example1-Apartment_block.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(){
	TC_BEGIN;
	int student,course;
	scanf("%d %d",&student,&course);
	int grades[student][course];

	int i,j;

	for(i=0;i<student;i++){
		for(j=0;j<course;j++){
			scanf("%d",&grades[i][j]);
		}
	}
	int s;
	float s_average=0;
	scanf("%d", &s);

	int c;
	float c_average=0;
	scanf("%d", &c);

	for(j=0;j<course;j++){
		s_average+=grades[s][j];
	}
	s_average=s_average/course;

	printf("Average of student %d: %.2f \n",s,s_average);



	for(i=0;i<student;i++){
		c_average+=grades[i][c];
	}
	c_average=c_average/student;

	printf("Average of course %d: %.2f\n",c,c_average);
	printf("Students above average: ");
	for(i=0;i<student;i++){
		if(c_average<=grades[i][c])
			printf("%d ",i);
	}

	TC_END;
	return 0;
}
