/*
** chifumi.c for chifumi in /home/vic/Desktop/piscine/C/chifumi
** 
** Made by AIZPURUA Victor Hugo
** Login   <aizpur_v@etna-alternance.net>
** 
** Started on  Fri Mar 31 10:02:34 2017 AIZPURUA Victor Hugo
** Last update Sat Apr  1 10:02:40 2017 AIZPURUA Victor Hugo
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <time.h>
#include "my_struct.h"

void          my_putchar(char c);
void          my_putstr(char *str);
char          *my_strcpy(char *dest, char *src);
int           my_nb_len(int n);
void          my_put_nbr(int n);
int           my_getnbr(char *str);
void          choix(int pic_pc, int pic_pl, int *points_pl, int *points_pc);
void          choix_rock(int pic_pc, int pic_pl, int *points_pl, int *points_pc);
void          choix_paper(int pic_pc, int pic_pl, int *points_pl, int *points_pc);
void          choix_scissors(int pic_pc, int pic_pl, int *points_pl, int *points_pc);
void          choix_lizard(int pic_pc, int pic_pl, int *points_pl, int *points_pc);
void          choix_spock(int pic_pc, int pic_pl, int *points_pl, int *points_pc);
void	      end();
int           make_choice(int game);
int           make_choice_3();
int           make_choice_5();
void          result(int points_pl, int points_pc);
t_match       *add_node(t_match *list, t_match *element);
t_match       *print_list(t_match *list);

char          *readLine()
{
  ssize_t     ret;
  char        *buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}

void          chifumi(int game, int round)
{
  int         pic_pc;
  int         points_pl;
  int         points_pc;
  int         choice;
  int         i;
  t_match     *list;
  t_match     *match;

  list = NULL;
  points_pc = points_pl = choice = i = 0;
  srand (time (NULL));
  while ((points_pl < (round / 2 + 1)) && (points_pc < (round / 2 + 1)))
    {
      choice = make_choice(game);
      pic_pc = (rand()% game) + 1;
      choix(pic_pc, choice, &points_pl, &points_pc);
      result(points_pl, points_pc);
      match = malloc(sizeof(t_match));
      match->pic_pl = choice;
      match->pic_pc = pic_pc;
      match->score_pl = points_pl;
      match->score_pc = points_pc;
      match->round = i;
      list = add_node(list, match);
      i = i + 1;
    }
  end(list);
}
