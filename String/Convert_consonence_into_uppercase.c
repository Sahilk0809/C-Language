#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() 
{
    char input[50];//string declare

    printf("Enter a string : ");
    gets(input);//user input
    int len=strlen(input);
    int i;//loop counter

    for (i=0; input[i]!='\0'; i++)
    {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) 
        {
            if (!(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' ||
                  input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U')) 
                  {
                      // Convert consonant to uppercase
                      input[i] = toupper(input[i]);
                  }
        }
    }
    printf("String after converting consonants to uppercase: %s",input);
}
