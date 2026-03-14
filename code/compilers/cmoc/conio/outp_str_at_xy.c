#include <cmoc.h>
#include <string.h>
#include "fc_conio.h"

void outp_str_at_xy(unsigned char x, unsigned char y, const char * message) 
{
    printf("\x1B[%d;%dH%s", y, x, message);
}