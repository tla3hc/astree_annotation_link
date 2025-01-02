# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 10 "<built-in>"




# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c" 2
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_Param
 *** TargetLink subsystem : USS_Param/FrameUSS_Param
 *** Codefile             : USS_Param.c
 ***
 *** Generation date: 2023-10-26 11:44:57
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
 *** Style definition file                    : C:\MySandboxes\SWC_USS_C08_1409\50_PAR\30_CG\CG_USS_
 ***                                            Param\20_IMPL\CgTools\Common_C_Tools\Platform_TlConf
 ***                                            ig\cconfig.xml
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

# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.h" 1
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_Param
 *** TargetLink subsystem : USS_Param/FrameUSS_Param
 *** Codefile             : USS_Param.h
 ***
 *** Generation date: 2023-10-26 11:44:57
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
 *** Style definition file                    : C:\MySandboxes\SWC_USS_C08_1409\50_PAR\30_CG\CG_USS_
 ***                                            Param\20_IMPL\CgTools\Common_C_Tools\Platform_TlConf
 ***                                            ig\cconfig.xml
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
# 64 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.h" 2

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
    DATASET_CONSTANT: mergeable calibratable parameters (ROM) | Width: 16
\**************************************************************************************************/
extern const volatile uint16 USS_DSE_c_ValDlyVLimChg; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1000
    Description: delay steps for velocity limitation change */
extern const volatile uint16 USS_HOD_c_LatHodNoCntctTiUpprLim; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 507 .. 507
    Description: Upper Limit of SOUT_s_USS_DALatHODNoContactTime_s */
extern const volatile uint16 USS_LAD_c_LatInAcvTiUpprLim; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 508 .. 508
    Description: Upper Limit of USS_LAD_s_LatInAcvTi_s */

/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 16
\**************************************************************************************************/
extern const uint16 USS_DSE_p_ValDlyDLrg; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1500
    Description: delay steps for large trailing distance event */
extern const uint16 USS_IP_p1_ThVDSOV_kmph[3]; /* 
    Unit: km/h
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 460
    Description: threshold VDSO velocity */
extern const uint16 USS_SIH_p_BitFldEnaDTC; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Bitfield for enabling DTC triggering */

/**************************************************************************************************\
    DATASET_CONSTANT: mergeable calibratable parameters (ROM) | Width: 32
\**************************************************************************************************/
extern const volatile float32 USS_GC_c_FacMpsTransKmph; /* 
    Unit: -
    MIN/MAX: 3.59999990463257 .. 3.59999990463257
    Description: factor to transfer mps into kmh */
extern const volatile float32 USS_GC_c_FacRadTransDeg; /* 
    Unit: -
    MIN/MAX: 57.2957992553711 .. 57.2957992553711
    Description: factor to transfer radian into degrees */
extern const volatile float32 USS_SIH_c_StdIniTi_s; /* 
    Unit: s
    MIN/MAX: 0 .. 2
    Description: constand for standart init timeout */
extern const volatile float32 USS_SIH_c_TiDebSrv_s; /* 
    Unit: s
    MIN/MAX: 0 .. 2
    Description: debounce time for service communication error evaluation */
extern const volatile float32 USS_c_Cnst0F32; /* 
    Unit: -
    MIN/MAX: 0 .. 0
    Description: constant for zero with data type float32 */
extern const volatile float32 USS_c_Cnst100Prct_p100; /* 
    Unit: %
    MIN/MAX: 100 .. 100
    Description: constant for 100 percent */
extern const volatile float32 USS_c_CnstCoolDwn_sptk; /* 
    Unit: -
    MIN/MAX: -0.00100000004749745 .. -0.00100000004749745
    Description: constant cool down value for index processing */
extern const volatile float32 USS_c_FrqSmpl; /* 
    Unit: 1/s
    MIN/MAX: 49.9000015258789 .. 50.0099983215332
    Description: cycle time inverse */
extern const volatile float32 USS_c_TiSmpl_s; /* 
    Unit: s
    MIN/MAX: 0.0198999997228384 .. 0.0209999997168779
    Description: cycle time USS */
