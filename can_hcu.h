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
	HCU_EMCY_COUNT
} hcu_emcy_e;




// HCU OBJECT DICTIONARY ENTRIES


#define HCU_TOTAL_CURRENT_INDEX					0x2000
#define HCU_TOTAL_CURRENT_SUBINDEX				0
#define HCU_TOTAL_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define HCU_TOTAL_CURRENT_PERMISSIONS			CANOPEN_RO

#define HCU_BOOM_ROTATE_REQ_INDEX				0x2100
#define HCU_BOOM_ROTATE_REQ_SUBINDEX			0
#define HCU_BOOM_ROTATE_REQ_TYPE				CANOPEN_UNSIGNED8
#define HCU_BOOM_ROTATE_REQ_PERMISSIONS			CANOPEN_RW

#define HCU_BOOM_ROTATE_PARAM_INDEX				0x2101
#define HCU_BOOM_ROTATE_PARAM_ARRAY_MAX_SIZE	7
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
#define HCU_BOOM_LIFT_PARAM_ARRAY_MAX_SIZE		7
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
#define HCU_BOOM_FOLD_PARAM_ARRAY_MAX_SIZE		7
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
#define HCU_BOOM_TELESCOPE_PARAM_ARRAY_MAX_SIZE	7
#define HCU_BOOM_TELESCOPE_PARAM_TYPE			CANOPEN_ARRAY16
#define HCU_BOOM_TELESCOPE_PARAM_PERMISSIONS	CANOPEN_RW

#define HCU_BOOM_TELESCOPE_CURRENT_INDEX		0x2132
#define HCU_BOOM_TELESCOPE_CURRENT_SUBINDEX		0
#define HCU_BOOM_TELESCOPE_CURRENT_TYPE			CANOPEN_SIGNED16
#define HCU_BOOM_TELESCOPE_CURRENT_PERMISSIONS	CANOPEN_RO






#define HCU_FSB_INDEX_OFFSET					0x1000



#endif /* CAN_HCU_H_ */