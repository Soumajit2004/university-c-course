#include <stdio.h>

int main()
{

    int totalMarks = 0;

    int i = 0;

    while (i < 5)
    {
        int m;

        printf("Enter marks of %dth subject: ", i + 1);
        scanf("%d", &m);

        if (m >=0 && m <= 100) {
            totalMarks = totalMarks + m;
            i++;
        }else{
            printf("Marks out of range\n");
        }
    }

    printf("Total percentage scored: %.2f", (float)((float)totalMarks / 500)*100);

    return 0;
}