extern const volatile float32 USS_c_ValDivLim; /* 
    Unit: -
    MIN/MAX: 9.99999971718069e-10 .. 0.00999999977648258
    Description: constant for divisor limit (for use in ProtectedDivision blocks) */

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
extern const float32 USS_COM_p_FacOnePedalMode; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
extern const float32 USS_COM_p_FacStgFrqLo; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor steering frequency low */
extern const float32 USS_DSE_p_ACAVxObj01_kmph; /* 
    Unit: km/h
    MIN/MAX: 0 .. 190
    Description: threshold relative velocity of LRR */
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
extern const float32 USS_DSE_p_LWinAvgVUniform; /* 
    Unit: -
    MIN/MAX: 1 .. 5000
    Description: window length for moving average of velocity */
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
extern const float32 USS_DSE_p_ThRoadCrvt_1pm; /* 
    Unit: 1/m
    MIN/MAX: 0 .. 1000
    Description: threshold roadway curvature */
extern const float32 USS_DSE_p_ThStgAg_deg; /* 
    Unit: deg
    MIN/MAX: -819 .. 819.380004882813
    Description: threshold steering angle */
extern const float32 USS_DSE_p_ThVDSOLatA_mps2; /* 
    Unit: m/s^2
    MIN/MAX: -163.839996337891 .. 163.839996337891
    Description: threshold VDSO lateral acceleration */
extern const float32 USS_DSE_p_ThVDSOLgtA_mps2; /* 
    Unit: m/s^2
    MIN/MAX: -163.830001831055 .. 163.830001831055
    Description: threshold VDSO longitudinal acceleration */
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
extern const float32 USS_DSE_p_VMMBrkPedDmd; /* 
    Unit: -
    MIN/MAX: 0 .. 3
    Description: threshold braking driver dominant */
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
extern const float32 USS_DYN_p_FacAccrPedHi; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor accelerator pedal high */
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
extern const float32 USS_EFF_p_FacLgtAHi; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor longitudinal acceleration high */
extern const float32 USS_EFF_p_FacOnePedalMode; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
extern const float32 USS_EFF_p_FacVSlow; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor velocity slow */
extern const float32 USS_EFF_p_FacVUniform; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor velocity uniform */
extern const float32 USS_GC_p_EPSStgTqLoPs_1ps; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 100
    Description: cut off frequency for 
    low pass filter steering torque */
extern const float32 USS_GC_p_PredVLimDft; /* 
    Unit: km/h
    MIN/MAX: 0 .. 255
    Description: default velocity if speed limit is not in range of interest */
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

/**************************************************************************************************\
    DATASET_CONSTANT: mergeable calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
extern const volatile uint8 USS_DSE_c_CpStgWhlCtctLght; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1
    Description: constant light contact of the capacitve steering wheel */
extern const volatile uint8 USS_DSE_c_CpStgWhlCtctStng; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: constant strong contact of the capacitive steering wheel */
extern const volatile uint8 USS_DSE_c_CpStgWhlGripLght; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: constant light grip of the capacitive steering wheel */
extern const volatile uint8 USS_DSE_c_CpStgWhlGripStng; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 4 .. 4
    Description: constant strong grip of the capacitive steering wheel */
extern const volatile uint8 USS_DSE_c_StACAAcv; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: status ACA active */
extern const volatile uint8 USS_DSE_c_StACCAcv; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: status ACC active */
extern const volatile uint8 USS_DSE_c_StBrkAcv; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: status driver braking confirmed */
extern const volatile uint8 USS_DSE_c_StESCOffBtnPush; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1
    Description: status for ESC button pushed */
extern const volatile uint8 USS_DSE_c_StFpmGraAcv; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: status FPM GRA active (value maintain speed) */
extern const volatile uint8 USS_DSE_c_StGearShiftRgn; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: constant recuperation level B */
extern const volatile uint8 USS_DSE_c_StGearShiftSMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 13 .. 13
    Description: constant gear shift S mode */
extern const volatile uint8 USS_DSE_c_StGearShiftTipMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 14 .. 14
    Description: constant gear shift tip mode */
extern const volatile uint8 USS_DSE_c_StGearShiftTipMinus; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 11 .. 11
    Description: constant gear shift tip minus */
