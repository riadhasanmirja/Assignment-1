#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    
    printf("Enter your 1st value :");
    scanf("%d",&a);
    
    printf("Enter your 2nd value :");
    scanf("%d",&b);
    
    printf("Enter your 3rd value :");
    scanf("%d",&c);
    
    int Sum = a+b+c;
    printf("Sum is :%d",Sum);
    
    return 0;
}
