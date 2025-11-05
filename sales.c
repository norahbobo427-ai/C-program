/*
NAME:Norah Bancy Wambui Gacoki
REG:CT100/G/26156/25
Description:Program to store daily sales
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // i. Open the sales file for reading
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt file.\n");
        return 1;
    }

    // ii. Read all transactions and calculate total
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    // iii. Close the file
    fclose(file);

    // Display the total sales for the day
    printf("=================================\n");
    printf("Total Sales for the Day: $%.2f\n", total);
    printf("=================================\n");

    return 0;
}
