#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score (out of 100): ");
    scanf("%d", &score);

    grade = (score >= 80)? 'A' :
            (score >= 70)? 'B' :
            (score >= 60)? 'C' :
            (score >= 50)? 'D' :
            'F';

    printf("Your grade is: %c\n", grade);

    return 0;
}