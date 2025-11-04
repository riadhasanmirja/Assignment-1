
#include <stdio.h>

int main()
{
    int a;
    int b;
    
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int product = a * b;
    printf("Product is %d\n", product);

    return 0;
}
