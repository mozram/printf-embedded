/**
  ******************************************************************************
  * @file    printf.h
  * @author  Zulhilmi Ramli
  * @version V1.0.0
  * @date    28-Feb-2017
  * @brief   Header for printf.c
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PRINTF_CODE_H
#define __PRINTF_CODE_H

/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include <stdarg.h>
//#include <strings.h>
#include <stdlib.h>

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
extern void print(const char *str, ...);

#endif // __PRINTF_CODE_H
