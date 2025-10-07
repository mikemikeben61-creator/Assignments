/*
Name:NZISA MICHAEL MUSYOKA
Reg no:CT100/G/26226/25
Description:A program displaying the use of for loop to print numbers from 100 to 50
Date:04/10/2025
*/

#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    for(i=100;i>=50;i--)
    {
        printf("%d\n",i);
        sum =sum+i;
    }    
        printf("the sum is %d\n",sum);
        return 0;
}
