#include <stdio.h>

int main()
{
    int a;
    int b;
    
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    int division = a / b;
    printf("Integer Division is %d\n", division);
    
    float x;
    float y;
    
    printf("Enter first float: ");
    scanf("%f", &x);

    printf("Enter second float: ");
    scanf("%f", &y);

    float divisionf = x / y;
    printf("Floating Division is %f\n", divisionf);
    
    return 0;
}