extern const volatile uint8 USS_DSE_c_StGearShiftTipPlus; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 10 .. 10
    Description: constant gear shift tip plus */
extern const volatile uint8 USS_DSE_c_StGraAcv; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 0
    Description: status ACC turned off */
extern const volatile uint8 USS_DSE_c_StKckDwn; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: constant kick down active */
extern const volatile uint8 USS_DSE_c_StNotRgn; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 0
    Description: constant no recuperation level */
extern const volatile uint8 USS_DSE_c_VMMStBrkPedDmnt; /* 
    Unit: Nm
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1
    Description: driver braking dominant */
extern const volatile uint8 USS_DSE_c_ValDlyShiftDwn; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 250
    Description: delay steps for shift down event */
extern const volatile uint8 USS_DSE_c_ValDlyVxObj; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 250
    Description: delay steps for velocity difference to leading vehicle */
extern const volatile uint8 USS_DSF_c_StDrvTypCom; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: status driver type comfortable */
extern const volatile uint8 USS_DSF_c_StDrvTypDyn; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: status driver type dynamic */
extern const volatile uint8 USS_DSF_c_StDrvTypEff; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 4 .. 4
    Description: status driver type efficient */
extern const volatile uint8 USS_DSF_c_StDrvTypUnkn; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 0
    Description: status driver type unknown */
extern const volatile uint8 USS_GC_c_StDrvSysEl; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 5 .. 5
    Description: status value for electric drive system */
extern const volatile uint8 USS_GC_c_StDrvSysIHev; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: status value for drive system I-HEV */
extern const volatile uint8 USS_GC_c_StDrvSysPHev; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 4 .. 4
    Description: status value for drive system P-HEV */
extern const volatile uint8 USS_HOD_c_HodNotCod; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 12 .. 12
    Description: Not Coded Value */
extern const volatile uint8 USS_LAD_c_CntrStgHiAcv; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 3
    Description: high counter steering detected */
extern const volatile uint8 USS_LAD_c_CntrStgLowAcv; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 3
    Description: low counter steering detected */
extern const volatile uint8 USS_LAD_c_CntrStgNoAcv; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 3
    Description: no counter steering detected */
extern const volatile uint8 USS_LAD_c_VMMLatGuideNoReq; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 0
    Description: VMM LatGuide No Request Value */
extern const volatile uint8 USS_POP_c_EPSStStgTq_ErrVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error value for stiring torque EPS status */
extern const volatile uint8 USS_POP_c_StgHODBased; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: Steering based only on hands on detection */
extern const volatile uint8 USS_POP_c_StgHODTqBased; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1
    Description: Steering based hands on and torque detection */
extern const volatile uint8 USS_POP_c_StgTqBased; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 0
    Description: Steering based only on torque detection */
extern const volatile uint8 USS_SOH_c_CntrStgDetErrVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_CntrStgDet */
extern const volatile uint8 USS_SOH_c_CntrStgDetIniVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_CntrStgDet */
extern const volatile uint8 USS_SOH_c_DriverTypeErrVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_StDrvTyp */
extern const volatile uint8 USS_SOH_c_DriverTypeIniVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_StDrvTyp */
extern const volatile uint8 USS_SOH_c_DriverTypeLngTrmErrVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_StDrvTypLngTrm */
extern const volatile uint8 USS_SOH_c_DriverTypeLngTrmIniVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_StDrvTypLngTrm */
extern const volatile uint8 USS_SOH_c_LatHodIntrpErrVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 15 .. 15
    Description: Error Value of SOUT_s_LatHodIntrp */
extern const volatile uint8 USS_SOH_c_LatHodIntrpIntVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 14 .. 14
    Description: Init Value of SOUT_s_LatHodIntrp */
