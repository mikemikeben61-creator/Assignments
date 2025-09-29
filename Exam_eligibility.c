/*
Name:NZISA MICHAEL MUSYOKA
Reg no:CT100/G/26226/25
Description:Exam eligibility program that checks if a student is eligible to sit for based on their attendance percentage and average marks
Date:29/09/2025
*/

#include<stdio.h>//printf(), scanf()
int main(){
    float attendance, average_marks;

    //promting the user to enter attendance percentage and average marks
    printf("Enter your attendance percentage:");
    scanf("%f", &attendance);
    
    printf("Enter your average marks:");
    scanf("%f", &average_marks);

    //checking if the student is eligible to sit for exams
    if(attendance>=75 && average_marks>=40)
    {
        printf("you are eligible to sit for exams\n");

    }
    else{
        printf("you are not eligible to sit for exams\n");
    }
    return 0;
}