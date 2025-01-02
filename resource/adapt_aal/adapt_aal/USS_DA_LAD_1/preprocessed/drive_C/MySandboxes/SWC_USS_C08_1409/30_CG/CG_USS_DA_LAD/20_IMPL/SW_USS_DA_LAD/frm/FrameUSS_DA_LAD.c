# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm/FrameUSS_DA_LAD.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 10 "<built-in>"




# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm/FrameUSS_DA_LAD.c" 2
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_DA_LAD
 *** TargetLink subsystem : USS_DA_LAD/FrameUSS_DA_LAD
 *** Codefile             : FrameUSS_DA_LAD.c
 ***
 *** Generation date: 2023-10-26 11:49:16
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : AUTOSAR
 *** AUTOSAR version                          : 4.3.0
 *** Compiler                                 : <unknown>
 *** Target                                   : Generic
 *** ANSI-C compatible code                   : yes
 *** Code Optimization                        : enabled
 *** Constant style                           : decimal
 *** Clean code option                        : enabled
 *** Logging mode                             : Do not log anything
 *** Code Coverage                            : disabled
 *** Generate empty conditional branches      : disabled
 *** Loop unroll threshold                    : 5
 *** Shift mode                               : automatic
 *** Handle unscaled SF expr. with TL type    : enabled
 *** Assignment of conditions                 : AllBooleanOutputs 
 *** Scope reduction only to function level   : disabled
 *** Exploit ranges if not erasable           : disabled
 *** Exploit Compute Through Overflow         : optimized
 *** Linker sections                          : enabled
 *** Enable Assembler                         : disabled
 *** Variable name length                     : unlimited
 *** Use global bitfields                     : disabled
 *** Stateflow: use of bitfields              : enabled
 *** State activity encoding limit            : 5
 *** Omit zero inits in restart function      : disabled
 *** Share functions between TL subsystems    : disabled
 *** Generate 64bit functions                 : disabled
 *** Inlining Threshold                       : 6
 *** Line break limit                         : 100
 *** Target optimized boolean data type       : enabled
 *** Keep saturation elements                 : disabled
 *** Extended variable sharing                : disabled
 *** Extended lifetime optimization           : enabled
 *** Style definition file                    : C:\MySandboxes\SWC_USS_C08_1409\30_CG\CG_USS_DA_LAD\
 ***                                            20_IMPL\CgTools\Common_C_Tools\Platform_TlConfig\cco
 ***                                            nfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLink 4.3\Matlab\Tl\XML
 ***                                            \CodeGen\Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** SUBSYS         CORRESPONDING SIMULINK SUBSYSTEM
 *** Sa1            FrameUSS_DA_LAD
 *** SUSS_DA_LAD1   FrameUSS_DA_LAD/DriverActivityLateralDA_LAD
 *** 
 *** SUBSYS         CORRESPONDING MODEL BLOCK (REFERENCED MODEL)
 *** 
 *** SF-NODE        CORRESPONDING STATEFLOW NODE                    DESCRIPTION
 *** 
 *** TargetLink version      : 4.3p6 from 26-Feb-2020
 *** Code generator version  : Build Id 4.3.0.31 from 2020-03-02 18:28:10
\**************************************************************************************************/




