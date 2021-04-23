#include <stdio.h>

int     ft_strcount(char *str)
{
    int i = 0;

    while(str[i] != '\0')
        i++;
    return(i);
}

int     ft_strcmp(char *s1, char *s2)
{
    if(ft_strcount(s1) < ft_strcount(s2))
        return(-1);
    if(ft_strcount(s1) == ft_strcount(s2))
        return(0);
    if(ft_strcount(s1) > ft_strcount(s2))
        return(1);
}

int     main(void)
{
    char s1[12] = "koaefpoj";
    char s2[12] = "djkzppdd";

    printf("oui : %d\n", ft_strcmp(s1, s2));
    return(0);
}