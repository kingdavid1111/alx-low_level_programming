#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;
	  positive_or_negative(i);
	  /**
        *{
        *    putchar(i);
        *}
	  */
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}

