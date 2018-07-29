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
	HCU_EMCY_COUNT
} hcu_emcy_e;




// HCU OBJECT DICTIONARY ENTRIES


#define HCU_TOTAL_CURRENT_INDEX					0x2000
#define HCU_TOTAL_CURRENT_SUBINDEX				0
#define HCU_TOTAL_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define HCU_TOTAL_CURRENT_PERMISSIONS			CANOPEN_RO






#define HCU_FSB_INDEX_OFFSET					0x1000
#define HCU_LKEYP_INDEX_OFFSET					0x2000
#define HCU_RKEYP_INDEX_OFFSET					0x3000



#endif /* CAN_HCU_H_ */
