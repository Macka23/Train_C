#include <stdlib.h>
#include <stdio.h>

int     ft_atoi(char *str)
{
    int result;
    int i;
    int neg;

    neg = 1;
    result = 0;
    i = 0;
    while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\n' || str[i] == '\n' 
    || str[i] == '\r' || str[i] == '\v'))
        i++;
    if (str[i] == '+')
        i++;
    if (str[i] == '-')
    {
        neg = -1;
        i++;
    }
    while (str[i] != '\0')
    {
        if (str[i] > '9' || str[i] < '0')
        {
            return (result * neg);
        }
        result = result * 10;
        result = result + (str[i] - '0');
        i++; 
    }
    return (result * neg);
}

int     main(void)
{
    char *str;

    str = "-+340sal\0";
    printf("ft_atoi = [%d]\n", ft_atoi(str));

    printf("atoi = [%d]\n", atoi(str));
    return (0);
}
// \t \f \n \r \v ' '