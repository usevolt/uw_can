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


#ifndef UW_CAN_CAN_CCU_H_
#define UW_CAN_CAN_CCU_H_




#include <stdint.h>






#define CCU_NODE_ID					0x9




/// @brief: Defines all ESB's EMCY message data values.
/// All EMCY messages belong to device specific EMCY error code category (0xFF00)
typedef enum {
	CCU_EMCY_STEER_OVERLOAD_A = (CCU_NODE_ID << 16),
	CCU_EMCY_STEER_FAULT_A,
	CCU_EMCY_STEER_OVERLOAD_B,
	CCU_EMCY_STEER_FAULT_B,
	CCU_EMCY_DRIVE1_OVERLOAD_A,
	CCU_EMCY_DRIVE1_FAULT_A,
	CCU_EMCY_DRIVE1_OVERLOAD_B,
	CCU_EMCY_DRIVE1_FAULT_B,
	CCU_EMCY_DRIVE2_OVERLOAD_A,
	CCU_EMCY_DRIVE2_FAULT_A,
	CCU_EMCY_DRIVE2_OVERLOAD_B,
	CCU_EMCY_DRIVE2_FAULT_B,
	CCU_EMCY_DRIVE3_OVERLOAD_A,
	CCU_EMCY_DRIVE3_FAULT_A,
	CCU_EMCY_DRIVE3_OVERLOAD_B,
	CCU_EMCY_DRIVE3_FAULT_B,
	CCU_EMCY_CABROT_OVERLOAD_A,
	CCU_EMCY_CABROT_FAULT_A,
	CCU_EMCY_CABROT_OVERLOAD_B,
	CCU_EMCY_CABROT_FAULT_B,
	CCU_EMCY_TELESCOPE_OVERLOAD_A,
	CCU_EMCY_TELESCOPE_FAULT_A,
	CCU_EMCY_TELESCOPE_OVERLOAD_B,
	CCU_EMCY_TELESCOPE_FAULT_B,
	CCU_EMCY_DRIVING_LEFT_FOOT_DOWN,
	CCU_EMCY_DRIVING_RIGHT_FOOT_DOWN,
	CCU_EMCY_BRAKE_OVERLOAD,
	CCU_EMCY_BRAKE_FAULT,
	CCU_EMCY_GEAR3_OVERLOAD,
	CCU_EMCY_GEAR3_FAULT,
	CCU_EMCY_BOOM_VDD_OVERLOAD,
	CCU_EMCY_BOOM_VDD_FAULT,
	CCU_EMCY_PEDAL_FAULT,
	CCU_EMCY_COUNT
} ccu_emcy_e;


enum {
	CCU_GEAR_1 = 0,
	CCU_GEAR_2,
	CCU_GEAR_3,
	CCU_GEAR_COUNT
};
typedef uint8_t ccu_gear_e;


/// @brief: Cabin rotate directions. Forward means in the working direction,
/// backward is the transport direction
enum {
	CCU_CABDIR_FORWARD = 0,
	CCU_CABDIR_BACKWARD,
	CCU_CABDIR_COUNT
};
typedef uint8_t ccu_cabdir_e;


// CCU OBJECT DICTIONARY ENTRIES


#define CCU_TOTAL_CURRENT_INDEX					0x2000
#define CCU_TOTAL_CURRENT_SUBINDEX				0
#define CCU_TOTAL_CURRENT_TYPE					CANOPEN_UNSIGNED16
#define CCU_TOTAL_CURRENT_PERMISSIONS			CANOPEN_RO

#define CCU_WORK_ACTIVE_INDEX					0x2002
#define CCU_WORK_ACTIVE_SUBINDEX				0
#define CCU_WORK_ACTIVE_TYPE					CANOPEN_UNSIGNED8
#define CCU_WORK_ACTIVE_PERMISSIONS				CANOPEN_RO

#define CCU_DRIVE_ACTIVE_INDEX					0x2003
#define CCU_DRIVE_ACTIVE_SUBINDEX				0
#define CCU_DRIVE_ACTIVE_TYPE					CANOPEN_UNSIGNED8
#define CCU_DRIVE_ACTIVE_PERMISSIONS			CANOPEN_RO

