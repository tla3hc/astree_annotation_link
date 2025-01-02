# 1 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 10 "<built-in>"




# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c" 2
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_Param
 *** TargetLink subsystem : USS_Param/FrameUSS_Param
 *** Codefile             : USS_Param.c
 ***
 *** Generation date: 2024-12-04 03:26:39
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
 *** Style definition file                    : C:\JenkinsTemp\ProdServer\SWC_USS\01_PROD\50_PAR\30_
 ***                                            CG\CG_USS_Param\20_IMPL\CgTools\Common_C_Tools\Platf
 ***                                            orm_TlConfig\cconfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLink 4.3\Matlab\Tl\XML
 ***                                            \CodeGen\Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** SUBSYS         CORRESPONDING SIMULINK SUBSYSTEM
 *** SUSS_Param1    FrameUSS_Param
 *** SUSS_Param2    FrameUSS_Param/HCP1_DatasetVersion
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

# 1 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.h" 1
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_Param
 *** TargetLink subsystem : USS_Param/FrameUSS_Param
 *** Codefile             : USS_Param.h
 ***
 *** Generation date: 2024-12-04 03:26:39
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
 *** Style definition file                    : C:\JenkinsTemp\ProdServer\SWC_USS\01_PROD\50_PAR\30_
 ***                                            CG\CG_USS_Param\20_IMPL\CgTools\Common_C_Tools\Platf
 ***                                            orm_TlConfig\cconfig.xml
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

# 1 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm\\Rte_Type.h" 1
/**************************************************************************************************\
 *** 
 *** System              : TargetLink Simulation RTE
 *** ECU                 : TL_ECU
 *** Configuration       : NONE
 *** Codefile            : Rte_Type.h
 ***
 *** Generated by the SystemDesk RTE code generator
 *** Generation date: 2024-12-05 04:40:20
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

# 1 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm/Platform_Types.h" 1
/**************************************************************************************************\
 *** 
 *** System              : TargetLink Simulation RTE
 *** ECU                 : TL_ECU
 *** Configuration       : NONE
 *** Codefile            : Platform_Types.h
 ***
 *** Generated by the SystemDesk RTE code generator
 *** Generation date: 2024-12-05 04:40:20
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
# 27 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm\\Rte_Type.h" 2
# 1 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm/Std_Types.h" 1
/**************************************************************************************************\
 *** 
 *** System              : TargetLink Simulation RTE
 *** ECU                 : TL_ECU
 *** Configuration       : NONE
 *** Codefile            : Std_Types.h
 ***
 *** Generated by the SystemDesk RTE code generator
 *** Generation date: 2024-12-05 04:40:20
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
   ptrclass    defines the classification of the pointer’s distance
   memclass    classification of the function itself
               (not used on 32bit platforms)   
*/


/* The compiler abstraction shall define the FUNC_P2CONST macro for the declaration and definition of 
functions returning a pointer to a constant. This shall ensure the correct syntax of function 
declarations as required by a specific compiler.
- used for API functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointer’s distance
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
# 28 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm/Std_Types.h" 2
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
# 28 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/frm\\Rte_Type.h" 2
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
# 64 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.h" 2

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

/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 16
\**************************************************************************************************/
extern const uint16 USS_DSE_p_LWinAvgVUniform; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 5000
    Description: window length for moving average of velocity */
extern const uint16 USS_DSE_p_ValDlyDLrg; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1500
    Description: delay steps for large trailing distance event */
extern const uint16 USS_IILK_p_ErraticIndicatorTh; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Threshold to set the Erratic Behavior indicator */
extern const uint16 USS_IILK_p_ErraticNumSamp; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 65535
    Description: Number of samples to consider for the calculation of the line offset standard devia
    tion */
extern const uint16 USS_IPR_p_MovAvgTimedDBufSize; /* 
    Unit: s
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Max threshold timed distance to leading vehicle */
extern const uint16 USS_IPR_p_TrffcLghtMaxDist_dm; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 5000
    Description: Maximum distance to traffic light for triggering the Reaction Time event: traffic l
    ight switches to red or green. Unit: dm */
extern const uint16 USS_IPR_p_TrffcLghtMinDist_dm; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 5000
    Description: Minimum distance to traffic light for triggering the Reaction Time event: traffic l
    ight switches to red or green. Unit: dm */
extern const uint16 USS_SIH_p_BitFldEnaDTC; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Bitfield for enabling DTC triggering */

/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 32
\**************************************************************************************************/
extern const float32 USS_COM_p_FacACCDLrg; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor ACC distance large */
extern const float32 USS_COM_p_FacBrkFrqLo; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor brake frequency low */
extern const float32 USS_COM_p_FacKckDwnCom; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor kick down */
extern const float32 USS_COM_p_FacLatAHiCom; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor brake frequency low */
extern const float32 USS_COM_p_FacLatCtlAcvCom; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor brake frequency low */
extern const float32 USS_COM_p_FacLgtCtlAcvCom; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor brake frequency low */
extern const float32 USS_COM_p_FacOnePedalMode; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
extern const float32 USS_COM_p_FacStgFrqLo; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor steering frequency low */
extern const float32 USS_DSE_p1_VDSOVLat_LookupTableData[4]; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Thresholds for lateral acceleration event */
extern const float32 USS_DSE_p1_VDSOVLgt_LookupTableData[4]; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Thresholds for longitudal acceleration event */
extern const uint32 USS_DSE_p_BitFldEveAcv; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 4294967295
    Description: bitfield for event activation */
extern const float32 USS_DSE_p_CtDwnStep_s; /* 
    Unit: s
    MIN/MAX: 0 .. 30
    Description: count down step */
extern const float32 USS_DSE_p_FacTlrVUniform; /* 
    Unit: -
    MIN/MAX: 0.00999999977648258 .. 0.200000002980232
    Description: tolerance factor for moving average of velocity to set event */
extern const float32 USS_DSE_p_LoThDLrg_s; /* 
    Unit: s
    MIN/MAX: 0 .. 10
    Description: lower threshold distance large */
extern const float32 USS_DSE_p_OfsDly_s; /* 
    Unit: s
    MIN/MAX: 0 .. 1000
    Description: offset delay */
extern const float32 USS_DSE_p_ThDSml_s; /* 
    Unit: s
    MIN/MAX: 0 .. 2
    Description: threshold distance small */
extern const float32 USS_DSE_p_ThDrvPedPosnADmd; /* 
    Unit: m/s^2
    MIN/MAX: 0 .. 14
    Description: threshold drive pedal position acceleration */
extern const float32 USS_DSE_p_ThStgAg_deg; /* 
    Unit: deg
    MIN/MAX: -819 .. 819.380004882813
    Description: threshold steering angle */
extern const float32 USS_DSE_p_ThVDSOVFast_kmph; /* 
    Unit: km/h
    MIN/MAX: 0 .. 30
    Description: offset VDSO velocity fast */
extern const float32 USS_DSE_p_ThVDSOVSlow_kmph; /* 
    Unit: km/h
    MIN/MAX: 0 .. 190
    Description: threshold velocity slow */
extern const float32 USS_DSE_p_TiEtaAttrMax; /* 
    Unit: s
    MIN/MAX: 0.100000001490116 .. 20
    Description: maximum time of arrival */
extern const float32 USS_DSE_p_TiEtaAttrMin; /* 
    Unit: s
    MIN/MAX: 0.100000001490116 .. 10
    Description: minimum time of arrival */
extern const float32 USS_DSE_p_UpprThDLrg_s; /* 
    Unit: s
    MIN/MAX: 0 .. 10
    Description: upper threshold distance large */
extern const float32 USS_DSE_p_VDSOLatALoPs_1ps; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 10
    Description: filter value acc lat event */
extern const float32 USS_DSE_p_VDSOLatAMaxVal; /* 
    Unit: m/s^2
    MIN/MAX: 0 .. 10
    Description: threshold acc lat max acceleration */
extern const float32 USS_DSE_p_VDSOLgtAMaxVal; /* 
    Unit: m/s^2
    MIN/MAX: 0 .. 10
    Description: threshold acc long max acceleration */
extern const float32 USS_DSE_p_VMMBrkPedDmd; /* 
    Unit: -
    MIN/MAX: 0 .. 3
    Description: threshold braking driver dominant */
extern const float32 USS_DSE_p_VSlowTiDistLowerLimit; /* 
    Unit: m/s
    MIN/MAX: 0 .. 10
    Description: VSlow timed distance lower threshold */
extern const float32 USS_DSE_p_VSlowTiDistUpperLimit; /* 
    Unit: m/s
    MIN/MAX: 0 .. 10
    Description: VSlow timed distance upper threshold */
extern const float32 USS_DSE_px_VDSOVLat_BreakPointData[4]; /* 
    Unit: -
    MIN/MAX: 0 .. 200
    Description: Thresholds for lateral acceleration event */
extern const float32 USS_DSE_px_VDSOVLgt_BreakPointData[4]; /* 
    Unit: -
    MIN/MAX: 0 .. 200
    Description: Thresholds for longitudal acceleration event */
extern const float32 USS_DSF_p_DlyTiLngTrm_s; /* 
    Unit: s
    MIN/MAX: 0 .. 1200
    Description: delay time for driver type fusion long term */
