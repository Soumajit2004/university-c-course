#include <stdio.h>
#include <string.h>

int main()
{
    char stri[] = "test";

    int len = strlen(stri) - 1;

    char istri[len];

    for (int i = 0; i <= len; i++)
    {
        istri[i] = stri[len - i];
    }

    printf("%s", istri);

    return 0;
}