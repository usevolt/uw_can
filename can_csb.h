/*
 * csb.h
 *
 *  Created on: Aug 2, 2017
 *      Author: usevolt
 */

#ifndef CAN_CSB_H_
#define CAN_CSB_H_


/// @file: Defines the UW ceiling supply board CANopen interface.

#include <stdint.h>
#include <uv_hal_config.h>


#define CSB_NODE_ID					7



/// @brief: Defines the state of a single thruster power supply
enum {
	CSB_OUTPUT_STATE_ON = 0,
	CSB_OUTPUT_STATE_OVERCURRENT,
	CSB_OUTPUT_STATE_DISABLED
};
typedef uint8_t csb_output_state_e;




#endif /* CAN_CSB_H_ */