extern const float32 USS_DSF_p_DlyTi_s; /* 
    Unit: s
    MIN/MAX: 0 .. 1000
    Description: delay time for driver type fusion */
extern const float32 USS_DSF_p_LngTrmCmaValue_s; /* 
    Unit: s
    MIN/MAX: 0 .. 1000
    Description: window length of moving average */
extern const float32 USS_DS_p_OfsDlyLng_s; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: offset delay long for index processing */
extern const float32 USS_DS_p_OfsDlyMed_s; /* 
    Unit: s
    MIN/MAX: 0 .. 360
    Description: offset delay medium for index processing */
extern const float32 USS_DS_p_OfsDlySho_s; /* 
    Unit: s
    MIN/MAX: 0 .. 360
    Description: offset delay short for index processing */
extern const float32 USS_DS_p_OfsDlyXLng_s; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: offset delay extra long for index processing */
extern const float32 USS_DYN_p_FacAccrPedHi; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor accelerator pedal high */
extern const float32 USS_DYN_p_FacBrkFrqHi; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor veloctiy slow */
extern const float32 USS_DYN_p_FacBrkPHi; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor brake pressure high */
extern const float32 USS_DYN_p_FacDSml; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor distance small */
extern const float32 USS_DYN_p_FacKckDwnDyn; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor kick down active */
extern const float32 USS_DYN_p_FacLatArHi; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor longitudinal acceleration high */
extern const float32 USS_DYN_p_FacLgtArHi; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor longitudinal acceleration high */
extern const float32 USS_DYN_p_FacOnePedalMode; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
extern const float32 USS_DYN_p_FacPaTaAcv; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor PaTa mode active */
extern const float32 USS_DYN_p_FacStgFrqHi; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor veloctiy slow */
extern const float32 USS_DYN_p_FacVFast; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor veloctiy slow */
extern const float32 USS_DYN_p_FacVSlow; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor veloctiy slow */
extern const float32 USS_EFF_p_FacBrkFrqLo; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor braking frequency low */
extern const float32 USS_EFF_p_FacDSmlEff; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor distance small */
extern const float32 USS_EFF_p_FacDrvPedHi; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor driver pedal high */
extern const float32 USS_EFF_p_FacKckDwnEff; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor kick down */
extern const float32 USS_EFF_p_FacLatCtlAcvEff; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
extern const float32 USS_EFF_p_FacLgtAHi; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor longitudinal acceleration high */
extern const float32 USS_EFF_p_FacLgtCtlAcvEff; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
extern const float32 USS_EFF_p_FacOnePedalMode; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
extern const float32 USS_EFF_p_FacPEAAcv; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor velocity slow */
extern const float32 USS_EFF_p_FacVSlow; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor velocity slow */
extern const float32 USS_EFF_p_FacVUniform; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor velocity uniform */
extern const float32 USS_GC_p_CtDwnStep_s; /* 
    Unit: s
    MIN/MAX: 0 .. 30
    Description: count down step */
extern const float32 USS_GC_p_EPSStgTqLoPs_1ps; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 100
    Description: cut off frequency for 
    low pass filter steering torque */
extern const float32 USS_GC_p_OfsDly_s; /* 
    Unit: s
    MIN/MAX: 0 .. 1000
    Description: offset delay */
extern const float32 USS_GC_p_PredVLimDft; /* 
    Unit: km/h
    MIN/MAX: 0 .. 255
    Description: default velocity if speed limit is not in range of interest */
extern const float32 USS_GC_p_ThRoadCrvt_1pm; /* 
    Unit: -
    MIN/MAX: 0 .. 1000
    Description: threshold roadway curvature */
extern const float32 USS_GC_p_ThStgAg_deg; /* 
    Unit: deg
    MIN/MAX: -819 .. 819.380004882813
    Description: threshold steering angle */
extern const float32 USS_GC_p_ThVEvalEve_kmph; /* 
    Unit: km/h
    MIN/MAX: 1 .. 60
    Description: threshold for evaluation some events */
extern const float32 USS_GC_p_ThVNotSdsl_kmph; /* 
    Unit: km/h
    MIN/MAX: 1 .. 30
    Description: threshold for no standstill (car is rolling) */
extern const float32 USS_GC_p_VDSOLgtALoPs_1ps; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 100
    Description: cut off frequency for 
    low pass filter longitudinal acceleration */
extern const float32 USS_IIAA_p_AbrAcclConfDly_s; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: Abrupt Actions time delay for abrupt Acceleration */
extern const float32 USS_IIAA_p_AbrBrkConfDly_s; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: Abrupt Actions time delay for abrupt braking */
extern const float32 USS_IIAA_p_AbrStgConfDly_s; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: Abrupt Actions time delay for abrupt steering */
extern const float32 USS_IIEC_p1_SpdDeltaThFactors[2]; /* 
    Unit: %
    MIN/MAX: 0 .. 10
    Description: Tolerance factor for threshold calculation, first is for low speed, second for high
     speed up to MaxVLim */
extern const float32 USS_IIEC_p_SpdDeltaWndwLnght_s; /* 
    Unit: s
    MIN/MAX: 10 .. 600
    Description: MovingAverage Window for Indicator Threshold */
extern const float32 USS_IIEC_p_TlgtngMaxAllwdTimedDChg_s; /* 
    Unit: s
    MIN/MAX: 0 .. 10
    Description: Maximum allowed time distance change when changing the leading vehicle before resta
    rting the tailgating detection */
extern const float32 USS_IIEC_p_TlgtngMaxTiDist_s; /* 
    Unit: s
    MIN/MAX: 0 .. 10
    Description: Maximum Distances where tailgating will be detected */
extern const float32 USS_IIEC_p_TlgtngMinDetDly_s; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: Time of constant tailgating before activating the indicator */
extern const float32 USS_IILK_p_ErraticCurveTh; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Threshold to apply to the line offset standard deviation to determine a erratic beh
    avior is detected when driving through a curve */
extern const float32 USS_IILK_p_ErraticStraightTh; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Threshold to apply to the line offset standard deviation to determine a erratic beh
    avior is detected when driving on a straight path */
extern const float32 USS_IIRT_p1_ScoringGreenTrffcLght[6]; /* 
    Unit: s
    MIN/MAX: 0 .. 20
    Description: Array of Reaction Times for scoring very fast to very slow reaction. */
extern const float32 USS_IIRT_p1_ScoringRedTrffcLght[6]; /* 
    Unit: s
    MIN/MAX: 0 .. 20
    Description: Array of Reaction Times for scoring very fast to very slow reaction. */
extern const float32 USS_IIRT_p1_ScoringSdnLeadVeh[6]; /* 
    Unit: s
    MIN/MAX: 0 .. 20
    Description: Array of Reaction Times for scoring very fast to very slow reaction. */
extern const float32 USS_IIRT_p_ActivationRate; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: This parameter influences the slope of the activation function for the impairment e
    valuation of the reaction time subfeature. The higher the value, the faster the confidence value
     for the impairment indicator rises. */
extern const float32 USS_IIRT_p_ImpairmentThreshScore; /* 
    Unit: -
    MIN/MAX: 0 .. 6
    Description: The threshold from which the reaction score will lead either to impaired (above the
     threshold) or not impaired (below the threshold) */
extern const float32 USS_IIRT_p_MaxRatioInvalidReactions; /* 
    Unit: -
    MIN/MAX: 0 .. 1
    Description: This parameter gives the threshold at which ratio of invalid reactions to total amo
    unt of reactions the event is classified as invalid and will not be counted in for the reaction 
    time score. */
extern const float32 USS_IIRT_p_MaxReactionTime; /* 
    Unit: s
    MIN/MAX: 0 .. 20
    Description: Max time that is waited for a stop trigger signal. If the timer goes above this thr
    eshold it will stop and the reaction is counted as invalid. */
extern const float32 USS_IPR_p_DrvBhvrBrkFrqUpperTh; /* 
    Unit: Hz
    MIN/MAX: 0 .. 100
    Description: Max threshold braking frequency - Abrupt Action */
extern const float32 USS_IPR_p_EveFacLatAHiThd; /* 
    Unit: -
    MIN/MAX: 0 .. 1
    Description: Threshold to detect the sudden / abrupt steering based on the lateral acceleration
     */
extern const float32 USS_IPR_p_MinDistChgBrk_s; /* 
    Unit: -
    MIN/MAX: 0 .. 255
    Description: Min threshold timed distance to leading vehicle */
extern const float32 USS_IPR_p_StgWhlAgLoPs_1ps; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 100
    Description: Steering angle low pass filter time constant */
extern const float32 USS_IPR_p_ThDrvBvrStgAgDcr_deg; /* 
    Unit: deg
    MIN/MAX: 0 .. 359
    Description: Steering angle step - Abrupt action */
extern const float32 USS_IPR_p_ThDrvBvrStgFrq; /* 
    Unit: Hz
    MIN/MAX: 0 .. 100
    Description: Max threshold steering frequency - Abrupt Action */
