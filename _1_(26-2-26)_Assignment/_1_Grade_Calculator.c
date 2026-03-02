#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float totalMarks, percentage;
    char grade;

    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", 
          &subject1, &subject2, &subject3, &subject4, &subject5);

    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = totalMarks / 5.0;

    grade = (percentage >= 75) ? 'A' :
            (percentage >= 60) ? 'B' :
            (percentage >= 45) ? 'C' : 'F';

    printf("\n----- Result -----\n");
    printf("Subject 1: %.2f\n", subject1);
    printf("Subject 2: %.2f\n", subject2);
    printf("Subject 3: %.2f\n", subject3);
    printf("Subject 4: %.2f\n", subject4);
    printf("Subject 5: %.2f\n", subject5);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}