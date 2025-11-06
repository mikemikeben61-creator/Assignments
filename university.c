/*
NAME: NZISA MICHAEL MUSYOKA
REG NO: CT100/G/26226/25
DESCRIPTION: A university stores student examination results in a binary file named results.dat. Each
record contains a student’s name, registration number, and total marks. Write a C program
that:
i. Defines a structure to hold the student information.
ii. Reads all student records from the binary file.
iii. Displays the name and marks of each student on the screen.
DATE: 3/11/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 100
#define MAX_REG_NO_LENGTH 20
#define FILENAME "results.dat"

struct Student {
    char name[MAX_NAME_LENGTH];
    char regNo[MAX_REG_NO_LENGTH];
    int totalMarks;
};
int main(){
    FILE *fptr;
    struct Student student;
    int n, i;

    fptr = fopen("C:\\Users\\USER\\Desktop\\MIKE programs\\results.dat","wb");
    printf("Enter number of students:");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++){
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        fgets(student.name, sizeof(student.name), stdin);
        student.name[strcspn(student.name, "\n")] = 0;

        printf("Registration numbers:");
        fgets(student.regNo, sizeof(student.regNo), stdin);
        student.regNo[strcspn(student.regNo, "\n")] = 0;
    
        printf("Total Marks:");
        scanf("%i", &student.totalMarks);
        getchar();
        
        fwrite(&student, sizeof(struct Student), 1, fptr);
        fread(&student, sizeof(struct Student), 1, fptr);

        printf("Student %d: Name: %s, Total Marks: %d\n", i + 1, student.name, student.totalMarks);
    
    
    }
    fclose(fptr);
    printf("\nBinary file '%s' created sucessfully.\n", FILENAME);
    return 0;
}



