/*
** helper.c for helper in /home/vic/Desktop/piscine/C/chifumi/aizpur_v/chifumi
** 
** Made by AIZPURUA Victor Hugo
** Login   <aizpur_v@etna-alternance.net>
** 
** Started on  Fri Mar 31 17:23:08 2017 AIZPURUA Victor Hugo
** Last update Sat Apr  1 10:37:42 2017 AIZPURUA Victor Hugo
*/

char *my_putstr(char *str);

void helper ()
{
  my_putstr("\x1B[32m\n ------------ CHI ---- FU ---- MI ------------\n\x1B[0m");
  my_putstr("\n\x1B[35m        Chose your difficulty with -v (number)\x1B[0m\n");
  my_putstr("\x1B[32m              -v 3 for Rock, Paper, Scissors\x1B[0m");
  my_putstr("\n\x1B[35m    -v 5 for Rock, Paper, Scissors, Lizard, Spock\x1B[0m");
  my_putstr("\n\x1B[32m -p for the number of rounds, please choose an odd number\x1B[0m");
  my_putstr("\n\x1B[35m                     Good luck!    \x1B[0m   \n\n");
}
