/**
 * _isdigit - checks if input is digit between 0 - 9
 *
 * @c: input
 *
 * REturn: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
