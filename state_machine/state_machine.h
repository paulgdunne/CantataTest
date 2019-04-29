#ifndef _STATE_MACHINE_H_
#define _STATE_MACHINE_H_

typedef enum {
  EOK,
  EError
} EReturn;

typedef enum {
  EInitialise,
  EAction,
  ETerminate
} EState;

extern EReturn initialise();
extern EReturn action();

#endif /* _STATE_MACHINE_H_ */

