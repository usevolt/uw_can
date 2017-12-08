/*
 * ESB.h
 *
 *  Created on: Aug 2, 2017
 *      Author: usevolt
 */

#ifndef CAN_ESB_H_
#define CAN_ESB_H_


/// @file: Defines the UW ceiling supply board CANopen interface.

#include <stdint.h>
#include "uv_if_config.h"





// ESB Interface revision
//
// 1: Initial revision
// 2: Added proportional solenoid dither frequency & amplitude settings
// 3: Oil cooler moved to ESB from CSB
#if !CONFIG_ESB_IF_REVISION
#error "CONFIG_ESB_IF_REVISION should define the CAN interface revision number for ESB."
#endif




#define ESB_NODE_ID					6




/// @brief: Defines all ESB's EMCY message data values.
/// All EMCY messages belong to device specific EMCY error code category (0xFF00)
typedef enum {
	// outputs
	ESB_EMCY_GLOW_OVERLOAD = (ESB_NODE_ID << 16),
	ESB_EMCY_GLOW_FAULT,
	ESB_EMCY_STARTER_OVERLOAD,
	ESB_EMCY_STARTER_FAULT,
	ESB_EMCY_AC_OVERLOAD,
	ESB_EMCY_AC_FAULT,
	ESB_EMCY_ENGINE_STOP_OVERLOAD,
	ESB_EMCY_ENGINE_STOP_FAULT,
	ESB_EMCY_BEACON_OVERLOAD,
	ESB_EMCY_BEACON_FAULT,
	ESB_EMCY_PUMP_OVERLOAD,
	ESB_EMCY_PUMP_FAULT,
	ESB_EMCY_ALT_IG_OVERLOAD,
	ESB_EMCY_ALT_IG_FAULT,
	// inputs
	// motor temperature high
	ESB_EMCY_MTEMP_WARNING,
	// motor temperature critically high
	ESB_EMCY_MTEMP_ERROR,
	// motor temperature sensor misfunction
	ESB_EMCY_MTEMP_SENSOR_FAULT,
	// oil temperature high
	ESB_EMCY_OTEMP_WARNING,
	// oil temperature critically high
	ESB_EMCY_OTEMP_ERROR,
	// oil temperature sensor misfunction
	ESB_EMCY_OTEMP_SENSOR_FAULT,
	// oil level low
	ESB_EMCY_OLEVEL_WARNING,
	// oil level critically low
	ESB_EMCY_OLEVEL_ERROR,
	// oil level sensor misfunction
	ESB_EMCY_OLEVEL_SENSOR_FAULT,
	// fuel level low
	ESB_EMCY_FLEVEL_WARNING,
	// fuel level critically low
	ESB_EMCY_FLEVEL_ERROR,
	// fuel level sensor misfunction
	ESB_EMCY_FLEVEL_FAULT,
	// VDD is critically low
	ESB_EMCY_VDD_LOW_WARNING,
	// Engine stop solenoid misfunctioned. Could be a mistake in recognizing
	// engine start & on solenoids, start the engine again.
	ESB_EMCY_ENGINE_STOP_MISMATCH,
	// Engine has been shut down for protection. Check oil pressure and
	// cooling liquid temperature sensors.
	ESB_EMCY_ENGINE_PROTECTION_SHUTDOWN,
#if (CONFIG_ESB_IF_REVISION > 2)
	ESB_EMCY_ESB_EMCY_OILCOOLER_OVERCURRENT,
	ESB_EMCY_OILCOOLER_FAULT,
#endif
	ESB_EMCY_COUNT
} esb_emcy_e;




// ESB OBJECT DICTIONARY ENTRIES


#define ESB_TOTAL_CURRENT_INDEX					0x2000
#define ESB_TOTAL_CURRENT_SUBINDEX				0
#define ESB_TOTAL_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define ESB_TOTAL_CURRENT_PERMISSIONS			CANOPEN_RO

#define ESB_GLOW_STATUS_INDEX					0x2100
#define ESB_GLOW_STATUS_SUBINDEX				0
#define ESB_GLOW_STATUS_TYPE					CANOPEN_UNSIGNED8
#define ESB_GLOW_STATUS_PERMISSIONS				CANOPEN_RO

