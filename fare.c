/*
NAME:NZISA MICHAEL MUSYOKA
REG NO:CT100/G/26226/25
DESCRIPTION:A function to calculate fare based on distance travelled in kilometers as input and returns the total fare assuming the fare rate is ksh.50 per kilometre.
DATE:17/10/2025
*/

#include<stdio.h>//printf and scanf
float calculateFare(int distance)
{
    float fare;
    fare = distance * 50;
    return fare;
}
    int main(){
        int distance;
        float totalFare;
        
        printf("Enter the distance travelled in kilometres:");
        scanf("%d",&distance);

        totalFare = calculateFare(distance);

        printf("The total fare is: %.2f Ksh\n", totalFare);
        scanf("%f",&totalFare);
        return 0;
    }     

