#include <stdio.h>

int main() {
    float population = 100000.0f;
    float rate = 0.10f;
    int year;

    for (year = 1; year <= 10; year++) {
        population = population * (1 + rate);
        printf("At end of year %d, population will be: %.2f\n", year, population);
    }

    return 0;
}
