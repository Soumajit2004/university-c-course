#include <stdio.h>
#include <string.h>

int main()
{
    char fullName[] = "Soumajit Ghosh";
    int freq[256] = {0};

    for (int i = 0; i < strlen(fullName); i++)
    {
        freq[(unsigned char)fullName[i]]++;
    }

    printf("Frequencies:\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}