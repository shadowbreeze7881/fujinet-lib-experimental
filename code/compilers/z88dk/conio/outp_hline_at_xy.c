#include <conio.h>
#include "fc_conio.h"

void outp_hline_at_xy(unsigned char x, unsigned char y, unsigned char length) 
{
     gotoxy(x,y);

     for(int i = 0; i < length; i++) {
          printf("-");
     }
}