extern const float32 USS_IPR_p_ThTrffcLghtBrkPed; /* 
    Unit: -
    MIN/MAX: 0 .. 4.09000015258789
    Description: Threshold for the brake pedal input that will be interpreted as a reaction of the d
    river to an event */
extern const float32 USS_IPR_p_ThTrffcLghtDrvPed; /* 
    Unit: -
    MIN/MAX: -6.40000009536743 .. 14
    Description: Threshold for the drive pedal input that will be interpreted as a reaction of the d
    river to an event */
extern const float32 USS_IPR_p_ThTrffcLghtVelDiff_kmph; /* 
    Unit: km/h
    MIN/MAX: 0 .. 100
    Description: Threshold for the difference of the current speed limit and the ego vehicle speed, 
    at which at a traffic light, if it switches to green, an acceleration or a gear shift is expecte
    d and thus a start trigger for reaction time event is set to true */
extern const float32 USS_LAD_p1_FacStgAcvAdp[8]; /* 
    Unit: km/h
    MIN/MAX: 0 .. 2
    Description: factor array for velocity-adaptive steering activity */
extern const float32 USS_LAD_p1_ThLatStgAcvTq[5]; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Thresholds for lateral steering activity torque based */
extern const float32 USS_LAD_p1_ThLatStgAcvTqV[5]; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Thresholds for lateral steering activity torque based */
extern const float32 USS_LAD_p_CntrStgDly_s; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Delay for detecting Countersteering */
extern const float32 USS_LAD_p_CntrStgHiLngThTq; /* 
    Unit: Nm
    MIN/MAX: 0 .. 4
    Description: Threshold for high long countersteering */
extern const float32 USS_LAD_p_CntrStgHiShoThTq; /* 
    Unit: Nm
    MIN/MAX: 0 .. 4
    Description: Threshold for high short countersteering */
extern const float32 USS_LAD_p_CntrStgHiTqDly_s; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Delay for detecting high Countersteering */
extern const float32 USS_LAD_p_CntrStgLoLngThTq; /* 
    Unit: Nm
    MIN/MAX: 0 .. 4
    Description: Threshold for low long countersteering */
extern const float32 USS_LAD_p_CntrStgLoShoThTq; /* 
    Unit: Nm
    MIN/MAX: 0 .. 4
    Description: Threshold for low short countersteering */
extern const float32 USS_LAD_p_CntrStgLoTqDly_s; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Delay for detecting low Countersteering */
extern const float32 USS_LAD_p_CntrStgThSdsl_kmph; /* 
    Unit: km/h
    MIN/MAX: 0 .. 20
    Description: Velocity threshold for activaty counter steering detection */
extern const float32 USS_LAD_p_EPSStgTqVFreCut; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 1000
    Description: Cutoff frequency of steering torque velocity */
extern const float32 USS_LAD_p_HiThEPSTq; /* 
    Unit: Nm
    MIN/MAX: 0.00999999977648258 .. 4
    Description: Higher torque threshold for driver activity */
extern const float32 USS_LAD_p_HiThEPSTqCpWhl; /* 
    Unit: Nm
    MIN/MAX: 0.00999999977648258 .. 4
    Description: Higher torque threshold for driver activity when using a capacitive steering wheel
     */
extern const float32 USS_LAD_p_HiThEPSTqV; /* 
    Unit: Nm/s
    MIN/MAX: 0.00999999977648258 .. 20
    Description: Higher torque velocity threshold for driver activity */
extern const float32 USS_LAD_p_LoThEPSTq; /* 
    Unit: Nm
    MIN/MAX: 0.00999999977648258 .. 4
    Description: Lower torque threshold for driver activity */
extern const float32 USS_LAD_p_LoThEPSTqCpWhl; /* 
    Unit: Nm
    MIN/MAX: 0.00999999977648258 .. 4
    Description: Lower torque threshold for driver activity when using a capacitive steering wheel
     */
extern const float32 USS_LAD_p_LoThEPSTqV; /* 
    Unit: Nm/s
    MIN/MAX: 0.00999999977648258 .. 20
    Description: Lower torque velocity threshold for driver activity */
extern const float32 USS_LAD_px_VThStgAcv[8]; /* 
    Unit: km/h
    MIN/MAX: 0 .. 200
    Description: velocity thresholds for velocity-adaptive steering activity */
extern const float32 USS_PRP_p1_EPSCtlValQFKDvtFilAbsBrkPnt[2]; /* 
    Unit: %/s
    MIN/MAX: 0 .. 100
    Description: Breakpoints for USS_s_EPSCtlValQFKDvtFilFac
    Index 1 is the max posible value for a assist system */
extern const float32 USS_PRP_p1_EPSCtlValQFKDvtFilAbsTblDat[2]; /* 
    Unit: -
    MIN/MAX: 0 .. 1
    Description: Tabledata for USS_s_EPSCtlValQFKDvtFilFac */
extern const float32 USS_PRP_p1_EPSCtlValQFKFilAbsBrkPnt[2]; /* 
    Unit: %
    MIN/MAX: 0 .. 100
    Description: Breakpoints for USS_s_EPSCtlValQFKFilFac */
extern const float32 USS_PRP_p1_EPSCtlValQFKFilAbsTblDat[2]; /* 
    Unit: -
    MIN/MAX: 0 .. 1
    Description: Tabledata for USS_s_EPSCtlValQFKFilFac */
extern const float32 USS_PRP_p_AsiSysLatActFacNegGrd; /* 
    Unit: -
    MIN/MAX: -50 .. 50
    Description: Max negativ gradient off USS_PRP_s_AsiSysLatActFac */
extern const float32 USS_PRP_p_AsiSysLatActFacPosGrd; /* 
    Unit: -
    MIN/MAX: -50 .. 50
    Description: Max positiv gradient off USS_PRP_s_AsiSysLatActFac unused 57 means tan(89) */
extern const float32 USS_PRP_p_EPSCtlValQFKFreCut; /* 
    Unit: -
    MIN/MAX: 0 .. 1000
    Description: cut off frequency steering force */
extern const float32 USS_SIH_p_KLRTouchauswertungIntTi; /* 
    Unit: s
    MIN/MAX: 0 .. 1200
    Description: Max alowed Init Time */
extern const float32 USS_SOH_p_StrtTi_DA_s; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Initialisation time for Driver Activity outputs */
extern const float32 USS_SOH_p_StrtTi_DS_s; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Initialisation time for Driving Style outputs */
extern const float32 USS_SOH_p_StrtTi_ID_s; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Initialisation time for Impairment Detection outputs */
extern const float32 USS_p_FacRadDist; /* 
    Unit: -
    MIN/MAX: 0.00100000004749745 .. 255
    Description: factor to convert radial distance from object detection to m */
extern const float32 USS_p_FacTiCol; /* 
    Unit: -
    MIN/MAX: 0.00100000004749745 .. 255
    Description: factor to convert time to collision from object detection to m/s */

/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
extern const uint8 USSDB_DS_NAME[12]; /* Description: HCP1 DS Name : 190000000000 */
extern const uint8 USSDB_DS_VERSION[4]; /* Description: HCP1 DS Version : 4869 */
extern const uint8 USS_DSE_p_LoThBCSBrkFrqLo; /* 
    Unit: En
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 200
    Description: lower threshold brake frequency low */
extern const uint8 USS_DSE_p_LoThStgFrqLo; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 30
    Description: lower threshold steering frequency low */
extern const uint8 USS_DSE_p_ThBCSBrkFrqHi; /* 
    Unit: En
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 200
    Description: threshold brake frequency high */
extern const uint8 USS_DSE_p_ThStgFrqHi; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 50
    Description: threshold steering frequency high */
extern const uint8 USS_DSE_p_UpprThBCSBrkFrqLo; /* 
    Unit: En
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 200
    Description: upper threshold brake frequency low */
extern const uint8 USS_DSE_p_UpprThStgFrqLo; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 30
    Description: upper threshold steering frequency low */
extern const uint8 USS_DSE_p_VDSOVSlow_VelocityRangeLowerLimit; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: lower threshold brake frequency low */
extern const uint8 USS_DSE_p_VDSOVSlow_VelocityRangeUpperLimit; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: lower threshold brake frequency low */
extern const uint8 USS_DSE_p_ValDlyDSml; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 250
    Description: delay steps for small trailing distance event */
extern const uint8 USS_DSF_p_VldDif_p100; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: valid difference between driver types */
extern const uint8 USS_GC_p_ODStFctASIL; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: ASIL function state of object detection */
extern const uint8 USS_GC_p_ODStFctQM; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: QM function state of object detection */
extern const uint8 USS_GC_p_ODStObjClasAnimal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: enumeration for animal in object detection */
extern const uint8 USS_GC_p_ODStObjClasGenObj; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: enumeration for general object in object detection */
extern const uint8 USS_GC_p_ODStObjClasIni; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: init value for object class */
extern const uint8 USS_GC_p_ODStObjClasUnknown; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: enumeration for unknown object in object detection */
extern const uint8 USS_GC_p_ODValThProb; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 10 .. 100
    Description: threshold value for object existence probability */
extern const uint8 USS_GC_p_PredVLimMax; /* 
    Unit: km/h
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 255
    Description: maximum velocity limit of the traffic sign input */
