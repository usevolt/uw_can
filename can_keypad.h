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


#ifndef CAN_KEYPAD_H_
#define CAN_KEYPAD_H_

#include <stdint.h>






#define LKEYPAD_NODE_ID					0x3
#define RKEYPAD_NODE_ID					0x4




/// @brief: Defines all keypads's EMCY message data values.
/// All EMCY messages belong to device specific EMCY error code category (0xFF00)
typedef enum {
	KEYP_EMCY_COUNT
} keyp_emcy_e;




// KEYPAD OBJECT DICTIONARY ENTRIES



#define KEYP_BUTTON_COUNT				7

#define KEYP_BUTTON1_INDEX				0x2001
#define KEYP_BUTTON1_ARRAY_MAX_SIZE		4
#define KEYP_BUTTON1_PERMISSIONS		CANOPEN_RO
#define KEYP_BUTTON1_TYPE				CANOPEN_ARRAY8

#define KEYP_BUTTON2_INDEX				0x2002
#define KEYP_BUTTON2_ARRAY_MAX_SIZE		4
#define KEYP_BUTTON2_PERMISSIONS		CANOPEN_RO
#define KEYP_BUTTON2_TYPE				CANOPEN_ARRAY8

#define KEYP_BUTTON3_INDEX				0x2003
#define KEYP_BUTTON3_ARRAY_MAX_SIZE		4
#define KEYP_BUTTON3_PERMISSIONS		CANOPEN_RO
#define KEYP_BUTTON3_TYPE				CANOPEN_ARRAY8

#define KEYP_BUTTON4_INDEX				0x2004
#define KEYP_BUTTON4_ARRAY_MAX_SIZE		4
#define KEYP_BUTTON4_PERMISSIONS		CANOPEN_RO
#define KEYP_BUTTON4_TYPE				CANOPEN_ARRAY8

#define KEYP_BUTTON5_INDEX				0x2005
#define KEYP_BUTTON5_ARRAY_MAX_SIZE		4
#define KEYP_BUTTON5_PERMISSIONS		CANOPEN_RO
#define KEYP_BUTTON5_TYPE				CANOPEN_ARRAY8

#define KEYP_BUTTON6_INDEX				0x2006
#define KEYP_BUTTON6_ARRAY_MAX_SIZE		4
#define KEYP_BUTTON6_PERMISSIONS		CANOPEN_RO
#define KEYP_BUTTON6_TYPE				CANOPEN_ARRAY8

#define KEYP_BUTTON7_INDEX				0x2007
#define KEYP_BUTTON7_ARRAY_MAX_SIZE		4
#define KEYP_BUTTON7_PERMISSIONS		CANOPEN_RO
#define KEYP_BUTTON7_TYPE				CANOPEN_ARRAY8

#define KEYP_JOYX_INDEX					0x2100
#define KEYP_JOYX_ARRAY_MAX_SIZE		2
#define KEYP_JOYX_PERMISSIONS			CANOPEN_RO
#define KEYP_JOYX_TYPE					CANOPEN_ARRAY8

#define KEYP_JOYY_INDEX					0x2101
#define KEYP_JOYY_ARRAY_MAX_SIZE		2
#define KEYP_JOYY_PERMISSIONS			CANOPEN_RO
#define KEYP_JOYY_TYPE					CANOPEN_ARRAY8

#define KEYP_JOYZ_INDEX					0x2102
#define KEYP_JOYZ_ARRAY_MAX_SIZE		2
#define KEYP_JOYZ_PERMISSIONS			CANOPEN_RO
#define KEYP_JOYZ_TYPE					CANOPEN_ARRAY8

#define KEYP_JOYV_INDEX					0x2103
#define KEYP_JOYV_ARRAY_MAX_SIZE		2
#define KEYP_JOYV_PERMISSIONS			CANOPEN_RO
#define KEYP_JOYV_TYPE					CANOPEN_ARRAY8

#define KEYP_JOYX_CALIB_INDEX			0x2120
#define KEYP_JOYX_CALIB_ARRAY_MAX_SIZE	4
#define KEYP_JOYX_CALIB_PERMISSIONS		CANOPEN_RW
#define KEYP_JOYX_CALIB_TYPE			CANOPEN_ARRAY16

#define KEYP_JOYY_CALIB_INDEX			0x2121
#define KEYP_JOYY_CALIB_ARRAY_MAX_SIZE	4
#define KEYP_JOYY_CALIB_PERMISSIONS		CANOPEN_RW
#define KEYP_JOYY_CALIB_TYPE			CANOPEN_ARRAY16

#define KEYP_JOYZ_CALIB_INDEX			0x2122
#define KEYP_JOYZ_CALIB_ARRAY_MAX_SIZE	4
#define KEYP_JOYZ_CALIB_PERMISSIONS		CANOPEN_RW
#define KEYP_JOYZ_CALIB_TYPE			CANOPEN_ARRAY16

#define KEYP_JOYV_CALIB_INDEX			0x2123
#define KEYP_JOYV_CALIB_ARRAY_MAX_SIZE	4
#define KEYP_JOYV_CALIB_PERMISSIONS		CANOPEN_RW
#define KEYP_JOYV_CALIB_TYPE			CANOPEN_ARRAY16

#define KEYP_AXIS_CALIB_REQ_INDEX		0x21F0
#define KEYP_AXIS_CALIB_REQ_SUBINDEX	0
#define KEYP_AXIS_CALIB_REQ_PERMISSIONS	CANOPEN_RW
#define KEYP_AXIS_CALIB_REQ_TYPE		CANOPEN_UNSIGNED8




#endif /* CAN_KEYPAD_H_ */
