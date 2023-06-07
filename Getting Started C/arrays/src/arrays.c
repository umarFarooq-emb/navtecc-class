#include "arrays.h"

int main() {
    Class Students[3];
    int choice;
    strcpy(Students[0].name, "Umar");
    strcpy(Students[1].name, "Fahar");
    strcpy(Students[2].name, "Hassan");

    StudentData Umar = {23, 33};
    StudentData Fahar = {24, 85};
    StudentData Hassan = {23, 67};

    printf("\n\nStudents in the Class are...\n\n");

    for (int i=1; i <= 3; i++) {
        printf("%d: %s\n", i, Students[i-1].name);
    }

    printf("\n\nPlease enter the student number: ");
    scanf("%i", &choice);
    printf("\n\nValue is :%i", choice);
    
    switch (choice) {
        case 1: {
            printf("\n\nAge: %d\nMarks: %d", Umar.age, Umar.marks);
            break;
        }

        case 2: {
            printf("\n\nAge: %d\nMarks: %d", Fahar.age, Fahar.marks);
            break;
        }

        case 3: {
            printf("\n\nAge: %d\nMarks: %d", Hassan.age, Hassan.marks);
            break;
        }

        default: {
            printf("\n\nPlease enter the correct Student number...\n\nCode Terminated");
            break;
        }
    }
    return 0;
}