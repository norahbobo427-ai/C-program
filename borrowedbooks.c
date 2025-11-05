/*
NAME:Norah Bancy Wambui Gacoki
REG:CT100/G/26156/25
Description:Program to enter and store booktiltles
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[200];
    char choice;

    
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("=== Library Borrowed Books Recorder ===\n");

    do {
        printf("\nEnter book title: ");

        fflush(stdin); 
        fgets(title, sizeof(title), stdin);

        
        fprintf(file, "%s", title);

        printf("Book title successfully stored!\n");

        printf("Do you want to enter another title? (y/n): ");
        scanf(" %c", &choice);
        getchar(); 

    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("\nAll entries have been saved to borrowed_books.txt.\n");

    return 0;
}
