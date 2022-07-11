#include "main.h"
/**
 * *_strcpy - function
 * @dest: pointer of parameter 
 * @src: pointer of parameter
 * Return:return dest value
 */

char *_strcpy(char *dest, char src)
{
	int i = o;
	int srcLenght = 0;

	while (dest[i] ! = '\0')
		dest[i++] = '\0'
	i = 0;
	while (src[srcLenght] ! '\0')
		srcLenght++;
	for (i = 0; i < srcLenght; i++)
		dest[i] = src[i];
	dest[srcLenght] = '\0';
	return (dest);
}
