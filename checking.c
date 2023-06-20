/**
 * _isdigit - checks if the input a number between 0 and 9
 * @c: the input
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
