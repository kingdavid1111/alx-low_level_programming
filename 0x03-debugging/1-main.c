#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        
	int i;

	positive_or_negative(i);

        printf("Infinite loop incoming :(\n");

        i = 0;

	  /**
        *{
        *    putchar(i = 0);
        *}
	  */

        printf("Infinite loop avoided! \\o/\n");

        return (0);

}

/* main_c */

