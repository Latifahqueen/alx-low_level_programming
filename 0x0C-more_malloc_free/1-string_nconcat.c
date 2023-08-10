#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -concatenates two strings.
 *@s1: the first string
 *@s2: the second string
 *@n:the size of the memory
 * Return: A pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
unsigned int len_s1 = 0;
unsigned int len_s2 = 0;
while (s1[len_s1] != '\0')
{
len_s1++;
}
while (s2[len_s2] != '\0' && len_s2 < n)
{
len_s2++;
}
char *result = (char *)malloc(len_s1 + len_s2 + 1);
if (results == NULL)
{
return (NULL);
{
unsigned int i = 0;
while (*s1 != '\0')
{
result[i++] = *s1++;
}
while (*s2 != '\0' && i < len_s1 + len_s2)
{
result[i++] = *s2++;
}
result[i] = '\0';
return (result);
}
