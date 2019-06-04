/*****************************************************************************/
/*                                                                           */
/* Filename : values.h                                                       */
/*                                                                           */
/*****************************************************************************/
/* 
 * System includes
 */
#include <stdio.h>
#include <stdlib.h>
/*
 * Prototypes
 */
typedef enum {
	OK,
	TOO_LOW,
	TOO_HIGH,
	ERROR,
	RUBBISH,
} warning_level;
static int high_value_check(void);
static int low_value_check(void);
unsigned int system_valid(void);
extern warning_level checked_status;
extern double share;



#define OK 0
#define TOO_LOW 1
#define TOO_HIGH 2
#define ERROR 3
#define RUBBISH 4