#define CCU_STEER_REQ_INDEX						0x2100
#define CCU_STEER_REQ_SUBINDEX					0
#define CCU_STEER_REQ_TYPE						CANOPEN_UNSIGNED8
#define CCU_STEER_REQ_PERMISSIONS				CANOPEN_RW

#define CCU_STEER_2NDREQ_INDEX					0x2100
#define CCU_STEER_2NDREQ_SUBINDEX				1
#define CCU_STEER_2NDREQ_TYPE					CANOPEN_UNSIGNED8
#define CCU_STEER_2NDREQ_PERMISSIONS			CANOPEN_RW

#define CCU_STEER_3RDREQ_INDEX					0x2100
#define CCU_STEER_3RDREQ_SUBINDEX				2
#define CCU_STEER_3RDREQ_TYPE					CANOPEN_UNSIGNED8
#define CCU_STEER_3RDREQ_PERMISSIONS			CANOPEN_RW

#define CCU_STEER_PARAM_INDEX					0x2101
#define CCU_STEER_PARAM_ARRAY_MAX_SIZE			8
#define CCU_STEER_PARAM_TYPE					CANOPEN_ARRAY16
#define CCU_STEER_PARAM_PERMISSIONS				CANOPEN_RW

#define CCU_STEER_CURRENT_INDEX					0x2102
#define CCU_STEER_CURRENT_SUBINDEX				0
#define CCU_STEER_CURRENT_TYPE					CANOPEN_SIGNED16
#define CCU_STEER_CURRENT_PERMISSIONS			CANOPEN_RO

#define CCU_DRIVE_REQ_INDEX						0x2110
#define CCU_DRIVE_REQ_SUBINDEX					0
#define CCU_DRIVE_REQ_TYPE						CANOPEN_UNSIGNED8
#define CCU_DRIVE_REQ_PERMISSIONS				CANOPEN_RW

#define CCU_DRIVE_PARAM_INDEX					0x2111
#define CCU_DRIVE_PARAM_ARRAY_MAX_SIZE			8 * CCU_GEAR_COUNT
#define CCU_DRIVE_PARAM_TYPE					CANOPEN_ARRAY16
#define CCU_DRIVE_PARAM_PERMISSIONS				CANOPEN_RW

#define CCU_DRIVE_CURRENT1_INDEX				0x2112
#define CCU_DRIVE_CURRENT1_SUBINDEX				0
#define CCU_DRIVE_CURRENT1_TYPE					CANOPEN_SIGNED16
#define CCU_DRIVE_CURRENT1_PERMISSIONS			CANOPEN_RO

#define CCU_DRIVE_CURRENT2_INDEX				0x2113
#define CCU_DRIVE_CURRENT2_SUBINDEX				0
#define CCU_DRIVE_CURRENT2_TYPE					CANOPEN_SIGNED16
#define CCU_DRIVE_CURRENT2_PERMISSIONS			CANOPEN_RO

#define CCU_DRIVE_CURRENT3_INDEX				0x2113
#define CCU_DRIVE_CURRENT3_SUBINDEX				1
#define CCU_DRIVE_CURRENT3_TYPE					CANOPEN_SIGNED16
#define CCU_DRIVE_CURRENT3_PERMISSIONS			CANOPEN_RO

#define CCU_GEAR_INDEX							0x2114
#define CCU_GEAR_SUBINDEX						0
#define CCU_GEAR_TYPE							CANOPEN_UNSIGNED8
#define CCU_GEAR_PERMISSIONS					CANOPEN_RW

#define CCU_GEAR_REQ_INDEX						0x2115
#define CCU_GEAR_REQ_SUBINDEX					0
#define CCU_GEAR_REQ_TYPE						CANOPEN_SIGNED8
#define CCU_GEAR_REQ_PERMISSIONS				CANOPEN_RW

#define CCU_D4WD_REQ_INDEX						0x2116
#define CCU_D4WD_REQ_SUBINDEX					0
#define CCU_D4WD_REQ_TYPE						CANOPEN_UNSIGNED8
#define CCU_D4WD_REQ_PERMISSIONS				CANOPEN_RO

