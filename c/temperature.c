#include<stdio.h>
int main() {
    int choice;
    double temp, result;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%lf", &temp);

    if (choice == 1) {
        result = (temp * 9.0 / 5.0) + 32.0;
        printf("%.2f C = %.2f F\n", temp, result);
    } else if (choice == 2) {
        result = (temp - 32.0) * 5.0 / 9.0;
        printf("%.2f F = %.2f C\n", temp, result);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}