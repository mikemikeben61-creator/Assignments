/*
Name:NZISA MICHAEL MUSYOKA
Reg no:CT100/G/26226/25
Description:Loan qualification program that checks if a user qualifies or unable to qualify for a loan based on their age and income
Date:24/09/2025
*/

#include<stdio.h> //printf(), scanf()
int main(){
    int age;
    float income;

    //prompting the user to enter age and income
    printf("Enter your age in years:");
    scanf("%d", &age);
    printf("Enter your annual income in ksh:");
    scanf("%f", &income);

    //checking if the user qualifies for a loan
    if (age>=21 & income>=21000)
    {
        printf("you qualify for a loan\n");
    }
    else {
        printf("you dont qualify for a loan\n");}
        return 0;
    }
