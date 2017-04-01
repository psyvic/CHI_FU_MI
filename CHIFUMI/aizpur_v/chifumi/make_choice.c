/*
** make_choice.c for make_choice in /home/vic/Desktop/piscine/C/chifumi/aizpur_v/chifumi
** 
** Made by AIZPURUA Victor Hugo
** Login   <aizpur_v@etna-alternance.net>
** 
** Started on  Sat Apr  1 09:10:25 2017 AIZPURUA Victor Hugo
** Last update Sat Apr  1 10:16:34 2017 AIZPURUA Victor Hugo
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <time.h>
#include "my_struct.h"

void      my_putstr(char *str);
char      *my_strcpy(char *dest, char *src);
char      *readLine();
int       my_getnbr(char *str);

int       make_choice_3()
{
  int     choice;
  char    pic_pl[50];
  
  while (choice < ROCK || choice > SCISSORS)
    {
      my_putstr("Choose between 0.exit 1.rock, 2.paper, 3.scissors:");
      my_strcpy(pic_pl, readLine());
      choice = my_getnbr(pic_pl);
      if (choice < ROCK || choice > SCISSORS)
	my_putstr("Wrong number biatch!! ");
    }
  return (choice);
}

int       make_choice_5()
{
  int     choice;
  char    pic_pl[50];

  while (choice < ROCK || choice > SPOCK)
    {
      my_putstr("Choose between 0.exit 1.rock, 2.paper, 3.scissors, 4.lizard 5.Spock:");
      my_strcpy(pic_pl, readLine());
      choice = my_getnbr(pic_pl);
      if (choice < 1 || choice > SPOCK)
	my_putstr("Wrong number biatch!! ");
    }
  return (choice);
}

int       make_choice(int game)
{
  int	  choice;
  
  if (game == 3)
    choice = make_choice_3();
  if (game == 5)
    choice = make_choice_5();
  return (choice);
}
