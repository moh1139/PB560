/******************************************************************************/
/*                                                                            */
/* Project N�  :  RB0505                                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  :SEC_24VAlarms.h            					  								*/
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/

/******************************************************************************/
/*%C                     Functionnal description :                            */
/*%C        			  										      		 			 		*/
/*%C          																  						*/
/******************************************************************************/
/*%I Input Parameter :  NONE                                                  */
/*%IO Input/Output :    NONE	                                              	*/
/*%O Output Parameter : NONE                                                  */
/******************************************************************************/


#ifndef SEC_24VALARM_H
#define SEC_24VALARM_H

/******************************************************************************/
/*		                EXTERNAL FUNCTION DECLARATION 						  			*/	
/******************************************************************************/

extern void TIM_StartDecounter16(e_TIM_TABLE_ID_16,UWORD16);
extern void TIM_StartDecounter32(e_TIM_TABLE_ID_32 offset_table,UWORD32 value);
extern void DB_PowerSupply_Write(e_DB_POWERSUPPLY Id, UWORD16 Value);
extern void DB_Control_Write(e_DB_Control Id, UWORD16 Value);
extern UWORD16 DB_Measurement_Read(e_DB_Measurement Id);
extern UWORD16 TIM_ReadValue16(e_TIM_TABLE_ID_16);
extern UWORD16 DB_PowerSupply_Read(e_DB_POWERSUPPLY Id);


#endif