extern const volatile uint8 USS_SOH_c_LatStgAcvErrVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_LatStgAcv */
extern const volatile uint8 USS_SOH_c_LatStgAcvIntVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_LatStgAcv */
extern const volatile uint8 USS_SOH_c_StLatStgAcvErrVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_USS_StDALatSteeringActivity */
extern const volatile uint8 USS_SOH_c_StLatStgAcvIniVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_USS_StDALatSteeringActivity */
extern const volatile uint8 USS_SOH_c_StatusDriverLateralActivityErrVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_StatusDriverLateralActivity */
extern const volatile uint8 USS_SOH_c_StatusDriverLateralActivityIniVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_StatusDriverLateralActivity */
extern const volatile uint8 USS_SOH_c_StatusDriverTypeErrVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: Error Value of SOUT_s_StatusDriverType */
extern const volatile uint8 USS_SOH_c_StatusDriverTypeIniVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: Init Value of SOUT_s_StatusDriverType */
extern const volatile uint8 USS_SOH_c_StatusDriverTypeStandardVal; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1
    Description: Standard Value of SOUT_s_StatusDriverType */

/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
extern const uint8 USSDB_DS_NAME[12]; /* Description: HCP1 DS Name : 140000000000 */
extern const uint8 USSDB_DS_VERSION[4]; /* Description: HCP1 DS Version : ACA2 */
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
extern const uint8 USS_GC_p_ODStObjClasIni; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: init value for object class */
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
extern const uint8 USS_IP_p1_FacLatAHiCom[3]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor lateral acceleration comfortable */
extern const uint8 USS_IP_p1_FacLatAHiDyn[3]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor lateral acceleration dynamic */
extern const uint8 USS_IP_p1_FacVFast[3]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor velocity fast */
extern const uint8 USS_IP_p_FacBrkFrqHi; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor brake frequency high */
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
extern const uint8 USS_IP_p_FacLatCtlAcvCom; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor lateral control active comfortable */
extern const uint8 USS_IP_p_FacLatCtlAcvEff; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor lateral control active efficiency */
extern const uint8 USS_IP_p_FacLgtCtlAcvCom; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor longitudinal control active comfortable */
extern const uint8 USS_IP_p_FacLgtCtlAcvEff; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor longitudinal control active efficiency */
extern const uint8 USS_IP_p_FacPEAAcv; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor PEA message */
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
extern const uint8 USS_IP_p_FacStgFrqHi; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor steering frequency high */
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
extern const uint8 USS_SIH_p_BitFldMonLDA; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
extern const uint8 USS_p_SrvEgoInfoComplexEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for  complex event group service subscription */
extern const uint8 USS_p_SrvEgoInfoEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for ego info event group service subscription */
extern const uint8 USS_p_SrvObjDet_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: parameter for service subscription */
extern const uint8 USS_p_SrvObjEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for object detection group service subscription */
extern const uint8 USS_p_SrvPrvwInfoEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for preview info group service subscription */
extern const uint8 USS_p_SrvRoadAttr_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for Road attributes service subscription */
extern const uint8 USS_p_SrvSysInfoEveGrp_StSetMd; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for system info event group service subscription */
extern const uint8 USS_p_StiDestSt; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 26
    Description: stimulation value for DestSt */

/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
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
# 72 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c" 2

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
    DATASET_CONSTANT: mergeable calibratable parameters (ROM) | Width: 16
\**************************************************************************************************/
const volatile uint16 USS_DSE_c_ValDlyVLimChg = 300; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1000
    Description: delay steps for velocity limitation change */
const volatile uint16 USS_HOD_c_LatHodNoCntctTiUpprLim = 507; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 507 .. 507
    Description: Upper Limit of SOUT_s_USS_DALatHODNoContactTime_s */
const volatile uint16 USS_LAD_c_LatInAcvTiUpprLim = 508; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 508 .. 508
    Description: Upper Limit of USS_LAD_s_LatInAcvTi_s */

/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 16
\**************************************************************************************************/
const uint16 USS_DSE_p_ValDlyDLrg = 500; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1500
    Description: delay steps for large trailing distance event */
const uint16 USS_IP_p1_ThVDSOV_kmph[3] =
{
    /* [0..2] */ 0, 50, 120
    /* 0., 50., 120. */
}; /* 
    Unit: km/h
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 460
    Description: threshold VDSO velocity */
const uint16 USS_SIH_p_BitFldEnaDTC = 4095; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Bitfield for enabling DTC triggering */
# 134 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c"
/**************************************************************************************************\
    DATASET_CONSTANT: mergeable calibratable parameters (ROM) | Width: 32
\**************************************************************************************************/
const volatile float32 USS_GC_c_FacMpsTransKmph = 3.5999999046325684F; /* 
    Unit: -
    MIN/MAX: 3.59999990463257 .. 3.59999990463257
    Description: factor to transfer mps into kmh */