/*------------------------------------------------------------------------------------------------*\
  DEFINES (OPT)
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src\\USS_DA_LAD.h" 1
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_DA_LAD
 *** TargetLink subsystem : USS_DA_LAD/FrameUSS_DA_LAD/Subsystem/FrameUSS_DA_LAD/DriverActivityLater
 ***                        alDA_LAD
 *** Codefile             : USS_DA_LAD.h
 ***
 *** Generation date: 2023-10-26 11:49:08
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : AUTOSAR
 *** AUTOSAR version                          : 4.3.0
 *** Compiler                                 : <unknown>
 *** Target                                   : Generic
 *** ANSI-C compatible code                   : yes
 *** Code Optimization                        : enabled
 *** Constant style                           : decimal
 *** Clean code option                        : enabled
 *** Logging mode                             : Do not log anything
 *** Code Coverage                            : disabled
 *** Generate empty conditional branches      : disabled
 *** Loop unroll threshold                    : 5
 *** Shift mode                               : automatic
 *** Handle unscaled SF expr. with TL type    : enabled
 *** Assignment of conditions                 : AllBooleanOutputs 
 *** Scope reduction only to function level   : disabled
 *** Exploit ranges if not erasable           : disabled
 *** Exploit Compute Through Overflow         : optimized
 *** Linker sections                          : enabled
 *** Enable Assembler                         : disabled
 *** Variable name length                     : unlimited
 *** Use global bitfields                     : disabled
 *** Stateflow: use of bitfields              : enabled
 *** State activity encoding limit            : 5
 *** Omit zero inits in restart function      : disabled
 *** Share functions between TL subsystems    : disabled
 *** Generate 64bit functions                 : disabled
 *** Inlining Threshold                       : 6
 *** Line break limit                         : 100
 *** Target optimized boolean data type       : enabled
 *** Keep saturation elements                 : disabled
 *** Extended variable sharing                : disabled
 *** Extended lifetime optimization           : enabled
 *** Style definition file                    : C:\MySandboxes\SWC_USS_C08_1409\30_CG\CG_USS_DA_LAD\
 ***                                            20_IMPL\CgTools\Common_C_Tools\Platform_TlConfig\cco
 ***                                            nfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLink 4.3\Matlab\Tl\XML
 ***                                            \CodeGen\Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** TargetLink version      : 4.3p6 from 26-Feb-2020
 *** Code generator version  : Build Id 4.3.0.31 from 2020-03-02 18:28:10
\**************************************************************************************************/




/*------------------------------------------------------------------------------------------------*\
  DEFINES (OPT)
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm\\Rte_Type.h" 1
/**************************************************************************************************\
 *** 
 *** System              : TargetLink Simulation RTE
 *** ECU                 : TL_ECU
 *** Configuration       : NONE
 *** Codefile            : Rte_Type.h
 ***
 *** Generated by the SystemDesk RTE code generator
 *** Generation date: 2023-10-26 11:49:36
 ***
 *** SystemDesk version  : 4.3.0.314576
 *** Copyright (c) 2016 dSPACE GmbH
\**************************************************************************************************/




/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/

# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm/Platform_Types.h" 1
/**************************************************************************************************\
 *** 
 *** System              : TargetLink Simulation RTE
 *** ECU                 : TL_ECU
 *** Configuration       : NONE
 *** Codefile            : Platform_Types.h
 ***
 *** Generated by the SystemDesk RTE code generator
 *** Generation date: 2023-10-26 11:49:36
 ***
 *** SystemDesk version  : 4.3.0.314576
 *** Copyright (c) 2016 dSPACE GmbH
\**************************************************************************************************/




/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/


/* CPU types. */




/* Bit ordering. */



/* Byte ordering. */



/* CPU. */




/* Definitions for TRUE and FALSE. */






/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/


/* Integer data types. */
typedef unsigned char boolean;/* AUTOSAR type used together with the definitions TRUE and FALSE. */
typedef unsigned char uint8;/* The standard AUTOSAR type for 8 bit unsigned integer */
typedef unsigned short int uint16;/* The standard AUTOSAR type for 16 bit unsigned integer */
typedef unsigned long int uint32;/* The standard AUTOSAR type for 32 bit unsigned integer */
typedef char sint8;/* The standard AUTOSAR type for 8 bit signed integer */
typedef short int sint16;/* The standard AUTOSAR type for 16 bit signed integer */
typedef long int sint32;/* The standard AUTOSAR type for 32 bit signed integer */

/* Optimized integer data types. */
typedef unsigned long int uint8_least;/* The optimized AUTOSAR type for 8 bit unsigned integer */
typedef unsigned long int uint16_least;/* The optimized AUTOSAR type for 16 bit unsigned integer */
typedef unsigned long int uint32_least;/* The optimized AUTOSAR type for 32 bit unsigned integer */
typedef long int sint8_least;/* The optimized AUTOSAR type for 8 bit signed integer */
typedef long int sint16_least;/* The optimized AUTOSAR type for 16 bit signed integer */
typedef long int sint32_least;/* The optimized AUTOSAR type for 32 bit signed integer */

