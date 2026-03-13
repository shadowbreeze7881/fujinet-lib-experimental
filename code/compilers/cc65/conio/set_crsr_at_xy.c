#include <conio.h>
#include "fc_conio.h"

void set_crsr_at_xy(unsigned char x, unsigned char y)
{
    gotoxy(x,y);
}