const volatile float32 USS_GC_c_FacRadTransDeg = 57.295799255371094F; /* 
    Unit: -
    MIN/MAX: 57.2957992553711 .. 57.2957992553711
    Description: factor to transfer radian into degrees */
const volatile float32 USS_SIH_c_StdIniTi_s = 1.5F; /* 
    Unit: s
    MIN/MAX: 0 .. 2
    Description: constand for standart init timeout */
const volatile float32 USS_SIH_c_TiDebSrv_s = 1.5F; /* 
    Unit: s
    MIN/MAX: 0 .. 2
    Description: debounce time for service communication error evaluation */
const volatile float32 USS_c_Cnst0F32 = 0.F; /* 
    Unit: -
    MIN/MAX: 0 .. 0
    Description: constant for zero with data type float32 */
const volatile float32 USS_c_Cnst100Prct_p100 = 100.F; /* 
    Unit: %
    MIN/MAX: 100 .. 100
    Description: constant for 100 percent */
const volatile float32 USS_c_CnstCoolDwn_sptk = -0.0010000000474974513F; /* 
    Unit: -
    MIN/MAX: -0.00100000004749745 .. -0.00100000004749745
    Description: constant cool down value for index processing */
const volatile float32 USS_c_FrqSmpl = 50.F; /* 
    Unit: 1/s
    MIN/MAX: 49.9000015258789 .. 50.0099983215332
    Description: cycle time inverse */
const volatile float32 USS_c_TiSmpl_s = 0.019999999552965164F; /* 
    Unit: s
    MIN/MAX: 0.0198999997228384 .. 0.0209999997168779
    Description: cycle time USS */
const volatile float32 USS_c_ValDivLim = 9.9999999747524271e-07F; /* 
    Unit: -
    MIN/MAX: 9.99999971718069e-10 .. 0.00999999977648258
    Description: constant for divisor limit (for use in ProtectedDivision blocks) */

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
const float32 USS_COM_p_FacOnePedalMode = 5.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
const float32 USS_COM_p_FacStgFrqLo = 20.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor steering frequency low */
const float32 USS_DSE_p_ACAVxObj01_kmph = 3.F; /* 
    Unit: km/h
    MIN/MAX: 0 .. 190
    Description: threshold relative velocity of LRR */
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
const float32 USS_DSE_p_LWinAvgVUniform = 500.F; /* 
    Unit: -
    MIN/MAX: 1 .. 5000
    Description: window length for moving average of velocity */
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
const float32 USS_DSE_p_ThRoadCrvt_1pm = 0.033300001174211502F; /* 
    Unit: 1/m
    MIN/MAX: 0 .. 1000
    Description: threshold roadway curvature */
const float32 USS_DSE_p_ThStgAg_deg = 30.F; /* 
    Unit: deg
    MIN/MAX: -819 .. 819.380004882813
    Description: threshold steering angle */
const float32 USS_DSE_p_ThVDSOLatA_mps2 = 2.5F; /* 
    Unit: m/s^2
    MIN/MAX: -163.839996337891 .. 163.839996337891
    Description: threshold VDSO lateral acceleration */
const float32 USS_DSE_p_ThVDSOLgtA_mps2 = 5.F; /* 
    Unit: m/s^2
    MIN/MAX: -163.830001831055 .. 163.830001831055
    Description: threshold VDSO longitudinal acceleration */
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
const float32 USS_DSE_p_VMMBrkPedDmd = 0.69999998807907104F; /* 
    Unit: -
    MIN/MAX: 0 .. 3
    Description: threshold braking driver dominant */
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
const float32 USS_DYN_p_FacAccrPedHi = 15.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor accelerator pedal high */
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
const float32 USS_EFF_p_FacLgtAHi = 5.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor longitudinal acceleration high */
const float32 USS_EFF_p_FacOnePedalMode = 5.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor one pedal mode */
const float32 USS_EFF_p_FacVSlow = 20.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor velocity slow */
const float32 USS_EFF_p_FacVUniform = 10.F; /* 
    Unit: -
    MIN/MAX: 0 .. 100
    Description: factor velocity uniform */