/* Floating point types. */
typedef float float32;/* The standard AUTOSAR type for 32 bit floating-point number */
typedef double float64;/* The standard AUTOSAR type for 64 bit floating-point number */
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------*\
 END OF FILE
\*----------------------------------------------------------------------------*/
# 27 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm\\Rte_Type.h" 2
# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm/Std_Types.h" 1
/**************************************************************************************************\
 *** 
 *** System              : TargetLink Simulation RTE
 *** ECU                 : TL_ECU
 *** Configuration       : NONE
 *** Codefile            : Std_Types.h
 ***
 *** Generated by the SystemDesk RTE code generator
 *** Generation date: 2023-10-26 11:49:36
 ***
 *** SystemDesk version  : 4.3.0.314576
 *** Copyright (c) 2016 dSPACE GmbH
\**************************************************************************************************/




/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/


# 1 "C:/Program Files/dSPACE TargetLink 4.3/Matlab/Tl/ApplicationBuilder/Generic\\Compiler.h" 1
/**************************************************************************************************\
 *** Compiler.h
 ***
 *** Compiler specific configurations.
 ***
 *** Author: Arthur Haag
 *** Since:  2009-03-30
 ***
 *** Copyright (c) 2009 by dSPACE GmbH, Paderborn, Germany.
 *** All Rights Reserved.
\**************************************************************************************************/

/* $RCSfile: Compiler.h $ $Revision: 1.1 $ $Date: 2012/05/16 13:18:45CEST $
 * $ProjectName: e:/ARC/CommonComponentSets/TargetSimulation/_ApplicationBuilder/_GenericSimSources/Sources/Src/AutosarCompilerSpecific/project.pj $
 */




/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

/* Module specific memory and pointer classes. */
# 1 "C:/Program Files/dSPACE TargetLink 4.3/Matlab/Tl/ApplicationBuilder/Generic/Compiler_Cfg.h" 1
/**************************************************************************************************\
 *** Compiler_Cfg.h
 ***
 *** Configuration file for compiler specific configurations.
 ***
 *** Author: Arthur Haag
 *** Since:  2009-03-30
 ***
 *** Copyright (c) 2009 by dSPACE GmbH, Paderborn, Germany.
 *** All Rights Reserved.
\**************************************************************************************************/

/* $RCSfile: Compiler_Cfg.h $ $Revision: 1.1 $ $Date: 2012/05/16 11:16:50CEST $
 * $ProjectName: e:/ARC/CommonComponentSets/TargetSimulation/_ApplicationBuilder/_GenericSimSources/Sources/Src/AutosarCompilerSpecific/project.pj $
 */
# 26 "C:/Program Files/dSPACE TargetLink 4.3/Matlab/Tl/ApplicationBuilder/Generic\\Compiler.h" 2

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/* Symbol for target compiler. */


/* AUTOMATIC used for the declaration of local pointers. */


/* TYPEDEF used within type definitions, where no memory qualifier can be specified. */


/* Abstraction of compiler keyword static. */


/* Void pointer to zero. */




/* Abstraction of compiler keyword inline. */






/* The compiler abstraction shall define the FUNC macro for the declaration and definition of
functions, that ensures correct syntax of function declarations as required by a specific compiler.
- used for API functions
   rettype     return type of the function
   memclass    classification of the function itself
               (not used on 32bit platforms)   
*/


/* The compiler abstraction shall define the FUNC_P2VAR macro for the declaration and definition of 
functions returning a pointer to a variable. This shall ensure the correct syntax of function 
declarations as required by a specific compiler.
- used for API functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointerís distance
   memclass    classification of the function itself
               (not used on 32bit platforms)   
*/


/* The compiler abstraction shall define the FUNC_P2CONST macro for the declaration and definition of 
functions returning a pointer to a constant. This shall ensure the correct syntax of function 
declarations as required by a specific compiler.
- used for API functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointerís distance
   memclass    classification of the function itself
               (not used on 32bit platforms)   
*/


