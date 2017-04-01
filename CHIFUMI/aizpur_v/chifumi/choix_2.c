void          choix_rock(int pic_pc, int pic_pl, int *points_pl, int *points_pc);
void          choix_paper(int pic_pc, int pic_pl, int *points_pl, int *points_pc);
void          choix_scissors(int pic_pc, int pic_pl, int *points_pl, int *points_pc);
void          choix_lizard(int pic_pc, int pic_pl, int *points_pl, int *points_pc);
void          choix_spock(int pic_pc, int pic_pl, int *points_pl, int *points_pc);

void          choix(int pic_pc, int pic_pl, int *points_pl, int *points_pc)
{
  choix_rock(pic_pc, pic_pl, points_pl, points_pc);
  choix_paper(pic_pc, pic_pl, points_pl, points_pc);
  choix_scissors(pic_pc, pic_pl, points_pl, points_pc);
  choix_lizard(pic_pc, pic_pl, points_pl, points_pc);
  choix_spock(pic_pc, pic_pl, points_pl, points_pc);
}
