/*
NAME:NZISA MICHAEL MUSYOKA
REG NO:CT100/G/26226/25
DESCRIPTION:A function to convertToCelsius that takes temperature in fahrenheit as input and returns the temperature in celsius using the formula: C = (F - 32) * 5/9 
DATE:17/10/2025
*/

#include<stdio.h>//printf and scanf

float convertToCelsius(float fahrenheit)
{
    float celsius;
    celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}
    int main()
    {
        float fahrenheit;
        float celsius;

        printf("Enter temperature in Fahrenheit:");
        scanf("%f",&fahrenheit);

        celsius = convertToCelsius(fahrenheit);
        printf("The temperature in celsius is: %.2f C\n", celsius);
        scanf("%f",&celsius);
        return 0;
    }