extern const uint8 USS_GC_p_PredVLimMin; /* 
    Unit: km/h
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: minimum velocity limit of the traffic sign input */
extern const uint8 USS_HOD_p1_LuTblHOD[16]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 15
    Description: factor velocity slow */
extern const uint8 USS_HOD_px_LuTblHOD[16]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 15
    Description: factor velocity slow */
extern const uint8 USS_IIAA_p_AbrpAccIdcCntThres; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold abrupt acceleration events to determine impairment */
extern const uint8 USS_IIAA_p_AbrpActnIdcCntThres; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold abrupt action events to determine impairment */
extern const uint8 USS_IIAA_p_AbrpBrkIdcCntThres; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold abrupt braking events to determine impairment */
extern const uint8 USS_IIAA_p_AbrpStgIdcCntThres; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold abrupt steering events to determine impairment */
extern const uint8 USS_IIEC_p_SpdDeltaThIndicator_p; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Threshold for activating the indicator, if tailgating was active in <IndicatorThres
    hold_p> percent in the last <IndicatorWindow_s> seconds */
extern const uint8 USS_IIEC_p_SpdDeltaThMaxVLim_kmph; /* 
    Unit: km/h
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 250
    Description: Maximum valid speed limit */
extern const sint8 USS_IIEC_p_SpdDeltaThOffset_kmph; /* 
    Unit: km/h
    LSB: 2^0 OFF: 0 MIN/MAX: -100 .. 100
    Description: Threshold Tolerance Offset */
extern const uint8 USS_IIF_p1_ImpairLevelConfTh[6]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Thresholds to determine the impairment detection confidence level */
extern const uint8 USS_IIF_p1_ImpairLevelTh[8]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Thresholds to determine the impairment detection level */
extern const uint8 USS_IIF_p_FacIdcAA; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Influence factor of the Abrupt Actions Indicator into the Impairment Detection */
extern const uint8 USS_IIF_p_FacIdcEC; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Influence factor of the Abrupt Actions Indicator into the Impairment Detection */
extern const uint8 USS_IIF_p_FacIdcLK; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Influence factor of the Lane Keeping Indicator into the Impairment Detection */
extern const uint8 USS_IIF_p_FacIdcRT; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Influence factor of the Reaction Time Indicator into the Impairment Detection */
extern const uint8 USS_IIF_p_FacIdcVE; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Influence factor of the Visual Exception Indicator into the Impairment Detection */
extern const uint8 USS_IILK_p_DepHisCntDn_s; /* 
    Unit: s
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Waiting time to decrease USS_ID_II_LK_s_DepHisCnt */
extern const uint8 USS_IILK_p_DepHisDepTh; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold applied to the line offset variance to determine the departure detection
     */
extern const uint8 USS_IILK_p_DepHisIndicatorTh; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold to set the Lane Departure History indicator */
extern const uint8 USS_IILK_p_ErraticStrideDn; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 10
    Description: Stride down for the USS_ID_II_LK_s_ErraticCnt */
extern const uint8 USS_IILK_p_ErraticStrideUp; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 10
    Description: Stride up for the USS_ID_II_LK_s_ErraticCnt */
extern const uint8 USS_IIRT_p_MaxMvAvgBufSize; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 255
    Description: Maximum buffer size that is used when calculating the cumulative moving average of 
    the reaction time */
extern const uint8 USS_IIVE_p_MinDetProb; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 127
    Description: Minimal Impairment Probobility to detect visual exploration impairment indicator */
extern const uint8 USS_IIVE_p_MinDistLvl; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 127
    Description: Minimal Distraction Level to detect visual exploration impairment indicator */
extern const uint8 USS_IP_p_FacCtctStgWhl; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor contact at the capacitve steering wheel */
extern const uint8 USS_IP_p_FacGearShiftDyn; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor gearshift dynamic */
extern const uint8 USS_IP_p_FacGripStgWhl; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor grip on capacitve steering wheel */
extern const uint8 USS_IP_p_FacRgn; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor recuperation */
extern const uint8 USS_IP_p_FacShiftPedDownEff; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor efficient shift down */
extern const uint8 USS_IP_p_FacShiftPedDwn; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor shift pedal downshift */
extern const uint8 USS_IP_p_FacShiftPedUp; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor shift up */
extern const sint8 USS_LAD_p_CntrStgMinEPSCtlValQfk; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Minimum EPS controller value */
extern const uint8 USS_POP_p1_StLatStgAcv[8]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7
    Description: Output Values for LookUpTable EPS_s_StStgTq to USS_s_StLatStgAcv */
extern const uint8 USS_POP_px_StLatStgAcv[8]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7
    Description: Input Values for LookUpTable EPS_s_StStgTq to USS_s_StLatStgAcv */
extern const uint8 USS_SIH_p_BitFldMonACA; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
extern const uint8 USS_SIH_p_BitFldMonACC; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
extern const uint8 USS_SIH_p_BitFldMonFPM; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
extern const uint8 USS_SIH_p_BitFldMonID; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring of impairment detection */
extern const uint8 USS_SIH_p_BitFldMonLDA; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
extern const uint8 USS_p_SrvCrvEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for curvature event group service subscription */
extern const uint8 USS_p_SrvEgoInfoComplexEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for  complex event group service subscription */
extern const uint8 USS_p_SrvEgoInfoEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for ego info event group service subscription */
extern const uint8 USS_p_SrvExtPrvwInfoEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for extended preview information event group service subscriptio
    n */
extern const uint8 USS_p_SrvObjDet_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: parameter for service subscription */
extern const uint8 USS_p_SrvObjEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for object detection group service subscription */
extern const uint8 USS_p_SrvOnlineInfoEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for online information event group service subscription */
extern const uint8 USS_p_SrvPrvwInfoEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for preview info group service subscription */
extern const uint8 USS_p_SrvRoadAttrExt_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for road attributes extended event group service subscription */
extern const uint8 USS_p_SrvRoadAttr_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for Road attributes service subscription */
extern const uint8 USS_p_SrvSlopesEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for slopes event group service subscription */
extern const uint8 USS_p_SrvSysInfoEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for system info event group service subscription */
extern const uint8 USS_p_SrvTrfcLghtPha_IdxSel; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 4
    Description: select a phase index of a specific traffic light (0-payload_aos0,.. 4- payload_aos4
    ) from phaseList */
extern const uint8 USS_p_SrvTrfcLght_IdxSel; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: select a traffic light (0-payload_aos0, 1- payload_aos1) from list */
extern const uint8 USS_p_SrvTrfcSignsPrvwEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for traffic signs preview event group service subscription */
extern const uint8 USS_p_StiDestSt; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 26
    Description: stimulation value for DestSt */

/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
extern const boolean USS_LAD_p_FlgEnaDirChkCtStg; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Switch to control sign comparison between EPS_StgTq & EPS_CtlValQFK for counterstee
    ring detection */
extern const boolean USS_SIH_p_FlgAcvSigMon; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Manipulation to activate/deactivate signal monitoring */
extern const boolean USS_SIH_p_FlgAcvSigMonSrv; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Manipulation to activate/deactivate signal monitoring for service communication */
extern const boolean USS_SIH_p_FlgAcvSubVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Manipulation to activate/deactivate input substitution */
extern const boolean USS_SIH_p_FlgClmp15Repl; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Replacement value for KST_s_KL_15 in case of faulty signal */
extern const boolean USS_p_FlgOvrdACARepl; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: override replacement of ACA_Obj1 data by ObjectDetection data */
extern const boolean USS_p_FlgStiDestSt; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: enable DestSt stimulation */

/*------------------------------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
# 72 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c" 2

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





/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 16
\**************************************************************************************************/
const uint16 USS_DSE_p_LWinAvgVUniform = 200; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 5000
    Description: window length for moving average of velocity */
const uint16 USS_DSE_p_ValDlyDLrg = 500; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1500
    Description: delay steps for large trailing distance event */
const uint16 USS_IILK_p_ErraticIndicatorTh = 1800; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Threshold to set the Erratic Behavior indicator */
const uint16 USS_IILK_p_ErraticNumSamp = 350; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 65535
    Description: Number of samples to consider for the calculation of the line offset standard devia
    tion */
const uint16 USS_IPR_p_MovAvgTimedDBufSize = 20; /* 
    Unit: s
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Max threshold timed distance to leading vehicle */
const uint16 USS_IPR_p_TrffcLghtMaxDist_dm = 500; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 5000
    Description: Maximum distance to traffic light for triggering the Reaction Time event: traffic l
    ight switches to red or green. Unit: dm */
const uint16 USS_IPR_p_TrffcLghtMinDist_dm = 50; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 5000
    Description: Minimum distance to traffic light for triggering the Reaction Time event: traffic l
    ight switches to red or green. Unit: dm */
