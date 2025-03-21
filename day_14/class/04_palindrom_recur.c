#include <stdio.h>
#include <math.h>

int reverseHelper(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }
    return reverseHelper(num / 10, rev * 10 + (num % 10));
}

int isPalindrome(int num)
{
    if (num < 0)
    {
        return 0; 
    }

    
    return num == reverseHelper(num, 0);
}

int main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    if (isPalindrome(input))
    {
        printf("%d is a palindrome.\n", input);
    }
    else
    {
        printf("%d is not a palindrome.\n", input);
    }

    return 0;
}