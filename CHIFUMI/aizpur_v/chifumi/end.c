/*
** end.c for end in /home/vic/Desktop/piscine/C/chifumi/aizpur_v/chifumi
** 
** Made by AIZPURUA Victor Hugo
** Login   <aizpur_v@etna-alternance.net>
** 
** Started on  Sat Apr  1 09:19:16 2017 AIZPURUA Victor Hugo
** Last update Sat Apr  1 10:15:05 2017 AIZPURUA Victor Hugo
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <time.h>
#include "my_struct.h"

void		my_putstr(char *str);
char		*my_strcpy(char *dest, char *src);
int		my_getnbr(char *str);
char		*readLine();
void		print_list(t_match *list);

void		end(t_match *list)
{
  char		pic_pl[50];
  int           choice;
  
  my_putstr("And now 1.Start again, 2.Quit, 3.History");
  my_strcpy(pic_pl, readLine());
  choice = my_getnbr(pic_pl);
  if (choice == 1)
    my_putstr("Start again");
  if (choice == 3)
    {
    print_list(list);
    }
}
