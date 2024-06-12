#pragma once
/******************************************************************************/
/* File   : McalSpi.hpp                                                           */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstMcalSpi.hpp"
#include "CfgMcalSpi.hpp"
#include "McalSpi_core.hpp"
#include "infMcalSpi_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalSpi:
      INTERFACES_EXPORTED_MCALSPI
      public abstract_module
   ,  public class_McalSpi_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstMcalSpi_Type* lptrConst = (ConstMcalSpi_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, MCALSPI_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCALSPI_CONST,       MCALSPI_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALSPI_CONFIG_DATA, MCALSPI_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCALSPI_CODE) DeInitFunction (void);
      FUNC(void, MCALSPI_CODE) MainFunction   (void);
      MCALSPI_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_McalSpi, MCALSPI_VAR) McalSpi;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

