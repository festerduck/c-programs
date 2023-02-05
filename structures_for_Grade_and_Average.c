#include <stdio.h>
struct marks
{
	float testMarks[5];
	float averageMarks;
};
void getMarks(struct marks *data);
void displayGrade(float grade);
struct marks student1, student2, student3, student4, student5;
float totalAverage = 0.0, sumAverage = 0.0, gradeMarks;
int main()
{
	int i;
	printf("Enter marks for Student 1: \n");
	getMarks(&student1);
	printf("Enter marks for Student 2: \n");
	getMarks(&student2);
	printf("Enter marks for Student 3: \n");
	getMarks(&student3);
	printf("Enter marks for Student 4: \n");
	getMarks(&student4);
	printf("Enter marks for Student 5: \n");
	getMarks(&student5);
	totalAverage = sumAverage/5.0;
	printf("Total Average of class Marks is: %.2f\n", totalAverage);
    getchar();
	return 0;
}
void getMarks(struct marks *data)
{
	int i,j;
	static int counter = 1;
	float sum = 0.0;
	for(i = 0; i<5; i++)
	{
			printf("\tEnter the Marks of Subject %d: ", i+1);
			scanf("%f", &data->testMarks[i]);
			sum = sum + data->testMarks[i];
			printf("\n");
	}
	data->averageMarks = sum/5.0;
	printf("Average of Marks of Students %d: %.2f\n", counter, data->averageMarks);
	counter++;
	sumAverage = sumAverage + data->averageMarks;
	displayGrade(data->averageMarks);
}
void displayGrade(float grade)
{
	if(grade>=90.0)
	{
		printf("\tGrade = A\n");
	}
	else if(grade >= 80.0)
	{
		printf("\tGrade = B\n");
	}
	else if(grade >= 70.0)
	{
		printf("\tGrade = C\n");
	}
	else if(grade >= 60.0)
	{
		printf("\tGrade = D\n");
	}
	else printf("\tFail\n");
}
