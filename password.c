/*
Name:NZISA MICHAEL MUYOKA
Reg no:CT100/G/26226/25
Description:A program for do while that prompts user for the  password until the correct one is entered
*/

#include<stdio.h>
int main(){
    int password;
    int correct_password=1234;
    do
    {
        printf("Enter the password\n");
        scanf("%d",&password);
    }
    while(password!=correct_password);
    printf("Acess granted\n");
    return 0;  
}


       
