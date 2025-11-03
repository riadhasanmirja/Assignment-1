#include <stdio.h>
int main ()
{
    float a;
    float b;
    
    printf ("1st float number :");
    scanf ("%f",&a);
    
    printf ("2nd float number :");
    scanf ("%f",&b);
    
    float average = ((a+b)/2);
    printf ("Average Value is : %f\n",average);
    
    return 0;
}
