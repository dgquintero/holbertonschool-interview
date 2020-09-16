#include "palindrome.h"

/**
 * is_palindrome - checks whether or not a given unsigned integer is a palindrome
 *
 * @n: number to be checked
 *
 * Return: 1 if is palindrome and 0 otherwise
 */
int is_palindrome(unsigned long n)
{
    int revers = 0, remainder, originaln;
    if (n >= 0 && n <= 9)
        return (1);

    originaln = n;

    while (n != 0)
    {
        remainder = n % 10;
        revers = revers * 10 + remainder;
        n /= 10;
    }

    if (originaln == revers)
        return (1);
    else
        return 0;
}
