#ifndef VLOG_H
#define VLOG_H

#ifndef VLOG_STR_LENGTH
#define VLOG_STR_LENGTH 64
#endif

#ifndef VLOG_ROW_NUM
#define VLOG_ROW_NUM 16
#endif

#ifndef WAIT_TICKS
#define WAIT_TICKS 10000
#endif

enum delog_level {
    DELOG_LEVEL_ERROR=0,
    DELOG_LEVEL_WARN,
    DELOG_LEVEL_INFO,
    DELOG_LEVEL_DEBUG,
    DELOG_LEVEL_TRACE
};

void delog(enum delog_level level, const char *fmt, ...);

#endif