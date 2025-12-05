#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;
    int per1, per2, per3, largest;

    printf("Enter length and breadth of 1st rectangle: ");
    scanf("%d%d", &l1, &b1);

    printf("Enter length and breadth of 2nd rectangle: ");
    scanf("%d%d", &l2, &b2);

    printf("Enter length and breadth of 3rd rectangle: ");
    scanf("%d%d", &l3, &b3);

    per1 = 2 * (l1 + b1);
    per2 = 2 * (l2 + b2);
    per3 = 2 * (l3 + b3);

    largest = (per1 > per2) ? ((per1 > per3) ? per1 : per3)
                            : ((per2 > per3) ? per2 : per3);

    printf("Largest perimeter = %d\n", largest);

    return 0;
}