#define CCU_BRAKE_CURRENT_INDEX					0x2117
#define CCU_BRAKE_CURRENT_SUBINDEX				0
#define CCU_BRAKE_CURRENT_TYPE					CANOPEN_SIGNED16
#define CCU_BRAKE_CURRENT_PERMISSIONS			CANOPEN_RO

#define CCU_DRIVE_COMP_INDEX					0x2118
#define CCU_DRIVE_COMP_ARRAY_MAX_SIZE			2
#define CCU_DRIVE_COMP_TYPE						CANOPEN_ARRAY8
#define CCU_DRIVE_COMP_PERMISSIONS				CANOPEN_RW

#define CCU_DRIVE_DIR_INDEX						0x2119
#define CCU_DRIVE_DIR_SUBINDEX					0
#define CCU_DRIVE_DIR_TYPE						CANOPEN_SIGNED8
#define CCU_DRIVE_DIR_PERMISSIONS				CANOPEN_RO

#define CCU_CABROT_REQ_INDEX					0x2120
#define CCU_CABROT_REQ_SUBINDEX					0
#define CCU_CABROT_REQ_TYPE						CANOPEN_UNSIGNED8
#define CCU_CABROT_REQ_PERMISSIONS				CANOPEN_RW

#define CCU_CABROT_PARAM_INDEX					0x2121
#define CCU_CABROT_PARAM_ARRAY_MAX_SIZE			8
#define CCU_CABROT_PARAM_TYPE					CANOPEN_ARRAY16
#define CCU_CABROT_PARAM_PERMISSIONS			CANOPEN_RW

#define CCU_CABROT_CURRENT_INDEX				0x2122
#define CCU_CABROT_CURRENT_SUBINDEX				0
#define CCU_CABROT_CURRENT_TYPE					CANOPEN_SIGNED16
#define CCU_CABROT_CURRENT_PERMISSIONS			CANOPEN_RO

#define CCU_CABROT_DIR_INDEX					0x2123
#define CCU_CABROT_DIR_SUBINDEX					0
#define CCU_CABROT_DIR_TYPE						CANOPEN_UNSIGNED8
#define CCU_CABROT_DIR_PERMISSIONS				CANOPEN_RO

#define CCU_CABBRAKE_CURRENT_INDEX				0x2124
#define CCU_CABBRAKE_CURRENT_SUBINDEX			0
#define CCU_CABBRAKE_CURRENT_TYPE				CANOPEN_SIGNED16
#define CCU_CABBRAKE_CURRENT_PERMISSIONS		CANOPEN_RO

#define CCU_TELESCOPE_REQ_INDEX					0x2130
#define CCU_TELESCOPE_REQ_SUBINDEX				0
#define CCU_TELESCOPE_REQ_TYPE					CANOPEN_UNSIGNED8
#define CCU_TELESCOPE_REQ_PERMISSIONS			CANOPEN_RW

#define CCU_TELESCOPE_PARAM_INDEX				0x2131
#define CCU_TELESCOPE_PARAM_ARRAY_MAX_SIZE		8
#define CCU_TELESCOPE_PARAM_TYPE				CANOPEN_ARRAY16
#define CCU_TELESCOPE_PARAM_PERMISSIONS			CANOPEN_RW

#define CCU_TELESCOPE_CURRENT_INDEX				0x2132
#define CCU_TELESCOPE_CURRENT_SUBINDEX			0
#define CCU_TELESCOPE_CURRENT_TYPE				CANOPEN_SIGNED16
#define CCU_TELESCOPE_CURRENT_PERMISSIONS		CANOPEN_RO

#define CCU_BACKSTEER_REQ_INDEX					0x2140
#define CCU_BACKSTEER_REQ_SUBINDEX				0
#define CCU_BACKSTEER_REQ_TYPE					CANOPEN_UNSIGNED8
#define CCU_BACKSTEER_REQ_PERMISSIONS			CANOPEN_RW

#define CCU_BACKSTEER_2NDREQ_INDEX				0x2140
#define CCU_BACKSTEER_2NDREQ_SUBINDEX			1
#define CCU_BACKSTEER_2NDREQ_TYPE				CANOPEN_UNSIGNED8
#define CCU_BACKSTEER_2NDREQ_PERMISSIONS		CANOPEN_RW

