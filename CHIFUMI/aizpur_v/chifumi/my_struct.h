#ifndef     _MY_STRUCT_H_
# define    _MY_STRUCT_H_


struct s_match
{
  int pic_pl;
  int pic_pc;
  int score_pl;
  int score_pc;
  int round;
  struct s_match *next; 
};
typedef struct s_match t_match;

#define ROCK 1
#define PAPER 2
#define SCISSORS 3
#define LIZARD 4
#define SPOCK 5

#endif      /* !_MY_STRUCT_H_ */
