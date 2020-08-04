#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void     ft_display(char nb1, char nb2, char nb3)
{
    ft_putchar(nb1);
    ft_putchar(nb2);
    ft_putchar(nb3);
    if (nb1 != '7')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void   ft_comb(void)
 {
    char chiffre1;
    char chiffre2;
    char chiffre3;

    chiffre3 = '0';
    while (chiffre3 <= '7')
    {
        chiffre1 = chiffre3 + 1;
        while (chiffre1 <= '8')
        {
            chiffre2 = chiffre1 + 1;
            while (chiffre2 <= '9')
            {
                ft_display(chiffre3, chiffre1, chiffre2);
                chiffre2 = chiffre2 + 1;
            }
            chiffre1 = chiffre1 + 1;
        }
        chiffre3 = chiffre3 + 1;
    }
    ft_putchar('\n');
}

int main()
{
    ft_comb();
    return(0);
}