/* Pointer to variable data
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
               (not used on 32bit platforms)
   ptrclass    defines the classification of the pointer's distance
               (not used on 32bit platforms)
 */


/* Pointer to constant data
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
               (not used on 32bit platforms)
   ptrclass    defines the classification of the pointer's distance
               (not used on 32bit platforms)
*/


/* Const pointer to variable data
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
               (not used on 32bit platforms)
   ptrclass    defines the classification of the pointer's distance
               (not used on 32bit platforms)
*/


/* Const pointer to constant data
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
               (not used on 32bit platforms)
   ptrclass    defines the classification of the pointer's distance
               (not used on 32bit platforms)
*/


/* Type definition of pointers to functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance
               (not used on 32bit platforms)
   fctname     function name respectivly name of the defined type
*/


/* ROM constant
   type        type of the constant
   memclass    classification of the constant
               (not used on 32bit platforms)
*/





/* RAM variables
   type        type of the variable
   memclass    classification of the variable
               (not used on 32bit platforms)
*/
# 28 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm/Std_Types.h" 2
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/


/* Symbol definitions. */







/* For OSEK compliance this define has been added. */



typedef unsigned char StatusType; /* OSEK compliance */


/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/


 /* Standard API return type. */
typedef uint8 Std_ReturnType;

 /* Version information. */
typedef struct {
   uint16 vendorID;
   uint16 moduleID;
   uint8 sw_major_version;
   uint8 sw_minor_version;
   uint8 sw_patch_version;
} Std_VersionInfoType;
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------*\
 END OF FILE
\*----------------------------------------------------------------------------*/
# 28 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm\\Rte_Type.h" 2
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/


/* Error check macros. */
/*************************************************************************************************\
 ***  PARAMETERIZED MACRO:
 ***      Rte_IsInfrastructureError
 ***
 ***  DESCRIPTION:
 ***      Enables an application to check the return value of an API for infrastructure errors.
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***      Std_ReturnType     status              
 ***
 ***  RETURNS:
 ***      boolean
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/


/*************************************************************************************************\
 ***  PARAMETERIZED MACRO:
 ***      Rte_HasOverlayedError
 ***
 ***  DESCRIPTION:
 ***      Enables an application to check the return value of an API for an overlayed error.
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***      Std_ReturnType     status              
 ***
 ***  RETURNS:
 ***      boolean
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/


/*************************************************************************************************\
 ***  PARAMETERIZED MACRO:
 ***      Rte_ApplicationError
 ***
 ***  DESCRIPTION:
 ***      Enables an application to check the return value of an API for application errors.
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***      Std_ReturnType     status              
 ***
 ***  RETURNS:
 ***      boolean
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/


/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/

typedef boolean Bool;
typedef sint8 Int8;
typedef sint16 Int16;
typedef sint32 Int32;
typedef float32 Float32;
typedef float64 Float64;
typedef uint8 UInt8;
typedef uint16 UInt16;
typedef uint32 UInt32;

 /* Represents the transformer class in which the error occurred. */
typedef uint8 Rte_TransformerClass;
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------*\
 END OF FILE
\*----------------------------------------------------------------------------*/
# 65 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src\\USS_DA_LAD.h" 2
# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/tl_defines_USS_DA_LAD.h" 1
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_DA_LAD
 *** TargetLink subsystem : USS_DA_LAD/FrameUSS_DA_LAD/Subsystem/FrameUSS_DA_LAD/DriverActivityLater
 ***                        alDA_LAD
 *** Codefile             : tl_defines_USS_DA_LAD.h
 ***
 *** Generation date: 2023-10-26 11:49:08
 ***
 *** TargetLink version      : 4.3p6 from 26-Feb-2020
 *** Code generator version  : Build Id 4.3.0.31 from 2020-03-02 18:28:10
\**************************************************************************************************/




/**************************************************************************************************\
    TL_CG_MACROCL_GLOBAL: Default macro class for macros with module extent
\**************************************************************************************************/



/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
# 66 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src\\USS_DA_LAD.h" 2

