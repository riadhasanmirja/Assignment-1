#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int Quotient = a / b;
    printf("Quotient is %d\n", Quotient);

    int Remainder = a % b;
    printf("Remainder is %d\n", Remainder);

    return 0;
}
