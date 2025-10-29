/*
Name:Norah Bancy Wambui Gachoki
Reg:CT100/G/26156/25
Description: 2D array
*/


#include <stdio.h>

int main() {
    int z, p;
    int occupied, vacant;

    int occupancy[5][10] = {
        {1,1,1,1,1,0,0,0,0,0},
        {0,0,0,0,0,1,1,1,1,1},
        {1,1,0,0,1,1,0,0,1,0},
        {0,0,1,0,1,0,1,0,1,0},
        {1,0,1,0,1,0,1,0,1,1}
    };

    for (z = 0; z < 5; z++) {
        occupied = 0;
        vacant = 0;

        printf("Floor %d: ", z + 1);
        for (p = 0; p < 10; p++) {
            printf("%d ", occupancy[z][p]);
            if (occupancy[z][p] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("\nOccupied: %d | Vacant: %d\n\n", occupied, vacant);
    }

    return 0;
}
