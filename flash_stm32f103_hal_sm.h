/**
* \version 1.0
* \author Bazhen Levkovets
* \date 2019 
*************************************************************************************
* \copyright	Bazhen Levkovets
* \copyright	Brovary
* \copyright	Ukraine
*************************************************************************************
*/

#ifndef FLASH_STM32F103_HAL_SM_H_INCLUDED
#define FLASH_STM32F103_HAL_SM_H_INCLUDED

/*
**************************************************************************
*								INCLUDE FILES
**************************************************************************
*/
	#include "main.h"
	#include <string.h>
	#include "stm32f1xx_hal_flash.h"
/*
**************************************************************************
*								    DEFINES                     
**************************************************************************
*/
	//#define FLASH_KEY1 ((uint32_t)0x45670123) //	Present in the standard library
	//#define FLASH_KEY2 ((uint32_t)0xCDEF89AB)	//	Present in the standard library
	#define MY_FLASH_PAGE_ADDR ((uint32_t)0x0800FC00)
/*
**************************************************************************
*								   DATA TYPES
**************************************************************************
*/

/*
**************************************************************************
*								GLOBAL VARIABLES
**************************************************************************
*/

/*
**************************************************************************
*									 MACRO'S                     
**************************************************************************
*/

/*
**************************************************************************
*                              FUNCTION PROTOTYPES
**************************************************************************
*/

	uint32_t	Flash_Read		(	uint32_t	address	) ;
	void 		Flash_Erase_Page(	uint32_t	address	) ;
	void 		Flash_Write		(	uint32_t	address	,
									uint32_t	data	) ;

	void 		Flash_Erase_All_Pages(void);

#endif /* FLASH_STM32F103_HAL_SM_H_INCLUDED */

/*
 * 	// READ:
 *	uint32_t flash_word_u32;
 *	flash_word_u32 = Flash_Read(MY_FLASH_PAGE_ADDR);
 *
 *	//	WRITE:
 *	HAL_FLASH_Unlock();
 *	Flash_Erase_Page(MY_FLASH_PAGE_ADDR);
 *	Flash_Write( MY_FLASH_PAGE_ADDR, flash_word_u32);
 *	HAL_FLASH_Lock();
 *
 */
