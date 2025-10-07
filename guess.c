/*
Name:NZISA MICHAEL MUYOKA
Reg no:CT100/G/26226/25
Description:A program to guess a number between 1-20 and also count and display the number of attempts it took the player to guess correctly
Date:04/10/2025
*/

#include<stdio.h>
int main(){
    int guess,number=15,attempts=0;
    printf("welcome to the number guessing game!\n");
    printf("i have selected a number between 1 and 20.\n");
    printf("can u guess what it is?\n");
    do{
        printf("enter your guess:\n");
        scanf("%d",&guess);
        attempts++;
        if(guess<number){
            printf("too low! try again.\n");
        }
        else if(guess>number){
            printf("too high! try again.\n");
        }
        else{
            printf("congratulations! you guessed the number %d correctly in %d attempts.\n",number,attempts);
        }
        }while(guess!=number);
        return 0;
        }

        

        
    
   








