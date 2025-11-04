#include <stdio.h>

int main()
{
    char Item[100];
    int Quantity;
    float Price;
    float Total;

    printf("Enter Item Name: ");
    scanf("%s", Item);

    printf("Enter Quantity: ");
    scanf("%d", &Quantity);

    printf("Enter Price per item: ");
    scanf("%f", &Price);

    Total = Quantity * Price;

    printf("\nItem: %s\n", Item);
    printf("Quantity: %d\n", Quantity);
    printf("Price per item: %f\n", Price);
    printf("Total: %f\n", Total);

    return 0;
}
