#include "main.h"
/**
 * main - entry point
 * Description: prints _putchar using putchar prototyoe
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar";
	itn ch;
	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	
	_putchar('\n');

	return (0);
}
