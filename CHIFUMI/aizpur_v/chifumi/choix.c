/*
** choix.c for choix in /home/vic/Desktop/piscine/C/chifumi/aizpur_v/chifumi
** 
** Made by AIZPURUA Victor Hugo
** Login   <aizpur_v@etna-alternance.net>
** 
** Started on  Sat Apr  1 09:23:35 2017 AIZPURUA Victor Hugo
** Last update Sat Apr  1 09:27:11 2017 AIZPURUA Victor Hugo
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <time.h>
#include "my_struct.h"

void    my_putstr(char *str);

void    choix_rock(int pic_pc, int pic_pl, int *points_pl, int *points_pc)
{
  if (pic_pc == ROCK)
    {
      if (pic_pl == ROCK)
	my_putstr("\nDraw! Try again!\n");
      if ((pic_pl == PAPER) || (pic_pl == LIZARD))
	{
	  my_putstr("\nThe player fucks the computer's rock\n");
	  *points_pl = *points_pl + 1;
	}
      if ((pic_pl == SCISSORS) || (pic_pl == SPOCK))
	{
	  my_putstr("\nThe computer's rock fucks you!\n");
	  *points_pc = *points_pc + 1;
	}
    }
}

void	choix_paper(int pic_pc, int pic_pl, int *points_pl, int *points_pc)
{
  if (pic_pc == PAPER)
    {
      if ((pic_pl == ROCK) || (pic_pl == LIZARD))
	{
	  my_putstr("\nThe omputer's paper fucks you\n");
	  *points_pc = *points_pc + 1;
	}
      if (pic_pl == PAPER)
	my_putstr("\nDraw! Try again!\n");
      if ((pic_pl == SCISSORS) || (pic_pl == SPOCK))
	{
	  my_putstr("\nYou fuck the computer's paper!\n");
	  *points_pl = *points_pl + 1;
	}
    }
}

void    choix_scissors(int pic_pc, int pic_pl, int *points_pl, int *points_pc)
{
  if (pic_pc == SCISSORS)
    {
      if ((pic_pl == ROCK) || (pic_pl == LIZARD))
	{
	  my_putstr("\nYou fuck the computer's scissors\n");
	  *points_pl = *points_pl+ 1;
	}
      if ((pic_pl == PAPER) || (pic_pl == SPOCK))
	{
	  my_putstr("\nThe omputer's scissors fuck you!\n");
	  *points_pc = *points_pc + 1;
	}
      if (pic_pl == SCISSORS)
	my_putstr("\nDraw! Try Again!\n");
    }
}

void    choix_lizard(int pic_pc, int pic_pl, int *points_pl, int *points_pc)
{
  if (pic_pc == LIZARD)
    {
      if ((pic_pl == PAPER) || (pic_pl == SPOCK))
	{
	  my_putstr("\nYou fuck the computer's lizard\n");
	  *points_pl = *points_pl+ 1;
	}
      if ((pic_pl == ROCK) || (pic_pl == SCISSORS))
	{
	  my_putstr("\nThe computer's lizard fucks you!\n");
	  *points_pc = *points_pc + 1;
	}
      if (pic_pl == LIZARD)
	my_putstr("\nDraw! Try Again!\n");
    }
}

void    choix_spock(int pic_pc, int pic_pl, int *points_pl, int *points_pc)
{
  if (pic_pc == SPOCK)
    {
      if ((pic_pl == ROCK) || (pic_pl == SCISSORS))
	{
	  my_putstr("\nYou fuck the computer's Spock (and he liked it)!\n");
	  *points_pl = *points_pl+ 1;
	}
      if ((pic_pl == PAPER) || (pic_pl == LIZARD))
	{
	  my_putstr("\nThe computer's Spock fucks you (and you like it)!\n");
	  *points_pc = *points_pc + 1;
	}
      if (pic_pl == SPOCK)
	my_putstr("\nDraw! Try Again!\n");
    }
}
