
/**
 * LoggerLevel 
 * Type : Enumeration
 * Author : Nischith B.M. https://github.com/nischithbm
 * Description: 
 *   Gives the available Logger Levels and their depth of logging
 *   
 *   LOG_TRACE : has more depth
 *   LOG_FATAL : has the lest depth
 *
 *   LOG_ALL : turns on all log levels
 *   LOG_NONE : disables logging
 */

enum LoggerLevelEnum {
    LOG_ALL=100,
    LOG_TRACE=90,
    LOG_DEBUG=80,
    LOG_INFO=60,
    LOG_WARN=40,
    LOG_ERROR=30,
    LOG_FATAL=20,
    LOG_NONE=0
};
typedef enum LoggerLevelEnum LoggerLevel;

const char *LOG_TRACE_STR = "TRACE";
const char *LOG_DEBUG_STR = "DEBUG";
const char *LOG_INFO_STR = "INFO";
const char *LOG_WARN_STR = "WARN";
const char *LOG_ERROR_STR = "ERROR";
const char *LOG_FATAL_STR = "FATAL";

