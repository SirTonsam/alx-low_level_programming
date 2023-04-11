/**
 * a function that checks the endianness.
 * Return: 1 if little endian or 0 if big endian
*/
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (b[0]);
}
