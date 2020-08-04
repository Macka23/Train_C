#include "colle.h"

void    ft_x_one(int x, int y)
{
    int i;

    i = 2;
    ft_putchar('A');
    ft_putchar('\n');
    while(i < y)
    {
        ft_putchar('B');
        ft_putchar('\n');
        i++;
    }
    if (y != 1)
    {
        ft_putchar('C');
        ft_putchar('\n');
    }
    return ;
}

void    ft_while_1(int x, int y, int *j, int i)
{
    while (j == y && y != 1)
    {
        if (i == 1)
            ft_putchar('C');
        if (i > 1 && i < x)
            ft_putchar('B');
        if (i == x)
        {
            ft_putchar('C');
            *j = *j + 1;
        }
        *i = *i + 1;
    }
}

void colle(int x, int y) //x  = 1 y = 5
{
    int i;
    int j;

    j = 1;
    i = 1;
    if (x == 1)
        return (ft_x_one(x, y));
    while (i <= x && j <= y)
    {
        if (i == 1)
            ft_putchar('A');
        if (i > 1 && i < x)
            ft_putchar('B');
        if (x != 1 && i == x)
        {
            ft_putchar('C');
            ft_putchar('\n');
            i = 0;
            j++;
        }
        i++;
        while (j > 1 && j < y)
        {
            if (i == 1 && x != 1)
                ft_putchar('B');
            if (i > 1 && i < x)
                ft_putchar(' ');
            if (i == x && x != 1)
            {
                ft_putchar('B');
                ft_putchar('\n');
                i = 0;
                j++;
            }
            i++;
        }
        //// new fonction
        ft_while_1(x, y, &j, &i);
        // while (j == y && y != 1)
        // {
        //     if (i == 1)
        //         ft_putchar('C');
        //     if (i > 1 && i < x)
        //         ft_putchar('B');
        //     if (i == x)
        //     {
        //         ft_putchar('C');
        //         j++;
        //     }
        //     i++;
        // }
        ////// end new fonction
    } 
}