#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_print_comb1(void)
 {
     char chiffre1;
     char chiffre2;
    chiffre2 = '1';
    chiffre1 = '0';
        while (chiffre1 <= '8')
        {
            while (chiffre2 <= '9')
            {
                ft_putchar(chiffre1);
                ft_putchar(chiffre2);
                if (chiffre1 != '8' || chiffre2 != '9')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                chiffre2 = chiffre2 + 1;
            }
            chiffre1 = chiffre1 + 1;
            chiffre2 = chiffre1 + 1;
        }
 }

int main()
{
    ft_print_comb1();
    return(0);
}