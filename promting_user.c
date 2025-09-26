//simple c program(Hello world)
/*
Name:NZISA MICHAEL MUSYOKA
Reg no:CT100/G/26226/25
Description:prompting user to enter height,phone number and weight
*/
#include<stdio.h>
int main(){
    int height,weight;
    char phone_number[20]; //string to hold phone number

    printf("Enter your height in cm:");
    scanf("%d",&height);

    printf("Enter your phone number:");
    scanf("%s",phone_number);

    printf("Enter your weight in kg:");
    scanf("%d",&weight);
    
    printf("Your height is %d cm\n",height);
    printf("Your phone number is %s\n",phone_number);
    printf("Your weight is %d kg\n",weight);
    return 0;
}






