#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A, B, C, D, or F): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
        case 'a':
            printf("Excellent work!\n");
            break;
        case 'B':
        case 'b':
            printf("Well done\n");
            break;
        case 'C':
        case 'c':
            printf("Good job\n");
            break;
        case 'D':
        case 'd':
            printf("You passed, but you could do better\n");
            break;
        case 'F':
        case 'f':
            printf("Sorry, you failed\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

    return 0;
}