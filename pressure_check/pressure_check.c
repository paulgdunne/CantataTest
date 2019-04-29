/*****************************************************************************/
/*                                                                           */
/*                       Cantata User Guide Example                          */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/* Example  : Pressure Check (C)                                             */
/*                                                                           */
/* Filename : pressure_check.c                                               */
/*                                                                           */
/*****************************************************************************/
#include "pressure_check.h"

int monitorStatus;
int systolic;
int diastolic;

int pressure_check ()
{
	if (monitorStatus == MONITOR_OK)
	{
		systolic = get_systolic();
		diastolic = get_diastolic();
		return 1;
	}
	else
	{
		systolic = -1;
		diastolic = -1;
		return 0;
	}
}
