#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student
{
	int stu_id;	
	char stu_name[50];	
	int stu_age;	
	char stu_course[50];	
	char stu_city[50];	
	int stu_standard;
	char stu_school[50];		
};

void main()
{
	char a[50],b[50],c[50],d[50];
	struct Student student[3];
	int i;//loop counter
	
	for(i=0; i<3; i++)
	{
	    //student details user input
		printf("Student %d\n",i+1);
		printf("Enter your ID : ");
		scanf("%d",&student[i].stu_id);
		
		printf("Enter your Name : ");
		scanf(" %[^\n]s",&a);
		strcpy(student[i].stu_name,a);
		
		printf("Enter your age : ");
		scanf("%d",&student[i].stu_age);
		
		printf("Enter your Course : ");
		scanf(" %[^\n]s",&b);
		strcpy(student[i].stu_course,b);
		
		printf("Enter your city : ");
		scanf(" %[^\n]s",&c);
		strcpy(student[i].stu_city,c);
		
		printf("Enter Your standard : ");
		scanf("%d",&student[i].stu_standard);
		
		printf("Enter Your school : ");
		scanf(" %[^\n]s",&d);
		strcpy(student[i].stu_school,d);
		printf("\n");
	}
	printf("\n");
	for(i=0; i<3; i++)
	{
	    //print student details
		printf("ID : %d\n",student[i].stu_id);
		printf("Name : %s\n",student[i].stu_name);
		printf("Age : %d\n",student[i].stu_age);
		printf("Course : %s\n",student[i].stu_course);
		printf("City : %s\n",student[i].stu_city);
		printf("Standard : %d\n",student[i].stu_standard);
		printf("School : %s\n\n",student[i].stu_school);
	}
}
