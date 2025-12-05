#include <stdio.h>

int main() {
    int year, i;
    long total_days = 0;
    int day;

    printf("Enter year: ");
    scanf("%d", &year);

    for (i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            total_days += 366;
        else
            total_days += 365;
    }

    day = total_days % 7;

    if (day == 0)
        printf("Day on 1st January is Monday\n");
    else if (day == 1)
        printf("Day on 1st January is Tuesday\n");
    else if (day == 2)
        printf("Day on 1st January is Wednesday\n");
    else if (day == 3)
        printf("Day on 1st January is Thursday\n");
    else if (day == 4)
        printf("Day on 1st January is Friday\n");
    else if (day == 5)
        printf("Day on 1st January is Saturday\n");
    else
        printf("Day on 1st January is Sunday\n");

    return 0;
}
