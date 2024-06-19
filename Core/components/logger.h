#pragma once
#include "./debug_level.h"

enum LOGGER {
    OFF,
    ERROR,
    ILINE,
    INFO,
    DLINE,
    DEBUG,
    VLINE,
    VERBOSE
};

static LOGGER LOG_LEVEL = LOGGER::INFO;

void report(LOGGER log_level, const char* message, ...);
void setLogLevel(DEBUG_LEVEL level);