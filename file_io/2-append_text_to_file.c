#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file to append to
 * @text_content: NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int jp, len, nb;

if (filename == NULL)
{
return (-1);
}
jp = open(filename, O_APPEND | O_WRONLY);
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
