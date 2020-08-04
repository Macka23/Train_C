#include <stdlib.h>
#include <stdio.h>

int     ft_atoi(char *str)
{
    int result;
    int i;

    result = 0;
    i = 0;
    while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\n' || str[i] == '\n' 
    || str[i] == '\r' || str[i] == '\v'))
    {
        if (str[i] != '-' || str[i] > '9' || str[i] < '0')
        {
            return (result);
        }
        result = result * 10;
        result = result + (str[i] - '0');
        i++;  
    }
    return (result);
}

int     main(void)
{
    char *str;

    str = "  852422suis\0";
    printf("ft_atoi = %d\n", ft_atoi(str));

    printf("atoi = %d\n", atoi(str));
    return (0);
}
// \t \f \n \r \v ' '