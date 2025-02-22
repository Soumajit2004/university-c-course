#include <stdio.h>

int main()
{

    char name[] = "SOUMAJIT GHOSH";

    for (int i = 1; i < sizeof(name); i++)
    {

        if (name[i] == ' ')
        {
            continue;
        }

        if (name[i - 1] != ' ')
        {
            name[i] = name[i] + 32;
        }
    }

    printf("Sentence Case: %s", name);

    return 0;
}