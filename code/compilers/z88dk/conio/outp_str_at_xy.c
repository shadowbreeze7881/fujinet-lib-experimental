#include <conio.h>
#include "fc_conio.h"

void outp_str_at_xy(unsigned char x, unsigned char y, const char *message) 
{
    gotoxy(x,y);

    cputs(message);
}