# include "main.h"
/**
 *main - print out main car by char
 *Description:uses the main header file
 *that contains the function _putchar
 *return: 0
 */

int main(void)
{
	char str[9] = "_putchar";
	int i;
	
	i = 0;
	while (str[i] < 8)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
