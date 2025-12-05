#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter first side: ");
    scanf("%d", &a);
    printf("Enter second side: ");
    scanf("%d", &b);
    printf("Enter third side: ");
    scanf("%d", &c);
    if(a+b>c && a+c>b && b+c>a) {
        printf("It is a triangle.\n");
    } else {
        printf("Not a triangle.\n");
    }
    return 0;
}
