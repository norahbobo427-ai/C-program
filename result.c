/*
NAME:Norah Bancy Wambui Gacoki
REG:CT100/G/26156/25
Description:Program to store examination results
*/


#include <stdio.h>
#include <stdlib.h>


struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;

    
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error: Could not open results.dat file.\n");
        return 1;
    }

    printf("=== Student Examination Results ===\n\n");

    
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\n", s.name);
        printf("Registration No: %s\n", s.regNo);
        printf("Total Marks: %.2f\n", s.totalMarks);
        printf("-----------------------------\n");
    }

    fclose(file);
    return 0;
}
