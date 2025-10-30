/*
NAME: NZISA MICHAEL MUSYOKA
REG NO: CT100/G/26226/25
DESCRIPTION: A 3D array to calculate and display the total number of occupied rooms across all branches of a hotel.
*/

#include <stdio.h>
#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10
int main(){
    int occupancy[BRANCHES][FLOORS][ROOMS];
    int i, j, k;
    int totalOccupied = 0;

    // Input occupancy data
    for(i = 0; i < BRANCHES; i++){
        printf("Enter occupancy data for Branch %d:\n", i + 1);
        for(j = 0; j < FLOORS; j++){
            printf("Floor %d:\n", j+1);
            for(k = 0; k < ROOMS; k ++){
                printf("Room %d (1 for occupied, 0 for vacant): ", k + 1);
                scanf("%d", &occupancy[i][j][k]);
            }
        }
    }
    // calculate total occupied rooms
    for(i = 0; i < BRANCHES; i++){
        for(j = 0; j < FLOORS; j++){
            for(k = 0; k < ROOMS; k++){
                totalOccupied += occupancy[i][j][k];
            }
        }
    }    
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);
    return 0;
}