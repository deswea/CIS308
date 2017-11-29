/* Lab 04 - Struct(student)
		Author: Desmund Weathers*/
#include <stdio.h>;
#include <string.h>;


struct student {
	char name[25];
	int age;
	char classification[10];
} student;

void display(struct student*);


//Pre condition - The main fuction that takes in the users input for the struct of the student, age, classification, and name
//Post condition - The main function allocates the values to the struct changes the classification and age as well as executes the display function
int main() {
	struct student* studentPtr;
	studentPtr = malloc(sizeof(struct student));

	printf("Student's name?: ");
	scanf_s("%s", studentPtr->name, sizeof(studentPtr->name));

	printf("How old is the student?: ");
	scanf_s(" %d", &studentPtr->age, sizeof(studentPtr->age));

	printf("Student's classification?: ");
	scanf_s(" %s", studentPtr->classification, sizeof(studentPtr->classification));


	display(studentPtr);
	getchar();

	if (strcmp(studentPtr->classification,"Freshman") == 0 || strcmp(studentPtr->classification, "freshman") == 0) {
		strcpy(studentPtr->classification, "Sophomore");
	}
	else if (strcmp(studentPtr->classification,"Sophomore") == 0 || strcmp(studentPtr->classification, "sophomore") == 0) {
		strcpy(studentPtr->classification, "Junior");
	}

	else if (strcmp(studentPtr->classification,"Junior") == 0 || strcmp(studentPtr->classification, "junior") == 0) {
		strcpy(studentPtr->classification, "Senior");
	}
	else if (strcmp(studentPtr->classification,"Senior") == 0 || strcmp(studentPtr->classification, "senior") == 0) {
		strcpy(studentPtr->classification, "Senior");
	}

	studentPtr->age = studentPtr->age + 1;
		display(studentPtr);
		return(0);



	}

//Pre-Condition - Takes in the student structure
//post-condition - prints out the current values of the struct, name, age, and classification
void display(struct student *stu) {
	printf("\n%s", stu->name);

	printf("\n%d", stu->age);

	printf("\n%s", stu->classification);

	getchar();
}

