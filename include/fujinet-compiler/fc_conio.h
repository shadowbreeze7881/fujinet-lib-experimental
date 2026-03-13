#ifndef FC_CONIO_H
#define FC_CONIO_H
void outp_hline_at_xy(unsigned char x, unsigned char y, unsigned char length);
void outp_vline_at_xy(unsigned char x, unsigned char y, unsigned char length);

void outp_str_at_xy(unsigned char x, unsigned char y, const char * message);

void set_crsr_at_x(unsigned char x);
void set_crsr_at_y(unsigned char y);
void set_crsr_at_xy(unsigned char x, unsigned char y);

unsigned char toggl_oppos_disp(unsigned char onoff);
#endif

