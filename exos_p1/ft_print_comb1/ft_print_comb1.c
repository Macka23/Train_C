#include <unistd.h>

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
        ft_putchar('0');
        ft_putchar(chiffre);
        if (chiffre <= '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        chiffre = chiffre + 1;
    }
    chiffre = '0';
    while(chiffre <= '9')
    {
        ft_putchar('1');
        ft_putchar(chiffre);
        if (chiffre <= '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        chiffre = chiffre + 1;
    }
    chiffre = '0';
    while(chiffre <= '9')
    {
        ft_putchar('2');
        ft_putchar(chiffre);
        if (chiffre <= '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        chiffre = chiffre + 1;
    }
    chiffre = '0';
    while(chiffre <= '9')
    {
        ft_putchar('3');
        ft_putchar(chiffre);
        if (chiffre <= '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        chiffre = chiffre + 1;
    }
    chiffre = '0';
    while(chiffre <= '9')
    {
        ft_putchar('4');
        ft_putchar(chiffre);
        if (chiffre <= '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        chiffre = chiffre + 1;
    }
    chiffre = '0';
    while(chiffre <= '9')
    {
        ft_putchar('5');
        ft_putchar(chiffre);
        if (chiffre <= '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        chiffre = chiffre + 1;
    }
    chiffre = '0';
    while(chiffre <= '9')
    {
        ft_putchar('6');
        ft_putchar(chiffre);
        if (chiffre <= '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        chiffre = chiffre + 1;
    }
    chiffre = '0';
    while(chiffre <= '9')
    {
        ft_putchar('7');
        ft_putchar(chiffre);
        if (chiffre <= '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        chiffre = chiffre + 1;
    }
    chiffre = '0';
    while(chiffre <= '9')
    {
        ft_putchar('8');
        ft_putchar(chiffre);
        if (chiffre != '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        chiffre = chiffre + 1;
    }
}

int main()
{
    ft_print_comb1();
    return(0);
}