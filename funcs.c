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
 * print_integer - prints integer to output
 * @varg: arguement
 * Return: printed numbers
 */
int print_integer(va_list varg)
{
	int num = va_arg(varg, long int);
	int x = 1, temp, count = 0;

	if (num < 0) /* negatives */
	{
		if (num == INT_MIN) /* if int is minimum */
		{
			_putchar('-');
			_putchar(2 + 48);
			num = num % 2000000000;
			num *= -1;
			count += 2;
		}
		else
		{
			_putchar('-');
			num *= -1;
			count++;
		}
	}
	while ((num / x) > 9)
		x *= 10;

	for (; x >= 1; x /= 10)
	{
		temp = (num / x);
		_putchar(temp + 48);
		temp *= x;
		if (temp != 0)
		{
			num = num % temp;
		}
		count += 1;
		if (x == 1)
		return (count);
	}
	return (count);
}
