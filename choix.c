/*
** choix.c for choix in /home/vic/Desktop/piscine/C/chifumi/aizpur_v/chifumi
** 
** Made by AIZPURUA Victor Hugo
** Login   <aizpur_v@etna-alternance.net>
** 
** Started on  Sat Apr  1 09:23:35 2017 AIZPURUA Victor Hugo
** Last update Sat Apr  1 10:46:05 2017 AIZPURUA Victor Hugo
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
	my_putstr("\x1B[33m\nDraw! Try again!\n\x1B[0m");
      if ((pic_pl == PAPER) || (pic_pl == LIZARD))
	{
	  my_putstr("\n\x1B[34mYou fuck the computer's rock\n\x1B[0m");
	  *points_pl = *points_pl + 1;
	}
      if ((pic_pl == SCISSORS) || (pic_pl == SPOCK))
	{
	  my_putstr("\n\x1B[31mThe computer's rock fucks you!\n\x1B[0m");
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
	  my_putstr("\n\x1B[31mThe omputer's paper fucks you\n\x1B[0m");
	  *points_pc = *points_pc + 1;
	}
      if (pic_pl == PAPER)
	my_putstr("\n\x1B[33mDraw! Try again!\x1B[0m\n");
      if ((pic_pl == SCISSORS) || (pic_pl == SPOCK))
	{
	  my_putstr("\n\x1B[34mYou fuck the computer's paper!\x1B[0m\n");
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
	  my_putstr("\n\x1B[34mYou fuck the computer's scissors\x1B[0m\n");
	  *points_pl = *points_pl+ 1;
	}
      if ((pic_pl == PAPER) || (pic_pl == SPOCK))
	{
	  my_putstr("\n\x1B[31mThe computer's scissors fuck you!\x1B[0m\n");
	  *points_pc = *points_pc + 1;
	}
      if (pic_pl == SCISSORS)
	my_putstr("\n\x1B[33mDraw! Try Again!\x1B[0m\n");
    }
}

void    choix_lizard(int pic_pc, int pic_pl, int *points_pl, int *points_pc)
{
  if (pic_pc == LIZARD)
    {
      if ((pic_pl == PAPER) || (pic_pl == SPOCK))
	{
	  my_putstr("\n\x1B[34mYou fuck the computer's lizard\x1B[0m\n");
	  *points_pl = *points_pl+ 1;
	}
      if ((pic_pl == ROCK) || (pic_pl == SCISSORS))
	{
	  my_putstr("\n\x1B[31mThe computer's lizard fucks you!\x1B[0m\n");
	  *points_pc = *points_pc + 1;
	}
      if (pic_pl == LIZARD)
	my_putstr("\n\x1B[33mDraw! Try Again!\x1B[0m\n");
    }
}

void    choix_spock(int pic_pc, int pic_pl, int *points_pl, int *points_pc)
{
  if (pic_pc == SPOCK)
    {
      if ((pic_pl == ROCK) || (pic_pl == SCISSORS))
	{
	  my_putstr("\n\x1B[34mYou fuck the computer's Spock (and he liked it)!\x1B[0m\n");
	  *points_pl = *points_pl+ 1;
	}
      if ((pic_pl == PAPER) || (pic_pl == LIZARD))
	{
	  my_putstr("\n\x1B[31mThe computer's Spock fucks you (and you like it)!\x1B[0m\n");
	  *points_pc = *points_pc + 1;
	}
      if (pic_pl == SPOCK)
	my_putstr("\n\x1B[33mDraw! Try Again!\x1B[0m\n");
    }
}
