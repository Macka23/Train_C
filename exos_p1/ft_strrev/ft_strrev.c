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

char    *ft_strrev(char *str)
{
    int i;
    char tmp;
    int j;

    j = 0;
    i = ft_strlen(str);
    i--;
    while (i > j)
    {
        tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
        i--;
        j++; 
    }

    return(str);
}

int main(){
    char i[] = "Bonjour";
    char *str;
    str = i;

    str = ft_strrev(str);

    printf("%s\n", str);
}