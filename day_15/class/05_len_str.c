#include <stdio.h>

int string_length(const char *str)
{
    const char *ptr = str;
    int length = 0;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    return length;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *newline = str;
    while (*newline != '\0')
    {
        if (*newline == '\n')
        {
            *newline = '\0';
            break;
        }
        newline++;
    }

    int length = string_length(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}