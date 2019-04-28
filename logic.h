#ifndef LOGIC_H
#define LOGIC_H

#include "sprites.h"
#include "globals.h"
#include "int.h"


#include <z80.h>
#include <stdlib.h>
#include <arch/zx.h>
#include <arch/zx/sp1.h>

extern void check_fsm();
extern uint8_t allow_next(uint8_t next);
extern void set_eaten(struct sprite * for_who);

#endif