/*
 * FSB.h
 *
 *  Created on: Aug 2, 2017
 *      Author: usevolt
 */

#ifndef CAN_FSB_H_
#define CAN_FSB_H_


/// @file: Defines the UW ceiling supply board CANopen interface.

#include <stdint.h>
#include "uv_if_config.h"



#if !CONFIG_FSB_IF_REVISION
#error "CONFIG_FSB_IF_REVISION should define the CAN interface revision number for FSB."
#endif




#define FSB_NODE_ID					1




/// @brief: Defines all FSB's EMCY message data values.
/// All EMCY messages belong to device specific EMCY error code category (0xFF00)
typedef enum {
	FSB_EMCY_NONE = 0,
	// outputs
	FSB_EMCY_GLOW_OVERCURRENT = (FSB_NODE_ID << 16),
} fsb_emcy_e;



/// @brief: Ignition key states
typedef enum {
	FSB_IGNKEY_STATE_OFF = 0,
	FSB_IGNKEY_STATE_ON,
	FSB_IGNKEY_STATE_PREHEAT,
	FSB_IGNKEY_STATE_START
} fsb_ignkey_states_e;



// FSB OBJECT DICTIONARY ENTRIES


#define ESB_TOTAL_CURRENT_INDEX					0x2000
#define ESB_TOTAL_CURRENT_SUBINDEX				0
#define ESB_TOTAL_CURRENT_TYPE					CANOPEN_UNSIGNED32
#define ESB_TOTAL_CURRENT_PERMISSIONS			CANOPEN_RO




#endif /* CAN_ESB_H_ */
