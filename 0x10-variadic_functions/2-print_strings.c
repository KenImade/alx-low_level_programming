
/**
 * print_strings - prints all arguments
 *
 * @separator: character to separate printed arguments
 * @n: number of arguments
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *c;

	va_list ap;

	va_start(ap, n);

	if (!separator)
		return;

	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char*);
		printf("%s%s", c == NULL ? "(nil)" : c, i != (n - 1) ? separator : "");
	}

	va_end(ap);
	putchar('\n');

}
