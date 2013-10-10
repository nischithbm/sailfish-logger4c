#include<stdlib.h>
#include<stdio.h>
#include"helper.h"
#include"LoggerLevels.h"



/**
 * Logger 
 * Type : Structure
 * Author : Nischith B.M. https://github.com/nischithbm
 * Description: 
 *   Main Structure Holding Logger Configurations 
 *
 */
struct LoggerStruct {
    LoggerLevel level;
    
    /* Revisit : Other Logger Configurations */
};
typedef struct LoggerStruct *Logger;





/******************************** 
 ******* Prototypes Only ********
 ********************************/
 
Boolean GetLogger(Logger *logger);
Boolean DestroyLogger(Logger *logger);

Boolean is_enabled(LoggerLevel severity, Logger logger);

void log_message(const char *severity, Logger logger, const char * msg);

void log_trace(Logger logger, const char * msg);
void log_debug(Logger logger, const char * msg);
void log_info(Logger logger, const char * msg);
void log_warn(Logger logger, const char * msg);
void log_error(Logger logger, const char * msg);
void log_fatal(Logger logger, const char * msg);




/******************************** 
 ** Implementation Starts Here **
 ********************************/


Boolean GetLogger(Logger *logger) {    
    *logger = (struct LoggerStruct *) malloc(sizeof(struct LoggerStruct));

    if( (*logger) == NULL){
        printf("Error allocating memory\n");
        return FALSE;
    }
    
    return TRUE;
}


Boolean DestroyLogger(Logger *logger){
    // Revisit
    return FALSE;
} 


void log_trace(Logger logger, const char * msg){
    if(is_enabled(LOG_TRACE, logger)){
        log_message(LOG_TRACE_STR, logger, msg);
    }
}

void log_debug(Logger logger, const char * msg){
    if(is_enabled(LOG_DEBUG, logger)){
        log_message(LOG_DEBUG_STR, logger, msg);
    }
}

void log_info(Logger logger, const char * msg){
    if(is_enabled(LOG_INFO, logger)){
        log_message(LOG_INFO_STR, logger, msg);
    }
}

void log_warn(Logger logger, const char * msg){
    if(is_enabled(LOG_WARN, logger)){
        log_message(LOG_WARN_STR, logger, msg);
    }
}

void log_error(Logger logger, const char * msg){
    if(is_enabled(LOG_ERROR, logger)){
        log_message(LOG_ERROR_STR, logger, msg);
    }
}

void log_fatal(Logger logger, const char * msg){
    if(is_enabled(LOG_FATAL, logger)){
        log_message(LOG_FATAL_STR, logger, msg);
    }
}















Boolean is_enabled(LoggerLevel severity, Logger logger){
    if( logger->level >= severity ){
        return TRUE;
    }
    return FALSE;
}





/**
 * log_message
 * Type : Function 
 * Description: 
 *   Core function respopnsible for logging messages
 */

void log_message(const char *severity, Logger logger, const char * msg)
{
    printf("[ %s ] - %s \n", severity, msg);
}



