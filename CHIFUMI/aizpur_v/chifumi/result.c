/*
** result.c for result in /home/vic/Desktop/piscine/C/chifumi/aizpur_v/chifumi
** 
** Made by AIZPURUA Victor Hugo
** Login   <aizpur_v@etna-alternance.net>
** 
** Started on  Sat Apr  1 09:14:47 2017 AIZPURUA Victor Hugo
** Last update Sat Apr  1 09:16:06 2017 AIZPURUA Victor Hugo
*/

void     my_put_nbr(int n);
void     my_putstr(char *str);

int      result(int points_pl, int points_pc)
{
  int    choice;
  
  my_putstr("Round over!\n\nPoints player :");
  my_put_nbr(points_pl);
  my_putstr("\nPoints pc :");
  my_put_nbr(points_pc);
  my_putstr("\n\n");
  choice = 0;
  return (choice);
}
