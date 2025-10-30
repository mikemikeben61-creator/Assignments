/*
NAME: NZISA MICHAEL MUSYOKA
REG NO: CT100/G/26226/25
DATE: 29/10/2029
DESCRIPTION: A 2D array program to display occupancy status of rooms per floor in a hotel.
*/

#include <stdio.h>
#define FLOORS 5
#define ROOMS 10
int main(){
    int occupancy[FLOORS][ROOMS];
    int i, j;

    // Input occupancy status
    for(i = 0; i < FLOORS; i++){
        for(j =0; j < ROOMS; j++){
            printf("Enter occupancy status for floor %d, room %d (1 for occupied, 0 for vacant): ", i + 1, j+1);
            scanf("%d", &occupancy[i][j]); 
        }
    }
    // Display occupancy status
    printf("\nOccupancy status of the hotel:\n");
    for(i=0; i<FLOORS; i++){
        printf("Floor %d:", i+1);
        for(j=0; j<ROOMS; j++)
    {
            if(occupancy[i][j] == 1){
                printf("Room %d: Occupied\n", j+1);
            }
            else{
                printf("Room %d: Vacant\n", j+1);
            } 
         }  
         printf("\n");
        } 
        return 0;
    }       
    
    

