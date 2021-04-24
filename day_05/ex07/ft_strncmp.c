#include <stdio.h>

int     ft_strcount(char *str, unsigned int n)
{
    int i = 0;

    while(str[i] != '\0' && i < n)
        i++;
    return(i);
}

int     ft_strcmp(char *s1, char *s2, unsigned int n)
{
    if(ft_strcount(s1, n) < ft_strcount(s2, n))
        return(-1);
    if(ft_strcount(s1, n) == ft_strcount(s2, n))
        return(0);
    if(ft_strcount(s1, n) > ft_strcount(s2, n))
        return(1);
}

int     main(void)
{
    char s1[] = "koaefpoj";
    char s2[] = "djkzppdd";
    unsigned int n = 3;

    printf("oui : %d\n", ft_strcmp(s1, s2, n));
    return(0);
}