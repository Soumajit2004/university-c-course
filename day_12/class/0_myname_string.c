#include <stdio.h>

int main()
{
    char name[] = "Soumajit Ghosh";

    int conso = 0;
    int vowel = 0;

    for (int i = 0; i < sizeof(name); i++)
    {
        char c = name[i];

        if (c == ' ')
        {
            continue;
        }
        else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vowel++;
        }
        else
        {
            conso++;
        }
    }

    printf("No of consonents: %d \nNo of vowels: %d", conso, vowel);

    return 0;
}