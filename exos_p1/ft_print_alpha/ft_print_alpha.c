#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alph(void)
{
    char i;
    int lettre;

    lettre = 97;
    i = 0;
    i = i + 1;
    while(i <= 26)
    {
        ft_putchar(lettre);
        lettre = lettre + 1;
        i = i + 1;
    }
    ft_putchar('\n');
}    

int main (void)
{
    ft_print_alph();
    return(0);
}