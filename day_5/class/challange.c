#include <stdio.h>

int main() {

    int input;
    scanf("%d", &input);
    
    char ans = (input % 2 == 0) ? 'e' : 'o';

    printf("%c", ans);

    return 0;
}