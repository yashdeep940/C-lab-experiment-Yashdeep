#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI = %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Category: Underweight\n");
    else if (bmi >= 18.5 && bmi <= 24.9)
        printf("Category: Normal\n");
    else if (bmi >= 25 && bmi <= 29.9)
        printf("Category: Overweight\n");
    else if (bmi >= 30 && bmi <= 39.9)
        printf("Category: Heavily obese\n");
    else
        printf("Invalid BMI, check your input!\n");

    return 0;
}
