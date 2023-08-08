#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* simple_print_buffer - prints buffer in hexa
* @buffer: the address of memory to print
* @size: the size of the memory to print
*
* Return: Nothing.
*/
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
_putchar(" ");
}
if  (!(i % 10) && i)
{
_putchar(n");
}
_putchar( buffer[i]);
i++;
}
_putchar("\n");
}

/**
* main - check the code for ALX School students.
*
* Return: Always 0.
*/
int main(void)
{
char *buffer;

buffer = create_array(98, 'H');
if  (buffer == NULL)
{
_putchar("failed to allocate memory\n");
return (1);
}
simple_print_buffer(buffer, 98);
free(buffer);
return (0);
}
