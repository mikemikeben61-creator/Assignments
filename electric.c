/*
NAME:NZISA MICHAEL MUSYOKA
REG NO:CT100/G/26226/25
DESCRIPTION:A function to calculate electric bill that takes the number of units consumed as input and returns the total bill amount based on the following rates:
for the first 100 units: ksh.10 per unit
for the next 100 units: ksh.15 per unit
Above 200 units: ksh.20 per unit
DATE:17/10/2025
*/

#include<stdio.h>//printf and scanf

float calculateElectricBill(int units)
{
    float billAmount;

    if (units <=100)
    {
        billAmount = units * 10;
    }
    else if(units <=200)
    {
        billAmount = (100 * 10) + ((units - 100) * 15);
    }
    else
    {
        billAmount = (100 * 10) + (100 * 15) + ((units -200) * 20);
    }
    return billAmount;
}
    int main(){
        int units;
        float totalBill;

        printf("Enter the number of units consumed:");
        scanf("%d",&units);

        totalBill = calculateElectricBill(units);
        printf("The total electric bill amount is: %.2f Ksh\n", totalBill);
        scanf("%f",&totalBill);
        return 0;
    }