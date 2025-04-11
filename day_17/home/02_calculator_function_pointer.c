#include <stdio.h>

// Function prototypes
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }

int main() {
    float a, b;
    char op;
    float (*calc)(float, float);
    
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    
    printf("Enter operation (+,-,*,/): ");
    scanf(" %c", &op);
    
    // Select function pointer based on operation
    switch(op) {
        case '+': calc = add; break;
        case '-': calc = subtract; break;
        case '*': calc = multiply; break;
        case '/': 
            if(b == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            calc = divide; 
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }
    
    // Call function through pointer
    printf("%.2f %c %.2f = %.2f\n", a, op, b, calc(a, b));
    
    return 0;
}