/*
** chifumi.c for chifumi in /home/vic/Desktop/piscine/C/chifumi
** 
** Made by AIZPURUA Victor Hugo
** Login   <aizpur_v@etna-alternance.net>
** 
** Started on  Fri Mar 31 10:02:34 2017 AIZPURUA Victor Hugo
** Last update Fri Mar 31 10:16:12 2017 AIZPURUA Victor Hugo
*/

#include ‹stdlib.h›
#include ‹sys/types.h›
#include ‹sys/uio.h›
#include ‹unistd.h›
#include ‹time.h›


char  *readLine()
{
  ssize_t  ret;
  char     *buff;

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

main()
{
  // int random;

  //srand (time (NULL));
  //random = (rand()% 36) + 1;
  //my_put_nbr(random);
}
