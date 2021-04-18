#include <stdio.h>

int  ft_check_queen(char tab[8][8], int i, int j)
{
	int x = 0;
	int y = 0;
  int diagonal = x + y;

	while (x++ < 8)
	{
	if (tab[x][j] == '1')
	  return (0);
	}

	while (y++ < 8)
		{
			if (tab[i][y] == '1')
	  	return (0);
	}
  while (diagonal <= 86)
  {
    if (tab[x][y] == '1')
      return(0);
    x++;
    y++;
  }
  return(1);
}


void  print_tabl(char tab[8][8]) // TEMP
{
int i = 0;
  int j;

  while (i < 8)
  {
    j = 0;
    while (j < 8)
    {
      printf("[%c]", tab[i][j]);
      j++;
    }
    i++;
    printf("\n");
  }
  printf("\n");
}

int ft_8_queens(char tab[8][8], int i, int j)
{
  int res = 0;
  int queen = 0;
  int start = 0;

  while (i < 8)
  {
    j = 0;
    while (j < 8)
    {
      if (tab[i][j] == '0' && (ft_check_queen(tab, i, j) == 1))
        tab[i][j] = '1';
      j++;
    }
    i++;
  }
  print_tabl(tab);
  return(res);
}

int   main(void) // END
{
  char tab[8][8];
  int i = 0;
  int j;

  while (i < 8)
  {
    j = 0;
    while (j < 8)
    {
      tab[i][j] = '0';
      j++;
    }
    i++;
  }
  print_tabl(tab);
  return (ft_8_queens(tab, 0, 0));
}

