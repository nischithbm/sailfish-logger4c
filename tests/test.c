#include<stdio.h>
#include"../src/log4c.h"

void main() {
    printf("Welcome to log4c Test\n");

    Logger logger;
    
    GetLogger(&logger);
    
    logger->level = LOG_DEBUG;
    
    log_trace(logger, "Hello world");    
    log_debug(logger, "Hello world");
    log_info(logger, "Hello world");    
    log_warn(logger, "Hello world");
    log_error(logger, "Hello world");    
    log_fatal(logger, "Hello world");
    
}
