/*
 ============================================================================
 Name        : PS-Week15-Example1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>
#include <string.h>

struct Point {
	float x, y;
} ;

struct Student{
	int id;
	int midterm1Grade;
	int midterm2Grade;
	int finalGrade;
	char letterGrade;
};

struct Course{
	struct Student list[50];
	int numStudent;
	char name[4];
	int code;
	struct Student best;
};



typedef struct {
	float real, imag;
} Complex_t;

typedef struct Person {
	char name[20];
	int age;
}Person_t;

Complex_t add(Complex_t z1, Complex_t z2)
{
	Complex_t total;
	total.real = z1.real + z2.real;
	total.imag = z1.imag + z2.imag;
	return total;
}

void move(struct Point *pPtr, float dx, float dy)
{
	(*pPtr).x += dx;
	pPtr->y += dy; //equivalent to (*pPtr).y
}

void changeAge(Person_t *p, int newAge){
	p->age=newAge;
}

int main(void) {
	TC_BEGIN;
	//You can comment out blocks of the code and run partially

	struct Point p1;
	struct Point p2;
	p1.x=5;
	p1.y=4;
	p2.x=3;
	p2.y=0;

	move(&p1,2,3);   //pass by reference
	printf("%f %f\n",p1.x, p1.y );


	//////////////////////////////////////////////////////

	struct Student stu1,stu2;
	stu1.letterGrade='A';
	stu2.midterm1Grade=100;

	struct Student studentList[10]; //An array where each element is of type struct Student
	studentList[0].id=1000; //Set the id of the first student in the list to 1000


	////////////////////////////////////////////////////////////


	struct Course myCourse;
	myCourse.code=150;
	strcpy(myCourse.name,"CMPE");
	scanf("%d",&myCourse.numStudent);
	int i;
	for(i=0;i<myCourse.numStudent;i++){
		scanf("%d", &myCourse.list[i].id);
		scanf("%d", &myCourse.list[i].midterm1Grade);
		scanf("%d", &myCourse.list[i].midterm2Grade);
		scanf("%d", &myCourse.list[i].finalGrade);
	}


	///////////////////////////////////////////////////////////


	Complex_t c1,c2,sum;
	scanf("%f",&c1.real);
	scanf("%f",&c1.imag);
	scanf("%f",&c2.real);
	scanf("%f",&c2.imag);

	sum=add(c1,c2);  //pass by value
	printf("%.2f+%.2f i",sum.real,sum.imag );

	///////////////////////////////////////////////////////


	Person_t pe1;
	scanf("%s", pe1.name);
	scanf("%d", &pe1.age);

	changeAge(&pe1,30); //pass by reference
	printf("%d",pe1.age);


	TC_END;
	return 0;
}
