#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A, B, C, D, or F): ");
    scanf(" %c", &grade);

    printf("You entered: %c\n", grade);

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'a' || grade == 'b' || grade == 'c' || grade == 'd') {
        printf("Congratulations! You are eligible for the next level\n");
    } else if (grade == 'F' || grade == 'f') {
        printf("Please try again next time\n");
    } else {
        printf("Invalid grade. Please enter a valid grade (A, B, C, D, or F)\n");
    }

    return 0;
}