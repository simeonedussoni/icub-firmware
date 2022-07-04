/*
 * Copyright (C) 2021 iCub Tech Facility - Istituto Italiano di Tecnologia
 * Author:  German David Rodriguez Arenas
 * email:   german.rodriguez@iit.it
 * Permission is granted to copy, distribute, and/or modify this program
 * under the terms of the GNU General Public License, version 2 or any
 * later version published by the Free Software Foundation.
 *
 * A copy of the license can be found at
 * http://www.robotcub.org/icub/license/gpl.txt
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details
*/

#include "rtw_enable_disable_motors.h"

#ifdef STM32HAL_BOARD_AMCBLDC

#ifndef __cplusplus
    #error this file must be compiled in C++ mode when deployed on the amcbldc target
#endif
// we use embot::hw
#include "embot_hw_motor.h"
#endif /* STM32HAL_BOARD_AMCBLDC */

void rtw_enableMotor()
{
#ifdef STM32HAL_BOARD_AMCBLDC
    embot::hw::motor::enable(embot::hw::MOTOR::one, true);
#endif /* STM32HAL_BOARD_AMCBLDC */
}

void rtw_disableMotor()
{
#ifdef STM32HAL_BOARD_AMCBLDC
    embot::hw::motor::enable(embot::hw::MOTOR::one, false);
#endif /* STM32HAL_BOARD_AMCBLDC */
}

// - end-of-file (leave a blank line after)----------------------------------------------------------------------------