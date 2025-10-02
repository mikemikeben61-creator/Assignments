/*
Name:NZISA MICHAEL MUSYOKA
Reg no:CT100/G/26226/25
Description:A program displaying the cost of the purchase of bundles accordimg to options selected by the user using switch case 
Date:02/10/2025
*/

#include<stdio.h>//printf and scanf
int main()
{
    int option,quantity;
    float cost;
    printf("select the option of the bundle you want to purchase\n");
    printf("\t 1. 100mb for 50 KES");
    printf("\t 2. 500mb for 200 KES");
    printf("\t 3. 1GB for 350 KES");
    printf("\t 4. 2GB for 600 KES");
    scanf("%d",&option);

    printf("enter the quantity you want to purchasse\n");
    scanf("%d",&quantity);

    switch(option)
    {
        case 1:
            cost=50*quantity;
            printf("the cost of %d 100mb bundles is %.2f KES\n",quantity ,cost);
            break;
        case 2:
            cost=200*quantity;
            printf("the cost of %d 500mb bundles is %.2f KES\n",quantity ,cost);
            break;   
        case 3:
            cost=350*quantity;
            printf("the cost of %d 1GB bundles is %.2f KES\n",quantity ,cost);
            break;
        case 4:
            cost=600*quantity;
            printf("the cost of%d 2GB bundles is %.2f KES\n",quantity ,cost);
            break;
        default:
            printf("invalid option selection\n");
    }   
        return 0;
}

