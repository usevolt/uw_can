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


#ifndef UW_CAN_DISPLAY_H_
#define UW_CAN_DISPLAY_H_




#include <stdint.h>






#define DISPLAY_NODE_ID					0xE




// DISPLAY OBJECT DICTIONARY ENTRIES

#define DSPL_PEDAL_VALUE_INDEX			0x2100
#define DSPL_PEDAL_VALUE_ARRAY_SIZE		2
#define DSPL_PEDAL_VALUE_TYPE			CANOPEN_ARRAY16
#define DSPL_PEDAL_VALUE_PERMISSIONS	CANOPEN_WO




#define DSPL_LKEYP_OFFSET				0x1000
#define DSPL_RKEYP_OFFSET				0x2000
#define DSPL_PEDAL_OFFSET				0x3000
#define DSPL_ESB_OFFSET					0x4000
#define DSPL_CSB_OFFSET					0x5000
#define DSPL_FSB_OFFSET					0x6000
#define DSPL_HCU_OFFSET					0x7000
#define DSPL_CCU_OFFSET					0x8000
#define DSPL_ICU_OFFSET					0x9000



#endif /* UW_CAN_CAN_DISPLAY_H_ */
