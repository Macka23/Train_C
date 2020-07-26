#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb1(void)
{
    char chiffre;

    chiffre = '0';
    while(chiffre <= '9')
    {
        ft_putchar(chiffre);
        if (chiffre != '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        chiffre = chiffre + 1;
    }
    ft_putchar('\n');
} 

int main(void)
{
    ft_print_comb1();
    return(0);
}