#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 1

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 1

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X) \
/*   icon, command,      interval,   signal */ \
    X("", "sb-date",        15,        1) \
    /* X("", "sb-battery",     15,        2) */ \
    X("", "sb-volume",      0,         3) \
    X("", "sb-internet",    15,        4) \
    X("", "sb-tasks",       60 * 1,    5) \
    X("", "sb-news",        60 * 5,    6) \
    /* X("", "sb-mail",        60 * 5,    7) */ \
    /* X("", "sb-pacup",       60 * 600,  8) */ \
    X("", "cat /tmp/recordingicon 2>/dev/null; true", 0, 9) \

#endif  // CONFIG_H
