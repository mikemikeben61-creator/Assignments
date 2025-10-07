/*
Name:NZISA MICHAEL MUSYOKA
Reg no:CT100/G/26226/25
Decsription:A program displaying the use of while loop to print ATM balance
Date:04/10/2025
*/

#include<stdio.h>
int main(){
    int balance=1000;
    int withrawal;
    printf("Your current balance is %d\n",balance);

    while(balance>=0)
    {
        printf("Enter the amount to withdwal\n");
        scanf("%d",&withrawal);
        balance -=withrawal;
        printf("New balance is %d\n",balance);
    }
    printf("insufffient balance\n");
    return 0;
}





       



           
         
             



        

