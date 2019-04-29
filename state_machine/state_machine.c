#include "state_machine.h"

/* State Machine - main control function */
EReturn control() {
  static EState vs_state_e = EInitialise;
  EReturn vl_status_e;
  EReturn vl_return_e = EOK;
  switch (vs_state_e) {
     case EInitialise :
        vl_status_e = initialise();
        if (vl_status_e == EOK) {
           /* Advance the state to EAction */
           vs_state_e = EAction;
        } else {
           vl_return_e = EError;
        }
        break;
     case EAction :
        vl_status_e = action();
        if (vl_status_e == EOK) {
           /* Advance the state to ETerminate */
           vs_state_e = ETerminate;
        } else {
           vl_return_e = EError;
        }
        break;
     default :
        vl_return_e = EError;
        break;
  }
  if (vl_return_e == EError) {
     vs_state_e = ETerminate;
  }
  return vl_return_e;
}

