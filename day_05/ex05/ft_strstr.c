#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;

    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (to_find);
			}
			j++;
		}
		i++;
    }
    return(0);
}

int     main(void)
{
    char str[] = "854ouilok";
    char to_find[] = "oui";

    printf("%s est trouve dans str.", ft_strstr(str, to_find));
    return(0);
}