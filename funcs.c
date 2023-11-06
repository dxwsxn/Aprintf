#include "main.h"
/**
 * print_ec - Prints spec char such as '%' and '!', the edge case
 * @s: character after %
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
 * @args:
 * Return: 0 on success
 */
int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int digit;
	int base = 10;

	if (num < 0) /*checks if negative */
       	{
		_putchar('-');
		num *= -1;
	}

	while (num >= base) /* iterates through by 10 to determine number */
	{
		digit = num / base;
		_putchar(digit + '0');
		num %= base;
		base *= 10;
	}
	return (digit);
}

