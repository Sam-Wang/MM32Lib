/**************************************************************************//**
* @file HAL_device.h
* @brief CMSIS Cortex-M Peripheral Access Layer for MindMotion
*        microcontroller devices
*
* This is a convenience header file for defining the part number on the
* build command line, instead of specifying the part specific header file.
*
* Example: Add "-DMM32SPIN2xx_p" to your build options, to define part
*          Add "#include "HAL_device.h" to your source files
*
*
* @version 1.0.1
*
*
*****************************************************************************/

#ifndef __HAL_device_H
#define __HAL_device_H

#define  MM32SPIN2xx_p

#if defined(MM32SPIN2xx_p)
//#error  dontwantincludethisfile
#include "MM32SPIN2xx_p.h"
#include "system_MM32SPIN2xx_p.h"

#else
#error "HAL_device.h: PART NUMBER undefined"
#endif
#endif /* __HAL_device_H */
/*-------------------------(C) COPYRIGHT 2018 MindMotion ----------------------*/
