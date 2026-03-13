#include <conio.h>
#include "fc_conio.h"

void set_crsr_at_x(unsigned char x)
{
    unsigned char y;

    y = wherey();

    gotoxy(x, y);
}