#define ESB_GLOW_CURRENT_INDEX					0x2101
#define ESB_GLOW_CURRENT_SUBINDEX				0
#define ESB_GLOW_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define ESB_GLOW_CURRENT_PERMISSIONS			CANOPEN_RO

#define ESB_STARTER_STATUS_INDEX				0x2110
#define ESB_STARTER_STATUS_SUBINDEX				0
#define ESB_STARTER_STATUS_TYPE					CANOPEN_UNSIGNED8
#define ESB_STARTER_STATUS_PERMISSIONS			CANOPEN_RO

#define ESB_STARTER_CURRENT_INDEX				0x2111
#define ESB_STARTER_CURRENT_SUBINDEX			0
#define ESB_STARTER_CURRENT_TYPE				CANOPEN_UNSIGNED16
#define ESB_STARTER_CURRENT_PERMISSIONS			CANOPEN_RO

#define ESB_AC_STATUS_INDEX						0x2120
#define ESB_AC_STATUS_SUBINDEX					0
#define ESB_AC_STATUS_TYPE						CANOPEN_UNSIGNED8
#define ESB_AC_STATUS_PERMISSIONS				CANOPEN_RO

#define ESB_AC_CURRENT_INDEX					0x2121
#define ESB_AC_CURRENT_SUBINDEX					0
#define ESB_AC_CURRENT_TYPE						CANOPEN_UNSIGNED16
#define ESB_AC_CURRENT_PERMISSIONS				CANOPEN_RO

#define ESB_ENGINE_START1_STATUS_INDEX			0x2130
#define ESB_ENGINE_START1_STATUS_SUBINDEX		0
#define ESB_ENGINE_START1_STATUS_TYPE			CANOPEN_UNSIGNED8
#define ESB_ENGINE_START1_STATUS_PERMISSIONS	CANOPEN_RO

#define ESB_ENGINE_START1_CURRENT_INDEX			0x2131
#define ESB_ENGINE_START1_CURRENT_SUBINDEX		0
#define ESB_ENGINE_START1_CURRENT_TYPE			CANOPEN_UNSIGNED16
#define ESB_ENGINE_START1_CURRENT_PERMISSIONS	CANOPEN_RO

#define ESB_ENGINE_START2_STATUS_INDEX			0x2140
#define ESB_ENGINE_START2_STATUS_SUBINDEX		0
#define ESB_ENGINE_START2_STATUS_TYPE			CANOPEN_UNSIGNED8
#define ESB_ENGINE_START2_STATUS_PERMISSIONS	CANOPEN_RO

#define ESB_ENGINE_START2_CURRENT_INDEX			0x2141
#define ESB_ENGINE_START2_CURRENT_SUBINDEX		0
#define ESB_ENGINE_START2_CURRENT_TYPE			CANOPEN_UNSIGNED16
#define ESB_ENGINE_START2_CURRENT_PERMISSIONS	CANOPEN_RO

#define ESB_PUMP_STATUS_INDEX					0x2150
#define ESB_PUMP_STATUS_SUBINDEX				0
#define ESB_PUMP_STATUS_TYPE					CANOPEN_UNSIGNED8
#define ESB_PUMP_STATUS_PERMISSIONS				CANOPEN_RO

#define ESB_PUMP_CURRENT_INDEX					0x2151
#define ESB_PUMP_CURRENT_SUBINDEX				0
#define ESB_PUMP_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define ESB_PUMP_CURRENT_PERMISSIONS			CANOPEN_RO


#define ESB_ALT_IG_STATUS_INDEX					0x2160
#define ESB_ALT_IG_STATUS_SUBINDEX				0
#define ESB_ALT_IG_STATUS_TYPE					CANOPEN_UNSIGNED8
#define ESB_ALT_IG_STATUS_PERMISSIONS			CANOPEN_RO

#define ESB_ALT_IG_CURRENT_INDEX				0x2161
#define ESB_ALT_IG_CURRENT_SUBINDEX				0
#define ESB_ALT_IG_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define ESB_ALT_IG_CURRENT_PERMISSIONS			CANOPEN_RO






