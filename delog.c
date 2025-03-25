#include <stdio.h>
#include <stdarg.h>

#include <delog.h>

static int delog_str_length = VLOG_STR_LENGTH;
static char delog_buf[VLOG_STR_LENGTH + 1] = {};

void dlog_sync() {}

void delog(enum delog_level level, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    delog_buf[VLOG_STR_LENGTH] = level;
    vsnprintf(delog_buf, VLOG_STR_LENGTH, fmt, args);
    printf(delog_buf);
    va_end(args);
    dlog_sync();
}
