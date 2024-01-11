#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student
{
	int stu_id;	
	char stu_name[50];	
	int stu_age;	
	char stu_course[50];	
	char stu_city[20];	
	int stu_standard;
	char stu_school[30];		
};

void main()
{
	char stu_name[50],stu_course[50],stu_city[20],stu_school[30];
	struct Student student[3];
	int i;
	
	for(i=0; i<3; i++)
	{
		printf("Student %d\n",i+1);
		printf("Enter your ID : ");
		scanf("%d",&student[i].stu_id);
		
		printf("Enter your Name : ");
		scanf("%s",&student[i].stu_name);
		strcpy(stu_name,stu_name);
		
		printf("Enter your age : ");
		scanf("%d",&student[i].stu_age);
		
		printf("Enter your Course : ");
		scanf("%s",&student[i].stu_course);
		strcpy(stu_course,stu_course);
		
		printf("Enter your city : ");
		scanf("%s",&student[i].stu_city);
		strcpy(stu_city,stu_city);
		
		printf("Enter Your standard : ");
		scanf("%d",&student[i].stu_standard);
		
		printf("Enter Your school : ");
		scanf("%s",&student[i].stu_school);
		strcpy(stu_school,stu_school);
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
		printf("ID : %d\n",student[i].stu_id);
		printf("Name : %s\n",student[i].stu_name);
		printf("Age : %d\n",student[i].stu_age);
		printf("Course : %s\n",student[i].stu_course);
		printf("City : %s\n",student[i].stu_city);
		printf("Standard : %d\n",student[i].stu_standard);
		printf("School : %s\n\n",student[i].stu_school);
	}
}