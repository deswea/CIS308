/*			Lab05
	Author: Desmund Weathers*/
#include <stdio.h>;
#include <string.h>;
#include <math.h>;
	//rounding macro
#define round(x) (x<0 ceil((x)):floor((x)))

//the person struct containing the types of kid, student, and adult
struct person {
	char name[20];
	int age;
	enum { kid, student, adult } kind;

	union {
		struct {
			char school[30];
		}kid;
		struct {
			char college[30];
			double gpa;
		}student;
		struct {
			char company[20];
			int salary;
		}adult;
	}kindOfPerson;

};
void display(struct person*);
//the main function that creates instances of the structs and calls the display method
int main() {
	struct person bob;
	bob.kind = student;
	strcpy(bob.name, "Bob");
	bob.age = 20;
	
	strcpy(bob.kindOfPerson.student.college, "K-State");
	bob.kindOfPerson.student.gpa = 3.5;

	struct person *allisonPtr;
	allisonPtr = malloc(sizeof(struct person));

	strcpy(allisonPtr->name, "Allison");
	allisonPtr->age = 10;
	allisonPtr->kind = kid;
	strcpy(allisonPtr->kindOfPerson.kid.school, "Amanda Arnold Elementary");

	display(&bob);
	display(allisonPtr);
	getchar();

}


//Takes in the person and display's their attributes
void display(struct person *per) {

	printf("The name is %s\n", per->name);
	printf("The age is %d\n", per->age);

	if (per->kind == kid) {
		printf("The school of the kid is %s\n\n", per->kindOfPerson.kid.school);
	}

	else if (per->kind == student) {
		printf("The college of the student is %s\n", per->kindOfPerson.student.college);
		printf("The gpa of the student is %g\n\n", per->kindOfPerson.student.gpa);
	}

	else {

		printf("The company of the adult is %s\n", per->kindOfPerson.adult.company);
		printf("The salary of the adult is %d\n", per->kindOfPerson.adult.salary);
	}


}



