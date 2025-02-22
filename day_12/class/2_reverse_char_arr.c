#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "testcowtest";

    int high = strlen(name) - 1;
    int low = 0;

    while (low <= high)
    {
        char temp = name[low];
        name[low] = name[high];
        name[high] = temp;

        low++;
        high--;
    }

    printf("%s", name);

    return 0;
}