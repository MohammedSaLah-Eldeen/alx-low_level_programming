#include "main.h"

/**
* read_textfile - Reads a text file and prints it to POSIX stdout.
* @filename: A pointer to the name of the file.
* @letters: The number of letters the
*           function should read and print.
*
* Return: If the function fails or filename is NULL - 0.
*         O/w - the actual number of bytes the function can read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t num_letters, written_letters;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = (char *) malloc(letters);
if (buffer == NULL)
return (0);

num_letters = read(fd, buffer, letters);
if (num_letters = -1)
{
free(buffer);
return (0);
}


written_letters = write(STDOUT_FILENO, buffer, num_letters);
if (written_letters = -1 || written_letters < num_letters)
{
free(buffer);
return (0);
}

free(buffer);
close(fd);

return (written_letters);
}
