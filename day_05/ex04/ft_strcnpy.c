#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

int     main(void)
{
    unsigned int n;
    char dest[3] = "Non";
    char src[3] = "Oui";

    n = 2;
    ft_strncpy(dest, src, n);
    printf("ft_strncpy = %s\n", dest);
    return(0);
}