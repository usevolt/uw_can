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




#define FSB_NODE_ID					5




/// @brief: Defines all FSB's EMCY message data values.
/// All EMCY messages belong to device specific EMCY error code category (0xFF00)
typedef enum {
	// outputs
	FSB_EMCY_HORN_OVERCURRENT = (FSB_NODE_ID << 16),
	FSB_EMCY_HORN_FAULT,
	// radio overcurrent
	FSB_EMCY_RADIO_OVERCURRENT,
	FSB_EMCY_RADIO_FAULT,
	// aux hack overcurrent
	FSB_EMCY_AUX_OVERCURRENT,
	FSB_EMCY_AUX_FAULT,
	// heater vdd overcurrent
	FSB_EMCY_HEATERVDD_OVERCURRENT,
	FSB_EMCY_HEATERVDD_FAULT,
	// heater battery direct overcurrent
	FSB_EMCY_HEATERBAT_OVERCURRENT,
	FSB_EMCY_HEATERBAT_FAULT,
	// battery direct fuse burned
	FSB_EMCY_BATFUSE_FAULT,
	// ignition key undefined state
	FSB_EMCY_IGNKEY_FAULT,
	// notification that EMCY switch is pressed
	FSB_EMCY_EMCY_NOTIFY,

	FSB_EMCY_COUNT
} fsb_emcy_e;




/// @brief: Ignition key states
enum {
	FSB_IGNKEY_STATE_OFF = 0,
	FSB_IGNKEY_STATE_ON,
	FSB_IGNKEY_STATE_PREHEAT,
	FSB_IGNKEY_STATE_START,
	FSB_IGNKEY_STATE_FAULT
};
typedef uint8_t fsb_ignkey_states_e;



#define FSB_HEATER_MAX_SPEED					1

// FSB OBJECT DICTIONARY ENTRIES


#define FSB_TOTAL_CURRENT_INDEX					0x2000
#define FSB_TOTAL_CURRENT_SUBINDEX				0
#define FSB_TOTAL_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define FSB_TOTAL_CURRENT_PERMISSIONS			CANOPEN_RO

#define FSB_HORN_STATUS_INDEX					0x2110
#define FSB_HORN_STATUS_SUBINDEX				0
#define FSB_HORN_STATUS_TYPE					CANOPEN_UNSIGNED8
#define FSB_HORN_STATUS_PERMISSIONS				CANOPEN_RW

#define FSB_HORN_CURRENT_INDEX					0x2111
#define FSB_HORN_CURRENT_SUBINDEX				0
#define FSB_HORN_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define FSB_HORN_CURRENT_PERMISSIONS			CANOPEN_RO

#define FSB_RADIO_STATUS_INDEX					0x2120
#define FSB_RADIO_STATUS_SUBINDEX				0
#define FSB_RADIO_STATUS_TYPE					CANOPEN_UNSIGNED8
#define FSB_RADIO_STATUS_PERMISSIONS			CANOPEN_RW

#define FSB_RADIO_CURRENT_INDEX					0x2121
#define FSB_RADIO_CURRENT_SUBINDEX				0
#define FSB_RADIO_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define FSB_RADIO_CURRENT_PERMISSIONS			CANOPEN_RO

#define FSB_AUX_STATUS_INDEX					0x2130
#define FSB_AUX_STATUS_SUBINDEX					0
#define FSB_AUX_STATUS_TYPE						CANOPEN_UNSIGNED8
#define FSB_AUX_STATUS_PERMISSIONS				CANOPEN_RW

#define FSB_AUX_CURRENT_INDEX					0x2131
#define FSB_AUX_CURRENT_SUBINDEX				0
#define FSB_AUX_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define FSB_AUX_CURRENT_PERMISSIONS				CANOPEN_RO

#define FSB_HEATERVDD_STATUS_INDEX				0x2140
#define FSB_HEATERVDD_STATUS_SUBINDEX			0
#define FSB_HEATERVDD_STATUS_TYPE				CANOPEN_UNSIGNED8
#define FSB_HEATERVDD_STATUS_PERMISSIONS		CANOPEN_RO

#define FSB_HEATERVDD_CURRENT_INDEX				0x2141
#define FSB_HEATERVDD_CURRENT_SUBINDEX			0
#define FSB_HEATERVDD_CURRENT_TYPE				CANOPEN_UNSIGNED16
#define FSB_HEATERVDD_CURRENT_PERMISSIONS		CANOPEN_RO

#define FSB_HEATERBAT_STATUS_INDEX				0x2150
#define FSB_HEATERBAT_STATUS_SUBINDEX			0
#define FSB_HEATERBAT_STATUS_TYPE				CANOPEN_UNSIGNED8
#define FSB_HEATERBAT_STATUS_PERMISSIONS		CANOPEN_RO

#define FSB_HEATERBAT_CURRENT_INDEX				0x2151
#define FSB_HEATERBAT_CURRENT_SUBINDEX			0
#define FSB_HEATERBAT_CURRENT_TYPE				CANOPEN_UNSIGNED16
#define FSB_HEATERBAT_CURRENT_PERMISSIONS		CANOPEN_RO

#define FSB_HEATER_SPEED_INDEX					0x2152
#define FSB_HEATER_SPEED_SUBINDEX				0
#define FSB_HEATER_SPEED_TYPE					CANOPEN_UNSIGNED8
#define FSB_HEATER_SPEED_PERMISSIONS			CANOPEN_RW


#define FSB_IGNKEY_INDEX						0x2210
#define FSB_IGNKEY_SUBINDEX						0
#define FSB_IGNKEY_TYPE							CANOPEN_UNSIGNED8
#define FSB_IGNKEY_PERMISSIONS					CANOPEN_RO

#define FSB_EMCY_INDEX							0x2211
#define FSB_EMCY_SUBINDEX						0
#define FSB_EMCY_TYPE							CANOPEN_UNSIGNED8
#define FSB_EMCY_PERMISSIONS					CANOPEN_RO

#define FSB_BAT_INDEX							0x2212
#define FSB_BAT_SUBINDEX						0
#define FSB_BAT_TYPE							CANOPEN_UNSIGNED16
#define FSB_BAT_PERMISSIONS						CANOPEN_RO

#define FSB_EBERFAN_INDEX						0x2213
#define FSB_EBERFAN_SUBINDEX					0
#define FSB_EBERFAN_TYPE						CANOPEN_UNSIGNED8
#define FSB_EBERFAN_PERMISSIONS					CANOPEN_RO








#endif /* CAN_FSB_H_ */
