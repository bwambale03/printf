#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints anything
 * @format: a foamt of arguments passed to the function
 * Return: count of printed characters.
 */

int _printf(const char *format, ...)
{
        va_list args;
        int count = 0;
        int i;
        char *xter;

        va_start(args, format);

        for (i = 0; format[i]; i++)
        {
                if (format != NULL)
                {
                        if (format[i] == 'c')
                        {
                                printf("%c", va_arg(args, int));
                                count++;
                        }
                        else if (format[i] == 's')
                        {
                                xter = va_arg(args, char *);
                                printf("%s", xter);
                                count++;
                        }
                }
                printf("\n");
        }
        return (count);
        va_end(args);
}

