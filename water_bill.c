/*
Name:NZISA MICHAEL MUSYOKA
Reg no:CT100/G/26226/25
Description:Water bill calculation program that computes the total water bill based on the number of units consumed and applies difference rates for different consumption slabs
Date:29/09/2025
*/

#include<stdio.h>//printf(), scanf()
int main(){
    int units;
    float bill_amount;
    float total_bill_amount;

   //promting the user to enter the number of units consumed
    printf("Enter the number of units consumed:");
    scanf("%d", &units);

    //calculating the water bill based on the number of units consumed
    if(units<=30)
    {
        bill_amount=units*20.00;
        printf("your water bill is ksh %.2f\n", bill_amount);
    }
    else if(units >30 && units <= 60)
    {
        bill_amount=(units*25.00);
        printf("your water bill is ksh %.2f\n", bill_amount);
    }
    else if(units>60)
    {
        bill_amount=(units*30.00);
        printf("your water bill is ksh %.2f\n", bill_amount);
    }
    
    //displaying the total water bill
    total_bill_amount=units*20.00 + units*25.00 + units*30.00;
    printf("your total bill_amount is ksh %.2f\n", total_bill_amount);
    return 0;
}
