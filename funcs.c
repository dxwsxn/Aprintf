#include "main.h"
/**
 * print_ec - Prints spec char such as '%' and '!', the edge case
 * @c: character after %
 * Return: Returns number based on input
 */
int print_ec(char c)
{
	if (c == '\0') /*If single %*/
		return (-1);
	else if (c == '%') /*If %%*/
	{
		_putchar('%');
		return (1);
	}
	else
	{
		_putchar('%'); /*If % and other char*/
		_putchar(c);
		return (2);
	}
	return (0);
}

/**
 * print_string - Prints a string to the output
 * @varg: Arguments used in function
 * Return: Returns a count to the main function
 */
int print_string(va_list varg)
{
	char *str = va_arg(varg, char *);
	int i = 0, count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i])  /*Cycle through string printing letter by letter*/
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}

/**
 * print_char - Prints a character to the output
 * @varg: Arguments used in the function
 * Return: Returns a count to the main function
 */
int print_char(va_list varg)
{
	char c = va_arg(varg, int);

	_putchar(c); /*Print a single char*/
	return (1);
}
/**
 * print_integer - prints integer to the output
 * @arg: number of arg
 * @printed_nums: the printed number
 *
 * Return: printed numbers
 */
int print_integer(vargs, int printed_nums)
{
	int num = va_arg(args, int);
	int divisor = 1;
	int temp = num;
	int digit;

	if (num < 0) /* dealing with negatives */
	{
		putchar('-');
		num = -num;
	}
	if (temp = num)
	{
		while (temp > 9) /* determines how big the number is */
		{
			temp /= 10; /*divides by 10 moving to the next place */
			divisor *= 10; /*keeps track of place value */
		}
		while (divisor != 0) /* prints the digits if they are there */
		{
			int digit = num / divisor; /*calculates the place value */
			putchar('0' + digit); 
			num %= divisor; /* what is left of digit */
			divisor /= 10;
		}
	}
	return (printed_nums);
}
