#include "main.h"
/**
* create_file -creates an array of chars, and initializes
*
* @text_content: is a NULL terminated string to write to the file
* @filename: is the name of the file to create
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int file, w, strlen = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[strlen])
strlen++;
}

file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(file, text_content, strlen);

if (file == -1 || w == -1)
return (-1);

close(file);

return (1);
}
