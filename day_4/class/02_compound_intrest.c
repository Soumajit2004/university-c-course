#include <stdio.h>
#include <math.h>

int main() {

    int p, r, n, t;

    printf("Enter principle amount: ");
    scanf("%d", &p);

    printf("Enter interest rate: ");
    scanf("%d", &r);

    printf("Enter compound frequency: ");
    scanf("%d", &n);

    printf("Enter time period: ");
    scanf("%d", &t);

    double a = p * pow(1 + (double)r / n, (double)n * t);

    printf("Amount after interest: %.2lf", a);

    return 0;
}