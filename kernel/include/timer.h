/*
 * timer.h
 *
 * This file is a part of Exylus.
 */

#include "system.h"

#include <stddef.h>

void timer_handler(registers_t *reg);

void init_timer();

void timer_wait(uint32_t ticks);