const float32 USS_GC_p_EPSStgTqLoPs_1ps = 1.F; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 100
    Description: cut off frequency for 
    low pass filter steering torque */
const float32 USS_GC_p_PredVLimDft = 130.F; /* 
    Unit: km/h
    MIN/MAX: 0 .. 255
    Description: default velocity if speed limit is not in range of interest */
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
const float32 USS_LAD_p1_FacStgAcvAdp[8] =
{
    /* [0..7] */ 0.5F, 0.60000002384185791F, 0.69999998807907104F, 0.89999997615814209F, 1.F, 1.F,
     1.F, 1.F
    /* 0.5F, 0.60000002384185791F, 0.69999998807907104F, 0.89999997615814209F, 1.F, 1.F, 1.F, 1.F */
}; /* 
    Unit: km/h
    MIN/MAX: 0 .. 2
    Description: factor array for velocity-adaptive steering activity */
const float32 USS_LAD_p1_ThLatStgAcvTq[5] =
{
    /* [0..4] */ 0.F, 1.F, 3.F, 3.9900000095367432F, 4.F
    /* 0.F, 1.F, 3.F, 3.9900000095367432F, 4.F */
}; /* 
    Unit: -
    MIN/MAX: 0 .. 10
    Description: Thresholds for lateral steering activity torque based */
