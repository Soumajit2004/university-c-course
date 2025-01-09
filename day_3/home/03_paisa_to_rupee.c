#include <stdio.h>

int main() {

    int paisa;

    printf("Enter amount in paisa: ");
    scanf("%d", &paisa);

    int rupee = paisa / 100;
    int rPaisa = paisa % 100;

    printf("%d paisa = %d rupees and %d paisa", paisa, rupee, rPaisa);

    return 0;
}