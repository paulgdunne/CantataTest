/*****************************************************************************/
/*                                                                           */
/* Filename : values_check.c                                                 */
/*                                                                           */
/*****************************************************************************/
#include "values.h"
//extern void disablewatch(void);
/* Global data*/
warning_level checked_status;
double share;

/* Local data*/
double average_a = 0.0;
static double average_b = 0.0;

/* Local functions */

static int low_value_check()
{
    int low_value;
    if ((average_a < 11.25) || (average_b < 15.25))
    {
        low_value = 1;
    }
    else
    {
        low_value = 0;
    }
    return low_value;
}

static int high_value_check()
{
    int high_value;
    if ((average_a < 13.25) || (average_b < 18.25))
    {
        high_value = 1;
    }
    else
    {
        high_value = 0;
    }
    return high_value;
}

/*
 * function body
 */
warning_level values_check(int first_a,
		         int second_a,
		         int first_b,
		         int second_b,
		         unsigned short c,
		         unsigned short d,
		         unsigned short e)
{
	warning_level warning_level;
	unsigned short total = c + d;

    /* Loop here just for coverage demonstration purposes */
    unsigned int var;
    for (var = first_a; var > 0; -- var) {
    	warning_level = RUBBISH;
    }

    /* Calculate averages and share2 (don't divide if c and d are zero)*/
    //disablewatch();
    if (system_valid() == OK)
    {
        checked_status = OK;
    	average_a = (first_a + second_a) / 2;
    	average_b = (first_b + second_b) / 2;
    	{
    	    if (total == 0)
    	    {
    	    	share = ERROR;
    	        return ERROR;
    	    }
    	    else
    	    {
    	    	share =  (double) e / total;
		}
    	}
    	if (!high_value_check())
		{
			warning_level = TOO_HIGH;
		}
		else
		{
			if (low_value_check())
			{
				warning_level = TOO_LOW;
			}
			else
			{
				warning_level = OK;
			}
		}
    }
    else
    {
    	checked_status = ERROR;
    	return ERROR;
	}

    return warning_level;
}

