#include <conio.h>
#include "fc_conio.h"

void set_crsr_at_y(unsigned char y)
{
    unsigned char x;

    x = wherex();

    gotoxy(x, y);
}