#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

typedef void (*printer_f)(va_list *ap);
/**
 * print_char - prints a char from a va_list
 * @ap: pointer to the argument list
 */
static void print_char(va_list *ap)
{
int c = va_arg(*ap, int);
printf("%c", c);
}
/**
 * print_int - prints an int from a va_list
 * @ap: pointer to the argument list
 */
static void print_int(va_list *ap)
{
int n = va_arg(*ap, int);
printf("%d", n);
}
/**
 * print_float - prints a float from a va_list
 * @ap: pointer to the argument list
 */
static void print_float(va_list *ap)
{
double f = va_arg(*ap, double);
printf("%f", f);
}
/**
 * print_string - prints a string from a va_list
 * @ap: pointer to the argument list
 */
static void print_string(va_list *ap)
{
char *s = va_arg(*ap, char *);
if (!s)
{
printf("(nil)");
return;
}
printf("%s", s);
}

/**
 * print_all - prints anything based on format
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0, j;
char *sep = "";
char types[] = {'c', 'i', 'f', 's', '\0'};
printer_f funcs[] = {print_char, print_int, print_float, print_string};

va_start(ap, format);
while (format && format[i])
{
j = 0;
while (types[j])
{
if (types[j] == format[i])
{
printf("%s", sep);
funcs[j](&ap);
sep = ", ";
break;
}
j++;
}
i++;
}
va_end(ap);
printf("\n");
}
