#include<stdio.h>
#include<string.h>

struct Car
{
    int car_id,day;
    char car_model[50];
    float car_rent_perday;
};

void main()
{
    int n,i;
    printf("Enter the number of cars : ");
    scanf("%d",&n);
    struct Car car[n];
    float car_rent;
    char a[50];
    
    printf("\n");
    for(i=0; i<n; i++)
    {
        //details of cars
        printf("Details of car%d\n",i+1);
        printf("Enter car id : ");
        scanf("%d",&car[i].car_id);
        printf("Enter car model : ");
        scanf(" %[^\n]",a);
        strcpy(car[i].car_model,a);
        printf("Car rent perday : ");
        scanf("%f",&car[i].car_rent_perday);
        printf("How many days you rented a car : ");
        scanf("%d",&car[i].day);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        //car details printed with overall rent
        printf("Car%d\n",i+1);
        printf("Car ID : %d\n",car[i].car_id);
        printf("Car model : %s\n",car[i].car_model);
        car_rent = car[i].day * car[i].car_rent_perday;
        printf("Car rent : %.2f\n\n",car_rent);
    }
}