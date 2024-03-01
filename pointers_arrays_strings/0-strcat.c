#include"main.h"
/**
 * _strcat - check the code                                                                                    *
 *                                                                                                            * Return: Always char.                                                                                        */
char *_strcat(char *dest, char *src)
{
        int i = 0;
        int j = 0;
        char *res = dest;

        while(dest[i] != '\0')
        {
               res = res + dest[i];
                i++;
        }
        while (src[j])
        {
                res = res + src[j];
                j++;
        }
       res = res + '\0';
        return (res);
}