const uint16 USS_SIH_p_BitFldEnaDTC = 4095; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Bitfield for enabling DTC triggering */
# 137 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c"
/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 32
\**************************************************************************************************/
const float32 USS_COM_p_FacACCDLrg = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor ACC distance large */
const float32 USS_COM_p_FacBrkFrqLo = 5.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor brake frequency low */
const float32 USS_COM_p_FacKckDwnCom = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor kick down */
const float32 USS_COM_p_FacLatAHiCom = 30.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor brake frequency low */
const float32 USS_COM_p_FacLatCtlAcvCom = 30.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor brake frequency low */
const float32 USS_COM_p_FacLgtCtlAcvCom = 30.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor brake frequency low */
const float32 USS_COM_p_FacOnePedalMode = 5.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
const float32 USS_COM_p_FacStgFrqLo = 20.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor steering frequency low */
const float32 USS_DSE_p1_VDSOVLat_LookupTableData[4] =
{
    /* [0..3] */ 1.F, 1.2000000476837158F, 1.7999999523162842F, 3.F
    /* 1.F, 1.2000000476837158F, 1.7999999523162842F, 3.F */
}; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Thresholds for lateral acceleration event */
const float32 USS_DSE_p1_VDSOVLgt_LookupTableData[4] =
{
    /* [0..3] */ 1.F, 1.2000000476837158F, 1.7999999523162842F, 3.F
    /* 1.F, 1.2000000476837158F, 1.7999999523162842F, 3.F */
}; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Thresholds for longitudal acceleration event */
const uint32 USS_DSE_p_BitFldEveAcv = 1006632951; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 4294967295
    Description: bitfield for event activation */
const float32 USS_DSE_p_CtDwnStep_s = 5.F; /* 
    Unit: s
    MIN/MAX: 0 .. 30
    Description: count down step */
const float32 USS_DSE_p_FacTlrVUniform = 0.05000000074505806F; /* 
    Unit: -
    MIN/MAX: 0.00999999977648258 .. 0.200000002980232
    Description: tolerance factor for moving average of velocity to set event */
const float32 USS_DSE_p_LoThDLrg_s = 1.7999999523162842F; /* 
    Unit: s
    MIN/MAX: 0 .. 10
    Description: lower threshold distance large */
const float32 USS_DSE_p_OfsDly_s = 10.F; /* 
    Unit: s
    MIN/MAX: 0 .. 1000
    Description: offset delay */
const float32 USS_DSE_p_ThDSml_s = 1.F; /* 
    Unit: s
    MIN/MAX: 0 .. 2
    Description: threshold distance small */
const float32 USS_DSE_p_ThDrvPedPosnADmd = 6.F; /* 
    Unit: m/s^2
    MIN/MAX: 0 .. 14
    Description: threshold drive pedal position acceleration */
const float32 USS_DSE_p_ThStgAg_deg = 30.F; /* 
    Unit: deg
    MIN/MAX: -819 .. 819.380004882813
    Description: threshold steering angle */
const float32 USS_DSE_p_ThVDSOVFast_kmph = 10.F; /* 
    Unit: km/h
    MIN/MAX: 0 .. 30
    Description: offset VDSO velocity fast */
const float32 USS_DSE_p_ThVDSOVSlow_kmph = 150.F; /* 
    Unit: km/h
    MIN/MAX: 0 .. 190
    Description: threshold velocity slow */
const float32 USS_DSE_p_TiEtaAttrMax = 15.F; /* 
    Unit: s
    MIN/MAX: 0.100000001490116 .. 20
    Description: maximum time of arrival */
const float32 USS_DSE_p_TiEtaAttrMin = 5.F; /* 
    Unit: s
    MIN/MAX: 0.100000001490116 .. 10
    Description: minimum time of arrival */
const float32 USS_DSE_p_UpprThDLrg_s = 2.5F; /* 
    Unit: s
    MIN/MAX: 0 .. 10
    Description: upper threshold distance large */
const float32 USS_DSE_p_VDSOLatALoPs_1ps = 2.F; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 10
    Description: filter value acc lat event */
const float32 USS_DSE_p_VDSOLatAMaxVal = 4.F; /* 
    Unit: m/s^2
    MIN/MAX: 0 .. 10
    Description: threshold acc lat max acceleration */
const float32 USS_DSE_p_VDSOLgtAMaxVal = 4.F; /* 
    Unit: m/s^2
    MIN/MAX: 0 .. 10
    Description: threshold acc long max acceleration */
const float32 USS_DSE_p_VMMBrkPedDmd = 0.69999998807907104F; /* 
    Unit: -
    MIN/MAX: 0 .. 3
    Description: threshold braking driver dominant */
const float32 USS_DSE_p_VSlowTiDistLowerLimit = 1.2000000476837158F; /* 
    Unit: m/s
    MIN/MAX: 0 .. 10
    Description: VSlow timed distance lower threshold */
const float32 USS_DSE_p_VSlowTiDistUpperLimit = 2.5F; /* 
    Unit: m/s
    MIN/MAX: 0 .. 10
    Description: VSlow timed distance upper threshold */
const float32 USS_DSE_px_VDSOVLat_BreakPointData[4] =
{
    /* [0..3] */ 0.F, 50.F, 100.F, 150.F
    /* 0.F, 50.F, 100.F, 150.F */
}; /* 
    Unit: -
    MIN/MAX: 0 .. 200
    Description: Thresholds for lateral acceleration event */
const float32 USS_DSE_px_VDSOVLgt_BreakPointData[4] =
{
    /* [0..3] */ 0.F, 50.F, 100.F, 150.F
    /* 0.F, 50.F, 100.F, 150.F */
}; /* 
    Unit: -
    MIN/MAX: 0 .. 200
    Description: Thresholds for longitudal acceleration event */
const float32 USS_DSF_p_DlyTiLngTrm_s = 60.F; /* 
    Unit: s
    MIN/MAX: 0 .. 1200
    Description: delay time for driver type fusion long term */
const float32 USS_DSF_p_DlyTi_s = 10.F; /* 
    Unit: s
    MIN/MAX: 0 .. 1000
    Description: delay time for driver type fusion */
const float32 USS_DSF_p_LngTrmCmaValue_s = 600.F; /* 
    Unit: s
    MIN/MAX: 0 .. 1000
    Description: window length of moving average */
const float32 USS_DS_p_OfsDlyLng_s = 20.F; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: offset delay long for index processing */
const float32 USS_DS_p_OfsDlyMed_s = 10.F; /* 
    Unit: s
    MIN/MAX: 0 .. 360
    Description: offset delay medium for index processing */
const float32 USS_DS_p_OfsDlySho_s = 2.F; /* 
    Unit: s
    MIN/MAX: 0 .. 360
    Description: offset delay short for index processing */
const float32 USS_DS_p_OfsDlyXLng_s = 45.F; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: offset delay extra long for index processing */
const float32 USS_DYN_p_FacAccrPedHi = 15.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor accelerator pedal high */
const float32 USS_DYN_p_FacBrkFrqHi = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor veloctiy slow */
const float32 USS_DYN_p_FacBrkPHi = 20.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor brake pressure high */
const float32 USS_DYN_p_FacDSml = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor distance small */
const float32 USS_DYN_p_FacKckDwnDyn = 30.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor kick down active */
const float32 USS_DYN_p_FacLatArHi = 20.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor longitudinal acceleration high */
const float32 USS_DYN_p_FacLgtArHi = 20.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor longitudinal acceleration high */
const float32 USS_DYN_p_FacOnePedalMode = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
const float32 USS_DYN_p_FacPaTaAcv = 30.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor PaTa mode active */
const float32 USS_DYN_p_FacStgFrqHi = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor veloctiy slow */
const float32 USS_DYN_p_FacVFast = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor veloctiy slow */
const float32 USS_DYN_p_FacVSlow = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor veloctiy slow */
const float32 USS_EFF_p_FacBrkFrqLo = 20.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor braking frequency low */
const float32 USS_EFF_p_FacDSmlEff = 15.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor distance small */
const float32 USS_EFF_p_FacDrvPedHi = 20.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor driver pedal high */
const float32 USS_EFF_p_FacKckDwnEff = 20.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor kick down */
const float32 USS_EFF_p_FacLatCtlAcvEff = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
const float32 USS_EFF_p_FacLgtAHi = 5.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor longitudinal acceleration high */
const float32 USS_EFF_p_FacLgtCtlAcvEff = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
const float32 USS_EFF_p_FacOnePedalMode = 5.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
const float32 USS_EFF_p_FacPEAAcv = 30.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor velocity slow */
const float32 USS_EFF_p_FacVSlow = 20.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor velocity slow */
const float32 USS_EFF_p_FacVUniform = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor velocity uniform */
const float32 USS_GC_p_CtDwnStep_s = 5.F; /* 
    Unit: s
    MIN/MAX: 0 .. 30
    Description: count down step */
const float32 USS_GC_p_EPSStgTqLoPs_1ps = 1.F; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 100
    Description: cut off frequency for 
    low pass filter steering torque */
const float32 USS_GC_p_OfsDly_s = 10.F; /* 
    Unit: s
    MIN/MAX: 0 .. 1000
    Description: offset delay */
const float32 USS_GC_p_PredVLimDft = 130.F; /* 
    Unit: km/h
    MIN/MAX: 0 .. 255
    Description: default velocity if speed limit is not in range of interest */
const float32 USS_GC_p_ThRoadCrvt_1pm = 0.033300001174211502F; /* 
    Unit: -
    MIN/MAX: 0 .. 1000
    Description: threshold roadway curvature */
