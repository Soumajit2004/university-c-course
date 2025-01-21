#include <stdio.h>

int main()
{

    int buying, discount, mrp;

    printf("Enter Buying price: ");
    scanf("%d", &buying);
    printf("Enter MRP price: ");
    scanf("%d", &mrp);
    printf("Enter discount in percentage: ");
    scanf("%d", &discount);

    printf("\n\n");

    float sellingPrice = mrp - mrp * (float)discount / 100;
    printf("Selling price: %.2f\n", sellingPrice);

    printf("Profit of seller: %.2f", sellingPrice - buying);

    return 0;
}