const float32 USS_LAD_p1_ThLatStgAcvTqV[5] =
{
    /* [0..4] */ 0.F, 1.5F, 2.F, 2.5F, 3.F
    /* 0.F, 1.5F, 2.F, 2.5F, 3.F */
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
const float32 USS_LAD_p_HiThEPSTqV = 3.F; /* 
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
const float32 USS_LAD_p_LoThEPSTqV = 1.2000000476837158F; /* 
    Unit: Nm/s
    MIN/MAX: 0.00999999977648258 .. 20
    Description: Lower torque velocity threshold for driver activity */
const float32 USS_LAD_px_VThStgAcv[8] =
{
    /* [0..7] */ 0.F, 10.F, 20.F, 30.F, 40.F, 50.F, 60.F, 70.F
    /* 0.F, 10.F, 20.F, 30.F, 40.F, 50.F, 60.F, 70.F */
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
# 548 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c"
/**************************************************************************************************\
    DATASET_CONSTANT: mergeable calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
const volatile uint8 USS_DSE_c_CpStgWhlCtctLght = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1
    Description: constant light contact of the capacitve steering wheel */
const volatile uint8 USS_DSE_c_CpStgWhlCtctStng = 2; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: constant strong contact of the capacitive steering wheel */
const volatile uint8 USS_DSE_c_CpStgWhlGripLght = 3; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: constant light grip of the capacitive steering wheel */
const volatile uint8 USS_DSE_c_CpStgWhlGripStng = 4; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 4 .. 4
    Description: constant strong grip of the capacitive steering wheel */
const volatile uint8 USS_DSE_c_StACAAcv = 3; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: status ACA active */
const volatile uint8 USS_DSE_c_StACCAcv = 3; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: status ACC active */
const volatile uint8 USS_DSE_c_StBrkAcv = 2; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: status driver braking confirmed */
const volatile uint8 USS_DSE_c_StESCOffBtnPush = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1
    Description: status for ESC button pushed */
const volatile uint8 USS_DSE_c_StFpmGraAcv = 2; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: status FPM GRA active (value maintain speed) */
const volatile uint8 USS_DSE_c_StGearShiftRgn = 3; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: constant recuperation level B */
const volatile uint8 USS_DSE_c_StGearShiftSMd = 13; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 13 .. 13
    Description: constant gear shift S mode */
const volatile uint8 USS_DSE_c_StGearShiftTipMd = 14; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 14 .. 14
    Description: constant gear shift tip mode */
const volatile uint8 USS_DSE_c_StGearShiftTipMinus = 11; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 11 .. 11
    Description: constant gear shift tip minus */
const volatile uint8 USS_DSE_c_StGearShiftTipPlus = 10; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 10 .. 10
    Description: constant gear shift tip plus */
const volatile uint8 USS_DSE_c_StGraAcv = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 0
    Description: status ACC turned off */
const volatile uint8 USS_DSE_c_StKckDwn = 2; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: constant kick down active */
const volatile uint8 USS_DSE_c_StNotRgn = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 0
    Description: constant no recuperation level */
const volatile uint8 USS_DSE_c_VMMStBrkPedDmnt = 1; /* 
    Unit: Nm
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1
    Description: driver braking dominant */
const volatile uint8 USS_DSE_c_ValDlyShiftDwn = 150; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 250
    Description: delay steps for shift down event */
const volatile uint8 USS_DSE_c_ValDlyVxObj = 150; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 250
    Description: delay steps for velocity difference to leading vehicle */
const volatile uint8 USS_DSF_c_StDrvTypCom = 3; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: status driver type comfortable */
const volatile uint8 USS_DSF_c_StDrvTypDyn = 2; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: status driver type dynamic */
const volatile uint8 USS_DSF_c_StDrvTypEff = 4; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 4 .. 4
    Description: status driver type efficient */
const volatile uint8 USS_DSF_c_StDrvTypUnkn = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 0
    Description: status driver type unknown */
const volatile uint8 USS_GC_c_StDrvSysEl = 5; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 5 .. 5
    Description: status value for electric drive system */
const volatile uint8 USS_GC_c_StDrvSysIHev = 3; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: status value for drive system I-HEV */
const volatile uint8 USS_GC_c_StDrvSysPHev = 4; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 4 .. 4
    Description: status value for drive system P-HEV */
const volatile uint8 USS_HOD_c_HodNotCod = 12; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 12 .. 12
    Description: Not Coded Value */
const volatile uint8 USS_LAD_c_CntrStgHiAcv = 2; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 3
    Description: high counter steering detected */
const volatile uint8 USS_LAD_c_CntrStgLowAcv = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 3
    Description: low counter steering detected */
const volatile uint8 USS_LAD_c_CntrStgNoAcv = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 3
    Description: no counter steering detected */
const volatile uint8 USS_LAD_c_VMMLatGuideNoReq = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 0
    Description: VMM LatGuide No Request Value */
const volatile uint8 USS_POP_c_EPSStStgTq_ErrVal = 7; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error value for stiring torque EPS status */
const volatile uint8 USS_POP_c_StgHODBased = 2; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: Steering based only on hands on detection */
const volatile uint8 USS_POP_c_StgHODTqBased = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1
    Description: Steering based hands on and torque detection */
const volatile uint8 USS_POP_c_StgTqBased = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 0
    Description: Steering based only on torque detection */
const volatile uint8 USS_SOH_c_CntrStgDetErrVal = 7; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_CntrStgDet */
const volatile uint8 USS_SOH_c_CntrStgDetIniVal = 6; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_CntrStgDet */
const volatile uint8 USS_SOH_c_DriverTypeErrVal = 7; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_StDrvTyp */
const volatile uint8 USS_SOH_c_DriverTypeIniVal = 6; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_StDrvTyp */
const volatile uint8 USS_SOH_c_DriverTypeLngTrmErrVal = 7; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_StDrvTypLngTrm */
const volatile uint8 USS_SOH_c_DriverTypeLngTrmIniVal = 6; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_StDrvTypLngTrm */
const volatile uint8 USS_SOH_c_LatHodIntrpErrVal = 15; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 15 .. 15
    Description: Error Value of SOUT_s_LatHodIntrp */
const volatile uint8 USS_SOH_c_LatHodIntrpIntVal = 14; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 14 .. 14
    Description: Init Value of SOUT_s_LatHodIntrp */
const volatile uint8 USS_SOH_c_LatStgAcvErrVal = 7; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_LatStgAcv */
const volatile uint8 USS_SOH_c_LatStgAcvIntVal = 6; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_LatStgAcv */
const volatile uint8 USS_SOH_c_StLatStgAcvErrVal = 7; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_USS_StDALatSteeringActivity */
const volatile uint8 USS_SOH_c_StLatStgAcvIniVal = 6; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_USS_StDALatSteeringActivity */
const volatile uint8 USS_SOH_c_StatusDriverLateralActivityErrVal = 7; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 7 .. 7
    Description: Error Value of SOUT_s_StatusDriverLateralActivity */
const volatile uint8 USS_SOH_c_StatusDriverLateralActivityIniVal = 6; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 6 .. 6
    Description: Init Value of SOUT_s_StatusDriverLateralActivity */
const volatile uint8 USS_SOH_c_StatusDriverTypeErrVal = 3; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 3 .. 3
    Description: Error Value of SOUT_s_StatusDriverType */
const volatile uint8 USS_SOH_c_StatusDriverTypeIniVal = 2; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 2 .. 2
    Description: Init Value of SOUT_s_StatusDriverType */
const volatile uint8 USS_SOH_c_StatusDriverTypeStandardVal = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 1 .. 1
    Description: Standard Value of SOUT_s_StatusDriverType */

/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
const uint8 USSDB_DS_NAME[12] =
{
    /* [0..9] */ 49, 52, 48, 48, 48, 48, 48, 48, 48, 48,
    /* [10..11] */ 48, 48
    /* 49., 52., 48., 48., 48., 48., 48., 48., 48., 48., 
    48., 48. */
}; /* Description: HCP1 DS Name : 140000000000 */
const uint8 USSDB_DS_VERSION[4] =
{
    /* [0..3] */ 65, 67, 65, 50
    /* 65., 67., 65., 50. */
}; /* Description: HCP1 DS Version : ACA2 */
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
const uint8 USS_GC_p_ODStObjClasIni = 6; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: init value for object class */
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
const uint8 USS_IP_p1_FacLatAHiCom[3] =
{
    /* [0..2] */ 5, 10, 20
    /* 5., 10., 20. */
}; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor lateral acceleration comfortable */
const uint8 USS_IP_p1_FacLatAHiDyn[3] =
{
    /* [0..2] */ 10, 20, 30
    /* 10., 20., 30. */
}; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor lateral acceleration dynamic */
const uint8 USS_IP_p1_FacVFast[3] =
{
    /* [0..2] */ 15, 50, 100
    /* 15., 50., 100. */
}; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor velocity fast */
const uint8 USS_IP_p_FacBrkFrqHi = 10; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor brake frequency high */
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
const uint8 USS_IP_p_FacLatCtlAcvCom = 30; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor lateral control active comfortable */
const uint8 USS_IP_p_FacLatCtlAcvEff = 10; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor lateral control active efficiency */
const uint8 USS_IP_p_FacLgtCtlAcvCom = 30; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor longitudinal control active comfortable */
const uint8 USS_IP_p_FacLgtCtlAcvEff = 10; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor longitudinal control active efficiency */
const uint8 USS_IP_p_FacPEAAcv = 30; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor PEA message */
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
const uint8 USS_IP_p_FacStgFrqHi = 10; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 100
    Description: factor steering frequency high */
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
const uint8 USS_SIH_p_BitFldMonACA = 247; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
const uint8 USS_SIH_p_BitFldMonACC = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
const uint8 USS_SIH_p_BitFldMonFPM = 247; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
const uint8 USS_SIH_p_BitFldMonLDA = 247; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Bitfield for classifier monitoring */
const uint8 USS_p_SrvEgoInfoComplexEveGrp_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for  complex event group service subscription */
const uint8 USS_p_SrvEgoInfoEveGrp_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for ego info event group service subscription */
const uint8 USS_p_SrvObjDet_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: parameter for service subscription */
const uint8 USS_p_SrvObjEveGrp_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for object detection group service subscription */
const uint8 USS_p_SrvPrvwInfoEveGrp_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for preview info group service subscription */
const uint8 USS_p_SrvRoadAttr_StSetMd = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for Road attributes service subscription */
const uint8 USS_p_SrvSysInfoEveGrp_StSetMd = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Set mode parameter for system info event group service subscription */
const uint8 USS_p_StiDestSt = 20; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 26
    Description: stimulation value for DestSt */
# 1012 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src/USS_Param.c"
/**************************************************************************************************\
    GLOBAL_PARAM: mergeable calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
const boolean USS_SIH_p_FlgAcvSigMon = 1; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: Manipulation to activate/deactivate signal monitoring */
const boolean USS_SIH_p_FlgAcvSigMonSrv = 1; /* 
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
