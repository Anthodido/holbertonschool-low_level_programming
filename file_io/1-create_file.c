#include "main.h"
/**
 * create_file - Creates a file and writes a string to it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int jp, len, nb;

if (filename == NULL)
{
return (-1);
}
jp = open(filename, O_CREAT| O_WRONLY | O_TRUNC, 0600);
if (jp == -1)
{
return (-1);
}
if (text_content == NULL)
{
close(jp);
return (1);
}
len = strlen(text_content);
nb = write(jp, text_content, len);

if (nb != len || nb == -1)
{
close(jp);
return (-1);
}
close(jp);
return (1);
}