#define CCU_BACKSTEER_3RDREQ_INDEX				0x2140
#define CCU_BACKSTEER_3RDREQ_SUBINDEX			2
#define CCU_BACKSTEER_3RDREQ_TYPE				CANOPEN_UNSIGNED8
#define CCU_BACKSTEER_3RDREQ_PERMISSIONS		CANOPEN_RW

#define CCU_BACKSTEER_PARAM_INDEX				0x2141
#define CCU_BACKSTEER_PARAM_ARRAY_MAX_SIZE		8
#define CCU_BACKSTEER_PARAM_TYPE				CANOPEN_ARRAY16
#define CCU_BACKSTEER_PARAM_PERMISSIONS			CANOPEN_RW

#define CCU_BACKSTEER_CURRENT_INDEX				0x2142
#define CCU_BACKSTEER_CURRENT_SUBINDEX			0
#define CCU_BACKSTEER_CURRENT_TYPE				CANOPEN_SIGNED16
#define CCU_BACKSTEER_CURRENT_PERMISSIONS		CANOPEN_RO


#define CCU_PEDAL_RAW_INDEX						0x2200
#define CCU_PEDAL_RAW_ARRAY_MAX_SIZE			2
#define CCU_PEDAL_RAW_TYPE						CANOPEN_ARRAY16
#define CCU_PEDAL_RAW_PERMISSIONS				CANOPEN_RW

#define CCU_BOOM_VDD_STATE_INDEX				0x2300
#define CCU_BOOM_VDD_STATE_SUBINDEX				0
#define CCU_BOOM_VDD_STATE_TYPE					CANOPEN_UNSIGNED8
#define CCU_BOOM_VDD_STATE_PERMISSIONS			CANOPEN_RO

#define CCU_BOOM_VDD_CURRENT_INDEX				0x2301
#define CCU_BOOM_VDD_CURRENT_SUBINDEX			0
#define CCU_BOOM_VDD_CURRENT_TYPE				CANOPEN_UNSIGNED16
#define CCU_BOOM_VDD_CURRENT_PERMISSIONS		CANOPEN_RO

#define CCU_ASSEMBLY_INDEX						0x2400
#define CCU_ASSEMBLY_ARRAY_SIZE					4
#define CCU_ASSEMBLY_CABROT_INDEX				1
#define CCU_ASSEMBLY_TELESCOPE_INDEX			2
#define CCU_ASSEMBLY_INSTALLED_GEARS_INDEX		3
#define CCU_ASSEMBLY_BACKSTEER_INDEX			4
#define CCU_ASSEMBLY_TYPE						CANOPEN_ARRAY8
#define CCU_ASSEMBLY_PERMISSIONS				CANOPEN_RW

#define CCU_ASSEMBLY_WRITE_INDEX				0x2401
#define CCU_ASSEMBLY_WRITE_SUBINDEX				0
#define CCU_ASSEMBLY_WRITE_TYPE					CANOPEN_UNSIGNED8
#define CCU_ASSEMBLY_WRITE_PERMISSIONS			CANOPEN_RW


#define CCU_IMPL2_AIN1_REQ_INDEX				0x2500
#define CCU_IMPL2_AIN1_REQ_SUBINDEX				0
#define CCU_IMPL2_AIN1_REQ_TYPE					CANOPEN_SIGNED8
#define CCU_IMPL2_AIN1_REQ_PERMISSIONS			CANOPEN_RW

#define CCU_IMPL2_AIN2_REQ_INDEX				0x2501
#define CCU_IMPL2_AIN2_REQ_SUBINDEX				0
#define CCU_IMPL2_AIN2_REQ_TYPE					CANOPEN_SIGNED8
#define CCU_IMPL2_AIN2_REQ_PERMISSIONS			CANOPEN_RW

#define CCU_IMPL2_REQ_INDEX						0x2502
#define CCU_IMPL2_REQ_SUBINDEX					0
#define CCU_IMPL2_REQ_TYPE						CANOPEN_SIGNED8
#define CCU_IMPL2_REQ_PERMISSIONS				CANOPEN_RW





#define CCU_FSB_INDEX_OFFSET					0x1000
#define CCU_HCU_INDEX_OFFSET					0x2000


#endif /* UW_CAN_CAN_CCU_H_ */

