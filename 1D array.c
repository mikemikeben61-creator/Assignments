/*
NAME: NZISA MICHAEL MUSYOKA
REG NO: CT100/G/26226/25
DESCRIPTION: 1D Array to store revenue data for a week and calculate total weekly revenue and average daily revenue.
DATE: 29/10/2025
*/

#include <stdio.h>
#define DAYS_IN_WEEK 7
int main(){
    float revenue[DAYS_IN_WEEK];
    float total_revenue = 0.0;
    float average_revenue;

    //input revenue data for each day
    for(int i = 0; i < DAYS_IN_WEEK; i++){
        printf("Enter revenue for a day %d: ", i+1);
        scanf("%f", &revenue[i]);
        total_revenue += revenue[i];
    }
    //calculate average revenue
    average_revenue = total_revenue / DAYS_IN_WEEK;

    //display total and average revenue
    printf("Total weekly revenue: %.2f\n", total_revenue);
    printf("Average daily revenue: %.2f\n", average_revenue);
    return 0;


}