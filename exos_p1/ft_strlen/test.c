#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        ft_putchar(str[i]);
        i++;
    }
    
    printf("\n");
    
    return (i);
}


int main()
{
    char *str;
    int j;

    str = "Je m'appelle\0";
   
    j = ft_strlen(str);
    printf("%d \n",j);
    
    return(0);
}






