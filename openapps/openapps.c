/**
\brief Applications running on top of the OpenWSN stack.

\author Thomas Watteyne <watteyne@eecs.berkeley.edu>, September 2014.
*/

#include "opendefs.h"


// TCP
#include "techo.h"
// UDP
#include "uecho.h"
#include "udplatency.h"

//=========================== variables =======================================

//=========================== prototypes ======================================

//=========================== public ==========================================

//=========================== private =========================================

void openapps_init(void) {
   // TCP
   techo_init();
   // UDP
   uecho_init();
   udplatency_init();
}