/*------------------------------------------------------------------------------------------------*\
  ENUMS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  TYPEDEFS
\*------------------------------------------------------------------------------------------------*/




typedef struct MAP_Tab1DS0I2T3126_USS_DA_LAD_tag {
    uint8 Nx;
    const float32 * x_table;
    const float32 * z_table;
} MAP_Tab1DS0I2T3126_USS_DA_LAD;


/*------------------------------------------------------------------------------------------------*\
  VARIABLES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 16
\**************************************************************************************************/
extern uint16 USS_LAD_s_LatInAcvTi_s_measure; /* 
    Unit: s
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: time since last driver steering activity */

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 8
\**************************************************************************************************/
extern uint8 USS_LAD_s_CntrStgDet_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Countersteering detection */
extern uint8 USS_LAD_s_LatStgAcv_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Current observed driver steering activity */

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_IN: external global variables (RAM)
(entspricht EXTERN_GLOBAL) | Width: 32
\**************************************************************************************************/
extern float32 USS_GC_s_EPSStgTqFil_Nm_measure; /* 
    Unit: Nm
    Description: filtered eps steering torque */
extern float32 USS_GC_s_VDSOVLgt_kmph_measure; /* 
    Unit: km/h
    Description: velocity vehicle longitudinal */
extern float32 USS_PRP_s_AsiSysLatActFac_measure; /* 
    Unit: -
    Description: Factor for assist system acticity [0..1] */

/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 32
\**************************************************************************************************/
extern float32 USS_DrvCtlTqVFac_measure;
extern float32 USS_GC_s_EPSStgTqFilAbs_measure;
extern float32 USS_GC_s_EPSStgTqVAbs_measure;
extern float32 USS_GC_s_EPSStgTqV_measure;
extern float32 USS_LAD_s_FacStgAcvAdp_measure;
extern float32 USS_LAD_s_StgTqTh_measure;
extern float32 USS_LAD_s_StgTqVTh_measure;
extern float32 USS_s_DrvCtlTqFac_measure;

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_IN: external global variables (RAM)
(entspricht EXTERN_GLOBAL) | Width: 8
\**************************************************************************************************/
extern sint8 USS_SIH_s_EPSCtlValQFK_measure; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: -128 .. 127
    Description: Beschreibt die aktuell angeforderte Regelgroeﬂe des Zahnstangenpositionsreglers ink
    l. Richtungsvorgabe. */
extern uint8 USS_SIH_s_VMMLatGuideStReq_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Lateral control state request */

/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 8
\**************************************************************************************************/
extern uint8 USS_LAD_s_LatStgAcvTqV_measure;
extern uint8 USS_LAD_s_LatStgAcvTq_measure;

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_IN: external global variables (RAM)
(entspricht EXTERN_GLOBAL) | Width: 8
\**************************************************************************************************/
extern boolean USS_GC_s_FlgCpStgWhlPres_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: capacitive steering wheel present */

/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 8
\**************************************************************************************************/
extern boolean USS_LAD_s_CntrAct_measure;
extern boolean USS_LAD_s_CntrStgDetAct_measure;
extern boolean USS_LAD_s_DrvHiLngTq_measure;
extern boolean USS_LAD_s_DrvHiShoTq_measure;
extern boolean USS_LAD_s_DrvLoLngTq_measure;
extern boolean USS_LAD_s_DrvLoShoTq_measure;
extern boolean USS_LAD_s_HiCntrStgDet_measure;
extern boolean USS_LAD_s_LatCtlReqAct_measure;
extern boolean USS_LAD_s_LatStgAcvIsDet_measure;
extern boolean USS_LAD_s_LoCntrStgDet_measure;
extern boolean USS_s_CtlDrvSignComp_measure;

/*------------------------------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
    GlobalLookup1D_USS_DA_LAD: Derived TL_CG default function class.
\**************************************************************************************************/
extern float32 Tab1DIntp2I1T438_USS_DA_LAD(const float32 * z_table, float32 irx, float32 fractionX);
extern float32 Tab1DS0I2T3126_USS_DA_LAD(const MAP_Tab1DS0I2T3126_USS_DA_LAD * map, float32 x);

