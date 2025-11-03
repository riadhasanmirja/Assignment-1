#include <stdio.h>

int main()
{
    int a;
    int b;
    
    printf ("Enter your 1st number :");
    scanf("%d",&a);
    printf ("Enter your 2nd number :");
    scanf("%d",&b);
    
    int sum = a+b;
    printf ("SUM is : %d\n",sum);
    
    int difference = a-b;
    printf ("Difference is : %d\n",difference);
    
    int product = a*b;
    printf ("Product is : %d\n",product);
    
    int quotient = a/b;
    printf ("Quotient is : %d\n",a/b);
    
    return 0;
}
