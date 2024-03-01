#include"main.h"
/**
 * _strcat - check the code
 *
 * Return: Always dest.
 */
char *_strcat(char *dest, char *src)
{
        int i  = 0;
        int j = 0;

        while(dest[i])
        {
               i++;
        }
        while ( src[j])
        {
                dest[i] = src[j];

		i++;
                j++;
        }
        return (dest);
}
