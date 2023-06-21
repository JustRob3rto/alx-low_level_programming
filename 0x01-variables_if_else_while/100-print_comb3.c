#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits
 * separated by a comma and a space.
 * The two digits must be different.
 * 01 and 10 are considered the same combination of the two digits 0 and 1.
 * Only the smallest combination of two digits is printed.
 * Numbers are printed in ascending order, with two digits.
 * Only the putchar function is used (other functions like printf, puts, etc. are forbidden).
 * putchar is used a maximum of five times.
 * No variables of type char are used.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int first_digit, second_digit;

	for (first_digit = 0; first_digit <= 8; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= 9; second_digit++)
		{
			putchar((first_digit % 10) + '0');
			putchar((second_digit % 10) + '0');

			if (!(first_digit == 8 && second_digit == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return 0;
}

