#include <stdio.h>
#include <string.h>

int main()
{

    char firstName[] = "Soumajit";
    char lastName[] = "Ghosh";

    char fullName[strlen(firstName) + strlen(lastName) + 1];

    for (int i = 0; i < strlen(firstName); i++)
    {
        fullName[i] = firstName[i];
    }

    fullName[strlen(firstName)] = ' ';

    for (int i = strlen(firstName) + 1; i < strlen(firstName) + strlen(lastName) + 1; i++)
    {
        fullName[i] = lastName[i - strlen(firstName) - 1];
    }

    printf("Full Name: %s", fullName);

    return 0;
}