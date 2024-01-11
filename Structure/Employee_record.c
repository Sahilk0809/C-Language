#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Employee
{
	int emp_id;	
	char emp_name[50];	
	int emp_age;	
	char emp_role[50];	
	char emp_city[20];	
	int emp_experience;
	char emp_company_name[30];		
};

void main()
{
	char emp_name[50],emp_role[50],emp_city[20],emp_company_name[30];
	int n;
	printf("Enter the number of employees : ");
	scanf("%d",&n);
	struct Employee employee[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("\nEmployee %d\n",i+1);
		printf("Enter your ID : ");
		scanf("%d",&employee[i].emp_id);
		
		printf("Enter your Name : ");
		scanf("%s",&employee[i].emp_name);
		strcpy(emp_name,emp_name);
		
		printf("Enter your age : ");
		scanf("%d",&employee[i].emp_age);
		
		printf("Enter your role : ");
		scanf("%s",&employee[i].emp_role);
		strcpy(emp_role,emp_role);
		
		printf("Enter your city : ");
		scanf("%s",&employee[i].emp_city);
		strcpy(emp_city,emp_city);
		
		printf("Enter Your experience : ");
		scanf("%d",&employee[i].emp_experience);
		
		printf("Enter Your company name : ");
		scanf("%s",&employee[i].emp_company_name);
		strcpy(emp_company_name,emp_company_name);
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		printf("ID : %d\n",employee[i].emp_id);
		printf("Name : %s\n",employee[i].emp_name);
		printf("Age : %d\n",employee[i].emp_age);
		printf("Course : %s\n",employee[i].emp_role);
		printf("City : %s\n",employee[i].emp_city);
		printf("Standard : %d\n",employee[i].emp_experience);
		printf("School : %s\n\n",employee[i].emp_company_name);
	}
}