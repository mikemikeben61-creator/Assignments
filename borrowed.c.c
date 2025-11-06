/*
NAME: NZISA MICHAEL MUSYOKA
REG NO: CT100/G/26226/25
DESCRIPTION: A program  allows the librarian to enter book titles and store each title in a text file named "borrowed_books.txt". The program should continue to prompt the librarian to enter book titles until they choose to stop. Each entered title should be appended to the file on a new line and the program should not delete existing when a new title is added.
DATE: 1/11/2025
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TITLE_LENGTH 100
#define FILENAME "borrowed_books.txt"

int main(){
    FILE *fptr;
    char bookTitle[MAX_TITLE_LENGTH];
    char choice;

    fptr = fopen("C:\\Users\\USER\\Desktop\\MIKE programs\\borrowed_books.txt","w");
    
    do{
        printf("Enter book title: ");
        fgets(bookTitle, sizeof(bookTitle), stdin);
        bookTitle[strcspn(bookTitle, "\n")] = 0;
        fprintf(fptr, "%s\n", bookTitle);
        printf("Do you want to add another book title? (y/n): ");
        choice = getchar();
        while(getchar() != '\n');
    }
    while(choice == 'y' || choice == 'Y');
    fclose(fptr);
    printf("Book titles have been saved to %s\n", FILENAME);
    return 0;
}





