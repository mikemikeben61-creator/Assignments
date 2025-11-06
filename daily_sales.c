/*
NAME: NZISA MICHAEL MUSYOKA
REG NO: CT100/G/26226/25
DESCRIPTIION: A small retail shop stores daily sales transactions in a file named sales.txt. Each line
contains the amount of a single transaction. Write a C program that:
i. Reads all transactions from the file.
ii. Calculates and displays the total sales for the day.
iii. Ensures the file is properly closed after reading.
DATE: 6/11/2025
*/

#include <stdio.h>
int main(){
    FILE *fptr;
    
        float amount;
    float total_sales=0.0;

    // open file for reading
    fptr = fopen ("C:\\Users\\USER\\Desktop\\MIKE programs\\sales.txt","r");

    // read each transaction amount and add the total on the file
    printf("enter the amount for a day:\n");
    scanf("%f", &amount);

    while(
     fscanf(fptr,"%f" ,&amount) == 1){
            total_sales += amount;
        }

    //display total sales for the day
    printf("total_sales for the day: %.2f\n",total_sales);
    scanf("%f",&total_sales);
    
    // close the file
    fclose(fptr);
    return 0;
}


