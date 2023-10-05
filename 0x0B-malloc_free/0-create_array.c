#include "main.h"
#include <stdlib.h>

/**
 * create_array - creat an array of char & initializes it witha specific char
 * @size: the size of the array
 * @c: character to be assigned
 * Description: creat an array of char & initializes it witha specific char
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *ist;
	unsigned int z;

	ist = malloc(sizeof(char) * size);
	if (size == 0 || ist == NULL)
		return (NULL);
	for (z = 0; z < size; z++)
		ist[z] = c;
	return (ist);
}
