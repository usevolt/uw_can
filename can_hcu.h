/* 
 * This file is part of the uv_hal distribution (www.usevolt.fi).
 * Copyright (c) 2017 Usevolt Oy.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef CAN_HCU_H_
#define CAN_HCU_H_



#include <stdint.h>






#define HCU_NODE_ID					0x8




/// @brief: Defines all ESB's EMCY message data values.
/// All EMCY messages belong to device specific EMCY error code category (0xFF00)
typedef enum {
	HCU_EMCY_BOOM_ROTATE_OVERLOAD_A = (HCU_NODE_ID << 16),
	HCU_EMCY_BOOM_ROTATE_FAULT_A,
	HCU_EMCY_BOOM_ROTATE_OVERLOAD_B,
	HCU_EMCY_BOOM_ROTATE_FAULT_B,
	HCU_EMCY_BOOM_LIFT_OVERLOAD_A,
	HCU_EMCY_BOOM_LIFT_FAULT_A,
	HCU_EMCY_BOOM_LIFT_OVERLOAD_B,
	HCU_EMCY_BOOM_LIFT_FAULT_B,
	HCU_EMCY_BOOM_FOLD_OVERLOAD_A,
	HCU_EMCY_BOOM_FOLD_FAULT_A,
	HCU_EMCY_BOOM_FOLD_OVERLOAD_B,
	HCU_EMCY_BOOM_FOLD_FAULT_B,
	HCU_EMCY_BOOM_TELESCOPE_OVERLOAD_A,
	HCU_EMCY_BOOM_TELESCOPE_FAULT_A,
	HCU_EMCY_BOOM_TELESCOPE_OVERLOAD_B,
	HCU_EMCY_BOOM_TELESCOPE_FAULT_B,
	HCU_EMCY_LEFT_FOOT_OVERLOAD_A,
	HCU_EMCY_LEFT_FOOT_FAULT_A,
	HCU_EMCY_LEFT_FOOT_OVERLOAD_B,
	HCU_EMCY_LEFT_FOOT_FAULT_B,
	HCU_EMCY_RIGHT_FOOT_OVERLOAD_A,
	HCU_EMCY_RIGHT_FOOT_FAULT_A,
	HCU_EMCY_RIGHT_FOOT_OVERLOAD_B,
	HCU_EMCY_RIGHT_FOOT_FAULT_B,
	HCU_EMCY_ROTATOR_OVERLOAD_A,
	HCU_EMCY_ROTATOR_FAULT_A,
	HCU_EMCY_ROTATOR_OVERLOAD_B,
	HCU_EMCY_ROTATOR_FAULT_B,
	HCU_EMCY_IMPL1_OVERLOAD_A,
	HCU_EMCY_IMPL1_FAULT_A,
	HCU_EMCY_IMPL1_OVERLOAD_B,
	HCU_EMCY_IMPL1_FAULT_B,
	HCU_EMCY_IMPL2_1_OVERLOAD_A,
	HCU_EMCY_IMPL2_1_FAULT_A,
	HCU_EMCY_IMPL2_1_OVERLOAD_B,
	HCU_EMCY_IMPL2_1_FAULT_B,
	HCU_EMCY_IMPL2_2_OVERLOAD_A,
	HCU_EMCY_IMPL2_2_FAULT_A,
	HCU_EMCY_IMPL2_2_OVERLOAD_B,
	HCU_EMCY_IMPL2_2_FAULT_B,
	HCU_EMCY_D4WD_OVERLOAD,
	HCU_EMCY_D4WD_FAULT,


	HCU_EMCY_PRESSURE_SENSOR_FAULT,
	HCU_EMCY_COUNT
} hcu_emcy_e;




/// @brief: Defines available implementes for this machine
enum {
	HCU_IMPLEMENT_UW180S = 0,
	HCU_IMPLEMENT_UW100,
	HCU_IMPLEMENT_UW50,
	HCU_IMPLEMENT_COUNT
};
typedef uint8_t hcu_impls_e;


/// @brief: Foot positions
typedef enum {
	HCU_FOOT_DOWN = 0,
	HCU_FOOT_UP
} hcu_foot_state_e;


// HCU OBJECT DICTIONARY ENTRIES


#define HCU_TOTAL_CURRENT_INDEX					0x2000
#define HCU_TOTAL_CURRENT_SUBINDEX				0
#define HCU_TOTAL_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define HCU_TOTAL_CURRENT_PERMISSIONS			CANOPEN_RO

#define HCU_IMPLEMENT_INDEX						0x2001
#define HCU_IMPLEMENT_SUBINDEX					0
#define HCU_IMPLEMENT_TYPE						CANOPEN_UNSIGNED8
#define HCU_IMPLEMENT_PERMISSIONS				CANOPEN_RW

#define HCU_BOOM_ROTATE_REQ_INDEX				0x2100
#define HCU_BOOM_ROTATE_REQ_SUBINDEX			0
#define HCU_BOOM_ROTATE_REQ_TYPE				CANOPEN_UNSIGNED8
#define HCU_BOOM_ROTATE_REQ_PERMISSIONS			CANOPEN_RW

#define HCU_BOOM_ROTATE_PARAM_INDEX				0x2101
#define HCU_BOOM_ROTATE_PARAM_ARRAY_MAX_SIZE	8
#define HCU_BOOM_ROTATE_PARAM_TYPE				CANOPEN_ARRAY16
#define HCU_BOOM_ROTATE_PARAM_PERMISSIONS		CANOPEN_RW

#define HCU_BOOM_ROTATE_CURRENT_INDEX			0x2102
#define HCU_BOOM_ROTATE_CURRENT_SUBINDEX		0
#define HCU_BOOM_ROTATE_CURRENT_TYPE			CANOPEN_SIGNED16
#define HCU_BOOM_ROTATE_CURRENT_PERMISSIONS		CANOPEN_RO

#define HCU_BOOM_LIFT_REQ_INDEX					0x2110
#define HCU_BOOM_LIFT_REQ_SUBINDEX				0
#define HCU_BOOM_LIFT_REQ_TYPE					CANOPEN_UNSIGNED8
#define HCU_BOOM_LIFT_REQ_PERMISSIONS			CANOPEN_RW

#define HCU_BOOM_LIFT_PARAM_INDEX				0x2111
#define HCU_BOOM_LIFT_PARAM_ARRAY_MAX_SIZE		8
#define HCU_BOOM_LIFT_PARAM_TYPE				CANOPEN_ARRAY16
#define HCU_BOOM_LIFT_PARAM_PERMISSIONS			CANOPEN_RW

#define HCU_BOOM_LIFT_CURRENT_INDEX				0x2112
#define HCU_BOOM_LIFT_CURRENT_SUBINDEX			0
#define HCU_BOOM_LIFT_CURRENT_TYPE				CANOPEN_SIGNED16
#define HCU_BOOM_LIFT_CURRENT_PERMISSIONS		CANOPEN_RO

#define HCU_BOOM_FOLD_REQ_INDEX					0x2120
#define HCU_BOOM_FOLD_REQ_SUBINDEX				0
#define HCU_BOOM_FOLD_REQ_TYPE					CANOPEN_UNSIGNED8
#define HCU_BOOM_FOLD_REQ_PERMISSIONS			CANOPEN_RW

#define HCU_BOOM_FOLD_PARAM_INDEX				0x2121
#define HCU_BOOM_FOLD_PARAM_ARRAY_MAX_SIZE		8
#define HCU_BOOM_FOLD_PARAM_TYPE				CANOPEN_ARRAY16
#define HCU_BOOM_FOLD_PARAM_PERMISSIONS			CANOPEN_RW

#define HCU_BOOM_FOLD_CURRENT_INDEX				0x2122
#define HCU_BOOM_FOLD_CURRENT_SUBINDEX			0
#define HCU_BOOM_FOLD_CURRENT_TYPE				CANOPEN_SIGNED16
#define HCU_BOOM_FOLD_CURRENT_PERMISSIONS		CANOPEN_RO

#define HCU_BOOM_TELESCOPE_REQ_INDEX			0x2130
#define HCU_BOOM_TELESCOPE_REQ_SUBINDEX			0
#define HCU_BOOM_TELESCOPE_REQ_TYPE				CANOPEN_UNSIGNED8
#define HCU_BOOM_TELESCOPE_REQ_PERMISSIONS		CANOPEN_RW

#define HCU_BOOM_TELESCOPE_PARAM_INDEX			0x2131
#define HCU_BOOM_TELESCOPE_PARAM_ARRAY_MAX_SIZE	8
#define HCU_BOOM_TELESCOPE_PARAM_TYPE			CANOPEN_ARRAY16
#define HCU_BOOM_TELESCOPE_PARAM_PERMISSIONS	CANOPEN_RW

#define HCU_BOOM_TELESCOPE_CURRENT_INDEX		0x2132
#define HCU_BOOM_TELESCOPE_CURRENT_SUBINDEX		0
#define HCU_BOOM_TELESCOPE_CURRENT_TYPE			CANOPEN_SIGNED16
#define HCU_BOOM_TELESCOPE_CURRENT_PERMISSIONS	CANOPEN_RO

#define HCU_LEFT_FOOT_REQ_INDEX					0x2140
#define HCU_LEFT_FOOT_REQ_SUBINDEX				0
#define HCU_LEFT_FOOT_REQ_TYPE					CANOPEN_UNSIGNED8
#define HCU_LEFT_FOOT_REQ_PERMISSIONS			CANOPEN_RW

#define HCU_LEFT_FOOT_PARAM_INDEX				0x2141
#define HCU_LEFT_FOOT_PARAM_ARRAY_MAX_SIZE		8
#define HCU_LEFT_FOOT_PARAM_TYPE				CANOPEN_ARRAY16
#define HCU_LEFT_FOOT_PARAM_PERMISSIONS			CANOPEN_RW

#define HCU_LEFT_FOOT_CURRENT_INDEX				0x2142
#define HCU_LEFT_FOOT_CURRENT_SUBINDEX			0
#define HCU_LEFT_FOOT_CURRENT_TYPE				CANOPEN_SIGNED16
#define HCU_LEFT_FOOT_CURRENT_PERMISSIONS		CANOPEN_RO

#define HCU_LEFT_FOOT_STATE_INDEX				0x2143
#define HCU_LEFT_FOOT_STATE_SUBINDEX			0
#define HCU_LEFT_FOOT_STATE_TYPE				CANOPEN_UNSIGNED8
#define HCU_LEFT_FOOT_STATE_PERMISSIONS			CANOPEN_RO

#define HCU_RIGHT_FOOT_REQ_INDEX				0x2150
#define HCU_RIGHT_FOOT_REQ_SUBINDEX				0
#define HCU_RIGHT_FOOT_REQ_TYPE					CANOPEN_UNSIGNED8
#define HCU_RIGHT_FOOT_REQ_PERMISSIONS			CANOPEN_RW

#define HCU_RIGHT_FOOT_PARAM_INDEX				0x2151
#define HCU_RIGHT_FOOT_PARAM_ARRAY_MAX_SIZE		8
#define HCU_RIGHT_FOOT_PARAM_TYPE				CANOPEN_ARRAY16
#define HCU_RIGHT_FOOT_PARAM_PERMISSIONS		CANOPEN_RW

#define HCU_RIGHT_FOOT_CURRENT_INDEX			0x2152
#define HCU_RIGHT_FOOT_CURRENT_SUBINDEX			0
#define HCU_RIGHT_FOOT_CURRENT_TYPE				CANOPEN_SIGNED16
#define HCU_RIGHT_FOOT_CURRENT_PERMISSIONS		CANOPEN_RO

#define HCU_RIGHT_FOOT_STATE_INDEX				0x2153
#define HCU_RIGHT_FOOT_STATE_SUBINDEX			0
#define HCU_RIGHT_FOOT_STATE_TYPE				CANOPEN_UNSIGNED8
#define HCU_RIGHT_FOOT_STATE_PERMISSIONS		CANOPEN_RO

#define HCU_ROTATOR_REQ_INDEX					0x2160
#define HCU_ROTATOR_REQ_SUBINDEX				0
#define HCU_ROTATOR_REQ_TYPE					CANOPEN_UNSIGNED8
#define HCU_ROTATOR_REQ_PERMISSIONS				CANOPEN_RW

#define HCU_ROTATOR_PARAM_INDEX					0x2161
#define HCU_ROTATOR_PARAM_ARRAY_MAX_SIZE		8
#define HCU_ROTATOR_PARAM_TYPE					CANOPEN_ARRAY16
#define HCU_ROTATOR_PARAM_PERMISSIONS			CANOPEN_RW

#define HCU_ROTATOR_CURRENT_INDEX				0x2162
#define HCU_ROTATOR_CURRENT_SUBINDEX			0
#define HCU_ROTATOR_CURRENT_TYPE				CANOPEN_SIGNED16
#define HCU_ROTATOR_CURRENT_PERMISSIONS			CANOPEN_RO

#define HCU_IMPL1_REQ_INDEX						0x2170
#define HCU_IMPL1_REQ_SUBINDEX					0
#define HCU_IMPL1_REQ_TYPE						CANOPEN_UNSIGNED8
#define HCU_IMPL1_REQ_PERMISSIONS				CANOPEN_RW

#define HCU_IMPL1_PARAM_INDEX					0x2171
#define HCU_IMPL1_PARAM_ARRAY_MAX_SIZE			8
#define HCU_IMPL1_PARAM_TYPE					CANOPEN_ARRAY16
#define HCU_IMPL1_PARAM_PERMISSIONS				CANOPEN_RW

#define HCU_IMPL1_CURRENT_INDEX					0x2172
#define HCU_IMPL1_CURRENT_SUBINDEX				0
#define HCU_IMPL1_CURRENT_TYPE					CANOPEN_SIGNED16
#define HCU_IMPL1_CURRENT_PERMISSIONS			CANOPEN_RO

#define HCU_IMPL2_REQ_INDEX						0x2180
#define HCU_IMPL2_REQ_SUBINDEX					0
#define HCU_IMPL2_REQ_TYPE						CANOPEN_UNSIGNED8
#define HCU_IMPL2_REQ_PERMISSIONS				CANOPEN_RW

#define HCU_IMPL2_PARAM_INDEX					0x2181
#define HCU_IMPL2_PARAM_ARRAY_MAX_SIZE			8
#define HCU_IMPL2_PARAM_TYPE					CANOPEN_ARRAY16
#define HCU_IMPL2_PARAM_PERMISSIONS				CANOPEN_RW

#define HCU_IMPL2_CURRENT1_INDEX				0x2182
#define HCU_IMPL2_CURRENT1_SUBINDEX				0
#define HCU_IMPL2_CURRENT1_TYPE					CANOPEN_SIGNED16
#define HCU_IMPL2_CURRENT1_PERMISSIONS			CANOPEN_RO

#define HCU_IMPL2_CURRENT2_INDEX				0x2183
#define HCU_IMPL2_CURRENT2_SUBINDEX				0
#define HCU_IMPL2_CURRENT2_TYPE					CANOPEN_SIGNED16
#define HCU_IMPL2_CURRENT2_PERMISSIONS			CANOPEN_RO

#define HCU_D4WD_STATE_REQ_INDEX				0x2190
#define HCU_D4WD_STATE_REQ_SUBINDEX				0
#define HCU_D4WD_STATE_REQ_TYPE					CANOPEN_UNSIGNED8
#define HCU_D4WD_STATE_REQ_PERMISSIONS			CANOPEN_RW

#define HCU_D4WD_STATE_INDEX					0x2191
#define HCU_D4WD_STATE_SUBINDEX					0
#define HCU_D4WD_STATE_TYPE						CANOPEN_UNSIGNED8
#define HCU_D4WD_STATE_PERMISSIONS				CANOPEN_RW

#define HCU_D4WD_CURRENT_INDEX					0x2192
#define HCU_D4WD_CURRENT_SUBINDEX				0
#define HCU_D4WD_CURRENT_TYPE					CANOPEN_SIGNED16
#define HCU_D4WD_CURRENT_PERMISSIONS			CANOPEN_RO



#define HCU_PRESSURE_INDEX						0x2200
#define HCU_PRESSURE_SUBINDEX					0
#define HCU_PRESSURE_TYPE						CANOPEN_UNSIGNED16
#define HCU_PRESSURE_PERMISSIONS				CANOPEN_RO




#define HCU_FSB_INDEX_OFFSET					0x1000
#define HCU_CCU_INDEX_OFFSET					0x2000



#endif /* CAN_HCU_H_ */
