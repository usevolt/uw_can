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


#ifndef UW_CAN_CAN_TCU_H_
#define UW_CAN_CAN_TCU_H_




#include <stdint.h>






#define TCU_NODE_ID					0xB




/// @brief: Defines all ESB's EMCY message data values.
/// All EMCY messages belong to device specific EMCY error code category (0xFF00)
typedef enum {
	TCU_EMCY_DRIVE1_OVERLOAD_A = (TCU_NODE_ID << 16),
	TCU_EMCY_DRIVE1_FAULT_A,
	TCU_EMCY_DRIVE1_OVERLOAD_B,
	TCU_EMCY_DRIVE1_FAULT_B,
	TCU_EMCY_DRIVE2_OVERLOAD_A,
	TCU_EMCY_DRIVE2_FAULT_A,
	TCU_EMCY_DRIVE2_OVERLOAD_B,
	TCU_EMCY_DRIVE2_FAULT_B,
	TCU_EMCY_D4WD_OVERLOAD,
	TCU_EMCY_D4WD_FAULT,
	TCU_EMCY_COUNT
} tcu_emcy_e;


// TCU OBJECT DICTIONARY ENTRIES


#define TCU_TOTAL_CURRENT_INDEX					0x2000
#define TCU_TOTAL_CURRENT_SUBINDEX				0
#define TCU_TOTAL_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define TCU_TOTAL_CURRENT_PERMISSIONS			CANOPEN_RO

#define TCU_DRIVE_REQ_INDEX						0x2110
#define TCU_DRIVE_REQ_SUBINDEX					0
#define TCU_DRIVE_REQ_TYPE						CANOPEN_UNSIGNED8
#define TCU_DRIVE_REQ_PERMISSIONS				CANOPEN_RW

#define TCU_DRIVE_PARAM_INDEX					0x2111
#define TCU_DRIVE_PARAM_ARRAY_MAX_SIZE			8
#define TCU_DRIVE_PARAM_TYPE					CANOPEN_ARRAY16
#define TCU_DRIVE_PARAM_PERMISSIONS				CANOPEN_RW

#define TCU_DRIVE_CURRENT1_INDEX				0x2112
#define TCU_DRIVE_CURRENT1_SUBINDEX				0
#define TCU_DRIVE_CURRENT1_TYPE					CANOPEN_SIGNED16
#define TCU_DRIVE_CURRENT1_PERMISSIONS			CANOPEN_RO

#define TCU_DRIVE_CURRENT2_INDEX				0x2113
#define TCU_DRIVE_CURRENT2_SUBINDEX				0
#define TCU_DRIVE_CURRENT2_TYPE					CANOPEN_SIGNED16
#define TCU_DRIVE_CURRENT2_PERMISSIONS			CANOPEN_RO

#define TCU_D4WD_CURRENT_INDEX					0x2122
#define TCU_D4WD_CURRENT_SUBINDEX				0
#define TCU_D4WD_CURRENT_TYPE					CANOPEN_SIGNED16
#define TCU_D4WD_CURRENT_PERMISSIONS			CANOPEN_RO



#define TCU_CCU_INDEX_OFFSET					0x1000
#define TCU_FSB_INDEX_OFFSET					0x2000


#endif /* UW_CAN_CAN_TCU_H_ */

