//create a struct Complex Number , and multiply and print the complex no.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



typedef struct {
    float real;
    float imag;
} ComplexNumber;


ComplexNumber multiply_complex(ComplexNumber c1, ComplexNumber c2) {
    ComplexNumber result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

int main() {
    ComplexNumber c1, c2, result;

    printf("Enter the real and imaginary parts of the first complex number (a + bi): ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter the real and imaginary parts of the second complex number (c + di): ");
    scanf("%f %f", &c2.real, &c2.imag);

    result = multiply_complex(c1, c2);

    printf("Result of multiplication: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}