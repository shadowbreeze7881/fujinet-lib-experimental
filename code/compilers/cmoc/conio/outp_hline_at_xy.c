#include <cmoc.h>
#include <string.h>
#include "fc_conio.h"

void outp_hline_at_xy(unsigned char x, unsigned char y, unsigned char length) 
{
    // Calculate screen address: 1024 is default text screen start
    void *screenAddress = (void *)(1024 + (y * 32) + x); 
    
    // Fill the memory directly
    memset(screenAddress, '-', length);
}