const float32 USS_GC_p_ThStgAg_deg = 30.F; /* 
    Unit: deg
    MIN/MAX: -819 .. 819.380004882813
    Description: threshold steering angle */
const float32 USS_GC_p_ThVEvalEve_kmph = 20.F; /* 
    Unit: km/h
    MIN/MAX: 1 .. 60
    Description: threshold for evaluation some events */
const float32 USS_GC_p_ThVNotSdsl_kmph = 7.F; /* 
    Unit: km/h
    MIN/MAX: 1 .. 30
    Description: threshold for no standstill (car is rolling) */
const float32 USS_GC_p_VDSOLgtALoPs_1ps = 1.F; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 100
    Description: cut off frequency for 
    low pass filter longitudinal acceleration */
const float32 USS_IIAA_p_AbrAcclConfDly_s = 2.F; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: Abrupt Actions time delay for abrupt Acceleration */
const float32 USS_IIAA_p_AbrBrkConfDly_s = 2.F; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: Abrupt Actions time delay for abrupt braking */
const float32 USS_IIAA_p_AbrStgConfDly_s = 2.F; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: Abrupt Actions time delay for abrupt steering */
const float32 USS_IIEC_p1_SpdDeltaThFactors[2] =
{
    /* [0..1] */ 0.05000000074505806F, 0.94999998807907104F
    /* 0.05000000074505806F, 0.94999998807907104F */
}; /* 
    Unit: %
    MIN/MAX: 0 .. 10
    Description: Tolerance factor for threshold calculation, first is for low speed, second for high
     speed up to MaxVLim */
const float32 USS_IIEC_p_SpdDeltaWndwLnght_s = 40.F; /* 
    Unit: s
    MIN/MAX: 10 .. 600
    Description: MovingAverage Window for Indicator Threshold */
const float32 USS_IIEC_p_TlgtngMaxAllwdTimedDChg_s = 1.F; /* 
    Unit: s
    MIN/MAX: 0 .. 10
    Description: Maximum allowed time distance change when changing the leading vehicle before resta
    rting the tailgating detection */
const float32 USS_IIEC_p_TlgtngMaxTiDist_s = 1.2000000476837158F; /* 
    Unit: s
    MIN/MAX: 0 .. 10
    Description: Maximum Distances where tailgating will be detected */
const float32 USS_IIEC_p_TlgtngMinDetDly_s = 100.F; /* 
    Unit: s
    MIN/MAX: 0 .. 600
    Description: Time of constant tailgating before activating the indicator */
const float32 USS_IILK_p_ErraticCurveTh = 1.2000000476837158F; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Threshold to apply to the line offset standard deviation to determine a erratic beh
    avior is detected when driving through a curve */
const float32 USS_IILK_p_ErraticStraightTh = 1.2000000476837158F; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Threshold to apply to the line offset standard deviation to determine a erratic beh
    avior is detected when driving on a straight path */
const float32 USS_IIRT_p1_ScoringGreenTrffcLght[6] =
{
    /* [0..5] */ 0.F, 0.30000001192092896F, 0.60000002384185791F, 1.F, 1.2000000476837158F, 2.5F
    /* 0.F, 0.30000001192092896F, 0.60000002384185791F, 1.F, 1.2000000476837158F, 2.5F */
}; /* 
    Unit: s
    MIN/MAX: 0 .. 20
    Description: Array of Reaction Times for scoring very fast to very slow reaction. */
const float32 USS_IIRT_p1_ScoringRedTrffcLght[6] =
{
    /* [0..5] */ 0.F, 0.30000001192092896F, 0.60000002384185791F, 0.89999997615814209F,
     1.2000000476837158F, 2.5F
    /* 0.F, 0.30000001192092896F, 0.60000002384185791F, 0.89999997615814209F, 1.2000000476837158F, 2
    .5F */
}; /* 
    Unit: s
    MIN/MAX: 0 .. 20
    Description: Array of Reaction Times for scoring very fast to very slow reaction. */
const float32 USS_IIRT_p1_ScoringSdnLeadVeh[6] =
{
    /* [0..5] */ 0.F, 0.30000001192092896F, 0.60000002384185791F, 0.89999997615814209F,
     1.2000000476837158F, 1.5F
    /* 0.F, 0.30000001192092896F, 0.60000002384185791F, 0.89999997615814209F, 1.2000000476837158F, 1
    .5F */
}; /* 
    Unit: s
    MIN/MAX: 0 .. 20
    Description: Array of Reaction Times for scoring very fast to very slow reaction. */
const float32 USS_IIRT_p_ActivationRate = 0.20000000298023224F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: This parameter influences the slope of the activation function for the impairment e
    valuation of the reaction time subfeature. The higher the value, the faster the confidence value
     for the impairment indicator rises. */
const float32 USS_IIRT_p_ImpairmentThreshScore = 4.F; /* 
    Unit: -
    MIN/MAX: 0 .. 6
    Description: The threshold from which the reaction score will lead either to impaired (above the
     threshold) or not impaired (below the threshold) */
const float32 USS_IIRT_p_MaxRatioInvalidReactions = 0.5F; /* 
    Unit: -
    MIN/MAX: 0 .. 1
    Description: This parameter gives the threshold at which ratio of invalid reactions to total amo
    unt of reactions the event is classified as invalid and will not be counted in for the reaction 
    time score. */
const float32 USS_IIRT_p_MaxReactionTime = 2.5F; /* 
    Unit: s
    MIN/MAX: 0 .. 20
    Description: Max time that is waited for a stop trigger signal. If the timer goes above this thr
    eshold it will stop and the reaction is counted as invalid. */
const float32 USS_IPR_p_DrvBhvrBrkFrqUpperTh = 2.F; /* 
    Unit: Hz
    MIN/MAX: 0 .. 100
    Description: Max threshold braking frequency - Abrupt Action */
const float32 USS_IPR_p_EveFacLatAHiThd = 0.5F; /* 
    Unit: -
    MIN/MAX: 0 .. 1
    Description: Threshold to detect the sudden / abrupt steering based on the lateral acceleration
     */
const float32 USS_IPR_p_MinDistChgBrk_s = 0.20000000298023224F; /* 
    Unit: -
    MIN/MAX: 0 .. 255
    Description: Min threshold timed distance to leading vehicle */
const float32 USS_IPR_p_StgWhlAgLoPs_1ps = 1.F; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 100
    Description: Steering angle low pass filter time constant */
const float32 USS_IPR_p_ThDrvBvrStgAgDcr_deg = 4.F; /* 
    Unit: deg
    MIN/MAX: 0 .. 359
    Description: Steering angle step - Abrupt action */
const float32 USS_IPR_p_ThDrvBvrStgFrq = 2.F; /* 
    Unit: Hz
    MIN/MAX: 0 .. 100
    Description: Max threshold steering frequency - Abrupt Action */
const float32 USS_IPR_p_ThTrffcLghtBrkPed = 0.10000000149011612F; /* 
    Unit: -
    MIN/MAX: 0 .. 4.09000015258789
    Description: Threshold for the brake pedal input that will be interpreted as a reaction of the d
    river to an event */
const float32 USS_IPR_p_ThTrffcLghtDrvPed = 0.10000000149011612F; /* 
    Unit: -
    MIN/MAX: -6.40000009536743 .. 14
    Description: Threshold for the drive pedal input that will be interpreted as a reaction of the d
    river to an event */
const float32 USS_IPR_p_ThTrffcLghtVelDiff_kmph = 10.F; /* 
    Unit: km/h
    MIN/MAX: 0 .. 100
    Description: Threshold for the difference of the current speed limit and the ego vehicle speed, 
    at which at a traffic light, if it switches to green, an acceleration or a gear shift is expecte
    d and thus a start trigger for reaction time event is set to true */
const float32 USS_LAD_p1_FacStgAcvAdp[8] =
{
    /* [0..7] */ 0.93500000238418579F, 0.93500000238418579F, 0.93500000238418579F, 1.F, 1.F, 1.F,
     1.F, 1.F
    /* 0.93500000238418579F, 0.93500000238418579F, 0.93500000238418579F, 1.F, 1.F, 1.F, 1.F, 1.F */
}; /* 
    Unit: km/h
    MIN/MAX: 0 .. 2
    Description: factor array for velocity-adaptive steering activity */
const float32 USS_LAD_p1_ThLatStgAcvTq[5] =
{
    /* [0..4] */ 0.F, 1.F, 3.F, 4.F, 7.5F
    /* 0.F, 1.F, 3.F, 4.F, 7.5F */
}; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Thresholds for lateral steering activity torque based */
const float32 USS_LAD_p1_ThLatStgAcvTqV[5] =
{
    /* [0..4] */ 0.F, 2.9800000190734863F, 2.9900000095367432F, 3.F, 10.F
    /* 0.F, 2.9800000190734863F, 2.9900000095367432F, 3.F, 10.F */
}; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Thresholds for lateral steering activity torque based */
const float32 USS_LAD_p_CntrStgDly_s = 0.5F; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Delay for detecting Countersteering */
const float32 USS_LAD_p_CntrStgHiLngThTq = 3.2000000476837158F; /* 
    Unit: Nm
    MIN/MAX: 0 .. 4
    Description: Threshold for high long countersteering */
