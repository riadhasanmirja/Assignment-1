#include <stdio.h>
int main()
{
    int a ;
    int b ;
    
    printf ("Enter your 1st value :");
    scanf ("%d",&a);
    
    printf ("Enter your 2nd value :");
    scanf ("%d",&b);
    
    int Calculation = (a+b)*(a-b);
    printf ("This equation result is : %d\n",Calculation);
    
    return 0;
}
