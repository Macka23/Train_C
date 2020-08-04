#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}


int     main()
{
    char *str;
    int nb;

    str = "Salut\0";
    nb = ft_strlen(str);
    printf("\n%d\n", nb);
    return(0);
}