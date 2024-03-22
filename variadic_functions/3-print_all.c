#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - check the code
 * @format: const char
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	const char *ptr = format;
	int printed;

	va_list args;
	va_start(args, format);
	printed = 0;
	while ((c = *ptr++) != '\0')
	{
		switch (c)
		{
			case 'c':
				i = va_arg(args, int);
				if (printed)
					printf(", ");
				printf("%c", i);
				printed = 1;
				break;
			case 'i':
				i = va_arg(args, int);
				if (printed)
					printf(", ");
				printf("%d", i);
				printed = 1;
				break;
			case 'f':
				f = (float)va_arg(args, double);
				if (printed)
					printf(", ");
				printf("%f", f);
				printed = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (printed)
					printf(", ");
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				printed = 1;
				break;
			default:
				continue;
		}
	}

	va_end(args);
	printf("\n");
}
