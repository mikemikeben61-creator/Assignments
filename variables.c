/*
Name:NZISA MICHAEL MUSYOKA
Reg no:CT100/G/26226/25
Description:Promptingg the user to enter heght and radius of a cylinder and calculating its volume and surface area
Date:24/09/2025
*/

#include<stdio.h> //printf(), scanf()
int main(){
    float radius, height, volume, surface_area, pi=3.142;

    //prompting the user to enter height and radius
    printf("Enter the radius of the cylinder:");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder:");
    scanf("%f", &height);

    //calculating volume and surface area
    volume=pi*radius*radius*height;
    surface_area=2*pi*radius*radius+2*pi*radius*height;

    //displaying the results
    printf("The volume of the cylinder is %.2f\n",volume);
    printf("The surface area of the cylinder is %.2f\n",surface_area);
    return 0;
}