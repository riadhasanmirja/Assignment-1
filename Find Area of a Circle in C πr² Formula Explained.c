#include <stdio.h>
int main ()
{

int r;
float pi = 3.1416;

printf("Radius is:");
scanf("%d",&r);
printf("Pi is %f\n",pi);

float area = pi*r*r;
printf("Area is %f", area);

return 0;
}