/**************************************************************************************************\
    GlobalLookup1D_USS_DA_LAD: Derived TL_CG default function class.
\**************************************************************************************************/
extern void TabIdxS0T6_USS_DA_LAD(const float32 * x_table, uint8 N, float32 x, uint8 * irx);

/**************************************************************************************************\
    GLOBAL_FCN_UNITY_BUILD_INLINE: global inline function(s) (exported to other modules)
\**************************************************************************************************/
extern void USS_DA_LAD(void);


/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
# 72 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm/FrameUSS_DA_LAD.c" 2
# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm/FrameUSS_DA_LAD.h" 1
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_DA_LAD
 *** TargetLink subsystem : USS_DA_LAD/FrameUSS_DA_LAD
 *** Codefile             : FrameUSS_DA_LAD.h
 ***
 *** Generation date: 2023-10-26 11:49:16
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : AUTOSAR
 *** AUTOSAR version                          : 4.3.0
 *** Compiler                                 : <unknown>
 *** Target                                   : Generic
 *** ANSI-C compatible code                   : yes
 *** Code Optimization                        : enabled
 *** Constant style                           : decimal
 *** Clean code option                        : enabled
 *** Logging mode                             : Do not log anything
 *** Code Coverage                            : disabled
 *** Generate empty conditional branches      : disabled
 *** Loop unroll threshold                    : 5
 *** Shift mode                               : automatic
 *** Handle unscaled SF expr. with TL type    : enabled
 *** Assignment of conditions                 : AllBooleanOutputs 
 *** Scope reduction only to function level   : disabled
 *** Exploit ranges if not erasable           : disabled
 *** Exploit Compute Through Overflow         : optimized
 *** Linker sections                          : enabled
 *** Enable Assembler                         : disabled
 *** Variable name length                     : unlimited
 *** Use global bitfields                     : disabled
 *** Stateflow: use of bitfields              : enabled
 *** State activity encoding limit            : 5
 *** Omit zero inits in restart function      : disabled
 *** Share functions between TL subsystems    : disabled
 *** Generate 64bit functions                 : disabled
 *** Inlining Threshold                       : 6
 *** Line break limit                         : 100
 *** Target optimized boolean data type       : enabled
 *** Keep saturation elements                 : disabled
 *** Extended variable sharing                : disabled
 *** Extended lifetime optimization           : enabled
 *** Style definition file                    : C:\MySandboxes\SWC_USS_C08_1409\30_CG\CG_USS_DA_LAD\
 ***                                            20_IMPL\CgTools\Common_C_Tools\Platform_TlConfig\cco
 ***                                            nfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLink 4.3\Matlab\Tl\XML
 ***                                            \CodeGen\Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** TargetLink version      : 4.3p6 from 26-Feb-2020
 *** Code generator version  : Build Id 4.3.0.31 from 2020-03-02 18:28:10
\**************************************************************************************************/




/*------------------------------------------------------------------------------------------------*\
  DEFINES (OPT)
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  ENUMS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  TYPEDEFS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  VARIABLES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
    GlobalStep: Default function class for not static model step functions
\**************************************************************************************************/
extern void FrameUSS_DA_LAD(void);


/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
# 73 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm/FrameUSS_DA_LAD.c" 2

/*------------------------------------------------------------------------------------------------*\
  ENUMS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  TYPEDEFS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  VARIABLES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  INLINE FUNCTIONS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
\*------------------------------------------------------------------------------------------------*/





/**************************************************************************************************\
 ***  FUNCTION:
 ***        FrameUSS_DA_LAD
 *** 
 ***  DESCRIPTION:
 ***        
 *** 
 ***  PARAMETERS:
 ***        Type               Name                Description
 ***        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***        void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/
void FrameUSS_DA_LAD(void)
{
    /* FrameUSS_DA_LAD/FunctionCallGenerator
        call of function: FrameUSS_DA_LAD/DriverActivityLateralDA_LAD */
    USS_DA_LAD();
}





/*------------------------------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
