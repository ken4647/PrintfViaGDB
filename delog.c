#include <stdio.h>
#include <stdarg.h>

#include <delog.h>

volatile int delog_str_length = VLOG_STR_LENGTH;
volatile char delog_buf[VLOG_STR_LENGTH + 1] = {};

volatile void dlog_sync() {}

void delog(enum delog_level level, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    delog_buf[VLOG_STR_LENGTH] = level;
    vsnprintf(delog_buf, VLOG_STR_LENGTH, fmt, args);
    va_end(args);
    dlog_sync();
}
