#ifndef FUJINET_BUS_MSX_H
#define FUJINET_BUS_MSX_H

#include "fujinet-bus.h"

#define milliseconds_to_jiffy(millis) ((millis) / (VDP_IS_PAL ? 20 : 1000 / 60))

#define TIMEOUT         milliseconds_to_jiffy(100)
#define TIMEOUT_SLOW	milliseconds_to_jiffy(15 * 1000)
#define MAX_RETRIES	1

static void hexdump(uint8_t *buffer, int count);
uint16_t fuji_slip_encode();
uint16_t fuji_slip_decode(uint16_t len);
uint8_t fuji_calc_checksum(void *ptr, uint16_t len);

#endif /* FUJINET_BUS_MSX_H */