#define ESB_RPM_INDEX							0x2200
#define ESB_RPM_SUBINDEX						0
#define ESB_RPM_TYPE							CANOPEN_UNSIGNED16
#define ESB_RPM_PERMISSIONS						CANOPEN_RW

#define ESB_ALT_L_INDEX							0x2210
#define ESB_ALT_L_SUBINDEX						0
#define ESB_ALT_L_TYPE							CANOPEN_UNSIGNED8
#define ESB_ALT_L_PERMISSIONS					CANOPEN_RO

#define ESB_MOTOR_WATER_TEMP_INDEX				0x2220
#define ESB_MOTOR_WATER_TEMP_SUBINDEX			0
#define ESB_MOTOR_WATER_TEMP_TYPE				CANOPEN_UNSIGNED8
#define ESB_MOTOR_WATER_TEMP_PERMISSIONS		CANOPEN_RO

#define ESB_MOTOR_OIL_PRESS_INDEX				0x2230
#define ESB_MOTOR_OIL_PRESS_SUBINDEX			0
#define ESB_MOTOR_OIL_PRESS_TYPE				CANOPEN_UNSIGNED8
#define ESB_MOTOR_OIL_PRESS_PERMISSIONS			CANOPEN_RO

#define ESB_MOTOR_TEMP_INDEX					0x2240
#define ESB_MOTOR_TEMP_SUBINDEX					0
#define ESB_MOTOR_TEMP_TYPE						CANOPEN_UNSIGNED8
#define ESB_MOTOR_TEMP_PERMISSIONS				CANOPEN_RW

#define ESB_OIL_TEMP_INDEX						0x2250
#define ESB_OIL_TEMP_SUBINDEX					0
#define ESB_OIL_TEMP_TYPE						CANOPEN_UNSIGNED8
#define ESB_OIL_TEMP_PERMISSIONS				CANOPEN_RW

#define ESB_OIL_LEVEL_INDEX						0x2260
#define ESB_OIL_LEVEL_SUBINDEX					0
#define ESB_OIL_LEVEL_TYPE						CANOPEN_UNSIGNED8
#define ESB_OIL_LEVEL_PERMISSIONS				CANOPEN_RO

#define ESB_FUEL_LEVEL_INDEX					0x2270
#define ESB_FUEL_LEVEL_SUBINDEX					0
#define ESB_FUEL_LEVEL_TYPE						CANOPEN_UNSIGNED8
#define ESB_FUEL_LEVEL_PERMISSIONS				CANOPEN_RO

#define ESB_VDD_INDEX							0x2280
#define ESB_VDD_SUBINDEX						0
#define ESB_VDD_TYPE							CANOPEN_UNSIGNED16
#define ESB_VDD_PERMISSIONS						CANOPEN_RO

#if (CONFIG_ESB_IF_REVISION > 1)
// Dither frequency is specified in Hz
#define ESB_DITHER_FREQ_INDEX					0x2300
#define ESB_DITHER_FREQ_SUBINDEX				0
#define ESB_DITHER_FREQ_TYPE					CANOPEN_UNSIGNED8
#define ESB_DITHER_FREQ_PERMISSIONS				CANOPEN_RW

// Dither amplitude is specified in ppt from max PWM value
#define ESB_DITHER_AMPL_INDEX					0x2301
#define ESB_DITHER_AMPL_SUBINDEX				0
#define ESB_DITHER_AMPL_TYPE					CANOPEN_UNSIGNED16
#define ESB_DITHER_AMPL_PERMISSIONS				CANOPEN_RW
#endif



// objects to hold other nodes data
#define ESB_FSB_IGNKEY_INDEX					0x2A00
#define ESB_FSB_IGNKEY_SUBINDEX					0
#define ESB_FSB_IGNKEY_TYPE						CANOPEN_UNSIGNED8
#define ESB_FSB_IGNKEY_PERMISSIONS				CANOPEN_WO

#define ESB_FSB_EMCY_INDEX						0x2A01
#define ESB_FSB_EMCY_SUBINDEX					0
#define ESB_FSB_EMCY_TYPE						CANOPEN_UNSIGNED8
#define ESB_FSB_EMCY_PERMISSIONS				CANOPEN_WO












#endif /* CAN_ESB_H_ */