const float32 USS_LAD_p_CntrStgHiShoThTq = 3.5F; /* 
    Unit: Nm
    MIN/MAX: 0 .. 4
    Description: Threshold for high short countersteering */
const float32 USS_LAD_p_CntrStgHiTqDly_s = 0.69999998807907104F; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Delay for detecting high Countersteering */
const float32 USS_LAD_p_CntrStgLoLngThTq = 0.20000000298023224F; /* 
    Unit: Nm
    MIN/MAX: 0 .. 4
    Description: Threshold for low long countersteering */
const float32 USS_LAD_p_CntrStgLoShoThTq = 0.40000000596046448F; /* 
    Unit: Nm
    MIN/MAX: 0 .. 4
    Description: Threshold for low short countersteering */
const float32 USS_LAD_p_CntrStgLoTqDly_s = 0.10000000149011612F; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Delay for detecting low Countersteering */
const float32 USS_LAD_p_CntrStgThSdsl_kmph = 2.F; /* 
    Unit: km/h
    MIN/MAX: 0 .. 20
    Description: Velocity threshold for activaty counter steering detection */
const float32 USS_LAD_p_EPSStgTqVFreCut = 3.F; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 1000
    Description: Cutoff frequency of steering torque velocity */
const float32 USS_LAD_p_HiThEPSTq = 0.80000001192092896F; /* 
    Unit: Nm
    MIN/MAX: 0.00999999977648258 .. 4
    Description: Higher torque threshold for driver activity */
const float32 USS_LAD_p_HiThEPSTqCpWhl = 0.80000001192092896F; /* 
    Unit: Nm
    MIN/MAX: 0.00999999977648258 .. 4
    Description: Higher torque threshold for driver activity when using a capacitive steering wheel
     */
const float32 USS_LAD_p_HiThEPSTqV = 6.F; /* 
    Unit: Nm/s
    MIN/MAX: 0.00999999977648258 .. 20
    Description: Higher torque velocity threshold for driver activity */
const float32 USS_LAD_p_LoThEPSTq = 0.44999998807907104F; /* 
    Unit: Nm
    MIN/MAX: 0.00999999977648258 .. 4
    Description: Lower torque threshold for driver activity */
const float32 USS_LAD_p_LoThEPSTqCpWhl = 0.44999998807907104F; /* 
    Unit: Nm
    MIN/MAX: 0.00999999977648258 .. 4
    Description: Lower torque threshold for driver activity when using a capacitive steering wheel
     */
const float32 USS_LAD_p_LoThEPSTqV = 2.7999999523162842F; /* 
    Unit: Nm/s
    MIN/MAX: 0.00999999977648258 .. 20
    Description: Lower torque velocity threshold for driver activity */
const float32 USS_LAD_px_VThStgAcv[8] =
{
    /* [0..7] */ 0.F, 10.F, 30.F, 31.F, 40.F, 50.F, 60.F, 70.F
    /* 0.F, 10.F, 30.F, 31.F, 40.F, 50.F, 60.F, 70.F */
}; /* 
    Unit: km/h
    MIN/MAX: 0 .. 200
    Description: velocity thresholds for velocity-adaptive steering activity */
const float32 USS_PRP_p1_EPSCtlValQFKDvtFilAbsBrkPnt[2] =
{
    /* [0..1] */ 9.9899997711181641F, 29.996000289916992F
    /* 9.9899997711181641F, 29.996000289916992F */
}; /* 
    Unit: %/s
    MIN/MAX: 0 .. 100
    Description: Breakpoints for USS_s_EPSCtlValQFKDvtFilFac
    Index 1 is the max posible value for a assist system */
const float32 USS_PRP_p1_EPSCtlValQFKDvtFilAbsTblDat[2] =
{
    /* [0..1] */ 0.F, 1.F
    /* 0.F, 1.F */
}; /* 
    Unit: -
    MIN/MAX: 0 .. 1
    Description: Tabledata for USS_s_EPSCtlValQFKDvtFilFac */
const float32 USS_PRP_p1_EPSCtlValQFKFilAbsBrkPnt[2] =
{
    /* [0..1] */ 9.9989995956420898F, 33.330001831054688F
    /* 9.9989995956420898F, 33.330001831054688F */
}; /* 
    Unit: %
    MIN/MAX: 0 .. 100
    Description: Breakpoints for USS_s_EPSCtlValQFKFilFac */
const float32 USS_PRP_p1_EPSCtlValQFKFilAbsTblDat[2] =
{
    /* [0..1] */ 0.F, 1.F
    /* 0.F, 1.F */
}; /* 
    Unit: -
    MIN/MAX: 0 .. 1
    Description: Tabledata for USS_s_EPSCtlValQFKFilFac */
const float32 USS_PRP_p_AsiSysLatActFacNegGrd = -0.20000000298023224F; /* 
    Unit: -
    MIN/MAX: -50 .. 50
    Description: Max negativ gradient off USS_PRP_s_AsiSysLatActFac */
const float32 USS_PRP_p_AsiSysLatActFacPosGrd = 50.F; /* 
    Unit: -
    MIN/MAX: -50 .. 50
    Description: Max positiv gradient off USS_PRP_s_AsiSysLatActFac unused 57 means tan(89) */
const float32 USS_PRP_p_EPSCtlValQFKFreCut = 3.F; /* 
    Unit: -
    MIN/MAX: 0 .. 1000
    Description: cut off frequency steering force */
const float32 USS_SIH_p_KLRTouchauswertungIntTi = 1.2000000476837158F; /* 
    Unit: s
    MIN/MAX: 0 .. 1200
    Description: Max alowed Init Time */
const float32 USS_SOH_p_StrtTi_DA_s = 1.5F; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Initialisation time for Driver Activity outputs */
const float32 USS_SOH_p_StrtTi_DS_s = 1.5F; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Initialisation time for Driving Style outputs */
const float32 USS_SOH_p_StrtTi_ID_s = 1.5F; /* 
    Unit: s
    MIN/MAX: 0 .. 5
    Description: Initialisation time for Impairment Detection outputs */
const float32 USS_p_FacRadDist = 0.0099999997764825821F; /* 
    Unit: -
    MIN/MAX: 0.00100000004749745 .. 255
    Description: factor to convert radial distance from object detection to m */
const float32 USS_p_FacTiCol = 1.F; /* 
    Unit: -
    MIN/MAX: 0.00100000004749745 .. 255
    Description: factor to convert time to collision from object detection to m/s */
# 750 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c"
/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
const uint8 USSDB_DS_NAME[12] =
{
    /* [0..9] */ 49, 57, 48, 48, 48, 48, 48, 48, 48, 48,
    /* [10..11] */ 48, 48
    /* 49., 57., 48., 48., 48., 48., 48., 48., 48., 48., 
    48., 48. */
}; /* Description: HCP1 DS Name : 190000000000 */
const uint8 USSDB_DS_VERSION[4] =
{
    /* [0..3] */ 52, 56, 54, 57
    /* 52., 56., 54., 57. */
}; /* Description: HCP1 DS Version : 4869 */
const uint8 USS_DSE_p_LoThBCSBrkFrqLo = 3; /* 
    Unit: En
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 200
    Description: lower threshold brake frequency low */
const uint8 USS_DSE_p_LoThStgFrqLo = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 30
    Description: lower threshold steering frequency low */
const uint8 USS_DSE_p_ThBCSBrkFrqHi = 10; /* 
    Unit: En
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 200
    Description: threshold brake frequency high */
const uint8 USS_DSE_p_ThStgFrqHi = 10; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 50
    Description: threshold steering frequency high */
const uint8 USS_DSE_p_UpprThBCSBrkFrqLo = 10; /* 
    Unit: En
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 200
    Description: upper threshold brake frequency low */
const uint8 USS_DSE_p_UpprThStgFrqLo = 5; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 30
    Description: upper threshold steering frequency low */
const uint8 USS_DSE_p_VDSOVSlow_VelocityRangeLowerLimit = 70; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: lower threshold brake frequency low */
const uint8 USS_DSE_p_VDSOVSlow_VelocityRangeUpperLimit = 90; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: lower threshold brake frequency low */
const uint8 USS_DSE_p_ValDlyDSml = 150; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 250
    Description: delay steps for small trailing distance event */
const uint8 USS_DSF_p_VldDif_p100 = 10; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: valid difference between driver types */
const uint8 USS_GC_p_ODStFctASIL = 3; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: ASIL function state of object detection */
const uint8 USS_GC_p_ODStFctQM = 2; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: QM function state of object detection */
const uint8 USS_GC_p_ODStObjClasAnimal = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: enumeration for animal in object detection */
const uint8 USS_GC_p_ODStObjClasGenObj = 8; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: enumeration for general object in object detection */
const uint8 USS_GC_p_ODStObjClasIni = 5; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: init value for object class */
const uint8 USS_GC_p_ODStObjClasUnknown = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: enumeration for unknown object in object detection */
const uint8 USS_GC_p_ODValThProb = 60; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 10 .. 100
    Description: threshold value for object existence probability */
