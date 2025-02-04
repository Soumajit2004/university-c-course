#include <stdio.h>

int main()
{
    printf("Enter a character: ");
    char input = getchar();

    switch (input)
    {
    case 'a':
        printf("a is vowel");
        break;

    case 'e':
        printf("e is vowel");
        break;

    case 'i':
        printf("i is vowel");
        break;

    case 'o':
        printf("o is vowel");
        break;

    case 'u':
        printf("u is vowel");
        break;

    default:
        printf("%c is consonant", input);
        break;
    }

    return 0;
}