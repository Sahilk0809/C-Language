#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Employee
{
	int emp_id;	
	char emp_name[50];	
	int emp_age;	
	char emp_role[50];	
	char emp_city[50];	
	int emp_experience;
	char emp_company_name[50];		
};

void main()
{
	char a[50],b[50],c[50],d[50];
	int n;//number of employees
	printf("Enter the number of employees : ");
	scanf("%d",&n);//user input
	struct Employee employee[n];
	int i;//loop counter
	
	for(i=0; i<n; i++)
	{
	    //user input of details of employees
		printf("\nEmployee %d\n",i+1);
		printf("Enter your ID : ");
		scanf("%d",&employee[i].emp_id);
		
		printf("Enter your Name : ");
		scanf(" %[^\n]employee",&a);
		strcpy(employee[i].emp_name,a);
		
		printf("Enter your age : ");
		scanf("%d",&employee[i].emp_age);
		
		printf("Enter your role : ");
		scanf(" %[^\n]employee",&b);
		strcpy(employee[i].emp_role,b);
		
		printf("Enter your city : ");
		scanf(" %[^\n]employee",&c);
		strcpy(employee[i].emp_city,c);
		
		printf("Enter Your experience : ");
		scanf("%d",&employee[i].emp_experience);
		
		printf("Enter Your company name : ");
		scanf(" %[^\n]employee",&d);
		strcpy(employee[i].emp_company_name,d);
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
	    //print details of employees
		printf("ID : %d\n",employee[i].emp_id);
		printf("Name : %s\n",employee[i].emp_name);
		printf("Age : %d\n",employee[i].emp_age);
		printf("Role : %s\n",employee[i].emp_role);
		printf("City : %s\n",employee[i].emp_city);
		printf("Experience : %d\n",employee[i].emp_experience);
		printf("Company Name : %s\n\n",employee[i].emp_company_name);
	}
}