const uint8 USS_GC_p_PredVLimMax = 120; /* 
    Unit: km/h
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 255
    Description: maximum velocity limit of the traffic sign input */
const uint8 USS_GC_p_PredVLimMin = 30; /* 
    Unit: km/h
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: minimum velocity limit of the traffic sign input */
const uint8 USS_HOD_p1_LuTblHOD[16] =
{
    /* [0..9] */ 0, 1, 1, 1, 1, 3, 3, 3, 4, 4,
    /* [10..15] */ 4, 15, 15, 14, 14, 15
    /* 0., 1., 1., 1., 1., 3., 3., 3., 4., 4., 
    4., 15., 15., 14., 14., 15. */
}; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 15
    Description: factor velocity slow */
const uint8 USS_HOD_px_LuTblHOD[16] =
{
    /* [0..9] */ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    /* [10..15] */ 10, 11, 12, 13, 14, 15
    /* 0., 1., 2., 3., 4., 5., 6., 7., 8., 9., 
    10., 11., 12., 13., 14., 15. */
}; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 15
    Description: factor velocity slow */
const uint8 USS_IIAA_p_AbrpAccIdcCntThres = 10; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold abrupt acceleration events to determine impairment */
const uint8 USS_IIAA_p_AbrpActnIdcCntThres = 250; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold abrupt action events to determine impairment */
const uint8 USS_IIAA_p_AbrpBrkIdcCntThres = 10; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold abrupt braking events to determine impairment */
const uint8 USS_IIAA_p_AbrpStgIdcCntThres = 10; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold abrupt steering events to determine impairment */
const uint8 USS_IIEC_p_SpdDeltaThIndicator_p = 70; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Threshold for activating the indicator, if tailgating was active in <IndicatorThres
    hold_p> percent in the last <IndicatorWindow_s> seconds */
const uint8 USS_IIEC_p_SpdDeltaThMaxVLim_kmph = 250; /* 
    Unit: km/h
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 250
    Description: Maximum valid speed limit */
const sint8 USS_IIEC_p_SpdDeltaThOffset_kmph = 15; /* 
    Unit: km/h
    LSB: 2^0 OFF: 0 MIN/MAX: -100 .. 100
    Description: Threshold Tolerance Offset */
const uint8 USS_IIF_p1_ImpairLevelConfTh[6] =
{
    /* [0..5] */ 0, 1, 20, 40, 60, 80
    /* 0., 1., 20., 40., 60., 80. */
}; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Thresholds to determine the impairment detection confidence level */
const uint8 USS_IIF_p1_ImpairLevelTh[8] =
{
    /* [0..7] */ 0, 20, 40, 60, 70, 80, 90, 95
    /* 0., 20., 40., 60., 70., 80., 90., 95. */
}; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Thresholds to determine the impairment detection level */
const uint8 USS_IIF_p_FacIdcAA = 100; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Influence factor of the Abrupt Actions Indicator into the Impairment Detection */
const uint8 USS_IIF_p_FacIdcEC = 100; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Influence factor of the Abrupt Actions Indicator into the Impairment Detection */
const uint8 USS_IIF_p_FacIdcLK = 100; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Influence factor of the Lane Keeping Indicator into the Impairment Detection */
const uint8 USS_IIF_p_FacIdcRT = 100; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Influence factor of the Reaction Time Indicator into the Impairment Detection */
const uint8 USS_IIF_p_FacIdcVE = 100; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Influence factor of the Visual Exception Indicator into the Impairment Detection */
const uint8 USS_IILK_p_DepHisCntDn_s = 30; /* 
    Unit: s
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Waiting time to decrease USS_ID_II_LK_s_DepHisCnt */
const uint8 USS_IILK_p_DepHisDepTh = 2; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold applied to the line offset variance to determine the departure detection
     */
const uint8 USS_IILK_p_DepHisIndicatorTh = 4; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Threshold to set the Lane Departure History indicator */
const uint8 USS_IILK_p_ErraticStrideDn = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 10
    Description: Stride down for the USS_ID_II_LK_s_ErraticCnt */
const uint8 USS_IILK_p_ErraticStrideUp = 8; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 10
    Description: Stride up for the USS_ID_II_LK_s_ErraticCnt */
const uint8 USS_IIRT_p_MaxMvAvgBufSize = 100; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 255
    Description: Maximum buffer size that is used when calculating the cumulative moving average of 
    the reaction time */
const uint8 USS_IIVE_p_MinDetProb = 40; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 127
    Description: Minimal Impairment Probobility to detect visual exploration impairment indicator */
const uint8 USS_IIVE_p_MinDistLvl = 3; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 127
    Description: Minimal Distraction Level to detect visual exploration impairment indicator */
const uint8 USS_IP_p_FacCtctStgWhl = 30; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor contact at the capacitve steering wheel */
const uint8 USS_IP_p_FacGearShiftDyn = 20; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor gearshift dynamic */
const uint8 USS_IP_p_FacGripStgWhl = 10; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor grip on capacitve steering wheel */
const uint8 USS_IP_p_FacRgn = 15; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor recuperation */
const uint8 USS_IP_p_FacShiftPedDownEff = 15; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor efficient shift down */
const uint8 USS_IP_p_FacShiftPedDwn = 20; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor shift pedal downshift */
const uint8 USS_IP_p_FacShiftPedUp = 5; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor shift up */
const sint8 USS_LAD_p_CntrStgMinEPSCtlValQfk = 5; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: Minimum EPS controller value */
const uint8 USS_POP_p1_StLatStgAcv[8] =
{
    /* [0..7] */ 0, 2, 4, 7, 7, 7, 6, 7
    /* 0., 2., 4., 7., 7., 7., 6., 7. */
}; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7
    Description: Output Values for LookUpTable EPS_s_StStgTq to USS_s_StLatStgAcv */
const uint8 USS_POP_px_StLatStgAcv[8] =
{
    /* [0..7] */ 0, 1, 2, 3, 4, 5, 6, 7
    /* 0., 1., 2., 3., 4., 5., 6., 7. */
}; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7
    Description: Input Values for LookUpTable EPS_s_StStgTq to USS_s_StLatStgAcv */
const uint8 USS_SIH_p_BitFldMonACA = 255; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
const uint8 USS_SIH_p_BitFldMonACC = 255; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
const uint8 USS_SIH_p_BitFldMonFPM = 247; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
const uint8 USS_SIH_p_BitFldMonID = 255; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring of impairment detection */
const uint8 USS_SIH_p_BitFldMonLDA = 247; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
const uint8 USS_p_SrvCrvEveGrp_StSetMd = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for curvature event group service subscription */
const uint8 USS_p_SrvEgoInfoComplexEveGrp_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for  complex event group service subscription */
const uint8 USS_p_SrvEgoInfoEveGrp_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for ego info event group service subscription */
const uint8 USS_p_SrvExtPrvwInfoEveGrp_StSetMd = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for extended preview information event group service subscriptio
    n */
const uint8 USS_p_SrvObjDet_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: parameter for service subscription */
const uint8 USS_p_SrvObjEveGrp_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for object detection group service subscription */
const uint8 USS_p_SrvOnlineInfoEveGrp_StSetMd = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for online information event group service subscription */
const uint8 USS_p_SrvPrvwInfoEveGrp_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for preview info group service subscription */
const uint8 USS_p_SrvRoadAttrExt_StSetMd = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for road attributes extended event group service subscription */
const uint8 USS_p_SrvRoadAttr_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for Road attributes service subscription */
const uint8 USS_p_SrvSlopesEveGrp_StSetMd = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for slopes event group service subscription */
const uint8 USS_p_SrvSysInfoEveGrp_StSetMd = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for system info event group service subscription */
const uint8 USS_p_SrvTrfcLghtPha_IdxSel = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 4
    Description: select a phase index of a specific traffic light (0-payload_aos0,.. 4- payload_aos4
    ) from phaseList */
const uint8 USS_p_SrvTrfcLght_IdxSel = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: select a traffic light (0-payload_aos0, 1- payload_aos1) from list */
const uint8 USS_p_SrvTrfcSignsPrvwEveGrp_StSetMd = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for traffic signs preview event group service subscription */
const uint8 USS_p_StiDestSt = 20; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 26
    Description: stimulation value for DestSt */
# 1103 "C:/MySandboxes/Prodserver/USS/C08_1910/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c"
/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
const boolean USS_LAD_p_FlgEnaDirChkCtStg = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Switch to control sign comparison between EPS_StgTq & EPS_CtlValQFK for counterstee
    ring detection */
const boolean USS_SIH_p_FlgAcvSigMon = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Manipulation to activate/deactivate signal monitoring */
const boolean USS_SIH_p_FlgAcvSigMonSrv = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Manipulation to activate/deactivate signal monitoring for service communication */
const boolean USS_SIH_p_FlgAcvSubVal = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Manipulation to activate/deactivate input substitution */
const boolean USS_SIH_p_FlgClmp15Repl = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Replacement value for KST_s_KL_15 in case of faulty signal */
const boolean USS_p_FlgOvrdACARepl = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: override replacement of ACA_Obj1 data by ObjectDetection data */
const boolean USS_p_FlgStiDestSt = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: enable DestSt stimulation */





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
/*------------------------------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
