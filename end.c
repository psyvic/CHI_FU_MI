/*
** end.c for end in /home/vic/Desktop/piscine/C/chifumi/aizpur_v/chifumi
** 
** Made by AIZPURUA Victor Hugo
** Login   <aizpur_v@etna-alternance.net>
** 
** Started on  Sat Apr  1 09:19:16 2017 AIZPURUA Victor Hugo
** Last update Sat Apr  1 11:41:05 2017 AIZPURUA Victor Hugo
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <time.h>
#include "my_struct.h"

void          my_put_nbr(int n);
void		my_putstr(char *str);
char		*my_strcpy(char *dest, char *src);
int		my_getnbr(char *str);
char		*readLine();
void		print_list(t_match *list);

void		end(t_match *list)
{
  char		pic_pl[50];
  int           choice;
  char          pic_pl_2[50];
  int           choice_2;
  char          pic_pl_3[50];
  int           choice_3;

  my_putstr("And now 1.Start again, 2.Quit, 3.History");
  my_strcpy(pic_pl, readLine());
  choice = my_getnbr(pic_pl);
  if (choice == 1)
    {
      my_putstr("\nStart again. Do you want 3. Easy, 5.difficult");
      my_strcpy(pic_pl_2, readLine());
      choice_2 = my_getnbr(pic_pl_2);
      my_putstr("\nNow choose the number of turns (odd number please");
      my_strcpy(pic_pl_3, readLine());
      choice_3 = my_getnbr(pic_pl_3);
      my_put_nbr(choice_2);
      my_put_nbr(choice_3);
    }
  if (choice == 3)
    print_list(list);
  if (choice == 2)
    my_putstr("Game ends. Thanks for playing!\n\n");
}
