/*
** check_params.c for check_params in /home/vic/Desktop/piscine/C/chifumi/aizpur_v/chifumi
** 
** Made by AIZPURUA Victor Hugo
** Login   <aizpur_v@etna-alternance.net>
** 
** Started on  Fri Mar 31 17:39:15 2017 AIZPURUA Victor Hugo
** Last update Fri Mar 31 23:54:51 2017 AIZPURUA Victor Hugo
*/

#include "my_fonctions.h"

void helper();
int chifumi(int game, int round);

int main(int argc, char **argv)
{
  int game;
  int round;
  int i;

  game = round = 0;
  i = 1;
  while (i < argc - 1)
    {
      if (my_strcmp(argv[i], "-v") == 0)
	{
	  game = my_getnbr(argv[i + 1]);
	  i = i + 2;
	}
      else if (my_strcmp(argv[i], "-p") == 0)
	{
	  round = my_getnbr(argv[i + 1]);
	  i = i + 2;
	}
      else
	i = argc;
    }
  if (((round >= 3) && (round % 2 == 1 )) && ((game == 3) || (game == 5)))
    chifumi(game, round);
  else
    helper();
  return (0);
}
