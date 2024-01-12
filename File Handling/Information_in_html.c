#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *htmlfile;
	htmlfile = fopen("index.html","w");
	
	char name[50],city[50],gender[10];
	int age;
	printf("Enter your name : ");
	scanf(" %[^\n]",name);
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	printf("Enter your gender : ");
	scanf(" %[^\n]",gender);
	
	printf("Enter your city : ");
	scanf(" %[^\n]",city);
	
	fprintf(htmlfile,"<html>");
	fprintf(htmlfile,"<head>");
	fprintf(htmlfile,"<title>");
	fprintf(htmlfile,"My Information");
	fprintf(htmlfile,"</title>");
	fprintf(htmlfile,"</head>");
	fprintf(htmlfile,"<style>");
	fprintf(htmlfile,"body{background-color : black; color : white;}");
	fprintf(htmlfile,"</style>");
	fprintf(htmlfile,"<body><center>");
	fprintf(htmlfile,"<h1> Name : %s</h1>\n",name);
	fprintf(htmlfile,"<h2> Age : %d<h2>\n",age);
	fprintf(htmlfile,"<h2> Gender : %s</h2>\n",gender);
	fprintf(htmlfile,"<h2> City : %s<h2>\n",city);
	fprintf(htmlfile,"</center><body>");
	fprintf(htmlfile,"</html>");
}