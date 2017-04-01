/*
** print_list.c for print_list in /home/vic/Desktop/piscine/C/chifumi/aizpur_v/chifumi
** 
** Made by AIZPURUA Victor Hugo
** Login   <aizpur_v@etna-alternance.net>
** 
** Started on  Sat Apr  1 09:17:02 2017 AIZPURUA Victor Hugo
** Last update Sat Apr  1 10:05:49 2017 AIZPURUA Victor Hugo
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <time.h>
#include "my_struct.h"

void          my_putchar(char c);
void          my_put_nbr(int n);
void          my_putstr(char *str);

t_match       *add_node(t_match *list, t_match *element)
{
  element->next = list;
  return (element);
}

void          print_list(t_match *list)
{
  while (list != NULL)
    {
      my_putstr("\n---------------\nRound number : ");
      my_put_nbr(list->round);
      my_putstr("\nYou chose: ");
      my_put_nbr(list->pic_pl);
      my_putstr("\nThe computer chose: ");
      my_put_nbr(list->pic_pc);
      my_putstr("\nYour score: ");
      my_put_nbr(list->score_pl);
      my_putstr("\nComputer's score: ");
      my_put_nbr(list->score_pc);
      my_putchar('\n');
      list = list->next;
    }
}
