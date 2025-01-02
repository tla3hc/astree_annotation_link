# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 10 "<built-in>"




# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.c" 2
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_SIH
 *** TargetLink subsystem : USS_SIH/FrameSIH/Subsystem/FrameSIH/SignalInputHandlerSIH
 *** Codefile             : USS_SIH.c
 ***
 *** Generation date: 2024-08-22 20:27:26
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
 *** Style definition file                    : C:\JenkinsTemp\ProdServer\SWC_USS\01_PROD\30_CG\CG_U
 ***                                            SS_SIH\20_IMPL\CgTools\Common_C_Tools\Platform_TlCon
 ***                                            fig\cconfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLink 4.3\Matlab\Tl\XML
 ***                                            \CodeGen\Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** SUBSYS         CORRESPONDING SIMULINK SUBSYSTEM
 *** SUSS_SIH1      SignalInputHandlerSIH
 *** SUSS_SIH2      SignalInputHandlerSIH/DTCDiagnosis
 *** SUSS_SIH3      SignalInputHandlerSIH/MultiMeasure1
 *** SUSS_SIH4      SignalInputHandlerSIH/MultiMeasure10
 *** SUSS_SIH5      SignalInputHandlerSIH/MultiMeasure11
 *** SUSS_SIH6      SignalInputHandlerSIH/MultiMeasure12
 *** SUSS_SIH7      SignalInputHandlerSIH/MultiMeasure13
 *** SUSS_SIH8      SignalInputHandlerSIH/MultiMeasure14
 *** SUSS_SIH9      SignalInputHandlerSIH/MultiMeasure15
 *** SUSS_SIH10     SignalInputHandlerSIH/MultiMeasure16
 *** SUSS_SIH11     SignalInputHandlerSIH/MultiMeasure17
 *** SUSS_SIH12     SignalInputHandlerSIH/MultiMeasure18
 *** SUSS_SIH13     SignalInputHandlerSIH/MultiMeasure19
 *** SUSS_SIH14     SignalInputHandlerSIH/MultiMeasure2
 *** SUSS_SIH15     SignalInputHandlerSIH/MultiMeasure20
 *** SUSS_SIH16     SignalInputHandlerSIH/MultiMeasure21
 *** SUSS_SIH17     SignalInputHandlerSIH/MultiMeasure22
 *** SUSS_SIH18     SignalInputHandlerSIH/MultiMeasure23
 *** SUSS_SIH19     SignalInputHandlerSIH/MultiMeasure24
 *** SUSS_SIH20     SignalInputHandlerSIH/MultiMeasure25
 *** SUSS_SIH21     SignalInputHandlerSIH/MultiMeasure26
 *** SUSS_SIH22     SignalInputHandlerSIH/MultiMeasure27
 *** SUSS_SIH23     SignalInputHandlerSIH/MultiMeasure28
 *** SUSS_SIH24     SignalInputHandlerSIH/MultiMeasure29
 *** SUSS_SIH25     SignalInputHandlerSIH/MultiMeasure3
 *** SUSS_SIH26     SignalInputHandlerSIH/MultiMeasure30
 *** SUSS_SIH27     SignalInputHandlerSIH/MultiMeasure31
 *** SUSS_SIH28     SignalInputHandlerSIH/MultiMeasure32
 *** SUSS_SIH29     SignalInputHandlerSIH/MultiMeasure33
 *** SUSS_SIH30     SignalInputHandlerSIH/MultiMeasure34
 *** SUSS_SIH31     SignalInputHandlerSIH/MultiMeasure35
 *** SUSS_SIH32     SignalInputHandlerSIH/MultiMeasure36
 *** SUSS_SIH33     SignalInputHandlerSIH/MultiMeasure37
 *** SUSS_SIH34     SignalInputHandlerSIH/MultiMeasure38
 *** SUSS_SIH35     SignalInputHandlerSIH/MultiMeasure39
 *** SUSS_SIH36     SignalInputHandlerSIH/MultiMeasure4
 *** SUSS_SIH37     SignalInputHandlerSIH/MultiMeasure40
 *** SUSS_SIH38     SignalInputHandlerSIH/MultiMeasure41
 *** SUSS_SIH39     SignalInputHandlerSIH/MultiMeasure42
 *** SUSS_SIH40     SignalInputHandlerSIH/MultiMeasure43
 *** SUSS_SIH41     SignalInputHandlerSIH/MultiMeasure44
 *** SUSS_SIH42     SignalInputHandlerSIH/MultiMeasure45
 *** SUSS_SIH43     SignalInputHandlerSIH/MultiMeasure46
 *** SUSS_SIH44     SignalInputHandlerSIH/MultiMeasure47
 *** SUSS_SIH45     SignalInputHandlerSIH/MultiMeasure48
 *** SUSS_SIH46     SignalInputHandlerSIH/MultiMeasure49
 *** SUSS_SIH47     SignalInputHandlerSIH/MultiMeasure5
 *** SUSS_SIH48     SignalInputHandlerSIH/MultiMeasure50
 *** SUSS_SIH49     SignalInputHandlerSIH/MultiMeasure51
 *** SUSS_SIH50     SignalInputHandlerSIH/MultiMeasure52
 *** SUSS_SIH51     SignalInputHandlerSIH/MultiMeasure53
 *** SUSS_SIH52     SignalInputHandlerSIH/MultiMeasure54
 *** SUSS_SIH53     SignalInputHandlerSIH/MultiMeasure55
 *** SUSS_SIH54     SignalInputHandlerSIH/MultiMeasure56
 *** SUSS_SIH55     SignalInputHandlerSIH/MultiMeasure57
 *** SUSS_SIH56     SignalInputHandlerSIH/MultiMeasure58
 *** SUSS_SIH57     SignalInputHandlerSIH/MultiMeasure59
 *** SUSS_SIH58     SignalInputHandlerSIH/MultiMeasure6
 *** SUSS_SIH59     SignalInputHandlerSIH/MultiMeasure60
 *** SUSS_SIH60     SignalInputHandlerSIH/MultiMeasure61
 *** SUSS_SIH61     SignalInputHandlerSIH/MultiMeasure62
 *** SUSS_SIH62     SignalInputHandlerSIH/MultiMeasure63
 *** SUSS_SIH63     SignalInputHandlerSIH/MultiMeasure64
 *** SUSS_SIH64     SignalInputHandlerSIH/MultiMeasure65
 *** SUSS_SIH65     SignalInputHandlerSIH/MultiMeasure66
 *** SUSS_SIH66     SignalInputHandlerSIH/MultiMeasure67
 *** SUSS_SIH67     SignalInputHandlerSIH/MultiMeasure7
 *** SUSS_SIH68     SignalInputHandlerSIH/MultiMeasure74
 *** SUSS_SIH69     SignalInputHandlerSIH/MultiMeasure76
 *** SUSS_SIH70     SignalInputHandlerSIH/MultiMeasure77
 *** SUSS_SIH71     SignalInputHandlerSIH/MultiMeasure78
 *** SUSS_SIH72     SignalInputHandlerSIH/MultiMeasure79
 *** SUSS_SIH73     SignalInputHandlerSIH/MultiMeasure8
 *** SUSS_SIH74     SignalInputHandlerSIH/MultiMeasure80
 *** SUSS_SIH75     SignalInputHandlerSIH/MultiMeasure9
 *** SUSS_SIH76     SignalInputHandlerSIH/Pre_SIH
 *** SUSS_SIH77     SignalInputHandlerSIH/SignalProcessing
 *** SUSS_SIH78     SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement
 *** SUSS_SIH79     SignalInputHandlerSIH/DTCDiagnosis/EdgeDetectionRising
 *** SUSS_SIH80     SignalInputHandlerSIH/DTCDiagnosis/MonitoringActivation
 *** SUSS_SIH81     SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure
 *** SUSS_SIH82     SignalInputHandlerSIH/DTCDiagnosis/ReqBlock
 *** SUSS_SIH83     SignalInputHandlerSIH/DTCDiagnosis/ReqBlock1
 *** SUSS_SIH84     SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/ReqBlock2
 *** SUSS_SIH85     SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/TestBit
 *** SUSS_SIH86     SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/TestBit1
 *** SUSS_SIH87     SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/TestBit2
 *** SUSS_SIH88     SignalInputHandlerSIH/DTCDiagnosis/EdgeDetectionRising/EdgeDetectionRising
 *** SUSS_SIH89     SignalInputHandlerSIH/DTCDiagnosis/EdgeDetectionRising/EdgeDetectionRising/DocBl
 ***                ock
 *** SUSS_SIH90     SignalInputHandlerSIH/DTCDiagnosis/EdgeDetectionRising/EdgeDetectionRising/DocBl
 ***                ock/EmptySubsystem
 *** SUSS_SIH91     SignalInputHandlerSIH/DTCDiagnosis/MonitoringActivation/ReqBlock
 *** SUSS_SIH92     SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/MeasSubsys
 *** SUSS_SIH93     SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/MeasSubsys/ToWorkspaceMeasuremen
 ***                t
 *** SUSS_SIH94     SignalInputHandlerSIH/MultiMeasure1/MeasSubsys
 *** SUSS_SIH95     SignalInputHandlerSIH/MultiMeasure1/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH96     SignalInputHandlerSIH/MultiMeasure10/MeasSubsys
 *** SUSS_SIH97     SignalInputHandlerSIH/MultiMeasure10/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH98     SignalInputHandlerSIH/MultiMeasure11/MeasSubsys
 *** SUSS_SIH99     SignalInputHandlerSIH/MultiMeasure11/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH100    SignalInputHandlerSIH/MultiMeasure12/MeasSubsys
 *** SUSS_SIH101    SignalInputHandlerSIH/MultiMeasure12/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH102    SignalInputHandlerSIH/MultiMeasure13/MeasSubsys
 *** SUSS_SIH103    SignalInputHandlerSIH/MultiMeasure13/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH104    SignalInputHandlerSIH/MultiMeasure14/MeasSubsys
 *** SUSS_SIH105    SignalInputHandlerSIH/MultiMeasure14/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH106    SignalInputHandlerSIH/MultiMeasure15/MeasSubsys
 *** SUSS_SIH107    SignalInputHandlerSIH/MultiMeasure15/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH108    SignalInputHandlerSIH/MultiMeasure16/MeasSubsys
 *** SUSS_SIH109    SignalInputHandlerSIH/MultiMeasure16/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH110    SignalInputHandlerSIH/MultiMeasure17/MeasSubsys
 *** SUSS_SIH111    SignalInputHandlerSIH/MultiMeasure17/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH112    SignalInputHandlerSIH/MultiMeasure18/MeasSubsys
 *** SUSS_SIH113    SignalInputHandlerSIH/MultiMeasure18/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH114    SignalInputHandlerSIH/MultiMeasure19/MeasSubsys
 *** SUSS_SIH115    SignalInputHandlerSIH/MultiMeasure19/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH116    SignalInputHandlerSIH/MultiMeasure2/MeasSubsys
 *** SUSS_SIH117    SignalInputHandlerSIH/MultiMeasure2/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH118    SignalInputHandlerSIH/MultiMeasure20/MeasSubsys
 *** SUSS_SIH119    SignalInputHandlerSIH/MultiMeasure20/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH120    SignalInputHandlerSIH/MultiMeasure21/MeasSubsys
 *** SUSS_SIH121    SignalInputHandlerSIH/MultiMeasure21/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH122    SignalInputHandlerSIH/MultiMeasure22/MeasSubsys
 *** SUSS_SIH123    SignalInputHandlerSIH/MultiMeasure22/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH124    SignalInputHandlerSIH/MultiMeasure23/MeasSubsys
 *** SUSS_SIH125    SignalInputHandlerSIH/MultiMeasure23/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH126    SignalInputHandlerSIH/MultiMeasure24/MeasSubsys
 *** SUSS_SIH127    SignalInputHandlerSIH/MultiMeasure24/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH128    SignalInputHandlerSIH/MultiMeasure25/MeasSubsys
 *** SUSS_SIH129    SignalInputHandlerSIH/MultiMeasure25/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH130    SignalInputHandlerSIH/MultiMeasure26/MeasSubsys
 *** SUSS_SIH131    SignalInputHandlerSIH/MultiMeasure26/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH132    SignalInputHandlerSIH/MultiMeasure27/MeasSubsys
 *** SUSS_SIH133    SignalInputHandlerSIH/MultiMeasure27/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH134    SignalInputHandlerSIH/MultiMeasure28/MeasSubsys
 *** SUSS_SIH135    SignalInputHandlerSIH/MultiMeasure28/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH136    SignalInputHandlerSIH/MultiMeasure29/MeasSubsys
 *** SUSS_SIH137    SignalInputHandlerSIH/MultiMeasure29/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH138    SignalInputHandlerSIH/MultiMeasure3/MeasSubsys
 *** SUSS_SIH139    SignalInputHandlerSIH/MultiMeasure3/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH140    SignalInputHandlerSIH/MultiMeasure30/MeasSubsys
 *** SUSS_SIH141    SignalInputHandlerSIH/MultiMeasure30/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH142    SignalInputHandlerSIH/MultiMeasure31/MeasSubsys
 *** SUSS_SIH143    SignalInputHandlerSIH/MultiMeasure31/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH144    SignalInputHandlerSIH/MultiMeasure32/MeasSubsys
 *** SUSS_SIH145    SignalInputHandlerSIH/MultiMeasure32/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH146    SignalInputHandlerSIH/MultiMeasure33/MeasSubsys
 *** SUSS_SIH147    SignalInputHandlerSIH/MultiMeasure33/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH148    SignalInputHandlerSIH/MultiMeasure34/MeasSubsys
 *** SUSS_SIH149    SignalInputHandlerSIH/MultiMeasure34/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH150    SignalInputHandlerSIH/MultiMeasure35/MeasSubsys
 *** SUSS_SIH151    SignalInputHandlerSIH/MultiMeasure35/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH152    SignalInputHandlerSIH/MultiMeasure36/MeasSubsys
 *** SUSS_SIH153    SignalInputHandlerSIH/MultiMeasure36/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH154    SignalInputHandlerSIH/MultiMeasure37/MeasSubsys
 *** SUSS_SIH155    SignalInputHandlerSIH/MultiMeasure37/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH156    SignalInputHandlerSIH/MultiMeasure38/MeasSubsys
 *** SUSS_SIH157    SignalInputHandlerSIH/MultiMeasure38/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH158    SignalInputHandlerSIH/MultiMeasure39/MeasSubsys
 *** SUSS_SIH159    SignalInputHandlerSIH/MultiMeasure39/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH160    SignalInputHandlerSIH/MultiMeasure4/MeasSubsys
 *** SUSS_SIH161    SignalInputHandlerSIH/MultiMeasure4/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH162    SignalInputHandlerSIH/MultiMeasure40/MeasSubsys
 *** SUSS_SIH163    SignalInputHandlerSIH/MultiMeasure40/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH164    SignalInputHandlerSIH/MultiMeasure41/MeasSubsys
 *** SUSS_SIH165    SignalInputHandlerSIH/MultiMeasure41/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH166    SignalInputHandlerSIH/MultiMeasure42/MeasSubsys
 *** SUSS_SIH167    SignalInputHandlerSIH/MultiMeasure42/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH168    SignalInputHandlerSIH/MultiMeasure43/MeasSubsys
 *** SUSS_SIH169    SignalInputHandlerSIH/MultiMeasure43/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH170    SignalInputHandlerSIH/MultiMeasure44/MeasSubsys
 *** SUSS_SIH171    SignalInputHandlerSIH/MultiMeasure44/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH172    SignalInputHandlerSIH/MultiMeasure45/MeasSubsys
 *** SUSS_SIH173    SignalInputHandlerSIH/MultiMeasure45/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH174    SignalInputHandlerSIH/MultiMeasure46/MeasSubsys
 *** SUSS_SIH175    SignalInputHandlerSIH/MultiMeasure46/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH176    SignalInputHandlerSIH/MultiMeasure47/MeasSubsys
 *** SUSS_SIH177    SignalInputHandlerSIH/MultiMeasure47/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH178    SignalInputHandlerSIH/MultiMeasure48/MeasSubsys
 *** SUSS_SIH179    SignalInputHandlerSIH/MultiMeasure48/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH180    SignalInputHandlerSIH/MultiMeasure49/MeasSubsys
 *** SUSS_SIH181    SignalInputHandlerSIH/MultiMeasure49/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH182    SignalInputHandlerSIH/MultiMeasure5/MeasSubsys
 *** SUSS_SIH183    SignalInputHandlerSIH/MultiMeasure5/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH184    SignalInputHandlerSIH/MultiMeasure50/MeasSubsys
 *** SUSS_SIH185    SignalInputHandlerSIH/MultiMeasure50/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH186    SignalInputHandlerSIH/MultiMeasure51/MeasSubsys
 *** SUSS_SIH187    SignalInputHandlerSIH/MultiMeasure51/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH188    SignalInputHandlerSIH/MultiMeasure52/MeasSubsys
 *** SUSS_SIH189    SignalInputHandlerSIH/MultiMeasure52/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH190    SignalInputHandlerSIH/MultiMeasure53/MeasSubsys
 *** SUSS_SIH191    SignalInputHandlerSIH/MultiMeasure53/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH192    SignalInputHandlerSIH/MultiMeasure54/MeasSubsys
 *** SUSS_SIH193    SignalInputHandlerSIH/MultiMeasure54/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH194    SignalInputHandlerSIH/MultiMeasure55/MeasSubsys
 *** SUSS_SIH195    SignalInputHandlerSIH/MultiMeasure55/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH196    SignalInputHandlerSIH/MultiMeasure56/MeasSubsys
 *** SUSS_SIH197    SignalInputHandlerSIH/MultiMeasure56/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH198    SignalInputHandlerSIH/MultiMeasure57/MeasSubsys
 *** SUSS_SIH199    SignalInputHandlerSIH/MultiMeasure57/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH200    SignalInputHandlerSIH/MultiMeasure58/MeasSubsys
 *** SUSS_SIH201    SignalInputHandlerSIH/MultiMeasure58/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH202    SignalInputHandlerSIH/MultiMeasure59/MeasSubsys
 *** SUSS_SIH203    SignalInputHandlerSIH/MultiMeasure59/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH204    SignalInputHandlerSIH/MultiMeasure6/MeasSubsys
 *** SUSS_SIH205    SignalInputHandlerSIH/MultiMeasure6/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH206    SignalInputHandlerSIH/MultiMeasure60/MeasSubsys
 *** SUSS_SIH207    SignalInputHandlerSIH/MultiMeasure60/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH208    SignalInputHandlerSIH/MultiMeasure61/MeasSubsys
 *** SUSS_SIH209    SignalInputHandlerSIH/MultiMeasure61/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH210    SignalInputHandlerSIH/MultiMeasure62/MeasSubsys
 *** SUSS_SIH211    SignalInputHandlerSIH/MultiMeasure62/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH212    SignalInputHandlerSIH/MultiMeasure63/MeasSubsys
 *** SUSS_SIH213    SignalInputHandlerSIH/MultiMeasure63/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH214    SignalInputHandlerSIH/MultiMeasure64/MeasSubsys
 *** SUSS_SIH215    SignalInputHandlerSIH/MultiMeasure64/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH216    SignalInputHandlerSIH/MultiMeasure65/MeasSubsys
 *** SUSS_SIH217    SignalInputHandlerSIH/MultiMeasure65/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH218    SignalInputHandlerSIH/MultiMeasure66/MeasSubsys
 *** SUSS_SIH219    SignalInputHandlerSIH/MultiMeasure66/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH220    SignalInputHandlerSIH/MultiMeasure67/MeasSubsys
 *** SUSS_SIH221    SignalInputHandlerSIH/MultiMeasure67/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH222    SignalInputHandlerSIH/MultiMeasure7/MeasSubsys
 *** SUSS_SIH223    SignalInputHandlerSIH/MultiMeasure7/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH224    SignalInputHandlerSIH/MultiMeasure74/MeasSubsys
 *** SUSS_SIH225    SignalInputHandlerSIH/MultiMeasure74/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH226    SignalInputHandlerSIH/MultiMeasure76/MeasSubsys
 *** SUSS_SIH227    SignalInputHandlerSIH/MultiMeasure76/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH228    SignalInputHandlerSIH/MultiMeasure77/MeasSubsys
 *** SUSS_SIH229    SignalInputHandlerSIH/MultiMeasure77/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH230    SignalInputHandlerSIH/MultiMeasure78/MeasSubsys
 *** SUSS_SIH231    SignalInputHandlerSIH/MultiMeasure78/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH232    SignalInputHandlerSIH/MultiMeasure79/MeasSubsys
 *** SUSS_SIH233    SignalInputHandlerSIH/MultiMeasure79/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH234    SignalInputHandlerSIH/MultiMeasure8/MeasSubsys
 *** SUSS_SIH235    SignalInputHandlerSIH/MultiMeasure8/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH236    SignalInputHandlerSIH/MultiMeasure80/MeasSubsys
 *** SUSS_SIH237    SignalInputHandlerSIH/MultiMeasure80/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH238    SignalInputHandlerSIH/MultiMeasure9/MeasSubsys
 *** SUSS_SIH239    SignalInputHandlerSIH/MultiMeasure9/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_SIH240    SignalInputHandlerSIH/SignalProcessing/Boundaries
 *** SUSS_SIH241    SignalInputHandlerSIH/SignalProcessing/ClassifierMerging
 *** SUSS_SIH242    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions
 *** SUSS_SIH243    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers
 *** SUSS_SIH244    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput
 *** SUSS_SIH245    SignalInputHandlerSIH/SignalProcessing/LaneAssist
 *** SUSS_SIH246    SignalInputHandlerSIH/SignalProcessing/MultiMeasure
 *** SUSS_SIH247    SignalInputHandlerSIH/SignalProcessing/MultiMeasure1
 *** SUSS_SIH248    SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation
 *** SUSS_SIH249    SignalInputHandlerSIH/SignalProcessing/ServiceData
 *** SUSS_SIH250    SignalInputHandlerSIH/SignalProcessing/SignalStates
 *** SUSS_SIH251    SignalInputHandlerSIH/SignalProcessing/Steering
 *** SUSS_SIH252    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd14
 *** SUSS_SIH253    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd4
 *** SUSS_SIH254    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd40
 *** SUSS_SIH255    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd41
 *** SUSS_SIH256    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd43
 *** SUSS_SIH257    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd54
 *** SUSS_SIH258    SignalInputHandlerSIH/SignalProcessing/Boundaries/ReqBlock1
 *** SUSS_SIH259    SignalInputHandlerSIH/SignalProcessing/Boundaries/ReqBlock2
 *** SUSS_SIH260    SignalInputHandlerSIH/SignalProcessing/Boundaries/ReqBlock3
 *** SUSS_SIH261    SignalInputHandlerSIH/SignalProcessing/Boundaries/rename
 *** SUSS_SIH262    SignalInputHandlerSIH/SignalProcessing/Boundaries/rename1
 *** SUSS_SIH263    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd14/ReqBlock
 *** SUSS_SIH264    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd4/ReqBlock
 *** SUSS_SIH265    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd40/ReqBlock
 *** SUSS_SIH266    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd41/ReqBlock
 *** SUSS_SIH267    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd43/ReqBlock
 *** SUSS_SIH268    SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd54/ReqBlock
 *** SUSS_SIH269    SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA
 *** SUSS_SIH270    SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACC
 *** SUSS_SIH271    SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationENDA
 *** SUSS_SIH272    SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationFPM
 *** SUSS_SIH273    SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationKLR
 *** SUSS_SIH274    SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA
 *** SUSS_SIH275    SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/AcaBuildI
 ***                nChecker
 *** SUSS_SIH276    SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACC/AccBuildI
 ***                nChecker
 *** SUSS_SIH277    SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationENDA/If Actio
 ***                nSubsystem
 *** SUSS_SIH278    SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationENDA/If Actio
 ***                nSubsystem1
 *** SUSS_SIH279    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd1
 *** SUSS_SIH280    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd3
 *** SUSS_SIH281    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd5
 *** SUSS_SIH282    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd58
 *** SUSS_SIH283    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd59
 *** SUSS_SIH284    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd62
 *** SUSS_SIH285    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/ReqBlock1
 *** SUSS_SIH286    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/ReqBlock2
 *** SUSS_SIH287    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/rename1
 *** SUSS_SIH288    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace1
 *** SUSS_SIH289    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace2
 *** SUSS_SIH290    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd1/ReqBlock
 *** SUSS_SIH291    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd3/ReqBlock
 *** SUSS_SIH292    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd5/ReqBlock
 *** SUSS_SIH293    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd58/ReqBlock
 *** SUSS_SIH294    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd59/ReqBlock
 *** SUSS_SIH295    SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd62/ReqBlock
 *** SUSS_SIH296    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode16Bit
 ***                s
 *** SUSS_SIH297    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA
 *** SUSS_SIH298    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC
 *** SUSS_SIH299    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI
 *** SUSS_SIH300    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg
 *** SUSS_SIH301    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS
 *** SUSS_SIH302    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC
 *** SUSS_SIH303    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn
 *** SUSS_SIH304    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR
 *** SUSS_SIH305    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA
 *** SUSS_SIH306    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL
 *** SUSS_SIH307    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 *** SUSS_SIH308    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 *** SUSS_SIH309    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode16Bit
 ***                s/Encode16Bits
 *** SUSS_SIH310    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode16Bit
 ***                s/Encode16Bits/DocBlock
 *** SUSS_SIH311    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode16Bit
 ***                s/Encode16Bits/DocBlock/EmptySubsystem
 *** SUSS_SIH312    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ChkErr6
 *** SUSS_SIH313    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ClassifierErrHnd8
 *** SUSS_SIH314    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ReqBlock1
 *** SUSS_SIH315    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ClassifierErrHnd8/ClassifierMonitoring
 *** SUSS_SIH316    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ClassifierErrHnd8/GetBit1
 *** SUSS_SIH317    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH318    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ClassifierErrHnd8/ClassifierMonitoring/GetBit
 *** SUSS_SIH319    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ClassifierErrHnd8/ClassifierMonitoring/GetBit1
 *** SUSS_SIH320    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ClassifierErrHnd8/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH321    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ClassifierErrHnd8/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH322    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ClassifierErrHnd8/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH323    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
 ***                ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH324    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ChkErr1
 *** SUSS_SIH325    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ClassifierErrHnd3
 *** SUSS_SIH326    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ReqBlock1
 *** SUSS_SIH327    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ClassifierErrHnd3/ClassifierMonitoring
 *** SUSS_SIH328    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ClassifierErrHnd3/GetBit1
 *** SUSS_SIH329    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH330    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/GetBit
 *** SUSS_SIH331    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/GetBit1
 *** SUSS_SIH332    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH333    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH334    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH335    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH336    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ChkErr7
 *** SUSS_SIH337    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ClassifierErrHnd9
 *** SUSS_SIH338    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ReqBlock1
 *** SUSS_SIH339    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ClassifierErrHnd9/ClassifierMonitoring
 *** SUSS_SIH340    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ClassifierErrHnd9/GetBit1
 *** SUSS_SIH341    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH342    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ClassifierErrHnd9/ClassifierMonitoring/GetBit
 *** SUSS_SIH343    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ClassifierErrHnd9/ClassifierMonitoring/GetBit1
 *** SUSS_SIH344    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ClassifierErrHnd9/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH345    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ClassifierErrHnd9/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH346    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ClassifierErrHnd9/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH347    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
 ***                ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH348    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ChkErr3
 *** SUSS_SIH349    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ClassifierErrHnd5
 *** SUSS_SIH350    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ReqBlock1
 *** SUSS_SIH351    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ClassifierErrHnd5/ClassifierMonitoring
 *** SUSS_SIH352    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ClassifierErrHnd5/GetBit1
 *** SUSS_SIH353    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH354    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ClassifierErrHnd5/ClassifierMonitoring/GetBit
 *** SUSS_SIH355    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ClassifierErrHnd5/ClassifierMonitoring/GetBit1
 *** SUSS_SIH356    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ClassifierErrHnd5/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH357    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ClassifierErrHnd5/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH358    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ClassifierErrHnd5/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH359    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
 ***                rg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH360    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ChkErr8
 *** SUSS_SIH361    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ClassifierErrHnd10
 *** SUSS_SIH362    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ReqBlock1
 *** SUSS_SIH363    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ClassifierErrHnd10/ClassifierMonitoring
 *** SUSS_SIH364    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ClassifierErrHnd10/GetBit1
 *** SUSS_SIH365    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH366    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ClassifierErrHnd10/ClassifierMonitoring/GetBit
 *** SUSS_SIH367    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ClassifierErrHnd10/ClassifierMonitoring/GetBit1
 *** SUSS_SIH368    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ClassifierErrHnd10/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH369    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ClassifierErrHnd10/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH370    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ClassifierErrHnd10/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH371    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
 ***                ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH372    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ChkErr1
 *** SUSS_SIH373    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ClassifierErrHnd3
 *** SUSS_SIH374    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ReqBlock1
 *** SUSS_SIH375    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ClassifierErrHnd3/ClassifierMonitoring
 *** SUSS_SIH376    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ClassifierErrHnd3/GetBit1
 *** SUSS_SIH377    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH378    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/GetBit
 *** SUSS_SIH379    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/GetBit1
 *** SUSS_SIH380    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH381    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH382    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH383    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
 ***                ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH384    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ChkErr5
 *** SUSS_SIH385    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ClassifierErrHnd7
 *** SUSS_SIH386    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ReqBlock1
 *** SUSS_SIH387    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ClassifierErrHnd7/ClassifierMonitoring
 *** SUSS_SIH388    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ClassifierErrHnd7/GetBit1
 *** SUSS_SIH389    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH390    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ClassifierErrHnd7/ClassifierMonitoring/GetBit
 *** SUSS_SIH391    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ClassifierErrHnd7/ClassifierMonitoring/GetBit1
 *** SUSS_SIH392    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ClassifierErrHnd7/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH393    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ClassifierErrHnd7/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH394    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ClassifierErrHnd7/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH395    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
 ***                tn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH396    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ChkErr9
 *** SUSS_SIH397    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ClassifierErrHnd11
 *** SUSS_SIH398    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ReqBlock1
 *** SUSS_SIH399    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ClassifierErrHnd11/ClassifierMonitoring
 *** SUSS_SIH400    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ClassifierErrHnd11/GetBit1
 *** SUSS_SIH401    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH402    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ClassifierErrHnd11/ClassifierMonitoring/GetBit
 *** SUSS_SIH403    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ClassifierErrHnd11/ClassifierMonitoring/GetBit1
 *** SUSS_SIH404    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ClassifierErrHnd11/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH405    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ClassifierErrHnd11/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH406    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ClassifierErrHnd11/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH407    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
 ***                ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH408    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ChkErr10
 *** SUSS_SIH409    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ClassifierErrHnd12
 *** SUSS_SIH410    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ReqBlock1
 *** SUSS_SIH411    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ClassifierErrHnd12/ClassifierMonitoring
 *** SUSS_SIH412    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ClassifierErrHnd12/GetBit1
 *** SUSS_SIH413    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH414    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ClassifierErrHnd12/ClassifierMonitoring/GetBit
 *** SUSS_SIH415    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ClassifierErrHnd12/ClassifierMonitoring/GetBit1
 *** SUSS_SIH416    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ClassifierErrHnd12/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH417    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ClassifierErrHnd12/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH418    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ClassifierErrHnd12/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH419    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
 ***                ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH420    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ChkErr11
 *** SUSS_SIH421    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ClassifierErrHnd13
 *** SUSS_SIH422    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ReqBlock1
 *** SUSS_SIH423    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ClassifierErrHnd13/ClassifierMonitoring
 *** SUSS_SIH424    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ClassifierErrHnd13/GetBit1
 *** SUSS_SIH425    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH426    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ClassifierErrHnd13/ClassifierMonitoring/GetBit
 *** SUSS_SIH427    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ClassifierErrHnd13/ClassifierMonitoring/GetBit1
 *** SUSS_SIH428    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ClassifierErrHnd13/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH429    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ClassifierErrHnd13/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH430    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ClassifierErrHnd13/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH431    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
 ***                ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH432    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ChkErr12
 *** SUSS_SIH433    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ClassifierErrHnd14
 *** SUSS_SIH434    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ReqBlock1
 *** SUSS_SIH435    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ClassifierErrHnd14/ClassifierMonitoring
 *** SUSS_SIH436    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ClassifierErrHnd14/GetBit1
 *** SUSS_SIH437    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH438    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ClassifierErrHnd14/ClassifierMonitoring/GetBit
 *** SUSS_SIH439    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ClassifierErrHnd14/ClassifierMonitoring/GetBit1
 *** SUSS_SIH440    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ClassifierErrHnd14/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH441    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ClassifierErrHnd14/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH442    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ClassifierErrHnd14/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH443    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
 ***                /ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH444    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ChkErr13
 *** SUSS_SIH445    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ClassifierErrHnd15
 *** SUSS_SIH446    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ReqBlock1
 *** SUSS_SIH447    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ClassifierErrHnd15/ClassifierMonitoring
 *** SUSS_SIH448    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ClassifierErrHnd15/GetBit1
 *** SUSS_SIH449    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH450    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ClassifierErrHnd15/ClassifierMonitoring/GetBit
 *** SUSS_SIH451    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ClassifierErrHnd15/ClassifierMonitoring/GetBit1
 *** SUSS_SIH452    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ClassifierErrHnd15/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH453    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ClassifierErrHnd15/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH454    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ClassifierErrHnd15/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH455    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
 ***                /ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH456    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd10
 *** SUSS_SIH457    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd12
 *** SUSS_SIH458    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd44
 *** SUSS_SIH459    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd45
 *** SUSS_SIH460    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd46
 *** SUSS_SIH461    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd47
 *** SUSS_SIH462    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd49
 *** SUSS_SIH463    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd50
 *** SUSS_SIH464    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/ReqBlock1
 *** SUSS_SIH465    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd10/ReqBlo
 ***                ck
 *** SUSS_SIH466    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd12/ReqBlo
 ***                ck
 *** SUSS_SIH467    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd44/ReqBlo
 ***                ck
 *** SUSS_SIH468    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd45/ReqBlo
 ***                ck
 *** SUSS_SIH469    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd46/ReqBlo
 ***                ck
 *** SUSS_SIH470    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd47/ReqBlo
 ***                ck
 *** SUSS_SIH471    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd49/ReqBlo
 ***                ck
 *** SUSS_SIH472    SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd50/ReqBlo
 ***                ck
 *** SUSS_SIH473    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd1
 *** SUSS_SIH474    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd17
 *** SUSS_SIH475    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd19
 *** SUSS_SIH476    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd2
 *** SUSS_SIH477    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd20
 *** SUSS_SIH478    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd22
 *** SUSS_SIH479    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd24
 *** SUSS_SIH480    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd25
 *** SUSS_SIH481    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd27
 *** SUSS_SIH482    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd29
 *** SUSS_SIH483    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd3
 *** SUSS_SIH484    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd30
 *** SUSS_SIH485    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd32
 *** SUSS_SIH486    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd34
 *** SUSS_SIH487    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd35
 *** SUSS_SIH488    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd37
 *** SUSS_SIH489    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd4
 *** SUSS_SIH490    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd5
 *** SUSS_SIH491    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd6
 *** SUSS_SIH492    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd7
 *** SUSS_SIH493    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd8
 *** SUSS_SIH494    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd9
 *** SUSS_SIH495    SignalInputHandlerSIH/SignalProcessing/LaneAssist/ReqBlock1
 *** SUSS_SIH496    SignalInputHandlerSIH/SignalProcessing/LaneAssist/ReqBlock2
 *** SUSS_SIH497    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd1/ReqBlock
 *** SUSS_SIH498    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd17/ReqBlock
 *** SUSS_SIH499    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd19/ReqBlock
 *** SUSS_SIH500    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd2/ReqBlock
 *** SUSS_SIH501    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd20/ReqBlock
 *** SUSS_SIH502    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd22/ReqBlock
 *** SUSS_SIH503    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd24/ReqBlock
 *** SUSS_SIH504    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd25/ReqBlock
 *** SUSS_SIH505    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd27/ReqBlock
 *** SUSS_SIH506    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd29/ReqBlock
 *** SUSS_SIH507    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd3/ReqBlock
 *** SUSS_SIH508    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd30/ReqBlock
 *** SUSS_SIH509    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd32/ReqBlock
 *** SUSS_SIH510    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd34/ReqBlock
 *** SUSS_SIH511    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd35/ReqBlock
 *** SUSS_SIH512    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd37/ReqBlock
 *** SUSS_SIH513    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd4/ReqBlock
 *** SUSS_SIH514    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd5/ReqBlock
 *** SUSS_SIH515    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd6/ReqBlock
 *** SUSS_SIH516    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd7/ReqBlock
 *** SUSS_SIH517    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd8/ReqBlock
 *** SUSS_SIH518    SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd9/ReqBlock
 *** SUSS_SIH519    SignalInputHandlerSIH/SignalProcessing/MultiMeasure/MeasSubsys
 *** SUSS_SIH520    SignalInputHandlerSIH/SignalProcessing/MultiMeasure/MeasSubsys/ToWorkspaceMeasur
 ***                ement
 *** SUSS_SIH521    SignalInputHandlerSIH/SignalProcessing/MultiMeasure1/MeasSubsys
 *** SUSS_SIH522    SignalInputHandlerSIH/SignalProcessing/MultiMeasure1/MeasSubsys/ToWorkspaceMeasu
 ***                rement
 *** SUSS_SIH523    SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/AcaReplacementCond
 ***                ition
 *** SUSS_SIH524    SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeasure
 *** SUSS_SIH525    SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeasure/MeasS
 ***                ubsys
 *** SUSS_SIH526    SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeasure/MeasS
 ***                ubsys/ToWorkspaceMeasurement
 *** SUSS_SIH527    SignalInputHandlerSIH/SignalProcessing/ServiceData/ReqBlock1
 *** SUSS_SIH528    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt
 *** SUSS_SIH529    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1
 *** SUSS_SIH530    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename
 *** SUSS_SIH531    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename1
 *** SUSS_SIH532    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename10
 *** SUSS_SIH533    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename11
 *** SUSS_SIH534    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename2
 *** SUSS_SIH535    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename3
 *** SUSS_SIH536    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename4
 *** SUSS_SIH537    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename5
 *** SUSS_SIH538    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename6
 *** SUSS_SIH539    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename7
 *** SUSS_SIH540    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename8
 *** SUSS_SIH541    SignalInputHandlerSIH/SignalProcessing/ServiceData/rename9
 *** SUSS_SIH542    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/ReqBlock1
 *** SUSS_SIH543    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem
 *** SUSS_SIH544    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem/Count
 ***                Up
 *** SUSS_SIH545    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem/Count
 ***                Up/CountUp
 *** SUSS_SIH546    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem/Count
 ***                Up/CountUp/DocBlock
 *** SUSS_SIH547    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem/Count
 ***                Up/CountUp/DocBlock/EmptySubsystem
 *** SUSS_SIH548    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/ReqBlock1
 *** SUSS_SIH549    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem
 *** SUSS_SIH550    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem/Coun
 ***                tUp
 *** SUSS_SIH551    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem/Coun
 ***                tUp/CountUp
 *** SUSS_SIH552    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem/Coun
 ***                tUp/CountUp/DocBlock
 *** SUSS_SIH553    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem/Coun
 ***                tUp/CountUp/DocBlock/EmptySubsystem
 *** SUSS_SIH554    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet
 *** SUSS_SIH555    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl
 *** SUSS_SIH556    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl
 *** SUSS_SIH557    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl
 *** SUSS_SIH558    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl
 *** SUSS_SIH559    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq
 *** SUSS_SIH560    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv
 *** SUSS_SIH561    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
 ***                fierErrHnd
 *** SUSS_SIH562    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/ReqBlo
 ***                ck1
 *** SUSS_SIH563    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
 ***                fierErrHnd/ClassifierMonitoring
 *** SUSS_SIH564    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
 ***                fierErrHnd/GetBit1
 *** SUSS_SIH565    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
 ***                fierErrHnd/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH566    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
 ***                fierErrHnd/ClassifierMonitoring/GetBit
 *** SUSS_SIH567    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
 ***                fierErrHnd/ClassifierMonitoring/GetBit1
 *** SUSS_SIH568    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
 ***                fierErrHnd/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH569    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
 ***                fierErrHnd/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH570    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
 ***                fierErrHnd/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH571    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
 ***                fierErrHnd/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH572    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
 ***                ErrHnd
 *** SUSS_SIH573    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/ReqBlock1
 *** SUSS_SIH574    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring
 *** SUSS_SIH575    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
 ***                ErrHnd/GetBit1
 *** SUSS_SIH576    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH577    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/GetBit
 *** SUSS_SIH578    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/GetBit1
 *** SUSS_SIH579    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH580    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH581    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH582    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH583    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
 ***                erErrHnd
 *** SUSS_SIH584    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/ReqBlock
 ***                1
 *** SUSS_SIH585    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
 ***                erErrHnd/ClassifierMonitoring
 *** SUSS_SIH586    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
 ***                erErrHnd/GetBit1
 *** SUSS_SIH587    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
 ***                erErrHnd/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH588    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
 ***                erErrHnd/ClassifierMonitoring/GetBit
 *** SUSS_SIH589    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
 ***                erErrHnd/ClassifierMonitoring/GetBit1
 *** SUSS_SIH590    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
 ***                erErrHnd/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH591    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
 ***                erErrHnd/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH592    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
 ***                erErrHnd/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH593    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
 ***                erErrHnd/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH594    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
 ***                ErrHnd
 *** SUSS_SIH595    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/ReqBlock1
 *** SUSS_SIH596    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring
 *** SUSS_SIH597    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
 ***                ErrHnd/GetBit1
 *** SUSS_SIH598    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH599    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/GetBit
 *** SUSS_SIH600    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/GetBit1
 *** SUSS_SIH601    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH602    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH603    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH604    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH605    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
 ***                ErrHnd
 *** SUSS_SIH606    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/ReqBlock1
 *** SUSS_SIH607    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring
 *** SUSS_SIH608    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
 ***                ErrHnd/GetBit1
 *** SUSS_SIH609    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH610    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/GetBit
 *** SUSS_SIH611    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/GetBit1
 *** SUSS_SIH612    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH613    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH614    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH615    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
 ***                ErrHnd/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH616    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
 ***                rErrHnd1
 *** SUSS_SIH617    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/ReqBlock1
 *** SUSS_SIH618    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
 ***                rErrHnd1/ClassifierMonitoring
 *** SUSS_SIH619    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
 ***                rErrHnd1/GetBit1
 *** SUSS_SIH620    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
 ***                rErrHnd1/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH621    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
 ***                rErrHnd1/ClassifierMonitoring/GetBit
 *** SUSS_SIH622    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
 ***                rErrHnd1/ClassifierMonitoring/GetBit1
 *** SUSS_SIH623    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
 ***                rErrHnd1/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH624    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
 ***                rErrHnd1/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH625    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
 ***                rErrHnd1/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH626    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
 ***                rErrHnd1/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH627    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
 ***                ErrHnd
 *** SUSS_SIH628    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/ReqBlock1
 *** SUSS_SIH629    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
 ***                ErrHnd/ClassifierMonitoring
 *** SUSS_SIH630    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
 ***                ErrHnd/GetBit1
 *** SUSS_SIH631    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
 ***                ErrHnd/ClassifierMonitoring/DebounceTimer
 *** SUSS_SIH632    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
 ***                ErrHnd/ClassifierMonitoring/GetBit
 *** SUSS_SIH633    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
 ***                ErrHnd/ClassifierMonitoring/GetBit1
 *** SUSS_SIH634    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock1
 *** SUSS_SIH635    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock2
 *** SUSS_SIH636    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
 ***                ErrHnd/ClassifierMonitoring/ReqBlock3
 *** SUSS_SIH637    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
 ***                ErrHnd/ClassifierMonitoring/DebounceTimer/ReqBlock
 *** SUSS_SIH638    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd1
 *** SUSS_SIH639    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd10
 *** SUSS_SIH640    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd2
 *** SUSS_SIH641    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd3
 *** SUSS_SIH642    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd39
 *** SUSS_SIH643    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd58
 *** SUSS_SIH644    SignalInputHandlerSIH/SignalProcessing/Steering/ReqBlock1
 *** SUSS_SIH645    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd1/ReqBlock
 *** SUSS_SIH646    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd10/ReqBlock
 *** SUSS_SIH647    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd2/ReqBlock
 *** SUSS_SIH648    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd3/ReqBlock
 *** SUSS_SIH649    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd39/ReqBlock
 *** SUSS_SIH650    SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd58/ReqBlock
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

# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.h" 1
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_SIH
 *** TargetLink subsystem : USS_SIH/FrameSIH/Subsystem/FrameSIH/SignalInputHandlerSIH
 *** Codefile             : USS_SIH.h
 ***
 *** Generation date: 2024-08-22 20:27:27
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
 *** Style definition file                    : C:\JenkinsTemp\ProdServer\SWC_USS\01_PROD\30_CG\CG_U
 ***                                            SS_SIH\20_IMPL\CgTools\Common_C_Tools\Platform_TlCon
 ***                                            fig\cconfig.xml
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

# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS/frm\\Rte_Type.h" 1
/**************************************************************************************************\
 *** 
 *** System              : TargetLink Simulation RTE
 *** ECU                 : TL_ECU
 *** Configuration       : NONE
 *** Codefile            : Rte_Type.h
 ***
 *** Generated by the SystemDesk RTE code generator
 *** Generation date: 2024-08-23 16:30:32
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

# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS/frm/Platform_Types.h" 1
/**************************************************************************************************\
 *** 
 *** System              : TargetLink Simulation RTE
 *** ECU                 : TL_ECU
 *** Configuration       : NONE
 *** Codefile            : Platform_Types.h
 ***
 *** Generated by the SystemDesk RTE code generator
 *** Generation date: 2024-08-23 16:30:32
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
# 27 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS/frm\\Rte_Type.h" 2
# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS/frm/Std_Types.h" 1
/**************************************************************************************************\
 *** 
 *** System              : TargetLink Simulation RTE
 *** ECU                 : TL_ECU
 *** Configuration       : NONE
 *** Codefile            : Std_Types.h
 ***
 *** Generated by the SystemDesk RTE code generator
 *** Generation date: 2024-08-23 16:30:32
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
# 28 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS/frm/Std_Types.h" 2
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
# 28 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS/frm\\Rte_Type.h" 2
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/


/******************************************************************************\
   RTE_SYMBOLIC_SCALING_ENUMERATIONS: Symbolic scaling(s). | Width: 8
\******************************************************************************/
# 97 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS/frm\\Rte_Type.h"
/******************************************************************************\
   MODE_DECLARATION: Mode declaration(s). | Width: 8
\******************************************************************************/
# 139 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS/frm\\Rte_Type.h"
/******************************************************************************\
   USSDB: Application error(s). | Width: 8
\******************************************************************************/
# 150 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS/frm\\Rte_Type.h"
/******************************************************************************\
   TL_FRAME: Application error(s). | Width: 8
\******************************************************************************/



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

typedef uint8 ObjectDetection_AT_ObjectClass;
typedef uint32 ObjectDetection_Objects_objectID_base_type;
typedef uint8 ObjectDetection_AT_HistoryFlag;
typedef uint8 ObjectDetection_Objects_existenceProbability_base_type;
typedef uint32 ObjectDetection_Objects_age_base_type;
typedef uint8 ObjectDetection_Objects_objectClassProbability_base_type;
typedef sint16 ObjectDetection_Objects_timeToCollisionFront_base_type;
typedef uint16 ObjectDetection_Objects_timeToCollisionFrontSD_base_type;
typedef sint16 ObjectDetection_Objects_inverseTimeToCollisionImagePlane_base_type;
typedef uint16 ObjectDetection_Objects_inverseTimeToCollisionImagePlaneSD_base_type;
typedef boolean ObjectDetection_Objects_inverseTimeToCollisionImagePlaneValid[20];
typedef sint16 ObjectDetection_Objects_azimuthAngle_base_type;
typedef uint16 ObjectDetection_Objects_azimuthAngleSD_base_type;
typedef boolean ObjectDetection_Objects_azimuthAngleValid[20];
typedef sint16 ObjectDetection_Objects_elevationAngle_base_type;
typedef uint16 ObjectDetection_Objects_elevationAngleSD_base_type;
typedef boolean ObjectDetection_Objects_elevationAngleValid[20];
typedef uint16 ObjectDetection_Objects_radialDistance_base_type;
typedef uint16 ObjectDetection_Objects_radialDistanceSD_base_type;
typedef boolean ObjectDetection_Objects_radialDistanceValid[20];
typedef sint16 ObjectDetection_Objects_deltaElevation_base_type;
typedef uint16 ObjectDetection_Objects_deltaElevationSD_base_type;
typedef boolean ObjectDetection_Objects_deltaElevationValid[20];
typedef sint16 ObjectDetection_Objects_yawAngle_base_type;
typedef uint16 ObjectDetection_Objects_yawAngleSD_base_type;
typedef boolean ObjectDetection_Objects_yawAngleValid[20];
typedef sint16 ObjectDetection_Objects_angleSpeed_base_type;
typedef uint16 ObjectDetection_Objects_angleSpeedSD_base_type;
typedef boolean ObjectDetection_Objects_angleSpeedValid[20];
typedef sint16 ObjectDetection_Objects_angleFrontLeft_base_type;
typedef uint16 ObjectDetection_Objects_angleFrontLeftSD_base_type;
typedef boolean ObjectDetection_Objects_angleFrontLeftValid[20];
typedef sint16 ObjectDetection_Objects_angleFrontRight_base_type;
typedef uint16 ObjectDetection_Objects_angleFrontRightSD_base_type;
typedef boolean ObjectDetection_Objects_angleFrontRightValid[20];
typedef sint16 ObjectDetection_Objects_angleRearLeft_base_type;
typedef uint16 ObjectDetection_Objects_angleRearLeftSD_base_type;
typedef boolean ObjectDetection_Objects_angleRearLeftValid[20];
typedef sint16 ObjectDetection_Objects_angleRearRight_base_type;
typedef uint16 ObjectDetection_Objects_angleRearRightSD_base_type;
typedef boolean ObjectDetection_Objects_angleRearRightValid[20];
typedef sint16 ObjectDetection_Objects_overlapAngleEgoLaneRight_base_type;
typedef boolean ObjectDetection_Objects_overlapAngleEgoLaneRightValid[20];
typedef sint16 ObjectDetection_Objects_overlapAngleEgoLaneLeft_base_type;
typedef boolean ObjectDetection_Objects_overlapAngleEgoLaneLeftValid[20];
typedef uint8 ObjectDetection_AT_DetectionMethod;
typedef uint8 ObjectDetection_AT_ReferencePoint;
typedef uint8 ObjectDetection_AT_IndicatorLeft;
typedef uint8 ObjectDetection_AT_IndicatorRight;
typedef uint8 ObjectDetection_AT_BrakeLights;
typedef uint8 ObjectDetection_AT_Stationary;
typedef uint8 ObjectDetection_AT_Lanes;
typedef uint8 ObjectDetection_AT_SafetyIndication;
typedef uint16 ObjectDetection_Objects_width_base_type;
typedef uint16 ObjectDetection_Objects_widthSD_base_type;
typedef boolean ObjectDetection_Objects_widthValid[20];
typedef uint16 ObjectDetection_Objects_length_base_type;
typedef uint16 ObjectDetection_Objects_lengthSD_base_type;
typedef boolean ObjectDetection_Objects_lengthValid[20];
typedef boolean Bool;
typedef sint8 Int8;
typedef sint16 Int16;
typedef sint32 Int32;
typedef float32 Float32;
typedef float64 Float64;
typedef uint8 UInt8;
typedef uint16 UInt16;
typedef uint32 UInt32;
typedef uint8 NvM_RequestResultType;
typedef uint8 Dem_DebounceResetStatusType;
typedef uint8 Dem_EventStatusType;
typedef boolean IDT_boolean;
typedef uint8 IDT_uint8;
typedef float32 IDT_float32;
typedef sint16 IDT_sint16;
typedef sint32 IDT_sint32;
typedef sint8 IDT_sint8;
typedef uint16 IDT_uint16;
typedef uint32 IDT_uint32;
typedef float32 IDT_float32_DC_GP_Posn_p1_AzBdyFrLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_AzBdyFrRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_AzBdyReLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_AzBdyReRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_AzWhlFrLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_AzWhlFrRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_AzWhlReLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_AzWhlReRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_Cog;
typedef float32 IDT_float32_DC_GP_Posn_p1_DampDomFrLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_DampDomFrRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_DampDomReLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_DampDomReRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_IMUSafeComp;
typedef float32 IDT_float32_DC_GP_Posn_p1_RideHeiPlynmFrLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_RideHeiPlynmFrRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_RideHeiPlynmInvFrLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_RideHeiPlynmInvFrRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_RideHeiPlynmInvReLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_RideHeiPlynmInvReRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_RideHeiPlynmReLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_RideHeiPlynmReRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_TrvlDampPlynmFrLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_TrvlDampPlynmFrRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_TrvlDampPlynmReLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_TrvlDampPlynmReRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_WhlCenFrLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_WhlCenFrRi;
typedef float32 IDT_float32_DC_GP_Posn_p1_WhlCenReLe;
typedef float32 IDT_float32_DC_GP_Posn_p1_WhlCenReRi;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgFrLe;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var10;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var11;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var12;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var13;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var14;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var1;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var2;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var3;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var4;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var5;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var6;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var7;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var8;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var9;
typedef float32 IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAg_Mdfn;
typedef float32 IDT_float32_DC_GP_Suspn_p1_AirSprgEfcSurfFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_AirSprgEfcSurfRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_AntiRollBarRatFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_AntiRollBarRatRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_BmpStopTrvlFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_BmpStopTrvlRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_DampRatFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_DampRatRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_FBmpStopFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_FBmpStopRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_FSprgRatFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_FSprgRatRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_IDampFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_IDampRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_KinDampBmpTrvlFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_KinDampBmpTrvlRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_KinSprgTrvlFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_KinSprgTrvlRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_RelWhlTrvlFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_RelWhlTrvlRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_SteelSprgStfnFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_SteelSprgStfnRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_VDampFr;
typedef float32 IDT_float32_DC_GP_Suspn_p1_VDampRe;
typedef float32 IDT_float32_DC_GP_Suspn_p1_VolSuspnStrutFrAx;
typedef float32 IDT_float32_DC_GP_Suspn_p1_VolSuspnStrutReAx;
typedef float32 IDT_float32_DC_GP_Suspn_p2_FDampFr;
typedef float32 IDT_float32_DC_GP_Suspn_p2_FDampRe;
typedef float32 IDT_float32_DC_GP_VehBdy_p1_AxlLdFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p1_AxlLdRe;
typedef float32 IDT_float32_DC_GP_VehBdy_p1_CAFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p1_CARe;
typedef float32 IDT_float32_DC_GP_VehBdy_p1_CoLftAcvSysFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p1_CoLftAcvSysRe;
typedef float32 IDT_float32_DC_GP_VehBdy_p1_MUnsprgFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p1_MUnsprgRe;
typedef uint8 IDT_uint8_DC_GP_VehBdy_p1_StCoLftSetup;
typedef uint8 IDT_uint8_DC_GP_Vrn_p1_BasLnId;
typedef float32 IDT_float32_DC_PTGlbPrm_p1_TqMaxVrnCluCE;
typedef float32 IDT_float32_DC_PTGlbPrm_p1_TqMinVrnCluCE;
typedef float32 IDT_float32_DC_PTGlbPrm_p1_TqWhlMinHiPrioUpprLimAxp;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBas0;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBas1;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBas2;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBas3;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasDyn0;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasDyn1;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasDyn2;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasDyn3;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasManHyb;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasNrmHyb;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasSptHyb;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasSptManHyb;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfs0;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfs1;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfs2;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfs3;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn0;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn1;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn2;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn3;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsManHyb;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsNrmHyb;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsSptHyb;
typedef float32 IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsSptManHyb;
typedef float32 IDT_float32_DC_PTGlbPrm_px_TqVrnCluCE_SpdCluCE;
typedef float32 IDT_float32_DC_PTGlbPrm_px_TqWhlDrgDeceBas_VVeh;
typedef float32 IDT_float32_DC_PTGlbPrm_px_TqWhlMinHiPrioUpprLimAxp_RatGbx;
typedef float32 IDT_float32_DC_PTGlbPrm_py_TqWhlDrgDeceBas_AgLongi;
typedef float32 IDT_float32_DC_PTGlbPrm_py_TqWhlDrgDeceBas_RatTq;
typedef uint8 IDT_uint8_DC_GP_Vrn_p_Brnd;
typedef uint8 IDT_uint8_DC_GP_Vrn_p_VehTyp;
typedef float32 IDT_float32_DC_GP_VehBdy_p_RefAxlLdFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p_RefAxlLdRe;
typedef float32 IDT_float32_DC_GP_VehBdy_p_VChar;
typedef float32 IDT_float32_DC_GP_VehBdy_p_DTarSuspnLvlFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p_DTarSuspnLvlRe;
typedef float32 IDT_float32_DC_GP_VehBdy_p_NrmLvlOfsFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p_NrmLvlOfsRe;
typedef float32 IDT_float32_DC_GP_VehBdy_p_CalibLvlOfsFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p_CalibLvlOfsRe;
typedef float32 IDT_float32_DC_GP_VehBdy_p_Cw;
typedef float32 IDT_float32_DC_GP_VehBdy_p_PrjArFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p_VertMomOfJ;
typedef float32 IDT_float32_DC_GP_VehBdy_p_LgtMomOfJ;
typedef float32 IDT_float32_DC_GP_VehBdy_p_LatMomOfJ;
typedef float32 IDT_float32_DC_GP_VehBdy_p_BdyMomOfJxx;
typedef float32 IDT_float32_DC_GP_VehBdy_p_BdyMomOfJyy;
typedef float32 IDT_float32_DC_GP_VehBdy_p_BdyMomOfJzz;
typedef float32 IDT_float32_DC_GP_VehBdy_p_MVehAvg;
typedef float32 IDT_float32_DC_GP_VehBdy_p_MVehMax;
typedef float32 IDT_float32_DC_GP_VehBdy_p_MVehTrlrMax;
typedef float32 IDT_float32_DC_GP_VehBdy_p_MaxCmpWhlTrvlFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p_MaxCmpWhlTrvlRe;
typedef float32 IDT_float32_DC_GP_VehBdy_p_MaxRebWhlTrvlFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p_MaxRebWhlTrvlRe;
typedef float32 IDT_float32_DC_GP_VehBdy_p_LWhlBas;
typedef float32 IDT_float32_DC_GP_VehBdy_p_LTrckWidFr;
typedef float32 IDT_float32_DC_GP_VehBdy_p_LTrckWidRe;
typedef float32 IDT_float32_DC_GP_Tire_p_RollCofDft;
typedef float32 IDT_float32_DC_GP_Tire_p_JyDft;
typedef float32 IDT_float32_DC_GP_Tire_p_LDynWhlRdRe;
typedef float32 IDT_float32_DC_GP_Tire_p_LDynWhlRdFr;
typedef float32 IDT_float32_DC_GP_Tire_p_LStatWhlRdRe;
typedef float32 IDT_float32_DC_GP_Tire_p_LStatWhlRdFr;
typedef float32 IDT_float32_DC_GP_Tire_p_LTireRlxAxlFr;
typedef float32 IDT_float32_DC_GP_Tire_p_LTireRlxAxlRe;
typedef float32 IDT_float32_DC_GP_Tire_p_PacjkA2Fr;
typedef float32 IDT_float32_DC_GP_Tire_p_PacjkBFr;
typedef float32 IDT_float32_DC_GP_Tire_p_PacjkCFr;
typedef float32 IDT_float32_DC_GP_Tire_p_PacjkEFr;
typedef float32 IDT_float32_DC_GP_Tire_p_FacTireRdScaMaxFr;
typedef float32 IDT_float32_DC_GP_Tire_p_FacTireRdScaMinFr;
typedef float32 IDT_float32_DC_GP_Tire_p_FacTireRdScaMaxRe;
typedef float32 IDT_float32_DC_GP_Tire_p_FacTireRdScaMinRe;
typedef uint32 IDT_uint32_DC_GP_Suspn_p_CrnrStfnFr;
typedef uint32 IDT_uint32_DC_GP_Suspn_p_CrnrStfnRe;
typedef uint16 IDT_uint16_DC_GP_Suspn_p_FDampGasRe;
typedef uint16 IDT_uint16_DC_GP_Suspn_p_FDampGasFr;
typedef float32 IDT_float32_DC_GP_Suspn_p_DampPstnRodDiaFr;
typedef float32 IDT_float32_DC_GP_Suspn_p_DampPstnRodDiaRe;
typedef float32 IDT_float32_DC_GP_Suspn_p_DampPstnDiaFr;
typedef float32 IDT_float32_DC_GP_Suspn_p_DampPstnDiaRe;
typedef float32 IDT_float32_DC_GP_Suspn_p_ICnstSafeCmprOr1VlvFr;
typedef float32 IDT_float32_DC_GP_Suspn_p_ICnstSafeRbndFr;
typedef float32 IDT_float32_DC_GP_Suspn_p_ICnstSafeCmprOr1VlvRe;
typedef float32 IDT_float32_DC_GP_Suspn_p_ICnstSafeRbndRe;
typedef float32 IDT_float32_DC_GP_Suspn_p_IDampMax;
typedef float32 IDT_float32_DC_GP_Suspn_p_AntiRollBarStfnFr;
typedef float32 IDT_float32_DC_GP_Suspn_p_AntiRollBarStfnRe;
typedef float32 IDT_float32_DC_GP_Suspn_p_AddlStfnRe;
typedef float32 IDT_float32_DC_GP_Suspn_p_AddlStfnFr;
typedef float32 IDT_float32_DC_GP_Suspn_p_AirSprgVol1Fr;
typedef float32 IDT_float32_DC_GP_Suspn_p_AirSprgVol2Fr;
typedef float32 IDT_float32_DC_GP_Suspn_p_AirSprgVol1Re;
typedef float32 IDT_float32_DC_GP_Suspn_p_AirSprgVol2Re;
typedef float32 IDT_float32_DC_GP_Stg_p_ReAxlStgSpndlPosnToAg;
typedef float32 IDT_float32_DC_GP_Stg_p_StgRackPosnReMax;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var1;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var2;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var3;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var4;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var5;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var6;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var7;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var8;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var9;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var10;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var11;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var12;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var13;
typedef float32 IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var14;
typedef float32 IDT_float32_DC_GP_Posn_p_HeiCog;
typedef float32 IDT_float32_DC_GP_Posn_p_LCogToAxlFrAvg;
typedef float32 IDT_float32_DC_GP_Posn_p_LCogToAxlReAvg;
typedef float32 IDT_float32_DC_GP_Posn_p_AxlMntFr;
typedef float32 IDT_float32_DC_GP_Posn_p_AxlMntRe;
typedef uint8 ObjectDetection_AT_ConfirmationBit;
typedef uint32 ObjectDetection_ConfirmationBits_confBitPrecedingL1ObjID_type;
typedef uint32 ObjectDetection_ConfirmationBits_confBitPrecedingL2ObjID_type;
typedef uint32 ObjectDetection_ConfirmationBits_confBitPrecedingL3ObjID_type;
typedef uint32 ObjectDetection_ConfirmationBits_confBitOncomingL2ObjID_type;
typedef uint32 ObjectDetection_ConfirmationBits_confBitOncomingL3ObjID_type;
typedef uint32 ObjectDetection_ConfirmationBits_confBitCrossingL1ObjID_type;
typedef uint32 ObjectDetection_ConfirmationBits_confBitCrossingL2ObjID_type;
typedef uint32 ObjectDetection_ConfirmationBits_confBitCrossingL3ObjID_type;
typedef uint32 ObjectDetection_ConfirmationBits_confBitEgoTurningL3ObjID_type;
typedef uint8 ObjectDetection_AT_CutInLevel;
typedef uint8 ObjectDetection_AT_FunctionStatus;
typedef uint8 ObjectDetection_AT_Intruder;
typedef uint32 ObjectDetection_objects_eventData_timestampSeconds_type;
typedef uint32 ObjectDetection_objects_eventData_timestampNanoseconds_type;
typedef uint8 ObjectDetection_AT_TimestampStatus;
typedef uint16 ObjectDetection_objects_eventData_timestampLapNumber_type;
typedef uint32 ObjectDetection_objects_eventData_cipvObjectId_type;
typedef uint8 RoadAttributes_AttributeDouble_id_type;
typedef uint16 RoadAttributes_AttributeDouble_distance_type;
typedef uint8 RoadAttributes_AttributeDouble_value1_type;
typedef uint8 RoadAttributes_AttributeDouble_value2_type;
typedef uint8 RoadAttributes_AttributeDouble_source_type;
typedef uint8 RoadAttributes_AttributeDoubleEgo_id_type;
typedef uint8 RoadAttributes_AttributeDoubleEgo_value1_type;
typedef uint8 RoadAttributes_AttributeDoubleEgo_value2_type;
typedef uint8 RoadAttributes_AttributeDoubleEgo_source_type;
typedef uint8 RoadAttributes_AttributeEgoSpeedLimit_id_type;
typedef uint8 RoadAttributes_AttributeEgoSpeedLimit_distanceStdDev_type;
typedef uint8 RoadAttributes_AttributeEgoSpeedLimit_value_type;
typedef sint8 RoadAttributes_AttributeEgoSpeedLimit_indexAdditionalSignList_base_type;
typedef uint8 RoadAttributes_AttributeEgoSpeedLimit_source_type;
typedef uint8 RoadAttributes_AT_SpeedlimitUnit;
typedef uint8 RoadAttributes_AttributeSingle_id_type;
typedef uint16 RoadAttributes_AttributeSingle_distance_type;
typedef uint8 RoadAttributes_AttributeSingle_value1_type;
typedef uint8 RoadAttributes_AttributeSingle_source_type;
typedef uint8 RoadAttributes_AttributeSingleEgo_id_type;
typedef uint8 RoadAttributes_AttributeSingleEgo_value1_type;
typedef uint8 RoadAttributes_AttributeSingleEgo_source_type;
typedef uint8 RoadAttributes_AttributeSingleSigned_id_type;
typedef uint16 RoadAttributes_AttributeSingleSigned_distance_type;
typedef sint8 RoadAttributes_AttributeSingleSigned_value1_type;
typedef uint8 RoadAttributes_AttributeSingleSigned_source_type;
typedef uint8 RoadAttributes_AttributeSingleSignedEgo_id_type;
typedef sint8 RoadAttributes_AttributeSingleSignedEgo_value1_type;
typedef uint8 RoadAttributes_AttributeSingleSignedEgo_source_type;
typedef uint8 RoadAttributes_AttributeTriple_id_type;
typedef uint16 RoadAttributes_AttributeTriple_distance_type;
typedef uint8 RoadAttributes_AttributeTriple_value1_type;
typedef uint8 RoadAttributes_AttributeTriple_value2_type;
typedef uint8 RoadAttributes_AttributeTriple_value3_type;
typedef uint8 RoadAttributes_AttributeTriple_source_type;
typedef uint8 RoadAttributes_AttributeTripleEgo_id_type;
typedef uint8 RoadAttributes_AttributeTripleEgo_value1_type;
typedef uint8 RoadAttributes_AttributeTripleEgo_value2_type;
typedef uint8 RoadAttributes_AttributeTripleEgo_value3_type;
typedef uint8 RoadAttributes_AttributeTripleEgo_source_type;
typedef uint8 RoadAttributes_AT_DayTimeDefinition;
typedef uint16 RoadAttributes_EgoInformation_relativeYawAngle_type;
typedef uint8 RoadAttributes_AT_counter;
typedef float32 RoadAttributes_Slope_slope_type;
typedef uint16 RoadAttributes_Slope_distance_type;
typedef sint32 RoadAttributes_GeoPosition_latitude_type;
typedef sint32 RoadAttributes_GeoPosition_longitude_type;
typedef float32 RoadAttributes_GeoPosition_heading_type;
typedef uint8 RoadAttributes_AT_Guidance;
typedef uint8 RoadAttributes_AT_MapOffroad;
typedef uint8 RoadAttributes_AT_MppStatus;
typedef uint16 RoadAttributes_MetaDataDefinition_mppLength_type;
typedef uint16 RoadAttributes_MetaDataDefinition_mppLaneAccurate_type;
typedef uint16 RoadAttributes_MetaDataDefinition_mppChangedPosition_type;
typedef uint8 RoadAttributes_AT_StatusInterface;
typedef uint8 RoadAttributes_AT_SensorStatus;
typedef uint16 RoadAttributes_MetaDataDefinition_countryCode_type;
typedef uint8 RoadAttributes_MetaDataDefinition_countryCodeAlpha3_base_type;
typedef uint16 RoadAttributes_MetaDataDefinition_nextCountryDistance_type;
typedef uint16 RoadAttributes_MetaDataDefinition_nextCountryCode_type;
typedef uint8 RoadAttributes_MetaDataDefinition_nextCountryCodeAlpha3_base_type;
typedef uint8 RoadAttributes_MetaDataDefinition_regionCode_base_type;
typedef uint16 RoadAttributes_MetaDataDefinition_nextRegionDistance_type;
typedef uint8 RoadAttributes_MetaDataDefinition_nextRegionCode_base_type;
typedef uint8 RoadAttributes_AT_TrafficHandedness;
typedef uint32 RoadAttributes_VehicleTimestamp_preciseLocalTimeSeconds_type;
typedef uint32 RoadAttributes_VehicleTimestamp_preciseLocalTimeNanoseconds_type;
typedef sint32 RoadAttributes_PoseKL152D_x_type;
typedef sint32 RoadAttributes_PoseKL152D_y_type;
typedef float32 RoadAttributes_PoseKL152D_yaw_type;
typedef uint8 RoadAttributes_MetaDataDefinition_reducedVisibility_type;
typedef uint8 RoadAttributes_MetaDataDefinition_weatherCondition_type;
typedef uint8 RoadAttributes_AT_RGVersion;
typedef uint8 RoadAttributesExtended_AdditionalSign_type_type;
typedef uint16 RoadAttributesExtended_GenericSignValue_value1_type;
typedef uint16 RoadAttributesExtended_GenericSignValue_value2_type;
typedef uint8 RoadAttributesExtended_AdditionalSign_content_base_type;
typedef uint8 RoadAttributesExtended_AdditionalSign_id_type;
typedef uint8 RoadAttributesExtended_AT_AllowedManeuvers;
typedef uint8 RoadAttributesExtended_AttributeConnectedSpeed_id_type;
typedef sint16 RoadAttributesExtended_AttributeConnectedSpeed_distance_type;
typedef uint8 RoadAttributesExtended_AttributeConnectedSpeed_distanceStdDev_type;
typedef uint8 RoadAttributesExtended_AttributeConnectedSpeed_speed_type;
typedef uint8 RoadAttributesExtended_AttributeConnectedSpeed_confidence_type;
typedef uint8 RoadAttributesExtended_AttributeCurvature_id_base_type;
typedef uint16 RoadAttributesExtended_AttributeCurvature_distance_base_type;
typedef sint16 RoadAttributesExtended_AttributeCurvature_curvature_base_type;
typedef uint8 RoadAttributesExtended_AttributeCurvature_source_base_type;
typedef sint8 RoadAttributesExtended_AttributeCurvature_branchingAngle_base_type;
typedef uint8 RoadAttributesExtended_AT_counter;
typedef uint8 RoadAttributesExtended_AttributeDouble_id_type;
typedef uint16 RoadAttributesExtended_AttributeDouble_distance_type;
typedef uint8 RoadAttributesExtended_AttributeDouble_value1_type;
typedef uint8 RoadAttributesExtended_AttributeDouble_value2_type;
typedef uint8 RoadAttributesExtended_AttributeDouble_source_type;
typedef uint8 RoadAttributesExtended_AttributeEgoSpeedLimit_id_type;
typedef uint8 RoadAttributesExtended_AttributeEgoSpeedLimit_distanceStdDev_type;
typedef uint8 RoadAttributesExtended_AttributeEgoSpeedLimit_value_type;
typedef sint8 RoadAttributesExtended_AttributeEgoSpeedLimit_indexAdditionalSignList_base_type;
typedef uint8 RoadAttributesExtended_AttributeEgoSpeedLimit_source_type;
typedef uint8 RoadAttributesExtended_AT_SpeedlimitUnit;
typedef uint8 RoadAttributesExtended_AttributeLocalHazard_id_type;
typedef uint16 RoadAttributesExtended_AttributeLocalHazard_distance_type;
typedef uint32 RoadAttributesExtended_AttributeLocalHazard_trafficIncidentID_type;
typedef uint32 RoadAttributesExtended_AttributeLocalHazard_combinedEventCode_type;
typedef uint8 RoadAttributesExtended_AT_LocalHazardType;
typedef uint8 RoadAttributesExtended_AttributePointSpeedLimit_id_type;
typedef uint16 RoadAttributesExtended_AttributePointSpeedLimit_distance_type;
typedef uint8 RoadAttributesExtended_AttributePointSpeedLimit_distanceStdDev_type;
typedef uint8 RoadAttributesExtended_GenericValue_value1_type;
typedef uint8 RoadAttributesExtended_GenericValue_value2_type;
typedef sint8 RoadAttributesExtended_AttributePointSpeedLimit_indexAdditionalSignList_base_type;
typedef uint8 RoadAttributesExtended_AttributePointSpeedLimit_source_type;
typedef uint8 RoadAttributesExtended_AT_SpeedlimitRelevance;
typedef uint8 RoadAttributesExtended_AttributeOnlineInformation_speedCourseListABucketType_type;
typedef uint8 RoadAttributesExtended_AttributeOnlineInformation_speedCourseListAStatisticsType_type;
typedef uint8 RoadAttributesExtended_AttributeOnlineInformation_speedCourseListBBucketType_type;
typedef uint8 RoadAttributesExtended_AttributeOnlineInformation_speedCourseListBStatisticsType_type;
typedef uint8 RoadAttributesExtended_AttributeSingle_id_type;
typedef uint16 RoadAttributesExtended_AttributeSingle_distance_type;
typedef uint8 RoadAttributesExtended_AttributeSingle_value1_type;
typedef uint8 RoadAttributesExtended_AttributeSingle_source_type;
typedef uint8 RoadAttributesExtended_AttributeRoadObstacle_id_type;
typedef uint16 RoadAttributesExtended_AttributeRoadObstacle_distance_type;
typedef uint8 RoadAttributesExtended_AT_RoadObstacleType;
typedef uint16 RoadAttributesExtended_AttributeRoadObstacle_height_type;
typedef uint16 RoadAttributesExtended_AttributeRoadObstacle_length_type;
typedef uint8 RoadAttributesExtended_AT_RoadObstaclePosition;
typedef uint16 RoadAttributesExtended_AttributeRoadObstacle_lane_type;
typedef uint8 RoadAttributesExtended_AttributeRoadObstacle_crossingProbability_type;
typedef uint8 RoadAttributesExtended_AttributeRoadObstacle_source_type;
typedef uint8 RoadAttributesExtended_AttributePointGeneric_id_type;
typedef uint16 RoadAttributesExtended_AttributePointGeneric_distance_type;
typedef uint8 RoadAttributesExtended_AttributePointGeneric_source_type;
typedef uint8 RoadAttributesExtended_AttributePointGenericStdDev_id_type;
typedef uint16 RoadAttributesExtended_AttributePointGenericStdDev_distance_type;
typedef uint8 RoadAttributesExtended_AttributePointGenericStdDev_distanceStdDev_type;
typedef uint8 RoadAttributesExtended_AttributePointGenericStdDev_source_type;
typedef uint8 RoadAttributesExtended_AttributePointRightOfWay_id_type;
typedef uint8 RoadAttributesExtended_AttributePointRightOfWay_referenceIdStopLine_type;
typedef uint8 RoadAttributesExtended_AttributePointRightOfWay_referenceIdIntersection_type;
typedef uint16 RoadAttributesExtended_AttributePointRightOfWay_distance_type;
typedef uint8 RoadAttributesExtended_AttributePointRightOfWay_value_type;
typedef sint8 RoadAttributesExtended_AttributePointRightOfWay_indexAdditionalSignList_base_type;
typedef uint8 RoadAttributesExtended_AttributePointRightOfWay_source_type;
typedef uint8 RoadAttributesExtended_AttributePointTrafficSign_id_type;
typedef uint16 RoadAttributesExtended_AttributePointTrafficSign_distance_type;
typedef uint8 RoadAttributesExtended_AttributePointTrafficSign_type_type;
typedef uint8 RoadAttributesExtended_AttributePointTrafficSign_value_type;
typedef sint8 RoadAttributesExtended_AttributePointTrafficSign_indexAdditionalSignList_base_type;
typedef uint8 RoadAttributesExtended_AttributePointTrafficSign_source_type;
typedef uint8 RoadAttributesExtended_AttributeSingleSigned_id_type;
typedef uint16 RoadAttributesExtended_AttributeSingleSigned_distance_type;
typedef sint8 RoadAttributesExtended_AttributeSingleSigned_value1_type;
typedef uint8 RoadAttributesExtended_AttributeSingleSigned_source_type;
typedef uint8 RoadAttributesExtended_AttributeSlope_id_base_type;
typedef uint16 RoadAttributesExtended_AttributeSlope_distance_base_type;
typedef sint8 RoadAttributesExtended_AttributeSlope_slope_base_type;
typedef uint8 RoadAttributesExtended_AttributeSlope_source_base_type;
typedef uint8 RoadAttributesExtended_AttributeTriple_id_type;
typedef uint16 RoadAttributesExtended_AttributeTriple_distance_type;
typedef uint8 RoadAttributesExtended_AttributeTriple_value1_type;
typedef uint8 RoadAttributesExtended_AttributeTriple_value2_type;
typedef uint8 RoadAttributesExtended_AttributeTriple_value3_type;
typedef uint8 RoadAttributesExtended_AttributeTriple_source_type;
typedef uint8 RoadAttributesExtended_AT_MovementPhaseState;
typedef uint8 RoadAttributesExtended_Phase_confidence_type;
typedef uint8 RoadAttributesExtended_Phase_timeToChange_type;
typedef uint8 RoadAttributesExtended_Phase_timeToChangeMin_type;
typedef uint8 RoadAttributesExtended_Phase_timeToChangeMax_type;
typedef uint8 RoadAttributesExtended_AT_TrafficLightLayout;
typedef uint8 RoadAttributesExtended_TrafficLightSignalGroup_id_type;
typedef uint8 RoadAttributesExtended_TrafficLightSignalGroup_referenceIdStopLine_base_type;
typedef uint8 RoadAttributesExtended_TrafficLightSignalGroup_referenceIdIntersection_type;
typedef uint16 RoadAttributesExtended_TrafficLightSignalGroup_distance_type;
typedef uint8 RoadAttributesExtended_TrafficLightSignalGroup_source_type;
typedef uint32 RoadAttributesExtended_TrafficLightSignalGroup_signalGroupID_type;
typedef uint32 RoadAttributesExtended_TrafficLightSignalGroup_regionID_type;
typedef uint32 RoadAttributesExtended_TrafficLightSignalGroup_intersectionID_type;
typedef uint32 RoadAttributesExtended_VehicleTimestamp_preciseLocalTimeSeconds_type;
typedef uint32 RoadAttributesExtended_VehicleTimestamp_preciseLocalTimeNanoseconds_type;
typedef uint8 availabilityBitfield_1[1];

 /* Used to hold the identifiers for the ModeDeclarations of a ModeDeclarationGroup */


typedef uint8 Rte_ModeType_MDG_SSM_AvlMd;


 /* Used to hold the identifiers for the ModeDeclarations of a ModeDeclarationGroup */


typedef uint8 Rte_ModeType_BswMSdClientServiceStateModeGroup;


 /* Used to hold the identifiers for the ModeDeclarations of a ModeDeclarationGroup */


typedef uint8 Rte_ModeType_BswMSdClientServiceCurrentStateModeGroup;


 /* Used to hold the identifiers for the ModeDeclarations of a ModeDeclarationGroup */


typedef uint8 Rte_ModeType_BswMSdConsumedEventGroupStateModeGroup;


 /* Used to hold the identifiers for the ModeDeclarations of a ModeDeclarationGroup */


typedef uint8 Rte_ModeType_BswMSdConsumedEventGroupCurrentStateModeGroup;


 /* Represents the transformer class in which the error occurred. */
typedef uint8 Rte_TransformerClass;
typedef ObjectDetection_AT_ObjectClass ObjectDetection_Objects_objectClass[20];
typedef ObjectDetection_Objects_objectID_base_type ObjectDetection_Objects_objectID[20];
typedef ObjectDetection_AT_HistoryFlag ObjectDetection_Objects_history[20];
typedef ObjectDetection_Objects_existenceProbability_base_type
  ObjectDetection_Objects_existenceProbability[20];
typedef ObjectDetection_Objects_age_base_type ObjectDetection_Objects_age[20];
typedef ObjectDetection_Objects_objectClassProbability_base_type
  ObjectDetection_Objects_objectClassProbability[20];
typedef ObjectDetection_Objects_timeToCollisionFront_base_type
  ObjectDetection_Objects_timeToCollisionFront[20];
typedef ObjectDetection_Objects_timeToCollisionFrontSD_base_type
  ObjectDetection_Objects_timeToCollisionFrontSD[20];
typedef ObjectDetection_Objects_inverseTimeToCollisionImagePlane_base_type
  ObjectDetection_Objects_inverseTimeToCollisionImagePlane[20];
typedef ObjectDetection_Objects_inverseTimeToCollisionImagePlaneSD_base_type
  ObjectDetection_Objects_inverseTimeToCollisionImagePlaneSD[20];
typedef ObjectDetection_Objects_azimuthAngle_base_type ObjectDetection_Objects_azimuthAngle[20];
typedef ObjectDetection_Objects_azimuthAngleSD_base_type ObjectDetection_Objects_azimuthAngleSD[20];
typedef ObjectDetection_Objects_elevationAngle_base_type ObjectDetection_Objects_elevationAngle[20];
typedef ObjectDetection_Objects_elevationAngleSD_base_type
  ObjectDetection_Objects_elevationAngleSD[20];
typedef ObjectDetection_Objects_radialDistance_base_type ObjectDetection_Objects_radialDistance[20];
typedef ObjectDetection_Objects_radialDistanceSD_base_type
  ObjectDetection_Objects_radialDistanceSD[20];
typedef ObjectDetection_Objects_deltaElevation_base_type ObjectDetection_Objects_deltaElevation[20];
typedef ObjectDetection_Objects_deltaElevationSD_base_type
  ObjectDetection_Objects_deltaElevationSD[20];
typedef ObjectDetection_Objects_yawAngle_base_type ObjectDetection_Objects_yawAngle[20];
typedef ObjectDetection_Objects_yawAngleSD_base_type ObjectDetection_Objects_yawAngleSD[20];
typedef ObjectDetection_Objects_angleSpeed_base_type ObjectDetection_Objects_angleSpeed[20];
typedef ObjectDetection_Objects_angleSpeedSD_base_type ObjectDetection_Objects_angleSpeedSD[20];
typedef ObjectDetection_Objects_angleFrontLeft_base_type ObjectDetection_Objects_angleFrontLeft[20];
typedef ObjectDetection_Objects_angleFrontLeftSD_base_type
  ObjectDetection_Objects_angleFrontLeftSD[20];
typedef ObjectDetection_Objects_angleFrontRight_base_type
  ObjectDetection_Objects_angleFrontRight[20];
typedef ObjectDetection_Objects_angleFrontRightSD_base_type
  ObjectDetection_Objects_angleFrontRightSD[20];
typedef ObjectDetection_Objects_angleRearLeft_base_type ObjectDetection_Objects_angleRearLeft[20];
typedef ObjectDetection_Objects_angleRearLeftSD_base_type
  ObjectDetection_Objects_angleRearLeftSD[20];
typedef ObjectDetection_Objects_angleRearRight_base_type ObjectDetection_Objects_angleRearRight[20];
typedef ObjectDetection_Objects_angleRearRightSD_base_type
  ObjectDetection_Objects_angleRearRightSD[20];
typedef ObjectDetection_Objects_overlapAngleEgoLaneRight_base_type
  ObjectDetection_Objects_overlapAngleEgoLaneRight[20];
typedef ObjectDetection_Objects_overlapAngleEgoLaneLeft_base_type
  ObjectDetection_Objects_overlapAngleEgoLaneLeft[20];
typedef ObjectDetection_AT_DetectionMethod ObjectDetection_Objects_measurementSource[20];
typedef ObjectDetection_AT_ReferencePoint ObjectDetection_Objects_referencePoint[20];
typedef ObjectDetection_AT_IndicatorLeft ObjectDetection_Objects_indicatorLeft[20];
typedef ObjectDetection_AT_IndicatorRight ObjectDetection_Objects_indicatorRight[20];
typedef ObjectDetection_AT_BrakeLights ObjectDetection_Objects_brakelight[20];
typedef ObjectDetection_AT_Stationary ObjectDetection_Objects_stationary[20];
typedef ObjectDetection_AT_Lanes ObjectDetection_Objects_lanes[20];
typedef ObjectDetection_AT_SafetyIndication ObjectDetection_Objects_safetyIndication[20];
typedef ObjectDetection_Objects_width_base_type ObjectDetection_Objects_width[20];
typedef ObjectDetection_Objects_widthSD_base_type ObjectDetection_Objects_widthSD[20];
typedef ObjectDetection_Objects_length_base_type ObjectDetection_Objects_length[20];
typedef ObjectDetection_Objects_lengthSD_base_type ObjectDetection_Objects_lengthSD[20];
typedef struct _E3BaseTypeBoolean_ E3BaseTypeBoolean;
struct _E3BaseTypeBoolean_ {
   IDT_boolean Val;
   IDT_uint8 Clas;
};
typedef struct _E3BaseTypeFloat_ E3BaseTypeFloat;
struct _E3BaseTypeFloat_ {
   IDT_float32 Val;
   IDT_uint8 Clas;
};
typedef struct _E3BaseTypeS16_ E3BaseTypeS16;
struct _E3BaseTypeS16_ {
   IDT_sint16 Val;
   IDT_uint8 Clas;
};
typedef struct _E3BaseTypeS32_ E3BaseTypeS32;
struct _E3BaseTypeS32_ {
   IDT_sint32 Val;
   IDT_uint8 Clas;
};
typedef struct _E3BaseTypeS8_ E3BaseTypeS8;
struct _E3BaseTypeS8_ {
   IDT_sint8 Val;
   IDT_uint8 Clas;
};
typedef struct _E3BaseTypeU16_ E3BaseTypeU16;
struct _E3BaseTypeU16_ {
   IDT_uint16 Val;
   IDT_uint8 Clas;
};
typedef struct _E3BaseTypeU32_ E3BaseTypeU32;
struct _E3BaseTypeU32_ {
   IDT_uint32 Val;
   IDT_uint8 Clas;
};
typedef struct _E3BaseTypeU8_ E3BaseTypeU8;
struct _E3BaseTypeU8_ {
   IDT_uint8 Val;
   IDT_uint8 Clas;
};
typedef struct _E3BaseTypeU8_24_ E3BaseTypeU8_24;
typedef IDT_uint8 IDT_uint8_24[24];
struct _E3BaseTypeU8_24_ {
   IDT_uint8_24 Val;
   IDT_uint8 Clas;
};
typedef struct _E3BaseTypeU8_40_ E3BaseTypeU8_40;
typedef IDT_uint8 IDT_uint8_40[40];
struct _E3BaseTypeU8_40_ {
   IDT_uint8_40 Val;
   IDT_uint8 Clas;
};
typedef struct _E3BaseTypeU8_5_ E3BaseTypeU8_5;
typedef IDT_uint8 IDT_uint8_5[5];
struct _E3BaseTypeU8_5_ {
   IDT_uint8_5 Val;
   IDT_uint8 Clas;
};
typedef struct _E3BaseTypeU8_8_ E3BaseTypeU8_8;
typedef IDT_uint8 IDT_uint8_8[8];
struct _E3BaseTypeU8_8_ {
   IDT_uint8_8 Val;
   IDT_uint8 Clas;
};
typedef struct _E3ExtdTypeFloatFct_ E3ExtdTypeFloatFct;
struct _E3ExtdTypeFloatFct_ {
   IDT_float32 Val;
   IDT_uint8 Clas;
   IDT_uint8 QlfrFct;
};
typedef struct _E3ExtdTypeFloatFctTi_ E3ExtdTypeFloatFctTi;
struct _E3ExtdTypeFloatFctTi_ {
   IDT_float32 Val;
   IDT_uint8 Clas;
   IDT_uint8 QlfrFct;
   IDT_uint32 Ti;
};
typedef struct _E3ExtdTypeS16Fct_ E3ExtdTypeS16Fct;
struct _E3ExtdTypeS16Fct_ {
   IDT_sint16 Val;
   IDT_uint8 Clas;
   IDT_uint8 QlfrFct;
};
typedef struct _E3ExtdTypeS32Fct_ E3ExtdTypeS32Fct;
struct _E3ExtdTypeS32Fct_ {
   IDT_sint32 Val;
   IDT_uint8 Clas;
   IDT_uint8 QlfrFct;
};
typedef struct _E3ExtdTypeS8Fct_ E3ExtdTypeS8Fct;
struct _E3ExtdTypeS8Fct_ {
   IDT_sint8 Val;
   IDT_uint8 Clas;
   IDT_uint8 QlfrFct;
};
typedef struct _E3ExtdTypeU16Fct_ E3ExtdTypeU16Fct;
struct _E3ExtdTypeU16Fct_ {
   IDT_uint16 Val;
   IDT_uint8 Clas;
   IDT_uint8 QlfrFct;
};
typedef struct _E3ExtdTypeU32Fct_ E3ExtdTypeU32Fct;
struct _E3ExtdTypeU32Fct_ {
   IDT_uint32 Val;
   IDT_uint8 Clas;
   IDT_uint8 QlfrFct;
};
typedef struct _E3ExtdTypeU8Fct_ E3ExtdTypeU8Fct;
struct _E3ExtdTypeU8Fct_ {
   IDT_uint8 Val;
   IDT_uint8 Clas;
   IDT_uint8 QlfrFct;
};
typedef struct _IDT_CodSwt_ IDT_CodSwt;
struct _IDT_CodSwt_ {
   IDT_uint8 Manufacturer;
   IDT_uint8 Segment;
   IDT_uint8 Generation;
   IDT_uint8 Variant;
   IDT_uint8 WghRngFr;
   IDT_uint8 WghRngRe;
   IDT_uint8 DampVrn;
   IDT_uint8 SuspnVrn;
   IDT_boolean RollStabPres;
   IDT_uint8 LftSysPres;
   IDT_uint8 BdyASensVrnFrLe;
   IDT_uint8 BdyASensVrnFrRi;
   IDT_uint8 BdyASensVrnReLe;
   IDT_uint8 BdyASensVrnReRi;
   IDT_uint8 WhlASensVrnFrLe;
   IDT_uint8 WhlASensVrnFrRi;
   IDT_uint8 WhlASensVrnReLe;
   IDT_uint8 WhlASensVrnReRi;
   IDT_uint8 RideHeiSensVrnFrLe;
   IDT_uint8 RideHeiSensVrnFrRi;
   IDT_uint8 RideHeiSensVrnReLe;
   IDT_uint8 RideHeiSensVrnReRi;
   IDT_boolean WetSensPres;
   IDT_boolean FrCameraPres;
   IDT_uint8 DrvVrn;
   IDT_uint8 ReDftlVrn;
   IDT_boolean GbxVrn;
   IDT_uint8 DrvSysVrn;
   IDT_uint8 AutGbxVrn;
   IDT_uint8 FrWhlStgVrn;
   IDT_boolean AcvTqVectPres;
   IDT_uint8 ImuVrn;
   IDT_boolean TirePSensPres;
   IDT_uint8 PwrStgVrn;
   IDT_boolean ReWhlStgPres;
   IDT_uint8 NavSysVrn;
   IDT_boolean TrlrPres;
   IDT_boolean CylDeacSysPres;
   IDT_uint8 TirePCtlSysVrn;
   IDT_boolean NavUsePEA;
   IDT_uint8 WhlBasVrn;
   IDT_boolean RainLghtSensPres;
   IDT_uint8 ChVrn;
   IDT_uint8 CpStgWhl;
   IDT_uint8 UnDampMFr;
   IDT_uint8 UnDampMRe;
   IDT_uint8 GbxElm;
   IDT_boolean AlmDev;
   IDT_boolean AcvAeroDynPres;
   IDT_uint8 CodTypSta;
   IDT_uint8 RadarVrn;
   IDT_boolean LooseWhlDetAcv;
   IDT_boolean HldOnDmdVrn;
   IDT_uint8 JamAsiVrn;
   IDT_boolean ExtGridPlugPres;
   IDT_boolean AutEmgcyBrkPednRePres;
   IDT_boolean SmtSpdAsiPres;
   IDT_uint8 AccVrn;
   IDT_uint8 LaneDptWarnVrn;
   IDT_uint8 PrkAsiVrn;
   IDT_boolean TrlrMvrAsiPres;
   IDT_boolean DrvMonCamPres;
   IDT_boolean WirelsChrgSysPres;
   IDT_uint8 ChFctVrn;
   IDT_uint8 DampVlvVrn;
   IDT_boolean TireTDispPres;
   IDT_boolean RoadCdnSensFrLePres;
   IDT_boolean RoadCdnSensFrRiPres;
   IDT_boolean PrfCodPt;
   IDT_boolean PushToPs;
   IDT_boolean TireTEstimPres;
   IDT_boolean GMeterPres;
   IDT_boolean TiltAgDispPres;
};
typedef struct _IDT_CodSwt_Version_ IDT_CodSwt_Version;
struct _IDT_CodSwt_Version_ {
   IDT_uint8 CodSwt_Major_Vers;
   IDT_uint8 CodSwt_Minor_Vers;
};
typedef struct _IDT_DiagBoundCondition_ IDT_DiagBoundCondition;
struct _IDT_DiagBoundCondition_ {
   IDT_boolean VoltRange;
   IDT_boolean Clmp15Acv;
   IDT_boolean DiagDlyEt;
   IDT_boolean DiagStartFr;
   IDT_boolean FrSyncPres;
};
typedef struct _IDT_EcuSMData_ IDT_EcuSMData;
struct _IDT_EcuSMData_ {
   IDT_uint8 STM_CurSt_na;
   IDT_uint8 STM_WkRsn_na;
   IDT_uint16 STM_AcvWkRsn_na;
   IDT_uint8 STM_CurSt_Clas;
};
typedef struct _IDT_GLPA_GlbPrm_ IDT_GLPA_GlbPrm;
typedef IDT_uint8_DC_GP_Vrn_p1_BasLnId IDT_ARRAY_GP_Vrn_p1_BasLnId_12[12];
typedef IDT_float32_DC_GP_VehBdy_p1_AxlLdFr IDT_ARRAY_GP_VehBdy_p1_AxlLdFr_32[32];
typedef IDT_float32_DC_GP_VehBdy_p1_AxlLdRe IDT_ARRAY_GP_VehBdy_p1_AxlLdRe_32[32];
typedef IDT_float32_DC_GP_VehBdy_p1_CAFr IDT_ARRAY_GP_VehBdy_p1_CAFr_5[5];
typedef IDT_float32_DC_GP_VehBdy_p1_CARe IDT_ARRAY_GP_VehBdy_p1_CARe_5[5];
typedef IDT_float32_DC_GP_VehBdy_p1_MUnsprgFr IDT_ARRAY_GP_VehBdy_p1_MUnsprgFr_15[15];
typedef IDT_float32_DC_GP_VehBdy_p1_MUnsprgRe IDT_ARRAY_GP_VehBdy_p1_MUnsprgRe_15[15];
typedef IDT_uint8_DC_GP_VehBdy_p1_StCoLftSetup IDT_ARRAY_GP_VehBdy_p1_StCoLftSetup_10[10];
typedef IDT_float32_DC_GP_VehBdy_p1_CoLftAcvSysFr IDT_ARRAY_GP_VehBdy_p1_CoLftAcvSysFr_10[10];
typedef IDT_float32_DC_GP_VehBdy_p1_CoLftAcvSysRe IDT_ARRAY_GP_VehBdy_p1_CoLftAcvSysRe_10[10];
typedef IDT_float32_DC_GP_Suspn_p1_DampRatRe IDT_ARRAY_GP_Suspn_p1_DampRatRe_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_DampRatFr IDT_ARRAY_GP_Suspn_p1_DampRatFr_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_VDampRe IDT_ARRAY_GP_Suspn_p1_VDampRe_19[19];
typedef IDT_float32_DC_GP_Suspn_p1_VDampFr IDT_ARRAY_GP_Suspn_p1_VDampFr_19[19];
typedef IDT_float32_DC_GP_Suspn_p1_IDampRe IDT_ARRAY_GP_Suspn_p1_IDampRe_11[11];
typedef IDT_float32_DC_GP_Suspn_p1_IDampFr IDT_ARRAY_GP_Suspn_p1_IDampFr_11[11];
typedef IDT_float32_DC_GP_Suspn_p2_FDampRe IDT_ARRAY_GP_Suspn_p2_FDampRe_19_11[19][11];
typedef IDT_float32_DC_GP_Suspn_p2_FDampFr IDT_ARRAY_GP_Suspn_p2_FDampFr_19_11[19][11];
typedef IDT_float32_DC_GP_Suspn_p1_AntiRollBarRatFr IDT_ARRAY_GP_Suspn_p1_AntiRollBarRatFr_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_AntiRollBarRatRe IDT_ARRAY_GP_Suspn_p1_AntiRollBarRatRe_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_BmpStopTrvlRe IDT_ARRAY_GP_Suspn_p1_BmpStopTrvlRe_26[26];
typedef IDT_float32_DC_GP_Suspn_p1_BmpStopTrvlFr IDT_ARRAY_GP_Suspn_p1_BmpStopTrvlFr_26[26];
typedef IDT_float32_DC_GP_Suspn_p1_FBmpStopRe IDT_ARRAY_GP_Suspn_p1_FBmpStopRe_26[26];
typedef IDT_float32_DC_GP_Suspn_p1_FBmpStopFr IDT_ARRAY_GP_Suspn_p1_FBmpStopFr_26[26];
typedef IDT_float32_DC_GP_Suspn_p1_KinDampBmpTrvlRe IDT_ARRAY_GP_Suspn_p1_KinDampBmpTrvlRe_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_KinDampBmpTrvlFr IDT_ARRAY_GP_Suspn_p1_KinDampBmpTrvlFr_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_RelWhlTrvlRe IDT_ARRAY_GP_Suspn_p1_RelWhlTrvlRe_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_RelWhlTrvlFr IDT_ARRAY_GP_Suspn_p1_RelWhlTrvlFr_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_FSprgRatRe IDT_ARRAY_GP_Suspn_p1_FSprgRatRe_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_FSprgRatFr IDT_ARRAY_GP_Suspn_p1_FSprgRatFr_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_AirSprgEfcSurfFr IDT_ARRAY_GP_Suspn_p1_AirSprgEfcSurfFr_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_AirSprgEfcSurfRe IDT_ARRAY_GP_Suspn_p1_AirSprgEfcSurfRe_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_KinSprgTrvlFr IDT_ARRAY_GP_Suspn_p1_KinSprgTrvlFr_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_KinSprgTrvlRe IDT_ARRAY_GP_Suspn_p1_KinSprgTrvlRe_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_SteelSprgStfnFr IDT_ARRAY_GP_Suspn_p1_SteelSprgStfnFr_32[32];
typedef IDT_float32_DC_GP_Suspn_p1_SteelSprgStfnRe IDT_ARRAY_GP_Suspn_p1_SteelSprgStfnRe_32[32];
typedef IDT_float32_DC_GP_Suspn_p1_VolSuspnStrutFrAx IDT_ARRAY_GP_Suspn_p1_VolSuspnStrutFrAx_51[51];
typedef IDT_float32_DC_GP_Suspn_p1_VolSuspnStrutReAx IDT_ARRAY_GP_Suspn_p1_VolSuspnStrutReAx_51[51];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgFrLe
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgFrLe_6[6];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAg_Mdfn
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAg_Mdfn_6[6];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var1
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var1_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var2
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var2_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var3
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var3_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var4
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var4_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var5
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var5_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var6
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var6_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var7
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var7_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var8
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var8_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var9
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var9_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var10
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var10_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var11
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var11_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var12
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var12_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var13
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var13_12[12];
typedef IDT_float32_DC_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var14
    IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var14_12[12];
typedef IDT_float32_DC_GP_Posn_p1_Cog IDT_ARRAY_GP_Posn_p1_Cog_3[3];
typedef IDT_float32_DC_GP_Posn_p1_WhlCenFrLe IDT_ARRAY_GP_Posn_p1_WhlCenFrLe_3[3];
typedef IDT_float32_DC_GP_Posn_p1_WhlCenFrRi IDT_ARRAY_GP_Posn_p1_WhlCenFrRi_3[3];
typedef IDT_float32_DC_GP_Posn_p1_WhlCenReLe IDT_ARRAY_GP_Posn_p1_WhlCenReLe_3[3];
typedef IDT_float32_DC_GP_Posn_p1_WhlCenReRi IDT_ARRAY_GP_Posn_p1_WhlCenReRi_3[3];
typedef IDT_float32_DC_GP_Posn_p1_IMUSafeComp IDT_ARRAY_GP_Posn_p1_IMUSafeComp_3[3];
typedef IDT_float32_DC_GP_Posn_p1_AzBdyFrLe IDT_ARRAY_GP_Posn_p1_AzBdyFrLe_3[3];
typedef IDT_float32_DC_GP_Posn_p1_AzBdyFrRi IDT_ARRAY_GP_Posn_p1_AzBdyFrRi_3[3];
typedef IDT_float32_DC_GP_Posn_p1_AzBdyReLe IDT_ARRAY_GP_Posn_p1_AzBdyReLe_3[3];
typedef IDT_float32_DC_GP_Posn_p1_AzBdyReRi IDT_ARRAY_GP_Posn_p1_AzBdyReRi_3[3];
typedef IDT_float32_DC_GP_Posn_p1_AzWhlFrLe IDT_ARRAY_GP_Posn_p1_AzWhlFrLe_3[3];
typedef IDT_float32_DC_GP_Posn_p1_AzWhlFrRi IDT_ARRAY_GP_Posn_p1_AzWhlFrRi_3[3];
typedef IDT_float32_DC_GP_Posn_p1_AzWhlReLe IDT_ARRAY_GP_Posn_p1_AzWhlReLe_3[3];
typedef IDT_float32_DC_GP_Posn_p1_AzWhlReRi IDT_ARRAY_GP_Posn_p1_AzWhlReRi_3[3];
typedef IDT_float32_DC_GP_Posn_p1_DampDomFrLe IDT_ARRAY_GP_Posn_p1_DampDomFrLe_3[3];
typedef IDT_float32_DC_GP_Posn_p1_DampDomFrRi IDT_ARRAY_GP_Posn_p1_DampDomFrRi_3[3];
typedef IDT_float32_DC_GP_Posn_p1_DampDomReLe IDT_ARRAY_GP_Posn_p1_DampDomReLe_3[3];
typedef IDT_float32_DC_GP_Posn_p1_DampDomReRi IDT_ARRAY_GP_Posn_p1_DampDomReRi_3[3];
typedef IDT_float32_DC_GP_Posn_p1_TrvlDampPlynmFrLe IDT_ARRAY_GP_Posn_p1_TrvlDampPlynmFrLe_6[6];
typedef IDT_float32_DC_GP_Posn_p1_TrvlDampPlynmFrRi IDT_ARRAY_GP_Posn_p1_TrvlDampPlynmFrRi_6[6];
typedef IDT_float32_DC_GP_Posn_p1_TrvlDampPlynmReLe IDT_ARRAY_GP_Posn_p1_TrvlDampPlynmReLe_6[6];
typedef IDT_float32_DC_GP_Posn_p1_TrvlDampPlynmReRi IDT_ARRAY_GP_Posn_p1_TrvlDampPlynmReRi_6[6];
typedef IDT_float32_DC_GP_Posn_p1_RideHeiPlynmFrLe IDT_ARRAY_GP_Posn_p1_RideHeiPlynmFrLe_6[6];
typedef IDT_float32_DC_GP_Posn_p1_RideHeiPlynmFrRi IDT_ARRAY_GP_Posn_p1_RideHeiPlynmFrRi_6[6];
typedef IDT_float32_DC_GP_Posn_p1_RideHeiPlynmReLe IDT_ARRAY_GP_Posn_p1_RideHeiPlynmReLe_6[6];
typedef IDT_float32_DC_GP_Posn_p1_RideHeiPlynmReRi IDT_ARRAY_GP_Posn_p1_RideHeiPlynmReRi_6[6];
typedef IDT_float32_DC_GP_Posn_p1_RideHeiPlynmInvFrLe IDT_ARRAY_GP_Posn_p1_RideHeiPlynmInvFrLe_6[6];
typedef IDT_float32_DC_GP_Posn_p1_RideHeiPlynmInvFrRi IDT_ARRAY_GP_Posn_p1_RideHeiPlynmInvFrRi_6[6];
typedef IDT_float32_DC_GP_Posn_p1_RideHeiPlynmInvReLe IDT_ARRAY_GP_Posn_p1_RideHeiPlynmInvReLe_6[6];
typedef IDT_float32_DC_GP_Posn_p1_RideHeiPlynmInvReRi IDT_ARRAY_GP_Posn_p1_RideHeiPlynmInvReRi_6[6];
struct _IDT_GLPA_GlbPrm_ {
   IDT_ARRAY_GP_Vrn_p1_BasLnId_12 GP_Vrn_p1_BasLnId;
   IDT_uint8_DC_GP_Vrn_p_Brnd GP_Vrn_p_Brnd;
   IDT_uint8_DC_GP_Vrn_p_VehTyp GP_Vrn_p_VehTyp;
   IDT_float32_DC_GP_VehBdy_p_RefAxlLdFr GP_VehBdy_p_RefAxlLdFr;
   IDT_float32_DC_GP_VehBdy_p_RefAxlLdRe GP_VehBdy_p_RefAxlLdRe;
   IDT_ARRAY_GP_VehBdy_p1_AxlLdFr_32 GP_VehBdy_p1_AxlLdFr;
   IDT_ARRAY_GP_VehBdy_p1_AxlLdRe_32 GP_VehBdy_p1_AxlLdRe;
   IDT_float32_DC_GP_VehBdy_p_VChar GP_VehBdy_p_VChar;
   IDT_float32_DC_GP_VehBdy_p_DTarSuspnLvlFr GP_VehBdy_p_DTarSuspnLvlFr;
   IDT_float32_DC_GP_VehBdy_p_DTarSuspnLvlRe GP_VehBdy_p_DTarSuspnLvlRe;
   IDT_float32_DC_GP_VehBdy_p_NrmLvlOfsFr GP_VehBdy_p_NrmLvlOfsFr;
   IDT_float32_DC_GP_VehBdy_p_NrmLvlOfsRe GP_VehBdy_p_NrmLvlOfsRe;
   IDT_float32_DC_GP_VehBdy_p_CalibLvlOfsFr GP_VehBdy_p_CalibLvlOfsFr;
   IDT_float32_DC_GP_VehBdy_p_CalibLvlOfsRe GP_VehBdy_p_CalibLvlOfsRe;
   IDT_float32_DC_GP_VehBdy_p_Cw GP_VehBdy_p_Cw;
   IDT_float32_DC_GP_VehBdy_p_PrjArFr GP_VehBdy_p_PrjArFr;
   IDT_ARRAY_GP_VehBdy_p1_CAFr_5 GP_VehBdy_p1_CAFr;
   IDT_ARRAY_GP_VehBdy_p1_CARe_5 GP_VehBdy_p1_CARe;
   IDT_float32_DC_GP_VehBdy_p_VertMomOfJ GP_VehBdy_p_VertMomOfJ;
   IDT_float32_DC_GP_VehBdy_p_LgtMomOfJ GP_VehBdy_p_LgtMomOfJ;
   IDT_float32_DC_GP_VehBdy_p_LatMomOfJ GP_VehBdy_p_LatMomOfJ;
   IDT_float32_DC_GP_VehBdy_p_BdyMomOfJxx GP_VehBdy_p_BdyMomOfJxx;
   IDT_float32_DC_GP_VehBdy_p_BdyMomOfJyy GP_VehBdy_p_BdyMomOfJyy;
   IDT_float32_DC_GP_VehBdy_p_BdyMomOfJzz GP_VehBdy_p_BdyMomOfJzz;
   IDT_float32_DC_GP_VehBdy_p_MVehAvg GP_VehBdy_p_MVehAvg;
   IDT_float32_DC_GP_VehBdy_p_MVehMax GP_VehBdy_p_MVehMax;
   IDT_float32_DC_GP_VehBdy_p_MVehTrlrMax GP_VehBdy_p_MVehTrlrMax;
   IDT_ARRAY_GP_VehBdy_p1_MUnsprgFr_15 GP_VehBdy_p1_MUnsprgFr;
   IDT_ARRAY_GP_VehBdy_p1_MUnsprgRe_15 GP_VehBdy_p1_MUnsprgRe;
   IDT_float32_DC_GP_VehBdy_p_MaxCmpWhlTrvlFr GP_VehBdy_p_MaxCmpWhlTrvlFr;
   IDT_float32_DC_GP_VehBdy_p_MaxCmpWhlTrvlRe GP_VehBdy_p_MaxCmpWhlTrvlRe;
   IDT_float32_DC_GP_VehBdy_p_MaxRebWhlTrvlFr GP_VehBdy_p_MaxRebWhlTrvlFr;
   IDT_float32_DC_GP_VehBdy_p_MaxRebWhlTrvlRe GP_VehBdy_p_MaxRebWhlTrvlRe;
   IDT_float32_DC_GP_VehBdy_p_LWhlBas GP_VehBdy_p_LWhlBas;
   IDT_float32_DC_GP_VehBdy_p_LTrckWidFr GP_VehBdy_p_LTrckWidFr;
   IDT_float32_DC_GP_VehBdy_p_LTrckWidRe GP_VehBdy_p_LTrckWidRe;
   IDT_ARRAY_GP_VehBdy_p1_StCoLftSetup_10 GP_VehBdy_p1_StCoLftSetup;
   IDT_ARRAY_GP_VehBdy_p1_CoLftAcvSysFr_10 GP_VehBdy_p1_CoLftAcvSysFr;
   IDT_ARRAY_GP_VehBdy_p1_CoLftAcvSysRe_10 GP_VehBdy_p1_CoLftAcvSysRe;
   IDT_float32_DC_GP_Tire_p_RollCofDft GP_Tire_p_RollCofDft;
   IDT_float32_DC_GP_Tire_p_JyDft GP_Tire_p_JyDft;
   IDT_float32_DC_GP_Tire_p_LDynWhlRdRe GP_Tire_p_LDynWhlRdRe;
   IDT_float32_DC_GP_Tire_p_LDynWhlRdFr GP_Tire_p_LDynWhlRdFr;
   IDT_float32_DC_GP_Tire_p_LStatWhlRdRe GP_Tire_p_LStatWhlRdRe;
   IDT_float32_DC_GP_Tire_p_LStatWhlRdFr GP_Tire_p_LStatWhlRdFr;
   IDT_float32_DC_GP_Tire_p_LTireRlxAxlFr GP_Tire_p_LTireRlxAxlFr;
   IDT_float32_DC_GP_Tire_p_LTireRlxAxlRe GP_Tire_p_LTireRlxAxlRe;
   IDT_float32_DC_GP_Tire_p_PacjkA2Fr GP_Tire_p_PacjkA2Fr;
   IDT_float32_DC_GP_Tire_p_PacjkBFr GP_Tire_p_PacjkBFr;
   IDT_float32_DC_GP_Tire_p_PacjkCFr GP_Tire_p_PacjkCFr;
   IDT_float32_DC_GP_Tire_p_PacjkEFr GP_Tire_p_PacjkEFr;
   IDT_float32_DC_GP_Tire_p_FacTireRdScaMaxFr GP_Tire_p_FacTireRdScaMaxFr;
   IDT_float32_DC_GP_Tire_p_FacTireRdScaMinFr GP_Tire_p_FacTireRdScaMinFr;
   IDT_float32_DC_GP_Tire_p_FacTireRdScaMaxRe GP_Tire_p_FacTireRdScaMaxRe;
   IDT_float32_DC_GP_Tire_p_FacTireRdScaMinRe GP_Tire_p_FacTireRdScaMinRe;
   IDT_uint32_DC_GP_Suspn_p_CrnrStfnFr GP_Suspn_p_CrnrStfnFr;
   IDT_uint32_DC_GP_Suspn_p_CrnrStfnRe GP_Suspn_p_CrnrStfnRe;
   IDT_ARRAY_GP_Suspn_p1_DampRatRe_51 GP_Suspn_p1_DampRatRe;
   IDT_ARRAY_GP_Suspn_p1_DampRatFr_51 GP_Suspn_p1_DampRatFr;
   IDT_ARRAY_GP_Suspn_p1_VDampRe_19 GP_Suspn_p1_VDampRe;
   IDT_ARRAY_GP_Suspn_p1_VDampFr_19 GP_Suspn_p1_VDampFr;
   IDT_ARRAY_GP_Suspn_p1_IDampRe_11 GP_Suspn_p1_IDampRe;
   IDT_ARRAY_GP_Suspn_p1_IDampFr_11 GP_Suspn_p1_IDampFr;
   IDT_ARRAY_GP_Suspn_p2_FDampRe_19_11 GP_Suspn_p2_FDampRe;
   IDT_ARRAY_GP_Suspn_p2_FDampFr_19_11 GP_Suspn_p2_FDampFr;
   IDT_uint16_DC_GP_Suspn_p_FDampGasRe GP_Suspn_p_FDampGasRe;
   IDT_uint16_DC_GP_Suspn_p_FDampGasFr GP_Suspn_p_FDampGasFr;
   IDT_float32_DC_GP_Suspn_p_DampPstnRodDiaFr GP_Suspn_p_DampPstnRodDiaFr;
   IDT_float32_DC_GP_Suspn_p_DampPstnRodDiaRe GP_Suspn_p_DampPstnRodDiaRe;
   IDT_float32_DC_GP_Suspn_p_DampPstnDiaFr GP_Suspn_p_DampPstnDiaFr;
   IDT_float32_DC_GP_Suspn_p_DampPstnDiaRe GP_Suspn_p_DampPstnDiaRe;
   IDT_float32_DC_GP_Suspn_p_ICnstSafeCmprOr1VlvFr GP_Suspn_p_ICnstSafeCmprOr1VlvFr;
   IDT_float32_DC_GP_Suspn_p_ICnstSafeRbndFr GP_Suspn_p_ICnstSafeRbndFr;
   IDT_float32_DC_GP_Suspn_p_ICnstSafeCmprOr1VlvRe GP_Suspn_p_ICnstSafeCmprOr1VlvRe;
   IDT_float32_DC_GP_Suspn_p_ICnstSafeRbndRe GP_Suspn_p_ICnstSafeRbndRe;
   IDT_float32_DC_GP_Suspn_p_IDampMax GP_Suspn_p_IDampMax;
   IDT_ARRAY_GP_Suspn_p1_AntiRollBarRatFr_51 GP_Suspn_p1_AntiRollBarRatFr;
   IDT_ARRAY_GP_Suspn_p1_AntiRollBarRatRe_51 GP_Suspn_p1_AntiRollBarRatRe;
   IDT_float32_DC_GP_Suspn_p_AntiRollBarStfnFr GP_Suspn_p_AntiRollBarStfnFr;
   IDT_float32_DC_GP_Suspn_p_AntiRollBarStfnRe GP_Suspn_p_AntiRollBarStfnRe;
   IDT_ARRAY_GP_Suspn_p1_BmpStopTrvlRe_26 GP_Suspn_p1_BmpStopTrvlRe;
   IDT_ARRAY_GP_Suspn_p1_BmpStopTrvlFr_26 GP_Suspn_p1_BmpStopTrvlFr;
   IDT_ARRAY_GP_Suspn_p1_FBmpStopRe_26 GP_Suspn_p1_FBmpStopRe;
   IDT_ARRAY_GP_Suspn_p1_FBmpStopFr_26 GP_Suspn_p1_FBmpStopFr;
   IDT_ARRAY_GP_Suspn_p1_KinDampBmpTrvlRe_51 GP_Suspn_p1_KinDampBmpTrvlRe;
   IDT_ARRAY_GP_Suspn_p1_KinDampBmpTrvlFr_51 GP_Suspn_p1_KinDampBmpTrvlFr;
   IDT_float32_DC_GP_Suspn_p_AddlStfnRe GP_Suspn_p_AddlStfnRe;
   IDT_float32_DC_GP_Suspn_p_AddlStfnFr GP_Suspn_p_AddlStfnFr;
   IDT_ARRAY_GP_Suspn_p1_RelWhlTrvlRe_51 GP_Suspn_p1_RelWhlTrvlRe;
   IDT_ARRAY_GP_Suspn_p1_RelWhlTrvlFr_51 GP_Suspn_p1_RelWhlTrvlFr;
   IDT_ARRAY_GP_Suspn_p1_FSprgRatRe_51 GP_Suspn_p1_FSprgRatRe;
   IDT_ARRAY_GP_Suspn_p1_FSprgRatFr_51 GP_Suspn_p1_FSprgRatFr;
   IDT_ARRAY_GP_Suspn_p1_AirSprgEfcSurfFr_51 GP_Suspn_p1_AirSprgEfcSurfFr;
   IDT_ARRAY_GP_Suspn_p1_AirSprgEfcSurfRe_51 GP_Suspn_p1_AirSprgEfcSurfRe;
   IDT_float32_DC_GP_Suspn_p_AirSprgVol1Fr GP_Suspn_p_AirSprgVol1Fr;
   IDT_float32_DC_GP_Suspn_p_AirSprgVol2Fr GP_Suspn_p_AirSprgVol2Fr;
   IDT_float32_DC_GP_Suspn_p_AirSprgVol1Re GP_Suspn_p_AirSprgVol1Re;
   IDT_float32_DC_GP_Suspn_p_AirSprgVol2Re GP_Suspn_p_AirSprgVol2Re;
   IDT_ARRAY_GP_Suspn_p1_KinSprgTrvlFr_51 GP_Suspn_p1_KinSprgTrvlFr;
   IDT_ARRAY_GP_Suspn_p1_KinSprgTrvlRe_51 GP_Suspn_p1_KinSprgTrvlRe;
   IDT_ARRAY_GP_Suspn_p1_SteelSprgStfnFr_32 GP_Suspn_p1_SteelSprgStfnFr;
   IDT_ARRAY_GP_Suspn_p1_SteelSprgStfnRe_32 GP_Suspn_p1_SteelSprgStfnRe;
   IDT_ARRAY_GP_Suspn_p1_VolSuspnStrutFrAx_51 GP_Suspn_p1_VolSuspnStrutFrAx;
   IDT_ARRAY_GP_Suspn_p1_VolSuspnStrutReAx_51 GP_Suspn_p1_VolSuspnStrutReAx;
   IDT_float32_DC_GP_Stg_p_ReAxlStgSpndlPosnToAg GP_Stg_p_ReAxlStgSpndlPosnToAg;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgFrLe_6 GP_Stg_p1_FrAxlStgSpndlPosnToAgFrLe;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAg_Mdfn_6 GP_Stg_p1_FrAxlStgSpndlPosnToAg_Mdfn;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var1_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var1;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var2_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var2;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var3_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var3;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var4_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var4;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var5_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var5;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var6_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var6;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var7_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var7;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var8_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var8;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var9_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var9;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var10_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var10;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var11_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var11;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var12_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var12;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var13_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var13;
   IDT_ARRAY_GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var14_12
    GP_Stg_p1_FrAxlStgSpndlPosnToAgStgWhl_var14;
   IDT_float32_DC_GP_Stg_p_StgRackPosnReMax GP_Stg_p_StgRackPosnReMax;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var1 GP_Stg_p_LMaxSpndlPosnFr_var1;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var2 GP_Stg_p_LMaxSpndlPosnFr_var2;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var3 GP_Stg_p_LMaxSpndlPosnFr_var3;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var4 GP_Stg_p_LMaxSpndlPosnFr_var4;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var5 GP_Stg_p_LMaxSpndlPosnFr_var5;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var6 GP_Stg_p_LMaxSpndlPosnFr_var6;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var7 GP_Stg_p_LMaxSpndlPosnFr_var7;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var8 GP_Stg_p_LMaxSpndlPosnFr_var8;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var9 GP_Stg_p_LMaxSpndlPosnFr_var9;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var10 GP_Stg_p_LMaxSpndlPosnFr_var10;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var11 GP_Stg_p_LMaxSpndlPosnFr_var11;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var12 GP_Stg_p_LMaxSpndlPosnFr_var12;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var13 GP_Stg_p_LMaxSpndlPosnFr_var13;
   IDT_float32_DC_GP_Stg_p_LMaxSpndlPosnFr_var14 GP_Stg_p_LMaxSpndlPosnFr_var14;
   IDT_float32_DC_GP_Posn_p_HeiCog GP_Posn_p_HeiCog;
   IDT_float32_DC_GP_Posn_p_LCogToAxlFrAvg GP_Posn_p_LCogToAxlFrAvg;
   IDT_float32_DC_GP_Posn_p_LCogToAxlReAvg GP_Posn_p_LCogToAxlReAvg;
   IDT_ARRAY_GP_Posn_p1_Cog_3 GP_Posn_p1_Cog;
   IDT_float32_DC_GP_Posn_p_AxlMntFr GP_Posn_p_AxlMntFr;
   IDT_float32_DC_GP_Posn_p_AxlMntRe GP_Posn_p_AxlMntRe;
   IDT_ARRAY_GP_Posn_p1_WhlCenFrLe_3 GP_Posn_p1_WhlCenFrLe;
   IDT_ARRAY_GP_Posn_p1_WhlCenFrRi_3 GP_Posn_p1_WhlCenFrRi;
   IDT_ARRAY_GP_Posn_p1_WhlCenReLe_3 GP_Posn_p1_WhlCenReLe;
   IDT_ARRAY_GP_Posn_p1_WhlCenReRi_3 GP_Posn_p1_WhlCenReRi;
   IDT_ARRAY_GP_Posn_p1_IMUSafeComp_3 GP_Posn_p1_IMUSafeComp;
   IDT_ARRAY_GP_Posn_p1_AzBdyFrLe_3 GP_Posn_p1_AzBdyFrLe;
   IDT_ARRAY_GP_Posn_p1_AzBdyFrRi_3 GP_Posn_p1_AzBdyFrRi;
   IDT_ARRAY_GP_Posn_p1_AzBdyReLe_3 GP_Posn_p1_AzBdyReLe;
   IDT_ARRAY_GP_Posn_p1_AzBdyReRi_3 GP_Posn_p1_AzBdyReRi;
   IDT_ARRAY_GP_Posn_p1_AzWhlFrLe_3 GP_Posn_p1_AzWhlFrLe;
   IDT_ARRAY_GP_Posn_p1_AzWhlFrRi_3 GP_Posn_p1_AzWhlFrRi;
   IDT_ARRAY_GP_Posn_p1_AzWhlReLe_3 GP_Posn_p1_AzWhlReLe;
   IDT_ARRAY_GP_Posn_p1_AzWhlReRi_3 GP_Posn_p1_AzWhlReRi;
   IDT_ARRAY_GP_Posn_p1_DampDomFrLe_3 GP_Posn_p1_DampDomFrLe;
   IDT_ARRAY_GP_Posn_p1_DampDomFrRi_3 GP_Posn_p1_DampDomFrRi;
   IDT_ARRAY_GP_Posn_p1_DampDomReLe_3 GP_Posn_p1_DampDomReLe;
   IDT_ARRAY_GP_Posn_p1_DampDomReRi_3 GP_Posn_p1_DampDomReRi;
   IDT_ARRAY_GP_Posn_p1_TrvlDampPlynmFrLe_6 GP_Posn_p1_TrvlDampPlynmFrLe;
   IDT_ARRAY_GP_Posn_p1_TrvlDampPlynmFrRi_6 GP_Posn_p1_TrvlDampPlynmFrRi;
   IDT_ARRAY_GP_Posn_p1_TrvlDampPlynmReLe_6 GP_Posn_p1_TrvlDampPlynmReLe;
   IDT_ARRAY_GP_Posn_p1_TrvlDampPlynmReRi_6 GP_Posn_p1_TrvlDampPlynmReRi;
   IDT_ARRAY_GP_Posn_p1_RideHeiPlynmFrLe_6 GP_Posn_p1_RideHeiPlynmFrLe;
   IDT_ARRAY_GP_Posn_p1_RideHeiPlynmFrRi_6 GP_Posn_p1_RideHeiPlynmFrRi;
   IDT_ARRAY_GP_Posn_p1_RideHeiPlynmReLe_6 GP_Posn_p1_RideHeiPlynmReLe;
   IDT_ARRAY_GP_Posn_p1_RideHeiPlynmReRi_6 GP_Posn_p1_RideHeiPlynmReRi;
   IDT_ARRAY_GP_Posn_p1_RideHeiPlynmInvFrLe_6 GP_Posn_p1_RideHeiPlynmInvFrLe;
   IDT_ARRAY_GP_Posn_p1_RideHeiPlynmInvFrRi_6 GP_Posn_p1_RideHeiPlynmInvFrRi;
   IDT_ARRAY_GP_Posn_p1_RideHeiPlynmInvReLe_6 GP_Posn_p1_RideHeiPlynmInvReLe;
   IDT_ARRAY_GP_Posn_p1_RideHeiPlynmInvReRi_6 GP_Posn_p1_RideHeiPlynmInvReRi;
};
typedef struct _IDT_Group_ABAH_VMMReq_ IDT_Group_ABAH_VMMReq;
struct _IDT_Group_ABAH_VMMReq_ {
   E3BaseTypeU8 ABAH_HldCtl_StTkovReq;
   E3BaseTypeU8 ABAH_HydBrkAsi_StThReq;
   E3ExtdTypeFloatFct ABAH_LgtLimA_ADmd;
   E3ExtdTypeS8Fct ABAH_LgtLimA_AGrdMaxDec;
   E3BaseTypeU8 ABAH_LgtLimA_StAcv;
   E3BaseTypeU8 ABAH_PreCdn_StReq;
   E3BaseTypeU8 ABAH_WarnBrk_ItReq;
};
typedef struct _IDT_Group_ACA_VMMReq_ IDT_Group_ACA_VMMReq;
struct _IDT_Group_ACA_VMMReq_ {
   E3ExtdTypeFloatFctTi ACA_CrvtCtl_CrvtDmd;
   E3ExtdTypeFloatFctTi ACA_CrvtCtl_CrvtGrdDmd;
   E3ExtdTypeFloatFct ACA_CrvtCtl_FacSsty;
   E3BaseTypeU8 ACA_CrvtCtl_StLimCtlFReq;
   E3BaseTypeU8 ACA_LatCtl_stAcv;
   E3ExtdTypeFloatFct ACA_LgtCtlA_ADmd;
   E3ExtdTypeFloatFct ACA_LgtCtlA_AGrdMaxDec;
   E3ExtdTypeFloatFct ACA_LgtCtlA_AGrdMaxInc;
   E3ExtdTypeFloatFct ACA_LgtCtlA_APredTar;
   E3ExtdTypeFloatFct ACA_LgtCtlA_ATlrHiDyn;
   E3ExtdTypeFloatFct ACA_LgtCtlA_ATlrHiTar;
   E3ExtdTypeFloatFct ACA_LgtCtlA_ATlrLoTar;
   E3BaseTypeU8 ACA_LgtCtlA_MdDeceOnly;
   E3BaseTypeU8 ACA_LgtCtlA_MdTarDyn;
   E3ExtdTypeFloatFct ACA_LgtLimD_DTar;
   E3BaseTypeU8 ACA_LgtLimD_StAcv;
   E3BaseTypeU8 ACA_LgtLimD_StUpd;
   E3ExtdTypeFloatFct ACA_LgtStgy_TiRdyDrvOffDmd;
};
typedef struct _IDT_Group_ACC_VMMReq_ IDT_Group_ACC_VMMReq;
struct _IDT_Group_ACC_VMMReq_ {
   E3ExtdTypeFloatFct ACC_LgtCtlA_ADmd;
   E3ExtdTypeFloatFct ACC_LgtCtlA_AGrdMaxDec;
   E3ExtdTypeFloatFct ACC_LgtCtlA_AGrdMaxInc;
   E3ExtdTypeFloatFct ACC_LgtCtlA_APredTar;
   E3ExtdTypeFloatFct ACC_LgtCtlA_ATlrHiDyn;
   E3ExtdTypeFloatFct ACC_LgtCtlA_ATlrHiTar;
   E3ExtdTypeFloatFct ACC_LgtCtlA_ATlrLoTar;
   E3BaseTypeU8 ACC_LgtCtlA_MdDeceOnly;
   E3BaseTypeU8 ACC_LgtCtlA_MdTarDyn;
   E3ExtdTypeFloatFct ACC_LgtLimD_DTar;
   E3BaseTypeU8 ACC_LgtLimD_StAcv;
   E3BaseTypeU8 ACC_LgtLimD_StUpd;
   E3ExtdTypeFloatFct ACC_LgtStgy_TiRdyDrvOffDmd;
};
typedef struct _IDT_Group_AEBPR_VMMReq_ IDT_Group_AEBPR_VMMReq;
struct _IDT_Group_AEBPR_VMMReq_ {
   E3ExtdTypeFloatFct AEBPR_LgtLimA_ADmd;
   E3BaseTypeU8 AEBPR_LgtLimA_StAcv;
};
typedef struct _IDT_Group_ALDW_VMMReq_ IDT_Group_ALDW_VMMReq;
struct _IDT_Group_ALDW_VMMReq_ {
   E3ExtdTypeFloatFctTi ALDW_CrvtCtl_CrvtGrdDmd;
   E3ExtdTypeFloatFct ALDW_CrvtCtl_FacSsty;
   E3BaseTypeU8 ALDW_StgWhlVib_IdxProfReq;
};
typedef struct _IDT_Group_API_Info_ IDT_Group_API_Info;
struct _IDT_Group_API_Info_ {
   E3BaseTypeFloat API_PrctDrvPed;
   E3BaseTypeFloat API_PrctGrdDrvPed;
   E3BaseTypeU8 API_StDrvPed;
   E3BaseTypeU8 API_StDrvPedCnfd;
};
typedef struct _IDT_Group_ARA_VMMReq_ IDT_Group_ARA_VMMReq;
struct _IDT_Group_ARA_VMMReq_ {
   E3ExtdTypeFloatFctTi ARA_CrvtCtl_CrvtDmd;
   E3ExtdTypeFloatFctTi ARA_CrvtCtl_CrvtGrdDmd;
   E3BaseTypeU8 ARA_LatCtl_StAcv;
   E3ExtdTypeFloatFct ARA_LgtLimA_ADmd;
   E3BaseTypeU8 ARA_LgtLimA_StAcv;
   E3BaseTypeU8 ARA_LgtLimV_StAcv;
   E3ExtdTypeFloatFct ARA_LgtLimV_VDmd;
   E3BaseTypeU8 ARA_PrkCtl_StAlyReq;
   E3ExtdTypeFloatFct ARA_SlipAgCtl_AgDmd;
};
typedef struct _IDT_Group_BCS_BrkStrIdx_ IDT_Group_BCS_BrkStrIdx;
struct _IDT_Group_BCS_BrkStrIdx_ {
   E3BaseTypeFloat BCS_BrkStrIdx_FrLe;
   E3BaseTypeFloat BCS_BrkStrIdx_FrRi;
   E3BaseTypeFloat BCS_BrkStrIdx_ReLe;
   E3BaseTypeFloat BCS_BrkStrIdx_ReRi;
};
typedef struct _IDT_Group_BCS_VMMFb_ IDT_Group_BCS_VMMFb;
struct _IDT_Group_BCS_VMMFb_ {
   E3BaseTypeU8 BCS_FailSafeStop_StMon;
   E3BaseTypeU8 BCS_FailSafeStop_StReqVld;
   E3BaseTypeU8 BCS_HydBrkAsi_StAcv;
   E3BaseTypeU8 BCS_HydBrkAsi_StAvl;
   E3BaseTypeU8 BCS_HydBrkAsi_StReqVld;
   E3BaseTypeU8 BCS_WarnBrk_StReqVld;
   E3BaseTypeU8 BCS_WarnBrk_StResp;
};
typedef struct _IDT_Group_BLS_BrkLghtInfo_ IDT_Group_BLS_BrkLghtInfo;
struct _IDT_Group_BLS_BrkLghtInfo_ {
   E3BaseTypeU8 BLS_BrkLghtDfctCmpl;
   E3BaseTypeU8 BLS_BrkLghtDfctLe;
   E3BaseTypeU8 BLS_BrkLghtDfctMid;
   E3BaseTypeU8 BLS_BrkLghtDfctRi;
};
typedef struct _IDT_Group_DBR_BrkPedPos_ IDT_Group_DBR_BrkPedPos;
struct _IDT_Group_DBR_BrkPedPos_ {
   E3BaseTypeFloat DBR_FBrkPedDrv;
};
typedef struct _IDT_Group_DBR_VMMReq_ IDT_Group_DBR_VMMReq;
struct _IDT_Group_DBR_VMMReq_ {
   E3ExtdTypeFloatFct DBR_LgtLimA_ADmdEPB;
   E3ExtdTypeFloatFct DBR_LgtLimA_APredTarEPB;
   E3BaseTypeU8 DBR_LgtLimA_StAcvEPB;
};
typedef struct _IDT_Group_EA_VMMReq_ IDT_Group_EA_VMMReq;
struct _IDT_Group_EA_VMMReq_ {
   E3ExtdTypeFloatFctTi EA_CrvtCtl_CrvtDmd;
   E3ExtdTypeFloatFctTi EA_CrvtCtl_CrvtGrdDmd;
   E3ExtdTypeFloatFct EA_CrvtCtl_FacSsty;
   E3BaseTypeU8 EA_HldCtl_StLngTrmReq;
   E3BaseTypeU8 EA_LatCtl_StAcv;
   E3ExtdTypeFloatFct EA_LgtLimA_ADmd;
   E3ExtdTypeFloatFct EA_LgtLimA_AGrdMaxDec;
   E3ExtdTypeFloatFct EA_LgtLimA_AGrdMaxInc;
   E3BaseTypeU8 EA_LgtLimA_StAcv;
   E3BaseTypeU8 EA_PrkCtl_StAlyReq;
   E3BaseTypeU8 EA_WarnBrk_ItReq;
};
typedef struct _IDT_Group_EPB_VMMFb_ IDT_Group_EPB_VMMFb;
struct _IDT_Group_EPB_VMMFb_ {
   E3BaseTypeU8 EPB_EPBActrCtl_StAvl;
   E3BaseTypeU8 EPB_EPBAlyRls_StActr;
   E3BaseTypeU8 EPB_EPBAlyRls_StFail;
   E3BaseTypeU8 EPB_EPBAlyRls_StOperMd;
   E3BaseTypeU8 EPB_EPBAlyRls_StReqResp;
   E3BaseTypeU8 EPB_EPBDisp_StDrvInfoMsgReq;
   E3BaseTypeU8 EPB_EPBDisp_StMmiInfoMsgReq;
   E3BaseTypeU8 EPB_EPBDisp_StOutOfSpec;
};
typedef struct _IDT_Group_EPB_VMMReq_ IDT_Group_EPB_VMMReq;
struct _IDT_Group_EPB_VMMReq_ {
   E3BaseTypeU8 EPB_PrkCtl_StAlyReqAutAly;
   E3BaseTypeU8 EPB_PrkCtl_StAlyReqMAR;
   E3BaseTypeU8 EPB_PrkCtl_StRlsReqAutRls;
   E3BaseTypeU8 EPB_PrkCtl_StRlsReqMAR;
   E3BaseTypeU8 EPB_PrkCtl_StRlsReqSXR;
};
typedef struct _IDT_Group_ESC_VMMReq_ IDT_Group_ESC_VMMReq;
struct _IDT_Group_ESC_VMMReq_ {
   E3BaseTypeU8 ESC_LgtLimV_StAcv;
   E3ExtdTypeFloatFct ESC_LgtLimV_VDmd;
};
typedef struct _IDT_Group_ETMTasil_SigH_ IDT_Group_ETMTasil_SigH;
struct _IDT_Group_ETMTasil_SigH_ {
   E3BaseTypeU8 ETMTElm1_NumAxlDrvPrp;
   E3BaseTypeFloat ETMTElm1_SpdMax;
   E3BaseTypeFloat ETMTElm1_SpdMin;
   E3BaseTypeU8 ETMTElm1_StDynSpdLim;
   E3BaseTypeU8 ETMTElm1_StLocn;
   E3BaseTypeU8 ETMTElm1_StOpmDes;
   E3BaseTypeFloat ETMTElm1_TqLimMax;
   E3BaseTypeFloat ETMTElm1_TqLimMaxSpdCtl;
   E3BaseTypeFloat ETMTElm1_TqLimMaxSpdLim;
   E3BaseTypeFloat ETMTElm1_TqLimMin;
   E3BaseTypeFloat ETMTElm1_TqLimMinSpdCtl;
   E3BaseTypeFloat ETMTElm1_TqLimMinSpdLim;
   E3BaseTypeU8 ETMTElm2_NumAxlDrvPrp;
   E3BaseTypeFloat ETMTElm2_SpdMax;
   E3BaseTypeFloat ETMTElm2_SpdMin;
   E3BaseTypeU8 ETMTElm2_StDynSpdLim;
   E3BaseTypeU8 ETMTElm2_StLocn;
   E3BaseTypeU8 ETMTElm2_StOpmDes;
   E3BaseTypeFloat ETMTElm2_TqDes;
   E3BaseTypeFloat ETMTElm2_TqLimMax;
   E3BaseTypeFloat ETMTElm2_TqLimMaxSpdCtl;
   E3BaseTypeFloat ETMTElm2_TqLimMaxSpdLim;
   E3BaseTypeFloat ETMTElm2_TqLimMin;
   E3BaseTypeFloat ETMTElm2_TqLimMinSpdCtl;
   E3BaseTypeFloat ETMTElm2_TqLimMinSpdLim;
   E3BaseTypeU8 ETMTElm3_NumAxlDrvPrp;
   E3BaseTypeFloat ETMTElm3_SpdMax;
   E3BaseTypeFloat ETMTElm3_SpdMin;
   E3BaseTypeU8 ETMTElm3_StDynSpdLim;
   E3BaseTypeU8 ETMTElm3_StLocn;
   E3BaseTypeU8 ETMTElm3_StOpmDes;
   E3BaseTypeFloat ETMTElm3_TqDes;
   E3BaseTypeFloat ETMTElm3_TqLimMax;
   E3BaseTypeFloat ETMTElm3_TqLimMaxSpdCtl;
   E3BaseTypeFloat ETMTElm3_TqLimMaxSpdLim;
   E3BaseTypeFloat ETMTElm3_TqLimMin;
   E3BaseTypeFloat ETMTElm3_TqLimMinSpdCtl;
   E3BaseTypeFloat ETMTElm3_TqLimMinSpdLim;
   E3BaseTypeU8 ETMTElm4_NumAxlDrvPrp;
   E3BaseTypeFloat ETMTElm4_SpdMax;
   E3BaseTypeFloat ETMTElm4_SpdMin;
   E3BaseTypeU8 ETMTElm4_StDynSpdLim;
   E3BaseTypeU8 ETMTElm4_StLocn;
   E3BaseTypeU8 ETMTElm4_StOpmDes;
   E3BaseTypeFloat ETMTElm4_TqDes;
   E3BaseTypeFloat ETMTElm4_TqLimMax;
   E3BaseTypeFloat ETMTElm4_TqLimMaxSpdCtl;
   E3BaseTypeFloat ETMTElm4_TqLimMaxSpdLim;
   E3BaseTypeFloat ETMTElm4_TqLimMin;
   E3BaseTypeFloat ETMTElm4_TqLimMinSpdCtl;
   E3BaseTypeFloat ETMTElm4_TqLimMinSpdLim;
   E3BaseTypeU8 ETMTElm5_NumAxlDrvPrp;
   E3BaseTypeFloat ETMTElm5_SpdMax;
   E3BaseTypeFloat ETMTElm5_SpdMin;
   E3BaseTypeU8 ETMTElm5_StDynSpdLim;
   E3BaseTypeU8 ETMTElm5_StLocn;
   E3BaseTypeU8 ETMTElm5_StOpmDes;
   E3BaseTypeFloat ETMTElm5_TqDes;
   E3BaseTypeFloat ETMTElm5_TqLimMax;
   E3BaseTypeFloat ETMTElm5_TqLimMaxSpdCtl;
   E3BaseTypeFloat ETMTElm5_TqLimMaxSpdLim;
   E3BaseTypeFloat ETMTElm5_TqLimMin;
   E3BaseTypeFloat ETMTElm5_TqLimMinSpdCtl;
   E3BaseTypeFloat ETMTElm5_TqLimMinSpdLim;
};
typedef struct _IDT_Group_ETMTqm_SigH_ IDT_Group_ETMTqm_SigH;
struct _IDT_Group_ETMTqm_SigH_ {
   E3BaseTypeFloat ETMTElm1_FacDynAJD;
   E3BaseTypeFloat ETMTElm1_ILimMax;
   E3BaseTypeFloat ETMTElm1_ILimMin;
   E3BaseTypeFloat ETMTElm1_KpSpdCtl;
   E3BaseTypeFloat ETMTElm1_PwrGen;
   E3BaseTypeFloat ETMTElm1_PwrGnrAux;
   E3BaseTypeFloat ETMTElm1_PwrMot;
   E3BaseTypeFloat ETMTElm1_PwrTotGen;
   E3BaseTypeFloat ETMTElm1_PwrTotMot;
   E3BaseTypeFloat ETMTElm1_SpdDes;
   E3BaseTypeFloat ETMTElm1_SpdThAJD;
   E3BaseTypeU8 ETMTElm1_StReqAJD;
   E3BaseTypeU8 ETMTElm1_StReqBklshCtl;
   E3BaseTypeFloat ETMTElm1_TiPerAJD;
   E3ExtdTypeFloatFct ETMTElm1_TqGrdMaxOpDyn;
   E3ExtdTypeFloatFct ETMTElm1_TqGrdMinOpDyn;
   E3BaseTypeFloat ETMTElm1_TqLimAJD;
   E3BaseTypeFloat ETMTElm1_ULimMax;
   E3BaseTypeFloat ETMTElm1_ULimMin;
   E3BaseTypeFloat ETMTElm1_UMinChrg;
   E3BaseTypeFloat ETMTElm1_UMinDschrg;
   E3BaseTypeFloat ETMTElm1_VfOilElm;
   E3BaseTypeFloat ETMTElm2_FacDynAJD;
   E3BaseTypeFloat ETMTElm2_ILimMax;
   E3BaseTypeFloat ETMTElm2_ILimMin;
   E3BaseTypeFloat ETMTElm2_KpSpdCtl;
   E3BaseTypeFloat ETMTElm2_PwrGen;
   E3BaseTypeFloat ETMTElm2_PwrGnrAux;
   E3BaseTypeFloat ETMTElm2_PwrMot;
   E3BaseTypeFloat ETMTElm2_PwrTotGen;
   E3BaseTypeFloat ETMTElm2_PwrTotMot;
   E3BaseTypeFloat ETMTElm2_SpdDes;
   E3BaseTypeFloat ETMTElm2_SpdThAJD;
   E3BaseTypeU8 ETMTElm2_StDcLnk;
   E3BaseTypeU8 ETMTElm2_StReqAJD;
   E3BaseTypeU8 ETMTElm2_StReqBklshCtl;
   E3BaseTypeFloat ETMTElm2_TiPerAJD;
   E3ExtdTypeFloatFct ETMTElm2_TqGrdMaxOpDyn;
   E3ExtdTypeFloatFct ETMTElm2_TqGrdMinOpDyn;
   E3BaseTypeFloat ETMTElm2_TqLimAJD;
   E3ExtdTypeFloatFct ETMTElm2_UDcLnk;
   E3BaseTypeFloat ETMTElm2_ULimMax;
   E3BaseTypeFloat ETMTElm2_ULimMin;
   E3BaseTypeFloat ETMTElm2_UMinChrg;
   E3BaseTypeFloat ETMTElm2_UMinDschrg;
   E3BaseTypeFloat ETMTElm2_VfOilElm;
   E3BaseTypeFloat ETMTElm3_FacDynAJD;
   E3BaseTypeFloat ETMTElm3_ILimMax;
   E3BaseTypeFloat ETMTElm3_ILimMin;
   E3BaseTypeFloat ETMTElm3_KpSpdCtl;
   E3BaseTypeFloat ETMTElm3_PwrGen;
   E3BaseTypeFloat ETMTElm3_PwrGnrAux;
   E3BaseTypeFloat ETMTElm3_PwrMot;
   E3BaseTypeFloat ETMTElm3_PwrTotGen;
   E3BaseTypeFloat ETMTElm3_PwrTotMot;
   E3BaseTypeFloat ETMTElm3_SpdDes;
   E3BaseTypeFloat ETMTElm3_SpdThAJD;
   E3BaseTypeU8 ETMTElm3_StDcLnk;
   E3BaseTypeU8 ETMTElm3_StReqAJD;
   E3BaseTypeU8 ETMTElm3_StReqBklshCtl;
   E3BaseTypeFloat ETMTElm3_TiPerAJD;
   E3ExtdTypeFloatFct ETMTElm3_TqGrdMaxOpDyn;
   E3ExtdTypeFloatFct ETMTElm3_TqGrdMinOpDyn;
   E3BaseTypeFloat ETMTElm3_TqLimAJD;
   E3ExtdTypeFloatFct ETMTElm3_UDcLnk;
   E3BaseTypeFloat ETMTElm3_ULimMax;
   E3BaseTypeFloat ETMTElm3_ULimMin;
   E3BaseTypeFloat ETMTElm3_UMinChrg;
   E3BaseTypeFloat ETMTElm3_UMinDschrg;
   E3BaseTypeFloat ETMTElm3_VfOilElm;
   E3BaseTypeFloat ETMTElm4_FacDynAJD;
   E3BaseTypeFloat ETMTElm4_ILimMax;
   E3BaseTypeFloat ETMTElm4_ILimMin;
   E3BaseTypeFloat ETMTElm4_KpSpdCtl;
   E3BaseTypeFloat ETMTElm4_PwrGen;
   E3BaseTypeFloat ETMTElm4_PwrGnrAux;
   E3BaseTypeFloat ETMTElm4_PwrMot;
   E3BaseTypeFloat ETMTElm4_PwrTotGen;
   E3BaseTypeFloat ETMTElm4_PwrTotMot;
   E3BaseTypeFloat ETMTElm4_SpdDes;
   E3BaseTypeFloat ETMTElm4_SpdThAJD;
   E3BaseTypeU8 ETMTElm4_StDcLnk;
   E3BaseTypeU8 ETMTElm4_StReqAJD;
   E3BaseTypeU8 ETMTElm4_StReqBklshCtl;
   E3BaseTypeFloat ETMTElm4_TiPerAJD;
   E3ExtdTypeFloatFct ETMTElm4_TqGrdMaxOpDyn;
   E3ExtdTypeFloatFct ETMTElm4_TqGrdMinOpDyn;
   E3BaseTypeFloat ETMTElm4_TqLimAJD;
   E3ExtdTypeFloatFct ETMTElm4_UDcLnk;
   E3BaseTypeFloat ETMTElm4_ULimMax;
   E3BaseTypeFloat ETMTElm4_ULimMin;
   E3BaseTypeFloat ETMTElm4_UMinChrg;
   E3BaseTypeFloat ETMTElm4_UMinDschrg;
   E3BaseTypeFloat ETMTElm4_VfOilElm;
   E3BaseTypeFloat ETMTElm5_FacDynAJD;
   E3BaseTypeFloat ETMTElm5_ILimMax;
   E3BaseTypeFloat ETMTElm5_ILimMin;
   E3BaseTypeFloat ETMTElm5_KpSpdCtl;
   E3BaseTypeFloat ETMTElm5_PwrGen;
   E3BaseTypeFloat ETMTElm5_PwrGnrAux;
   E3BaseTypeFloat ETMTElm5_PwrMot;
   E3BaseTypeFloat ETMTElm5_PwrTotGen;
   E3BaseTypeFloat ETMTElm5_PwrTotMot;
   E3BaseTypeFloat ETMTElm5_SpdDes;
   E3BaseTypeFloat ETMTElm5_SpdThAJD;
   E3BaseTypeU8 ETMTElm5_StDcLnk;
   E3BaseTypeU8 ETMTElm5_StReqAJD;
   E3BaseTypeU8 ETMTElm5_StReqBklshCtl;
   E3BaseTypeFloat ETMTElm5_TiPerAJD;
   E3ExtdTypeFloatFct ETMTElm5_TqGrdMaxOpDyn;
   E3ExtdTypeFloatFct ETMTElm5_TqGrdMinOpDyn;
   E3BaseTypeFloat ETMTElm5_TqLimAJD;
   E3ExtdTypeFloatFct ETMTElm5_UDcLnk;
   E3BaseTypeFloat ETMTElm5_ULimMax;
   E3BaseTypeFloat ETMTElm5_ULimMin;
   E3BaseTypeFloat ETMTElm5_UMinChrg;
   E3BaseTypeFloat ETMTElm5_UMinDschrg;
   E3BaseTypeFloat ETMTElm5_VfOilElm;
   E3BaseTypeU8 ETMT_FlgReqAcvHvGridHVEM;
   E3BaseTypeBoolean ETMT_FlgReqExtdRng;
   E3BaseTypeFloat ETMT_PwrMaxHVEM;
   E3BaseTypeFloat ETMT_PwrMaxMVEM;
   E3BaseTypeU8 ETMT_StElDrvHVK;
   E3BaseTypeU8 ETMT_StElDrvMVK;
   E3BaseTypeU8 ETMT_StEmgcyHvDeacReq;
   E3BaseTypeU8 ETMT_StEnaAckHVK;
   E3BaseTypeU8 ETMT_StEnaAckMVK;
   E3BaseTypeBoolean ETMT_FlgOvf_WGnrElm;
   E3BaseTypeU32 ETMT_WGnrElm;
   E3BaseTypeFloat ETMT_WMinEmiNextDrvCyc;
   E3BaseTypeBoolean ETMT_FlgOvf_WMotElm;
   E3BaseTypeU32 ETMT_WMotElm;
};
typedef struct _IDT_Group_HVLM_VMMReq_ IDT_Group_HVLM_VMMReq;
struct _IDT_Group_HVLM_VMMReq_ {
   E3BaseTypeU8 HVLM_PrkCtl_StAlyReq;
   E3BaseTypeU8 HVLM_PrkCtl_StPrkLockReq;
};
typedef struct _IDT_STRUCT_LADM_AgSlipPrkAxlRePotSpdDep_ IDT_STRUCT_LADM_AgSlipPrkAxlRePotSpdDep;
typedef IDT_float32 IDT_ARRAY_LADM_AgSlipPrkAxlRePotSpdDep_2_5[2][5];
struct _IDT_STRUCT_LADM_AgSlipPrkAxlRePotSpdDep_ {
   IDT_ARRAY_LADM_AgSlipPrkAxlRePotSpdDep_2_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_LADM_CrvtPotLe_ IDT_STRUCT_LADM_CrvtPotLe;
typedef IDT_float32 IDT_ARRAY_LADM_CrvtPotLe_2_5[2][5];
struct _IDT_STRUCT_LADM_CrvtPotLe_ {
   IDT_ARRAY_LADM_CrvtPotLe_2_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_LADM_CrvtPotRi_ IDT_STRUCT_LADM_CrvtPotRi;
typedef IDT_float32 IDT_ARRAY_LADM_CrvtPotRi_2_5[2][5];
struct _IDT_STRUCT_LADM_CrvtPotRi_ {
   IDT_ARRAY_LADM_CrvtPotRi_2_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_Group_LADM_VMMFb_ IDT_Group_LADM_VMMFb;
struct _IDT_Group_LADM_VMMFb_ {
   E3BaseTypeFloat LADM_AgSlipAxlRe;
   E3BaseTypeFloat LADM_AgSlipAxlReGeo;
   IDT_STRUCT_LADM_AgSlipPrkAxlRePotSpdDep LADM_AgSlipPrkAxlRePotSpdDep;
   E3BaseTypeFloat LADM_Crvt;
   E3BaseTypeFloat LADM_CrvtDyn;
   IDT_STRUCT_LADM_CrvtPotLe LADM_CrvtPotLe;
   IDT_STRUCT_LADM_CrvtPotRi LADM_CrvtPotRi;
   E3BaseTypeFloat LADM_CrvtPotSlipAgDepLe;
   E3BaseTypeFloat LADM_CrvtPotSlipAgDepRi;
   IDT_float32 LADM_Dev4VMM01;
   IDT_float32 LADM_Dev4VMM02;
   IDT_float32 LADM_Dev4VMM03;
   IDT_float32 LADM_Dev4VMM04;
   IDT_float32 LADM_Dev4VMM05;
   E3BaseTypeFloat LADM_FacCrvtPotPrkSlipDep;
   E3BaseTypeFloat LADM_FacCtlValLatCtl;
   E3BaseTypeFloat LADM_FacStgPrf;
   E3BaseTypeBoolean LADM_FlgDynLimLatCtl;
   E3BaseTypeBoolean LADM_FlgLatGuidNotAvlStrtStop;
   E3BaseTypeU8 LADM_StAgSlipCtl;
   E3BaseTypeU8 LADM_StBTV;
   E3BaseTypeU8 LADM_StLatCtl;
   E3BaseTypeU8 LADM_StLatCtlAvl;
   E3BaseTypeU8 LADM_StLatCtlSafeLvl;
   E3BaseTypeU8 LADM_StStgWhlVib;
   E3BaseTypeU8 LADM_StVirtStgStop;
   E3BaseTypeFloat LADM_TiDlyCrvtCtl;
};
typedef struct _IDT_Group_LIM_VMMReq_ IDT_Group_LIM_VMMReq;
struct _IDT_Group_LIM_VMMReq_ {
   E3ExtdTypeFloatFct LIM_LgtLimA_ADmd;
   E3ExtdTypeFloatFct LIM_LgtLimA_AGrdMaxDec;
   E3ExtdTypeFloatFct LIM_LgtLimA_AGrdMaxInc;
   E3ExtdTypeFloatFct LIM_LgtLimA_APredTar;
   E3ExtdTypeFloatFct LIM_LgtLimA_ATlrHiDyn;
   E3ExtdTypeFloatFct LIM_LgtLimA_ATlrHiTar;
   E3BaseTypeU8 LIM_LgtLimA_MdTarDyn;
   E3BaseTypeU8 LIM_LgtLimA_StAcv;
};
typedef struct _IDT_Group_LODM_PreCdnFb_ IDT_Group_LODM_PreCdnFb;
struct _IDT_Group_LODM_PreCdnFb_ {
   IDT_uint8 LODM_PreCdn_StAcv;
   IDT_uint8 LODM_PreCdn_StAvl;
   IDT_uint8 LODM_PreCdn_StReqVld;
};
typedef struct _IDT_Group_LODM_TqWhlFb_ IDT_Group_LODM_TqWhlFb;
struct _IDT_Group_LODM_TqWhlFb_ {
   IDT_float32 LODM_2VMM_Dev1;
   IDT_float32 LODM_2VMM_Dev2;
   IDT_float32 LODM_2VMM_Dev3;
   IDT_float32 LODM_2VMM_Dev4;
   IDT_float32 LODM_2VMM_Dev5;
   E3BaseTypeFloat LODM_JWhlVeh;
   E3BaseTypeU8 LODM_StTqWhlIntvAcv;
   IDT_uint8 LODM_TqWhlAcce_StAvl;
   IDT_uint8 LODM_TqWhlAcce_StPTAcv;
   IDT_uint8 LODM_TqWhlAcce_StReqVld;
   E3BaseTypeFloat LODM_TqWhlAcce_TqAct;
   E3BaseTypeFloat LODM_TqWhlAcce_TqGrdAct;
   E3BaseTypeFloat LODM_TqWhlAcce_TqIntvDelta;
   E3BaseTypeFloat LODM_TqWhlAcce_TqPotImdtMax;
   E3BaseTypeFloat LODM_TqWhlAcce_TqPotImdtMin;
   E3BaseTypeFloat LODM_TqWhlAcce_TqPotMax;
   E3BaseTypeFloat LODM_TqWhlAcce_TqPotMin;
   E3BaseTypeFloat LODM_TqWhlAcce_TqPotStatMax;
   E3BaseTypeFloat LODM_TqWhlAcce_TqPotStatMin;
   E3BaseTypeFloat LODM_TqWhlAcce_TqPotStgyMax;
   E3BaseTypeFloat LODM_TqWhlAcce_TqPotStgyMin;
   IDT_uint8 LODM_TqWhlBrk_StAvl;
   IDT_uint8 LODM_TqWhlBrk_StReqVld;
   E3BaseTypeFloat LODM_TqWhlBrk_TqAct;
   E3BaseTypeFloat LODM_TqWhlBrk_TqGrdAct;
   E3BaseTypeFloat LODM_TqWhlBrk_TqPotSdsl;
   IDT_uint8 LODM_TqWhlDece_StReqVld;
   IDT_uint8 LODM_TqWhlDece_StRgnAvl;
   E3BaseTypeFloat LODM_TqWhlDece_TqAct;
   E3BaseTypeFloat LODM_TqWhlDece_TqIntvDelta;
   IDT_float32 LODM_TqWhlDece_TqTar;
   E3BaseTypeFloat LODM_TqWhlDece_TqPotRgn;
   E3BaseTypeFloat LODM_TqWhlDece_TqPotRgnImdt;
   E3BaseTypeFloat LODM_TqWhlDece_TqPotRgnStat;
   E3BaseTypeU8 LODM_TqWhlDece_IdxLead;
};
typedef struct _IDT_Group_LeavCon_VMMReq_ IDT_Group_LeavCon_VMMReq;
struct _IDT_Group_LeavCon_VMMReq_ {
   E3BaseTypeU8 LeavCon_PrkCtl_StPrkLockReq;
};
typedef struct _IDT_Group_MKB_VMMReq_ IDT_Group_MKB_VMMReq;
struct _IDT_Group_MKB_VMMReq_ {
   E3BaseTypeU8 MKB_ScndCllsnMtgtn_StAbo;
   E3BaseTypeU8 MKB_ScndCllsnMtgtn_StAcv;
   E3BaseTypeU8 MKB_ScndCllsnMtgtn_StReq;
};
typedef struct _IDT_Group_PA_TrjCtrl_ IDT_Group_PA_TrjCtrl;
struct _IDT_Group_PA_TrjCtrl_ {
   E3BaseTypeFloat PA_TrjCtlHd_AgPosnBas;
   E3BaseTypeFloat PA_TrjCtlHd_DTlrHi;
   E3BaseTypeFloat PA_TrjCtlHd_DTlrLo;
   E3BaseTypeU8 PA_TrjCtlHd_Id;
   E3BaseTypeU8 PA_TrjCtlHd_IdxStrtPlanNew;
   E3BaseTypeS32 PA_TrjCtlHd_LPosnBasLat;
   E3BaseTypeS32 PA_TrjCtlHd_LPosnBasLgt;
   E3BaseTypeU8 PA_TrjCtlHd_NumNod;
   E3ExtdTypeFloatFct PA_TrjCtlNod01_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod01_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod01_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod01_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod01_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod01_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod01_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod01_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod02_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod02_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod02_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod02_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod02_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod02_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod02_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod02_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod03_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod03_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod03_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod03_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod03_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod03_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod03_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod03_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod04_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod04_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod04_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod04_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod04_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod04_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod04_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod04_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod05_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod05_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod05_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod05_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod05_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod05_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod05_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod05_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod06_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod06_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod06_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod06_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod06_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod06_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod06_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod06_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod07_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod07_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod07_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod07_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod07_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod07_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod07_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod07_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod08_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod08_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod08_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod08_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod08_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod08_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod08_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod08_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod09_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod09_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod09_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod09_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod09_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod09_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod09_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod09_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod10_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod10_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod10_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod10_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod10_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod10_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod10_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod10_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod11_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod11_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod11_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod11_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod11_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod11_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod11_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod11_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod12_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod12_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod12_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod12_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod12_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod12_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod12_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod12_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod13_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod13_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod13_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod13_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod13_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod13_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod13_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod13_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod14_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod14_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod14_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod14_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod14_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod14_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod14_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod14_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod15_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod15_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod15_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod15_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod15_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod15_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod15_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod15_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod16_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod16_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod16_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod16_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod16_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod16_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod16_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod16_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod17_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod17_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod17_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod17_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod17_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod17_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod17_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod17_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod18_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod18_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod18_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod18_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod18_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod18_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod18_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod18_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod19_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod19_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod19_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod19_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod19_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod19_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod19_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod19_VDmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod20_ADmd;
   E3ExtdTypeFloatFct PA_TrjCtlNod20_AgPosnYaw;
   E3ExtdTypeFloatFct PA_TrjCtlNod20_AgSideSlip;
   E3ExtdTypeFloatFct PA_TrjCtlNod20_CrvtTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod20_DTrck;
   E3ExtdTypeFloatFct PA_TrjCtlNod20_LPosnLat;
   E3ExtdTypeFloatFct PA_TrjCtlNod20_LPosnLgt;
   E3ExtdTypeFloatFct PA_TrjCtlNod20_VDmd;
};
typedef struct _IDT_Group_PB_VMMReq_ IDT_Group_PB_VMMReq;
struct _IDT_Group_PB_VMMReq_ {
   E3BaseTypeU8 PB_FailSafeStop_StEnReq;
   E3BaseTypeU8 PB_FailSafeStop_StStopReq;
   E3BaseTypeU8 PB_HldCtl_StLngTrmReq;
   E3BaseTypeU8 PB_HldCtl_StTkovReq;
   E3BaseTypeU8 PB_LgtDir_StDirReq;
   E3ExtdTypeFloatFct PB_LgtLimA_ADmd;
   E3BaseTypeU8 PB_LgtLimA_StAcv;
   E3BaseTypeU8 PB_PrkCtl_StAlyReq;
   E3BaseTypeU8 PB_StAcvFct;
   E3BaseTypeU8 PB_TrjCtl_StAcv;
};
typedef struct _IDT_Group_PH_VMMReq_ IDT_Group_PH_VMMReq;
struct _IDT_Group_PH_VMMReq_ {
   E3ExtdTypeFloatFct PH_CrvtLim_CrvtLeDmd;
   E3ExtdTypeFloatFct PH_CrvtLim_CrvtRiDmd;
   E3BaseTypeU8 PH_CrvtLim_StAcv;
   E3BaseTypeU8 PH_FailSafeStop_StEnReq;
   E3BaseTypeU8 PH_FailSafeStop_StStopReq;
   E3BaseTypeU8 PH_HldCtl_StTkovReq;
   E3BaseTypeU8 PH_LgtDir_StDirReq;
   E3ExtdTypeFloatFct PH_LgtLimA_ADmd;
   E3BaseTypeU8 PH_LgtLimA_StAcv;
   E3BaseTypeU8 PH_PrkCtl_StAlyReq;
   E3BaseTypeU8 PH_StAcvFct;
   E3BaseTypeU8 PH_TrjCtl_StAcv;
};
typedef struct _IDT_Group_RCTA_VMMReq_ IDT_Group_RCTA_VMMReq;
struct _IDT_Group_RCTA_VMMReq_ {
   E3BaseTypeU8 RCTA_HldCtl_StTkovReq;
   E3ExtdTypeFloatFct RCTA_LgtLimA_ADmd;
   E3ExtdTypeS8Fct RCTA_LgtLimA_AGrdMaxDec;
   E3BaseTypeU8 RCTA_LgtLimA_StAcv;
   E3BaseTypeU8 RCTA_WarnBrk_ItReq;
};
typedef struct _IDT_Group_SigH_AIETMRqm_ IDT_Group_SigH_AIETMRqm;
struct _IDT_Group_SigH_AIETMRqm_ {
   E3BaseTypeU32 BMC_Dauer_Entladeleistung;
   E3BaseTypeU32 BMC_Dauer_Ladeleistung;
   E3BaseTypeU32 BMC_Energieinhalt;
   E3BaseTypeBoolean BMC_Fehler_Leistungsred;
   E3BaseTypeU16 BMC_Leerlaufspannung;
   E3BaseTypeU32 BMC_MaxEnergieinhalt;
   E3BaseTypeU32 BMC_Max_Entladeleistung;
   E3BaseTypeFloat BMC_Max_Entladestrom;
   E3BaseTypeU32 BMC_Max_Ladeleistung;
   E3BaseTypeFloat BMC_Max_Ladestrom;
   E3BaseTypeFloat BMC_Max_Spannung;
   E3BaseTypeU16 BMC_MinDyn_Entladespannung;
   E3BaseTypeU16 BMC_MinDyn_Ladespannung;
   E3BaseTypeFloat BMC_Min_Spannung;
   E3BaseTypeFloat BMC_NutzbarerSOC;
   E3BaseTypeFloat BMC_PerfInd_Entladen;
   E3BaseTypeFloat BMC_PerfInd_Laden;
   E3ExtdTypeFloatFct BMC_Spannung_ZwischenKreis;
   E3ExtdTypeFloatFct BMC_Spannung_ZwischenKreis_2;
   E3BaseTypeU16 BMC_VerlustEnergie;
   E3BaseTypeU16 BMS_MV_Energieinhalt;
   E3BaseTypeFloat BMS_MV_IstSpannung;
   E3BaseTypeFloat BMS_MV_IstStrom;
   E3BaseTypeU16 BMS_MV_MaxDyn_EntladeLeistung;
   E3BaseTypeFloat BMS_MV_MaxDyn_EntladeStrom;
   E3BaseTypeU16 BMS_MV_MaxDyn_LadeLeistung;
   E3BaseTypeFloat BMS_MV_MaxDyn_LadeStrom;
   E3BaseTypeU16 BMS_MV_MaxPred_Kaltstartleistung;
   E3BaseTypeU16 BMS_MV_MaxPred_Kaltstartstrom;
   E3BaseTypeFloat BMS_MV_MinDynEntladeSpannung;
   E3BaseTypeFloat BMS_MV_MinDyn_LadeSpannung;
   E3BaseTypeFloat BMS_MV_Min_EntladeSpannung;
   E3BaseTypeU8 BMS_MV_Pred_Entladeperformance;
   E3BaseTypeU8 BMS_MV_Pred_Ladeperformance;
   E3BaseTypeFloat BMS_MV_SOC_HiRes;
   E3BaseTypeFloat BMS_MV_max_Grenz_SOC;
   E3BaseTypeFloat BMS_MV_min_Grenz_SOC;
   E3BaseTypeU16 ELM1_FacPwrPred;
   E3BaseTypeBoolean ELM1_FlgOvf_WGen;
   E3BaseTypeBoolean ELM1_FlgOvf_WMot;
   E3BaseTypeFloat ELM1_IAct;
   E3BaseTypeFloat ELM1_IMaxAbs;
   E3BaseTypeFloat ELM1_IMinAbs;
   E3BaseTypeFloat ELM1_PrctPrfPwrMax;
   E3BaseTypeFloat ELM1_PrctPrfTElm;
   E3BaseTypeFloat ELM1_PrctPrfTInv;
   E3BaseTypeFloat ELM1_PrctPrfTqMax;
   E3BaseTypeFloat ELM1_PwrContGen;
   E3BaseTypeFloat ELM1_PwrContMot;
   E3BaseTypeFloat ELM1_PwrLosDrvTq0;
   E3BaseTypeFloat ELM1_PwrMecBasGen;
   E3BaseTypeFloat ELM1_PwrMecBasMot;
   E3BaseTypeFloat ELM1_PwrMecNom;
   E3BaseTypeFloat ELM1_SpdMaxDes;
   E3BaseTypeFloat ELM1_SpdMaxFwAvl;
   E3BaseTypeU8 ELM1_StAJD;
   E3BaseTypeU8 ELM1_StBklsh;
   E3BaseTypeU8 ELM1_StBklshCtl;
   E3BaseTypeU8 ELM1_StCpb;
   E3BaseTypeU8 ELM1_StReqCal;
   E3BaseTypeFloat ELM1_TOil;
   E3BaseTypeFloat ELM1_TRtr;
   E3BaseTypeFloat ELM1_TSttr;
   E3BaseTypeFloat ELM1_TiCooRunOn;
   E3BaseTypeFloat ELM1_TqBasMax;
   E3BaseTypeFloat ELM1_TqBasMin;
   E3BaseTypeFloat ELM1_TqGnr;
   E3BaseTypeFloat ELM1_TqIntnlActSp;
   E3BaseTypeFloat ELM1_TqIntvCmft;
   E3BaseTypeFloat ELM1_TqIntvSpdCtl;
   E3BaseTypeFloat ELM1_TqIntvSpdLim;
   E3BaseTypeFloat ELM1_TqLimMax;
   E3BaseTypeFloat ELM1_TqLimMin;
   E3BaseTypeFloat ELM1_TqMax;
   E3BaseTypeFloat ELM1_TqMin;
   E3BaseTypeFloat ELM1_TqNomMax;
   E3BaseTypeFloat ELM1_TqPeakMax;
   E3BaseTypeFloat ELM1_TqPeakMin;
   E3BaseTypeFloat ELM1_TqTotMax;
   E3BaseTypeFloat ELM1_TqTotMin;
   E3BaseTypeFloat ELM1_UAct;
   E3BaseTypeFloat ELM1_VfOilElmDes;
   E3BaseTypeFloat ELM1_WGen;
   E3BaseTypeFloat ELM1_WMot;
   E3BaseTypeU16 ELM2_FacPwrPred;
   E3BaseTypeBoolean ELM2_FlgOvf_WGen;
   E3BaseTypeBoolean ELM2_FlgOvf_WMot;
   E3BaseTypeFloat ELM2_IAct;
   E3BaseTypeFloat ELM2_IMaxAbs;
   E3BaseTypeFloat ELM2_IMinAbs;
   E3BaseTypeFloat ELM2_PrctPrfPwrMax;
   E3BaseTypeFloat ELM2_PrctPrfTElm;
   E3BaseTypeFloat ELM2_PrctPrfTInv;
   E3BaseTypeFloat ELM2_PrctPrfTqMax;
   E3BaseTypeFloat ELM2_PwrContGen;
   E3BaseTypeFloat ELM2_PwrContMot;
   E3BaseTypeFloat ELM2_PwrLosDrvTq0;
   E3BaseTypeFloat ELM2_PwrMecBasGen;
   E3BaseTypeFloat ELM2_PwrMecBasMot;
   E3BaseTypeFloat ELM2_PwrMecNom;
   E3BaseTypeFloat ELM2_SpdMaxDes;
   E3BaseTypeFloat ELM2_SpdMaxFwAvl;
   E3BaseTypeU8 ELM2_StAJD;
   E3BaseTypeU8 ELM2_StBklsh;
   E3BaseTypeU8 ELM2_StBklshCtl;
   E3BaseTypeU8 ELM2_StCpb;
   E3BaseTypeU8 ELM2_StReqCal;
   E3BaseTypeFloat ELM2_TOil;
   E3BaseTypeFloat ELM2_TRtr;
   E3BaseTypeFloat ELM2_TSttr;
   E3BaseTypeFloat ELM2_TiCooRunOn;
   E3BaseTypeFloat ELM2_TqBasMax;
   E3BaseTypeFloat ELM2_TqBasMin;
   E3BaseTypeFloat ELM2_TqGnr;
   E3BaseTypeFloat ELM2_TqIntnlActSp;
   E3BaseTypeFloat ELM2_TqIntvCmft;
   E3BaseTypeFloat ELM2_TqIntvSpdCtl;
   E3BaseTypeFloat ELM2_TqIntvSpdLim;
   E3BaseTypeFloat ELM2_TqLimMax;
   E3BaseTypeFloat ELM2_TqLimMin;
   E3BaseTypeFloat ELM2_TqMax;
   E3BaseTypeFloat ELM2_TqMin;
   E3BaseTypeFloat ELM2_TqNomMax;
   E3BaseTypeFloat ELM2_TqPeakMax;
   E3BaseTypeFloat ELM2_TqPeakMin;
   E3BaseTypeFloat ELM2_TqTotMax;
   E3BaseTypeFloat ELM2_TqTotMin;
   E3BaseTypeFloat ELM2_UAct;
   E3BaseTypeFloat ELM2_VfOilElmDes;
   E3BaseTypeFloat ELM2_WGen;
   E3BaseTypeFloat ELM2_WMot;
   E3BaseTypeU16 ELM3_FacPwrPred;
   E3BaseTypeBoolean ELM3_FlgOvf_WGen;
   E3BaseTypeBoolean ELM3_FlgOvf_WMot;
   E3BaseTypeFloat ELM3_IAct;
   E3BaseTypeFloat ELM3_IMaxAbs;
   E3BaseTypeFloat ELM3_IMinAbs;
   E3BaseTypeFloat ELM3_PrctPrfPwrMax;
   E3BaseTypeFloat ELM3_PrctPrfTElm;
   E3BaseTypeFloat ELM3_PrctPrfTInv;
   E3BaseTypeFloat ELM3_PrctPrfTqMax;
   E3BaseTypeFloat ELM3_PwrContGen;
   E3BaseTypeFloat ELM3_PwrContMot;
   E3BaseTypeFloat ELM3_PwrLosDrvTq0;
   E3BaseTypeFloat ELM3_PwrMecBasGen;
   E3BaseTypeFloat ELM3_PwrMecBasMot;
   E3BaseTypeFloat ELM3_PwrMecNom;
   E3BaseTypeFloat ELM3_SpdMaxDes;
   E3BaseTypeFloat ELM3_SpdMaxFwAvl;
   E3BaseTypeU8 ELM3_StAJD;
   E3BaseTypeU8 ELM3_StBklsh;
   E3BaseTypeU8 ELM3_StBklshCtl;
   E3BaseTypeU8 ELM3_StCpb;
   E3BaseTypeU8 ELM3_StReqCal;
   E3BaseTypeFloat ELM3_TOil;
   E3BaseTypeFloat ELM3_TRtr;
   E3BaseTypeFloat ELM3_TSttr;
   E3BaseTypeFloat ELM3_TiCooRunOn;
   E3BaseTypeFloat ELM3_TqBasMax;
   E3BaseTypeFloat ELM3_TqBasMin;
   E3BaseTypeFloat ELM3_TqGnr;
   E3BaseTypeFloat ELM3_TqIntnlActSp;
   E3BaseTypeFloat ELM3_TqIntvCmft;
   E3BaseTypeFloat ELM3_TqIntvSpdCtl;
   E3BaseTypeFloat ELM3_TqIntvSpdLim;
   E3BaseTypeFloat ELM3_TqLimMax;
   E3BaseTypeFloat ELM3_TqLimMin;
   E3BaseTypeFloat ELM3_TqMax;
   E3BaseTypeFloat ELM3_TqMin;
   E3BaseTypeFloat ELM3_TqNomMax;
   E3BaseTypeFloat ELM3_TqPeakMax;
   E3BaseTypeFloat ELM3_TqPeakMin;
   E3BaseTypeFloat ELM3_TqTotMax;
   E3BaseTypeFloat ELM3_TqTotMin;
   E3BaseTypeFloat ELM3_UAct;
   E3BaseTypeFloat ELM3_VfOilElmDes;
   E3BaseTypeFloat ELM3_WGen;
   E3BaseTypeFloat ELM3_WMot;
   E3BaseTypeU16 ELM4_FacPwrPred;
   E3BaseTypeBoolean ELM4_FlgOvf_WGen;
   E3BaseTypeBoolean ELM4_FlgOvf_WMot;
   E3BaseTypeFloat ELM4_IAct;
   E3BaseTypeFloat ELM4_IMaxAbs;
   E3BaseTypeFloat ELM4_PrctPrfPwrMax;
   E3BaseTypeFloat ELM4_PrctPrfTElm;
   E3BaseTypeFloat ELM4_PrctPrfTInv;
   E3BaseTypeFloat ELM4_PrctPrfTqMax;
   E3BaseTypeFloat ELM4_PwrContGen;
   E3BaseTypeFloat ELM4_PwrContMot;
   E3BaseTypeFloat ELM4_PwrLosDrvTq0;
   E3BaseTypeFloat ELM4_PwrMecBasGen;
   E3BaseTypeFloat ELM4_PwrMecBasMot;
   E3BaseTypeFloat ELM4_PwrMecNom;
   E3BaseTypeFloat ELM4_SpdMaxDes;
   E3BaseTypeFloat ELM4_SpdMaxFwAvl;
   E3BaseTypeU8 ELM4_StAJD;
   E3BaseTypeU8 ELM4_StBklsh;
   E3BaseTypeU8 ELM4_StBklshCtl;
   E3BaseTypeFloat ELM4_TOil;
   E3BaseTypeFloat ELM4_TRtr;
   E3BaseTypeFloat ELM4_TSttr;
   E3BaseTypeFloat ELM4_TqBasMax;
   E3BaseTypeFloat ELM4_TqBasMin;
   E3BaseTypeFloat ELM4_TqGnr;
   E3BaseTypeFloat ELM4_TqIntnlActSp;
   E3BaseTypeFloat ELM4_TqIntvSpdCtl;
   E3BaseTypeFloat ELM4_TqLimMax;
   E3BaseTypeFloat ELM4_TqLimMin;
   E3BaseTypeFloat ELM4_TqMax;
   E3BaseTypeFloat ELM4_TqMin;
   E3BaseTypeFloat ELM4_TqNomMax;
   E3BaseTypeFloat ELM4_TqPeakMax;
   E3BaseTypeFloat ELM4_TqPeakMin;
   E3BaseTypeFloat ELM4_TqTotMax;
   E3BaseTypeFloat ELM4_TqTotMin;
   E3BaseTypeFloat ELM4_UAct;
   E3BaseTypeFloat ELM4_VfOilElmDes;
   E3BaseTypeFloat ELM4_WGen;
   E3BaseTypeFloat ELM4_WMot;
   E3BaseTypeU16 ELM5_FacPwrPred;
   E3BaseTypeBoolean ELM5_FlgOvf_WGen;
   E3BaseTypeBoolean ELM5_FlgOvf_WMot;
   E3BaseTypeFloat ELM5_IAct;
   E3BaseTypeFloat ELM5_IMinAbs;
   E3BaseTypeFloat ELM5_PrctPrfTElm;
   E3BaseTypeFloat ELM5_PwrLosDrvTq0;
   E3BaseTypeFloat ELM5_SpdMaxDes;
   E3BaseTypeFloat ELM5_SpdMaxFwAvl;
   E3BaseTypeU8 ELM5_StAJD;
   E3BaseTypeU8 ELM5_StBklsh;
   E3BaseTypeU8 ELM5_StBklshCtl;
   E3BaseTypeU8 ELM5_StCpb;
   E3BaseTypeU8 ELM5_StReqCal;
   E3BaseTypeFloat ELM5_TRtr;
   E3BaseTypeFloat ELM5_TSttr;
   E3BaseTypeFloat ELM5_TiCooRunOn;
   E3BaseTypeFloat ELM5_TqGnr;
   E3BaseTypeFloat ELM5_TqIntvCmft;
   E3BaseTypeFloat ELM5_TqIntvSpdCtl;
   E3BaseTypeFloat ELM5_TqIntvSpdLim;
   E3BaseTypeFloat ELM5_TqMax;
   E3BaseTypeFloat ELM5_TqMin;
   E3BaseTypeFloat ELM5_TqTotMax;
   E3BaseTypeFloat ELM5_TqTotMin;
   E3BaseTypeFloat ELM5_UAct;
   E3BaseTypeFloat ELM5_WGen;
   E3BaseTypeFloat ELM5_WMot;
   E3BaseTypeFloat HVEM_IstLeistung_HVVerbraucher;
   E3BaseTypeFloat HVEM_IstStrom_HVVerbraucher;
   E3BaseTypeFloat HVEM_Leistungsvorhalt_Entladen;
   E3BaseTypeFloat HVEM_Leistungsvorhalt_Laden;
   E3BaseTypeU8 HVK_ETM_Freigabe;
   E3BaseTypeU8 HVK_HV_Netz_Zustand;
   E3BaseTypeBoolean HVK_StSysChkAcv;
   E3BaseTypeFloat MVEM_ETM_Max_Entladeleistung;
   E3BaseTypeFloat MVEM_ETM_Max_Ladeleistung;
   E3BaseTypeFloat MVEM_ETM_MinLeistung_Verbraucher;
   E3BaseTypeFloat MVEM_IstLeistung_MVVerbraucher_2;
   E3BaseTypeFloat MVEM_IstStrom_MVVerbraucher_2;
   E3BaseTypeU8 MVK_ETM_Freigabe;
   E3BaseTypeU8 MVK_MV_Netz_Zustand;
};
typedef struct _IDT_Group_VMM_ABAHResp_ IDT_Group_VMM_ABAHResp;
struct _IDT_Group_VMM_ABAHResp_ {
   E3BaseTypeU8 VMM_ABAHHydBrkAsi_StAcv;
   E3BaseTypeU8 VMM_ABAHLgtLimA_StAcv;
   E3BaseTypeU8 VMM_ABAHPreCdn_StAcv;
   E3BaseTypeU8 VMM_ABAHWarnBrk_StAcv;
   E3BaseTypeU8 VMM_ABAH_StVld;
};
typedef struct _IDT_Group_VMM_ACAResp_ IDT_Group_VMM_ACAResp;
struct _IDT_Group_VMM_ACAResp_ {
   E3BaseTypeU8 VMM_ACALatCtl_StAcv;
   E3BaseTypeU8 VMM_ACALatCtl_StVld;
};
typedef struct _IDT_Group_VMM_ACAStResp_ IDT_Group_VMM_ACAStResp;
struct _IDT_Group_VMM_ACAStResp_ {
   E3BaseTypeU8 VMM_ACALgtCtl_StAcv;
   E3BaseTypeU8 VMM_ACALgtCtl_StVld;
};
typedef struct _IDT_Group_VMM_ACCStResp_ IDT_Group_VMM_ACCStResp;
struct _IDT_Group_VMM_ACCStResp_ {
   E3BaseTypeU8 VMM_ACCLgtCtl_StAcv;
   E3BaseTypeU8 VMM_ACCLgtCtl_StVld;
};
typedef struct _IDT_Group_VMM_AEBPRResp_ IDT_Group_VMM_AEBPRResp;
struct _IDT_Group_VMM_AEBPRResp_ {
   E3BaseTypeU8 VMM_AEBPRLgtLimA_StAcv;
   E3BaseTypeU8 VMM_AEBPR_StVld;
};
typedef struct _IDT_Group_VMM_ALDWResp_ IDT_Group_VMM_ALDWResp;
struct _IDT_Group_VMM_ALDWResp_ {
   E3BaseTypeU8 VMM_ALDWLatCtl_StAcv;
   E3BaseTypeU8 VMM_ALDWLatCtl_StVld;
   E3BaseTypeU8 VMM_ALDWStgWhlVib_StAcv;
   E3BaseTypeU8 VMM_ALDWStgWhlVib_StVld;
};
typedef struct _IDT_Group_VMM_ARAResp_ IDT_Group_VMM_ARAResp;
struct _IDT_Group_VMM_ARAResp_ {
   E3BaseTypeU8 VMM_ARALatCtl_StAcv;
   E3BaseTypeU8 VMM_ARALgtLimA_StAcv;
   E3BaseTypeU8 VMM_ARALgtLimV_StAcv;
   E3BaseTypeU8 VMM_ARAPrkCtl_StAcv;
   E3BaseTypeU8 VMM_ARA_StVld;
};
typedef struct _IDT_Group_VMM_BCSReq_ IDT_Group_VMM_BCSReq;
struct _IDT_Group_VMM_BCSReq_ {
   E3BaseTypeU8 VMM_BrkLght_IdxTqWhlSrcTyp;
   E3BaseTypeU8 VMM_BrkLght_StReq;
   E3BaseTypeU8 VMM_FailSafeStop_StEnReq;
   E3BaseTypeU8 VMM_FailSafeStop_StMon;
   E3BaseTypeU8 VMM_FailSafeStop_StStopReq;
   E3BaseTypeU8 VMM_HydBrkAsi_SThReq;
   E3BaseTypeU8 VMM_HydBrkAsi_StResp;
   E3BaseTypeU8 VMM_ScndCllsnMtgtn_StAbo;
   E3BaseTypeU8 VMM_ScndCllsnMtgtn_StReq;
   E3BaseTypeU8 VMM_WarnBrk_ItReq;
   E3BaseTypeU8 VMM_WarnBrk_StResp;
};
typedef struct _IDT_Group_VMM_DBRResp_ IDT_Group_VMM_DBRResp;
struct _IDT_Group_VMM_DBRResp_ {
   E3BaseTypeU8 VMM_DBRLgtLimA_StAcvEPB;
   E3BaseTypeU8 VMM_DBRLgtLimA_StVldEPB;
};
typedef struct _IDT_Group_VMM_DPMReq_ IDT_Group_VMM_DPMReq;
struct _IDT_Group_VMM_DPMReq_ {
   IDT_uint8 VMM_StDrvPosnReq;
   IDT_uint8 VMM_StDrvPosnSelLock;
};
typedef struct _IDT_Group_VMM_DSRResp_ IDT_Group_VMM_DSRResp;
struct _IDT_Group_VMM_DSRResp_ {
   E3BaseTypeU8 VMM_DSRLatCtl_StAcv;
   E3BaseTypeU8 VMM_DSRLatCtl_StVld;
};
typedef struct _IDT_Group_VMM_DispReq_ IDT_Group_VMM_DispReq;
struct _IDT_Group_VMM_DispReq_ {
   IDT_uint8 VMM_HldMngDisp_StHldIdc;
   IDT_uint8 VMM_HldMngDisp_StHldInfoMsg;
   IDT_uint8 VMM_HldMngDisp_StHldWrnMsg;
   IDT_uint8 VMM_HldMngDisp_StPrkBrkInfoMsg;
   IDT_uint8 VMM_HldMngDisp_StPrkInfoMsg;
};
typedef struct _IDT_Group_VMM_EAResp_ IDT_Group_VMM_EAResp;
struct _IDT_Group_VMM_EAResp_ {
   E3BaseTypeU8 VMM_EALatCtl_StAcv;
   E3BaseTypeU8 VMM_EALgtLimA_StAcv;
   E3BaseTypeU8 VMM_EAPrkCtl_StAcv;
   E3BaseTypeU8 VMM_EAWarnBrk_StAcv;
   E3BaseTypeU8 VMM_EA_StVld;
};
typedef struct _IDT_Group_VMM_EPBReq_ IDT_Group_VMM_EPBReq;
struct _IDT_Group_VMM_EPBReq_ {
   E3BaseTypeU8 VMM_EPBAlyRls_StReq;
   E3BaseTypeU8 VMM_EPBDisp_StExtDispTrig;
};
typedef struct _IDT_Group_VMM_EPBResp_ IDT_Group_VMM_EPBResp;
struct _IDT_Group_VMM_EPBResp_ {
   E3BaseTypeU8 VMM_EPBPrkCtl_StAlyAcvAut;
   E3BaseTypeU8 VMM_EPBPrkCtl_StAlyAcvMAR;
   E3BaseTypeU8 VMM_EPBPrkCtl_StAlyVldAut;
   E3BaseTypeU8 VMM_EPBPrkCtl_StAlyVldMAR;
   E3BaseTypeU8 VMM_EPBPrkCtl_StRlsAcvAut;
   E3BaseTypeU8 VMM_EPBPrkCtl_StRlsAcvMAR;
   E3BaseTypeU8 VMM_EPBPrkCtl_StRlsAcvSXR;
   E3BaseTypeU8 VMM_EPBPrkCtl_StRlsVldAut;
   E3BaseTypeU8 VMM_EPBPrkCtl_StRlsVldMAR;
   E3BaseTypeU8 VMM_EPBPrkCtl_StRlsVldSXR;
};
typedef struct _IDT_Group_VMM_ESCResp_ IDT_Group_VMM_ESCResp;
struct _IDT_Group_VMM_ESCResp_ {
   E3BaseTypeU8 VMM_ESCLgtLimV_StAcv;
   E3BaseTypeU8 VMM_ESCLgtLimV_StVld;
};
typedef struct _IDT_Group_VMM_HldMngHldFb_ IDT_Group_VMM_HldMngHldFb;
struct _IDT_Group_VMM_HldMngHldFb_ {
   E3BaseTypeU8 VMM_HldMng_StHldAcv;
   E3BaseTypeU8 VMM_HldMng_StHldAvl;
};
typedef struct _IDT_Group_VMM_HldMngPrkBrkFb_ IDT_Group_VMM_HldMngPrkBrkFb;
struct _IDT_Group_VMM_HldMngPrkBrkFb_ {
   E3BaseTypeU8 VMM_HldMng_StPrkBrkAcv;
   E3BaseTypeU8 VMM_HldMng_StPrkBrkAvl;
   E3BaseTypeU8 VMM_HldMng_StPrkBrkCpb;
};
typedef struct _IDT_Group_VMM_HldMngPrkPosnFb_ IDT_Group_VMM_HldMngPrkPosnFb;
struct _IDT_Group_VMM_HldMngPrkPosnFb_ {
   E3BaseTypeU8 VMM_HldMng_StPrkPosnAcv;
   E3BaseTypeU8 VMM_HldMng_StPrkPosnAvl;
};
typedef struct _IDT_Group_VMM_LADMReq_ IDT_Group_VMM_LADMReq;
struct _IDT_Group_VMM_LADMReq_ {
   IDT_float32 VMM_Dev4LADM1;
   IDT_float32 VMM_Dev4LADM2;
   IDT_float32 VMM_Dev4LADM3;
   IDT_float32 VMM_Dev4LADM4;
   IDT_float32 VMM_Dev4LADM5;
   IDT_float32 VMM_SlipAg_AgGrdReq;
   IDT_float32 VMM_SlipAg_AgReq;
   IDT_uint8 VMM_SlipAg_StReq;
   IDT_float32 VMM_StgSti_AgOffStgWhlReq;
   IDT_uint8 VMM_StgWhlVib_StReq;
   IDT_float32 VMM_VirtStgStop_CrvtLimLe;
   IDT_float32 VMM_VirtStgStop_CrvtLimRi;
   IDT_uint8 VMM_VirtStgStop_StReq;
};
typedef struct _IDT_Group_VMM_LIMResp_ IDT_Group_VMM_LIMResp;
struct _IDT_Group_VMM_LIMResp_ {
   E3BaseTypeU8 VMM_LIMLgtLimA_StAcv;
   E3BaseTypeU8 VMM_LIMLgtLimA_StVld;
};
typedef struct _IDT_Group_VMM_LODMReq_ IDT_Group_VMM_LODMReq;
struct _IDT_Group_VMM_LODMReq_ {
   IDT_float32 VMM_Dev4LODM1;
   IDT_float32 VMM_Dev4LODM2;
   IDT_float32 VMM_Dev4LODM3;
   IDT_float32 VMM_Dev4LODM4;
   IDT_float32 VMM_Dev4LODM5;
   IDT_uint8 VMM_PreCdn_StDynDrvBrk;
   IDT_float32 VMM_PreCdn_TiEstimDynDece;
   IDT_float32 VMM_SpdWhlLim_SpdWhlMax;
   IDT_float32 VMM_SpdWhlLim_SpdWhlMin;
   IDT_float32 VMM_SpdWhlLim_TqWhlMax;
   IDT_float32 VMM_SpdWhlLim_TqWhlMin;
   IDT_float32 VMM_TqWhlAcce_TqDmd;
   IDT_float32 VMM_TqWhlAcce_TqGrdTrfDec;
   IDT_float32 VMM_TqWhlAcce_TqGrdTrfInc;
   IDT_float32 VMM_TqWhlAcce_TqLim;
   IDT_float32 VMM_TqWhlAcce_TqTarPred;
   IDT_float32 VMM_TqWhlAcce_TqTlrLoTar;
   IDT_float32 VMM_TqWhlBrk_TqDmd;
   IDT_float32 VMM_TqWhlBrk_TqTarPred;
   IDT_uint8 VMM_TqWhlDece_MdDesBrkDstr;
   IDT_float32 VMM_TqWhlDece_TqAddDmd;
   IDT_float32 VMM_TqWhlDece_TqAddLim;
   IDT_float32 VMM_TqWhlDece_TqDmd;
   IDT_float32 VMM_TqWhlDece_TqGrdTrfDec;
   IDT_float32 VMM_TqWhlDece_TqGrdTrfInc;
   IDT_float32 VMM_TqWhlDece_TqLim;
   IDT_float32 VMM_TqWhlDece_TqTarPred;
   IDT_float32 VMM_TqWhlDece_TqTlrHiTar;
};
typedef struct _IDT_Group_VMM_LatCtlReq_ IDT_Group_VMM_LatCtlReq;
struct _IDT_Group_VMM_LatCtlReq_ {
   E3ExtdTypeFloatFctTi VMM_LatGuide_CrvtGrdReq;
   E3BaseTypeFloat VMM_LatGuide_CrvtReq;
   E3BaseTypeFloat VMM_LatGuide_FacIt;
   E3BaseTypeFloat VMM_LatGuide_FacSsty;
   E3BaseTypeU8 VMM_LatGuide_IdxSetupStgCtlFr;
   E3BaseTypeU8 VMM_LatGuide_StLimCtlFReq;
   E3BaseTypeU8 VMM_LatGuide_StReq;
   E3BaseTypeU8 VMM_LatGuide_TiIntpLatCtl;
};
typedef struct _IDT_Group_VMM_LatGuideFb_ IDT_Group_VMM_LatGuideFb;
struct _IDT_Group_VMM_LatGuideFb_ {
   E3BaseTypeFloat VMM_LatGuide_CrvtAct;
   E3BaseTypeFloat VMM_LatGuide_CrvtIniCrvtCtl;
   E3BaseTypeFloat VMM_LatGuide_CrvtIniTrjCtl;
   E3BaseTypeFloat VMM_LatGuide_FacLdCtlStgFr;
   E3BaseTypeFloat VMM_LatGuide_FacSstyIni;
   E3BaseTypeU8 VMM_LatGuide_FlgDynLimCtlStgFr;
   E3BaseTypeU8 VMM_LatGuide_StItAvl;
   E3BaseTypeU8 VMM_LatGuide_StSlipAgAvl;
   E3BaseTypeU8 VMM_LatGuide_StStgFrDrvAsiAvl;
   E3BaseTypeU8 VMM_LatGuide_StStgFrPrkAsiAvl;
   E3BaseTypeU8 VMM_LatGuide_StTrjTrckAvl;
   E3BaseTypeU8 VMM_LatLim_StAvl;
   E3BaseTypeFloat VMM_LatPot_CrvtGeoSlipAgDepLe;
   E3BaseTypeFloat VMM_LatPot_CrvtGeoSlipAgDepRi;
   E3BaseTypeFloat VMM_LatPot_FacCrvtSlipAgDep;
   E3BaseTypeU8 VMM_StgWhlVib_StAvl;
};
typedef struct _IDT_Group_VMM_LeavConResp_ IDT_Group_VMM_LeavConResp;
struct _IDT_Group_VMM_LeavConResp_ {
   E3BaseTypeU8 VMM_LeavConPrkCtl_StAcv;
   E3BaseTypeU8 VMM_LeavConPrkCtl_StPrkLockAcv;
   E3BaseTypeU8 VMM_LeavConPrkCtl_StVld;
};
typedef struct _IDT_Group_VMM_LgtGuideFb_ IDT_Group_VMM_LgtGuideFb;
struct _IDT_Group_VMM_LgtGuideFb_ {
   E3BaseTypeU8 VMM_LgtDir_StDirAcv;
   E3BaseTypeFloat VMM_LgtGuide_ATarCord;
   E3BaseTypeFloat VMM_LgtGuide_ATqDmd;
   E3BaseTypeU8 VMM_LgtGuide_IdxDeceCrit;
   E3BaseTypeU8 VMM_LgtGuide_ItBrkStressLvl;
   E3BaseTypeU8 VMM_LgtGuide_StAcceAvl;
   E3BaseTypeU8 VMM_LgtGuide_StAcceLim;
   E3BaseTypeU8 VMM_LgtGuide_StDeceLim;
   E3BaseTypeU8 VMM_LgtGuide_StPTAcv;
   E3BaseTypeU8 VMM_LgtGuide_StSdsl;
   E3BaseTypeU8 VMM_LgtGuide_StSkidDet;
   E3BaseTypeU8 VMM_LgtGuide_StTrjTrckAvl;
   E3ExtdTypeFloatFct VMM_LgtLimV_VDmd;
   E3ExtdTypeFloatFct VMM_LgtLimV_VDmdDrvAsi;
};
typedef struct _IDT_Group_VMM_PBResp_ IDT_Group_VMM_PBResp;
struct _IDT_Group_VMM_PBResp_ {
   E3BaseTypeU8 VMM_PBLgtLimA_StAcv;
   E3BaseTypeU8 VMM_PBPrkCtl_StAcv;
   E3BaseTypeU8 VMM_PBTrjCtl_StAcv;
   E3BaseTypeU8 VMM_PB_StVld;
};
typedef struct _IDT_Group_VMM_PHResp_ IDT_Group_VMM_PHResp;
struct _IDT_Group_VMM_PHResp_ {
   E3BaseTypeU8 VMM_PHCrvtLim_StAcv;
   E3BaseTypeU8 VMM_PHLgtLimA_StAcv;
   E3BaseTypeU8 VMM_PHPrkCtl_StAcv;
   E3BaseTypeU8 VMM_PHTrjCtl_StAcv;
   E3BaseTypeU8 VMM_PH_StVld;
};
typedef struct _IDT_Group_VMM_PedInfo_ IDT_Group_VMM_PedInfo;
struct _IDT_Group_VMM_PedInfo_ {
   E3ExtdTypeFloatFct VMM_BrkPed_ItDmdNorm;
   E3BaseTypeU8 VMM_BrkPed_StAddlQlfr;
   E3BaseTypeU8 VMM_BrkPed_StReqDmnt;
   E3BaseTypeU8 VMM_BrkPed_StReqSuff;
   E3BaseTypeFloat VMM_DrvPed_ADmdNorm;
   E3BaseTypeU8 VMM_DrvPed_StAddlQlfr;
   E3BaseTypeU8 VMM_DrvPed_StReqDmnt;
};
typedef struct _IDT_Group_VMM_PotFb_ IDT_Group_VMM_PotFb;
struct _IDT_Group_VMM_PotFb_ {
   E3BaseTypeFloat VMM_LgtPot_ADifCtl;
   E3BaseTypeFloat VMM_LgtPot_ADifSlop;
   E3BaseTypeFloat VMM_LgtPot_ADrg;
   E3BaseTypeFloat VMM_LgtPot_AMax;
   E3BaseTypeFloat VMM_LgtPot_AMaxCmft;
   E3BaseTypeFloat VMM_LgtPot_AMaxPtMdAct;
   E3BaseTypeFloat VMM_LgtPot_AMinRgn;
   E3BaseTypeFloat VMM_LgtPot_ANeutTh;
   E3BaseTypeFloat VMM_SlipAgPot_AgSlipLuSdsl;
};
typedef struct _IDT_Group_VMM_PreCdnFb_ IDT_Group_VMM_PreCdnFb;
struct _IDT_Group_VMM_PreCdnFb_ {
   E3BaseTypeU8 VMM_PreCdn_StResp;
};
typedef struct _IDT_Group_VMM_RCTAResp_ IDT_Group_VMM_RCTAResp;
struct _IDT_Group_VMM_RCTAResp_ {
   E3BaseTypeU8 VMM_RCTALgtLimA_StAcv;
   E3BaseTypeU8 VMM_RCTAWarnBrk_StAcv;
   E3BaseTypeU8 VMM_RCTA_StVld;
};
typedef struct _IDT_Group_VMM_SlipAgFb_ IDT_Group_VMM_SlipAgFb;
struct _IDT_Group_VMM_SlipAgFb_ {
   E3BaseTypeFloat VMM_SlipAg_AgSlipAxlReAct;
   E3BaseTypeFloat VMM_SlipAg_AgSlipAxlReGeoAct;
};
typedef struct _IDT_Group_VMM_WBAResp_ IDT_Group_VMM_WBAResp;
struct _IDT_Group_VMM_WBAResp_ {
   E3BaseTypeU8 VMM_BrkPed_StDrvBrkCtaWBA;
   E3BaseTypeU8 VMM_WBAHydBrkAsi_StAcv;
   E3BaseTypeU8 VMM_WBALgtLimA_StAcv;
   E3BaseTypeU8 VMM_WBAPreCdn_StAcv;
   E3BaseTypeU8 VMM_WBATrjCtl_StAcv;
   E3BaseTypeU8 VMM_WBAWarnBrk_StAcv;
   E3BaseTypeU8 VMM_WBA_StVld;
};
typedef struct _IDT_Group_WBA_TrjCtrl_ IDT_Group_WBA_TrjCtrl;
struct _IDT_Group_WBA_TrjCtrl_ {
   E3BaseTypeFloat WBA_TrjCtlHd_AgPosnBas;
   E3BaseTypeU8 WBA_TrjCtlHd_Id;
   E3BaseTypeU8 WBA_TrjCtlHd_IdxStrtPlanNew;
   E3BaseTypeS32 WBA_TrjCtlHd_LPosnBasLat;
   E3BaseTypeS32 WBA_TrjCtlHd_LPosnBasLgt;
   E3BaseTypeU8 WBA_TrjCtlHd_NumNod;
   E3ExtdTypeFloatFct WBA_TrjCtlNod01_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod01_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod01_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod01_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod01_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod01_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod01_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod02_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod02_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod02_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod02_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod02_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod02_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod02_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod03_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod03_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod03_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod03_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod03_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod03_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod03_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod04_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod04_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod04_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod04_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod04_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod04_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod04_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod05_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod05_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod05_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod05_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod05_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod05_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod05_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod06_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod06_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod06_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod06_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod06_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod06_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod06_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod07_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod07_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod07_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod07_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod07_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod07_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod07_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod08_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod08_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod08_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod08_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod08_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod08_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod08_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod09_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod09_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod09_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod09_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod09_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod09_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod09_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod10_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod10_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod10_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod10_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod10_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod10_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod10_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod11_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod11_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod11_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod11_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod11_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod11_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod11_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod12_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod12_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod12_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod12_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod12_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod12_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod12_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod13_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod13_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod13_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod13_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod13_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod13_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod13_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod14_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod14_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod14_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod14_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod14_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod14_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod14_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod15_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod15_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod15_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod15_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod15_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod15_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod15_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod16_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod16_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod16_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod16_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod16_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod16_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod16_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod17_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod17_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod17_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod17_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod17_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod17_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod17_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod18_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod18_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod18_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod18_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod18_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod18_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod18_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod19_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod19_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod19_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod19_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod19_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod19_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod19_LPosnLgt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod20_AgPosnYaw;
   E3ExtdTypeFloatFct WBA_TrjCtlNod20_CrvtTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod20_DTrck;
   E3ExtdTypeFloatFct WBA_TrjCtlNod20_FacIt;
   E3ExtdTypeFloatFct WBA_TrjCtlNod20_FacSsty;
   E3ExtdTypeFloatFct WBA_TrjCtlNod20_LPosnLat;
   E3ExtdTypeFloatFct WBA_TrjCtlNod20_LPosnLgt;
};
typedef struct _IDT_Group_WBA_VMMReq_ IDT_Group_WBA_VMMReq;
struct _IDT_Group_WBA_VMMReq_ {
   E3BaseTypeU8 WBA_HldCtl_StTkovReq;
   E3BaseTypeU8 WBA_HydBrkAsi_StThReq;
   E3ExtdTypeFloatFct WBA_LgtLimA_ADmd;
   E3ExtdTypeFloatFct WBA_LgtLimA_AGrdMaxDec;
   E3BaseTypeU8 WBA_LgtLimA_StAcv;
   E3BaseTypeU8 WBA_PreCdn_StReq;
   E3BaseTypeU8 WBA_TrjCtl_StAcv;
};
typedef struct _IDT_PARAM_GlbPrm_ IDT_PARAM_GlbPrm;
typedef IDT_float32_DC_PTGlbPrm_px_TqWhlDrgDeceBas_VVeh
    IDT_ARRAY_PTGlbPrm_px_TqWhlDrgDeceBas_VVeh_21[21];
typedef IDT_float32_DC_PTGlbPrm_py_TqWhlDrgDeceBas_RatTq
    IDT_ARRAY_PTGlbPrm_py_TqWhlDrgDeceBas_RatTq_10[10];
typedef IDT_float32_DC_PTGlbPrm_py_TqWhlDrgDeceBas_AgLongi
    IDT_ARRAY_PTGlbPrm_py_TqWhlDrgDeceBas_AgLongi_7[7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBas0
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBas0_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasDyn0
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasDyn0_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfs0
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfs0_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn0
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn0_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBas1
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBas1_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasDyn1
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasDyn1_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfs1
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfs1_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn1
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn1_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBas2
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBas2_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasDyn2
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasDyn2_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfs2
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfs2_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn2
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn2_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBas3
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBas3_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasDyn3
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasDyn3_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfs3
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfs3_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn3
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn3_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasManHyb
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasManHyb_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsManHyb
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsManHyb_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasNrmHyb
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasNrmHyb_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsNrmHyb
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsNrmHyb_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasSptHyb
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasSptHyb_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsSptHyb
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsSptHyb_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceBasSptManHyb
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasSptManHyb_21_10[21][10];
typedef IDT_float32_DC_PTGlbPrm_p2_TqWhlDrgDeceOfsSptManHyb
    IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsSptManHyb_21_7[21][7];
typedef IDT_float32_DC_PTGlbPrm_p1_TqWhlMinHiPrioUpprLimAxp
    IDT_ARRAY_PTGlbPrm_p1_TqWhlMinHiPrioUpprLimAxp_2[2];
typedef IDT_float32_DC_PTGlbPrm_px_TqWhlMinHiPrioUpprLimAxp_RatGbx
    IDT_ARRAY_PTGlbPrm_px_TqWhlMinHiPrioUpprLimAxp_RatGbx_2[2];
typedef IDT_float32_DC_PTGlbPrm_p1_TqMinVrnCluCE IDT_ARRAY_PTGlbPrm_p1_TqMinVrnCluCE_21[21];
typedef IDT_float32_DC_PTGlbPrm_px_TqVrnCluCE_SpdCluCE
    IDT_ARRAY_PTGlbPrm_px_TqVrnCluCE_SpdCluCE_21[21];
typedef IDT_float32_DC_PTGlbPrm_p1_TqMaxVrnCluCE IDT_ARRAY_PTGlbPrm_p1_TqMaxVrnCluCE_21[21];
struct _IDT_PARAM_GlbPrm_ {
   IDT_ARRAY_PTGlbPrm_px_TqWhlDrgDeceBas_VVeh_21 PTGlbPrm_px_TqWhlDrgDeceBas_VVeh;
   IDT_ARRAY_PTGlbPrm_py_TqWhlDrgDeceBas_RatTq_10 PTGlbPrm_py_TqWhlDrgDeceBas_RatTq;
   IDT_ARRAY_PTGlbPrm_py_TqWhlDrgDeceBas_AgLongi_7 PTGlbPrm_py_TqWhlDrgDeceBas_AgLongi;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBas0_21_10 PTGlbPrm_p2_TqWhlDrgDeceBas0;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasDyn0_21_10 PTGlbPrm_p2_TqWhlDrgDeceBasDyn0;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfs0_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfs0;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn0_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfsDyn0;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBas1_21_10 PTGlbPrm_p2_TqWhlDrgDeceBas1;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasDyn1_21_10 PTGlbPrm_p2_TqWhlDrgDeceBasDyn1;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfs1_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfs1;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn1_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfsDyn1;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBas2_21_10 PTGlbPrm_p2_TqWhlDrgDeceBas2;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasDyn2_21_10 PTGlbPrm_p2_TqWhlDrgDeceBasDyn2;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfs2_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfs2;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn2_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfsDyn2;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBas3_21_10 PTGlbPrm_p2_TqWhlDrgDeceBas3;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasDyn3_21_10 PTGlbPrm_p2_TqWhlDrgDeceBasDyn3;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfs3_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfs3;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsDyn3_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfsDyn3;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasManHyb_21_10 PTGlbPrm_p2_TqWhlDrgDeceBasManHyb;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsManHyb_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfsManHyb;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasNrmHyb_21_10 PTGlbPrm_p2_TqWhlDrgDeceBasNrmHyb;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsNrmHyb_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfsNrmHyb;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasSptHyb_21_10 PTGlbPrm_p2_TqWhlDrgDeceBasSptHyb;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsSptHyb_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfsSptHyb;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceBasSptManHyb_21_10 PTGlbPrm_p2_TqWhlDrgDeceBasSptManHyb;
   IDT_ARRAY_PTGlbPrm_p2_TqWhlDrgDeceOfsSptManHyb_21_7 PTGlbPrm_p2_TqWhlDrgDeceOfsSptManHyb;
   IDT_ARRAY_PTGlbPrm_p1_TqWhlMinHiPrioUpprLimAxp_2 PTGlbPrm_p1_TqWhlMinHiPrioUpprLimAxp;
   IDT_ARRAY_PTGlbPrm_px_TqWhlMinHiPrioUpprLimAxp_RatGbx_2
    PTGlbPrm_px_TqWhlMinHiPrioUpprLimAxp_RatGbx;
   IDT_ARRAY_PTGlbPrm_p1_TqMinVrnCluCE_21 PTGlbPrm_p1_TqMinVrnCluCE;
   IDT_ARRAY_PTGlbPrm_px_TqVrnCluCE_SpdCluCE_21 PTGlbPrm_px_TqVrnCluCE_SpdCluCE;
   IDT_ARRAY_PTGlbPrm_p1_TqMaxVrnCluCE_21 PTGlbPrm_p1_TqMaxVrnCluCE;
};
typedef struct _IDT_STM_StSwCptCurCtn_ IDT_STM_StSwCptCurCtn;
struct _IDT_STM_StSwCptCurCtn_ {
   IDT_uint8 APIasil_StSwCptCur;
   IDT_uint8 ADCtl_StSwCptCur;
   IDT_uint8 AJDMngqm_StSwCptCur;
   IDT_uint8 AIAD_StSwCptCur;
   IDT_uint8 AIAS_StSwCptCur;
   IDT_uint8 AIChRqm_StSwCptCur;
   IDT_uint8 AIChTasil_StSwCptCur;
   IDT_uint8 AIChTqm_StSwCptCur;
   IDT_uint8 AICluRqm_StSwCptCur;
   IDT_uint8 AICluTqm_StSwCptCur;
   IDT_uint8 AICERqm_StSwCptCur;
   IDT_uint8 deleted_1_StSwCptCur;
   IDT_uint8 AICETqm_StSwCptCur;
   IDT_uint8 AIxD_StSwCptCur;
   IDT_uint8 AID_StSwCptCur;
   IDT_uint8 AIETMRqm_StSwCptCur;
   IDT_uint8 AIETMTqm_StSwCptCur;
   IDT_uint8 AIPT_StSwCptCur;
   IDT_uint8 AIS_StSwCptCur;
   IDT_uint8 AITV_StSwCptCur;
   IDT_uint8 ADA_StSwCptCur;
   IDT_uint8 CMM_StSwCptCur;
   IDT_uint8 CVO_StSwCptCur;
   IDT_uint8 DC_StSwCptCur;
   IDT_uint8 DLC_StSwCptCur;
   IDT_uint8 DLO_StSwCptCur;
   IDT_uint8 DrvDmdasil_StSwCptCur;
   IDT_uint8 DrvDmdqm_StSwCptCur;
   IDT_uint8 DTProtqm_StSwCptCur;
   IDT_uint8 DTSMqm_StSwCptCur;
   IDT_uint8 DTSOqm_StSwCptCur;
   IDT_uint8 DMPLR_StSwCptCur;
   IDT_uint8 DPMasil_StSwCptCur;
   IDT_uint8 DRE_StSwCptCur;
   IDT_uint8 DSI_StSwCptCur;
   IDT_uint8 DTC_StSwCptCur;
   IDT_uint8 deleted_2_StSwCptCur;
   IDT_uint8 deleted_3_StSwCptCur;
   IDT_uint8 GbxStgyqm_StSwCptCur;
   IDT_uint8 HFPCtlqm_StSwCptCur;
   IDT_uint8 TSMqm_StSwCptCur;
   IDT_uint8 LADC_StSwCptCur;
   IDT_uint8 LnchCtlqm_StSwCptCur;
   IDT_uint8 LADM_StSwCptCur;
   IDT_uint8 LC_StSwCptCur;
   IDT_uint8 LODM_StSwCptCur;
   IDT_uint8 MTqDmdasil_StSwCptCur;
   IDT_uint8 MTqOasil_StSwCptCur;
   IDT_uint8 ORUCtlD_StSwCptCur;
   IDT_uint8 OTAVSMasil_StSwCptCur;
   IDT_uint8 PLCasil_StSwCptCur;
   IDT_uint8 PTAcvasil_StSwCptCur;
   IDT_uint8 PTCqm_StSwCptCur;
   IDT_uint8 PTCfgSrvasil_StSwCptCur;
   IDT_uint8 PTDrvVehqm_StSwCptCur;
   IDT_uint8 PTERMqm_StSwCptCur;
   IDT_uint8 PTEROqm_StSwCptCur;
   IDT_uint8 PTMqm_StSwCptCur;
   IDT_uint8 PTOqm_StSwCptCur;
   IDT_uint8 PTPqm_StSwCptCur;
   IDT_uint8 PTRtneMasil_StSwCptCur;
   IDT_uint8 PTSoundqm_StSwCptCur;
   IDT_uint8 PTUIqm_StSwCptCur;
   IDT_uint8 PCCP_StSwCptCur;
   IDT_uint8 PMC_StSwCptCur;
   IDT_uint8 PEA_StSwCptCur;
   IDT_uint8 RWS_StSwCptCur;
   IDT_uint8 RTC_StSwCptCur;
   IDT_uint8 RDE_StSwCptCur;
   IDT_uint8 RSE_StSwCptCur;
   IDT_uint8 SIPTqm_StSwCptCur;
   IDT_uint8 deleted_4_StSwCptCur;
   IDT_uint8 TRCE_StSwCptCur;
   IDT_uint8 TPI_StSwCptCur;
   IDT_uint8 TPUI_StSwCptCur;
   IDT_uint8 USSDB_StSwCptCur;
   IDT_uint8 VDSO_StSwCptCur;
   IDT_uint8 VDFE_StSwCptCur;
   IDT_uint8 VMMP_StSwCptCur;
   IDT_uint8 VSPsafu_StSwCptCur;
   IDT_uint8 WLM_StSwCptCur;
   IDT_uint8 AIPTCptTasil_StSwCptCur;
   IDT_uint8 LftCtl_StSwCptCur;
   IDT_uint8 PTOMMasil_StSwCptCur;
   IDT_uint8 SIShiftasil_StSwCptCur;
   IDT_uint8 Reserved_5_StSwCptCur;
};
typedef struct _IDT_STRUCT_LADC_AgStgMaxRe_ IDT_STRUCT_LADC_AgStgMaxRe;
typedef IDT_float32 IDT_ARRAY_LADC_AgStgMaxRe_2_5[2][5];
struct _IDT_STRUCT_LADC_AgStgMaxRe_ {
   IDT_ARRAY_LADC_AgStgMaxRe_2_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_LC_LTarHeiAllLvlFr_ IDT_STRUCT_LC_LTarHeiAllLvlFr;
typedef IDT_sint8 IDT_ARRAY_LC_LTarHeiAllLvlFr_9[9];
struct _IDT_STRUCT_LC_LTarHeiAllLvlFr_ {
   IDT_ARRAY_LC_LTarHeiAllLvlFr_9 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_LC_LTarHeiAllLvlRe_ IDT_STRUCT_LC_LTarHeiAllLvlRe;
typedef IDT_sint8 IDT_ARRAY_LC_LTarHeiAllLvlRe_9[9];
struct _IDT_STRUCT_LC_LTarHeiAllLvlRe_ {
   IDT_ARRAY_LC_LTarHeiAllLvlRe_9 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTCActr_TqMinPredCE_ IDT_STRUCT_PTCActr_TqMinPredCE;
typedef IDT_float32 IDT_ARRAY_PTCActr_TqMinPredCE_16[16];
struct _IDT_STRUCT_PTCActr_TqMinPredCE_ {
   IDT_ARRAY_PTCActr_TqMinPredCE_16 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTCActr_TqMinPredElmAxp_ IDT_STRUCT_PTCActr_TqMinPredElmAxp;
typedef IDT_float32 IDT_ARRAY_PTCActr_TqMinPredElmAxp_16[16];
struct _IDT_STRUCT_PTCActr_TqMinPredElmAxp_ {
   IDT_ARRAY_PTCActr_TqMinPredElmAxp_16 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTCActr_TqMinPredElmAxs_ IDT_STRUCT_PTCActr_TqMinPredElmAxs;
typedef IDT_float32 IDT_ARRAY_PTCActr_TqMinPredElmAxs_16[16];
struct _IDT_STRUCT_PTCActr_TqMinPredElmAxs_ {
   IDT_ARRAY_PTCActr_TqMinPredElmAxs_16 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTCMot_SpdAryPredCluAxp_ IDT_STRUCT_PTCMot_SpdAryPredCluAxp;
typedef IDT_float32 IDT_ARRAY_PTCMot_SpdAryPredCluAxp_16[16];
struct _IDT_STRUCT_PTCMot_SpdAryPredCluAxp_ {
   IDT_ARRAY_PTCMot_SpdAryPredCluAxp_16 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTCMot_SpdAryPredCluAxs_ IDT_STRUCT_PTCMot_SpdAryPredCluAxs;
typedef IDT_float32 IDT_ARRAY_PTCMot_SpdAryPredCluAxs_16[16];
struct _IDT_STRUCT_PTCMot_SpdAryPredCluAxs_ {
   IDT_ARRAY_PTCMot_SpdAryPredCluAxs_16 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTCMot_SpdAryPredCluCE_ IDT_STRUCT_PTCMot_SpdAryPredCluCE;
typedef IDT_float32 IDT_ARRAY_PTCMot_SpdAryPredCluCE_16[16];
struct _IDT_STRUCT_PTCMot_SpdAryPredCluCE_ {
   IDT_ARRAY_PTCMot_SpdAryPredCluCE_16 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTCMot_TqTotMaxPredCluCE_ IDT_STRUCT_PTCMot_TqTotMaxPredCluCE;
typedef IDT_float32 IDT_ARRAY_PTCMot_TqTotMaxPredCluCE_16[16];
struct _IDT_STRUCT_PTCMot_TqTotMaxPredCluCE_ {
   IDT_ARRAY_PTCMot_TqTotMaxPredCluCE_16 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTCMot_TqTotMinDrvActPredCluCE_
    IDT_STRUCT_PTCMot_TqTotMinDrvActPredCluCE;
typedef IDT_float32 IDT_ARRAY_PTCMot_TqTotMinDrvActPredCluCE_16[16];
struct _IDT_STRUCT_PTCMot_TqTotMinDrvActPredCluCE_ {
   IDT_ARRAY_PTCMot_TqTotMinDrvActPredCluCE_16 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTCMot_TqTotMinPredCluCE_ IDT_STRUCT_PTCMot_TqTotMinPredCluCE;
typedef IDT_float32 IDT_ARRAY_PTCMot_TqTotMinPredCluCE_16[16];
struct _IDT_STRUCT_PTCMot_TqTotMinPredCluCE_ {
   IDT_ARRAY_PTCMot_TqTotMinPredCluCE_16 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTERM_StCordRes_ IDT_STRUCT_PTERM_StCordRes;
typedef IDT_uint8 IDT_ARRAY_PTERM_StCordRes_256[256];
struct _IDT_STRUCT_PTERM_StCordRes_ {
   IDT_ARRAY_PTERM_StCordRes_256 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTERO_StSitAry_ IDT_STRUCT_PTERO_StSitAry;
typedef IDT_uint8 IDT_ARRAY_PTERO_StSitAry_256[256];
struct _IDT_STRUCT_PTERO_StSitAry_ {
   IDT_ARRAY_PTERO_StSitAry_256 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTPVeh_TqWhlDrgPred_ IDT_STRUCT_PTPVeh_TqWhlDrgPred;
typedef IDT_float32 IDT_ARRAY_PTPVeh_TqWhlDrgPred_39_7[39][7];
struct _IDT_STRUCT_PTPVeh_TqWhlDrgPred_ {
   IDT_ARRAY_PTPVeh_TqWhlDrgPred_39_7 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTPVeh_TqWhlDrgPred_AgSlopAx_ IDT_STRUCT_PTPVeh_TqWhlDrgPred_AgSlopAx;
typedef IDT_float32 IDT_ARRAY_PTPVeh_TqWhlDrgPred_AgSlopAx_7[7];
struct _IDT_STRUCT_PTPVeh_TqWhlDrgPred_AgSlopAx_ {
   IDT_ARRAY_PTPVeh_TqWhlDrgPred_AgSlopAx_7 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_PTPVeh_TqWhlDrgPred_VVehAx_ IDT_STRUCT_PTPVeh_TqWhlDrgPred_VVehAx;
typedef IDT_float32 IDT_ARRAY_PTPVeh_TqWhlDrgPred_VVehAx_39[39];
struct _IDT_STRUCT_PTPVeh_TqWhlDrgPred_VVehAx_ {
   IDT_ARRAY_PTPVeh_TqWhlDrgPred_VVehAx_39 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_AgCrvAgVect5_ IDT_STRUCT_RDE_AgCrvAgVect5;
typedef IDT_uint16 IDT_ARRAY_RDE_AgCrvAgVect5_5[5];
struct _IDT_STRUCT_RDE_AgCrvAgVect5_ {
   IDT_ARRAY_RDE_AgCrvAgVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_CrvtRoadCrvtVect10_ IDT_STRUCT_RDE_CrvtRoadCrvtVect10;
typedef IDT_float32 IDT_ARRAY_RDE_CrvtRoadCrvtVect10_10[10];
struct _IDT_STRUCT_RDE_CrvtRoadCrvtVect10_ {
   IDT_ARRAY_RDE_CrvtRoadCrvtVect10_10 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_DCrvEdaVect5_ IDT_STRUCT_RDE_DCrvEdaVect5;
typedef IDT_float32 IDT_ARRAY_RDE_DCrvEdaVect5_5[5];
struct _IDT_STRUCT_RDE_DCrvEdaVect5_ {
   IDT_ARRAY_RDE_DCrvEdaVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_DObstEdaVect5_ IDT_STRUCT_RDE_DObstEdaVect5;
typedef IDT_float32 IDT_ARRAY_RDE_DObstEdaVect5_5[5];
struct _IDT_STRUCT_RDE_DObstEdaVect5_ {
   IDT_ARRAY_RDE_DObstEdaVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_DRoadClasEdaVect5_ IDT_STRUCT_RDE_DRoadClasEdaVect5;
typedef IDT_float32 IDT_ARRAY_RDE_DRoadClasEdaVect5_5[5];
struct _IDT_STRUCT_RDE_DRoadClasEdaVect5_ {
   IDT_ARRAY_RDE_DRoadClasEdaVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_DRoadCrvtEdaVect10_ IDT_STRUCT_RDE_DRoadCrvtEdaVect10;
typedef IDT_float32 IDT_ARRAY_RDE_DRoadCrvtEdaVect10_10[10];
struct _IDT_STRUCT_RDE_DRoadCrvtEdaVect10_ {
   IDT_ARRAY_RDE_DRoadCrvtEdaVect10_10 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_DRoadCtgyEdaVect5_ IDT_STRUCT_RDE_DRoadCtgyEdaVect5;
typedef IDT_float32 IDT_ARRAY_RDE_DRoadCtgyEdaVect5_5[5];
struct _IDT_STRUCT_RDE_DRoadCtgyEdaVect5_ {
   IDT_ARRAY_RDE_DRoadCtgyEdaVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_DRoadSlopEdaVect10_ IDT_STRUCT_RDE_DRoadSlopEdaVect10;
typedef IDT_float32 IDT_ARRAY_RDE_DRoadSlopEdaVect10_10[10];
struct _IDT_STRUCT_RDE_DRoadSlopEdaVect10_ {
   IDT_ARRAY_RDE_DRoadSlopEdaVect10_10 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_DRoadSrfcStEdaVect3_ IDT_STRUCT_RDE_DRoadSrfcStEdaVect3;
typedef IDT_float32 IDT_ARRAY_RDE_DRoadSrfcStEdaVect3_3[3];
struct _IDT_STRUCT_RDE_DRoadSrfcStEdaVect3_ {
   IDT_ARRAY_RDE_DRoadSrfcStEdaVect3_3 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_DRoadWavEdaVect5_ IDT_STRUCT_RDE_DRoadWavEdaVect5;
typedef IDT_float32 IDT_ARRAY_RDE_DRoadWavEdaVect5_5[5];
struct _IDT_STRUCT_RDE_DRoadWavEdaVect5_ {
   IDT_ARRAY_RDE_DRoadWavEdaVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_GrdRoadSlopVect10_ IDT_STRUCT_RDE_GrdRoadSlopVect10;
typedef IDT_float32 IDT_ARRAY_RDE_GrdRoadSlopVect10_10[10];
struct _IDT_STRUCT_RDE_GrdRoadSlopVect10_ {
   IDT_ARRAY_RDE_GrdRoadSlopVect10_10 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_IdxCrvTypVect5_ IDT_STRUCT_RDE_IdxCrvTypVect5;
typedef IDT_uint8 IDT_ARRAY_RDE_IdxCrvTypVect5_5[5];
struct _IDT_STRUCT_RDE_IdxCrvTypVect5_ {
   IDT_ARRAY_RDE_IdxCrvTypVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_IdxObstLaneVect5_ IDT_STRUCT_RDE_IdxObstLaneVect5;
typedef IDT_uint16 IDT_ARRAY_RDE_IdxObstLaneVect5_5[5];
struct _IDT_STRUCT_RDE_IdxObstLaneVect5_ {
   IDT_ARRAY_RDE_IdxObstLaneVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_IdxObstPosnVect5_ IDT_STRUCT_RDE_IdxObstPosnVect5;
typedef IDT_uint8 IDT_ARRAY_RDE_IdxObstPosnVect5_5[5];
struct _IDT_STRUCT_RDE_IdxObstPosnVect5_ {
   IDT_ARRAY_RDE_IdxObstPosnVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_IdxObstTypVect5_ IDT_STRUCT_RDE_IdxObstTypVect5;
typedef IDT_uint8 IDT_ARRAY_RDE_IdxObstTypVect5_5[5];
struct _IDT_STRUCT_RDE_IdxObstTypVect5_ {
   IDT_ARRAY_RDE_IdxObstTypVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_IdxRoadClasVect5_ IDT_STRUCT_RDE_IdxRoadClasVect5;
typedef IDT_uint8 IDT_ARRAY_RDE_IdxRoadClasVect5_5[5];
struct _IDT_STRUCT_RDE_IdxRoadClasVect5_ {
   IDT_ARRAY_RDE_IdxRoadClasVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_IdxRoadCtgyVect5_ IDT_STRUCT_RDE_IdxRoadCtgyVect5;
typedef IDT_uint8 IDT_ARRAY_RDE_IdxRoadCtgyVect5_5[5];
struct _IDT_STRUCT_RDE_IdxRoadCtgyVect5_ {
   IDT_ARRAY_RDE_IdxRoadCtgyVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_IdxRoadSrfcStVect3_ IDT_STRUCT_RDE_IdxRoadSrfcStVect3;
typedef IDT_uint8 IDT_ARRAY_RDE_IdxRoadSrfcStVect3_3[3];
struct _IDT_STRUCT_RDE_IdxRoadSrfcStVect3_ {
   IDT_ARRAY_RDE_IdxRoadSrfcStVect3_3 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_IdxRoadWavVect5_ IDT_STRUCT_RDE_IdxRoadWavVect5;
typedef IDT_uint8 IDT_ARRAY_RDE_IdxRoadWavVect5_5[5];
struct _IDT_STRUCT_RDE_IdxRoadWavVect5_ {
   IDT_ARRAY_RDE_IdxRoadWavVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_LCrvApexRdVect5_ IDT_STRUCT_RDE_LCrvApexRdVect5;
typedef IDT_uint16 IDT_ARRAY_RDE_LCrvApexRdVect5_5[5];
struct _IDT_STRUCT_RDE_LCrvApexRdVect5_ {
   IDT_ARRAY_RDE_LCrvApexRdVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_LCrvLVect5_ IDT_STRUCT_RDE_LCrvLVect5;
typedef IDT_uint16 IDT_ARRAY_RDE_LCrvLVect5_5[5];
struct _IDT_STRUCT_RDE_LCrvLVect5_ {
   IDT_ARRAY_RDE_LCrvLVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_LCrvRdVect5_ IDT_STRUCT_RDE_LCrvRdVect5;
typedef IDT_uint16 IDT_ARRAY_RDE_LCrvRdVect5_5[5];
struct _IDT_STRUCT_RDE_LCrvRdVect5_ {
   IDT_ARRAY_RDE_LCrvRdVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_LObstHeiVect5_ IDT_STRUCT_RDE_LObstHeiVect5;
typedef IDT_uint16 IDT_ARRAY_RDE_LObstHeiVect5_5[5];
struct _IDT_STRUCT_RDE_LObstHeiVect5_ {
   IDT_ARRAY_RDE_LObstHeiVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_LObstLVect5_ IDT_STRUCT_RDE_LObstLVect5;
typedef IDT_uint16 IDT_ARRAY_RDE_LObstLVect5_5[5];
struct _IDT_STRUCT_RDE_LObstLVect5_ {
   IDT_ARRAY_RDE_LObstLVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_PrctCrvApexVect5_ IDT_STRUCT_RDE_PrctCrvApexVect5;
typedef IDT_uint8 IDT_ARRAY_RDE_PrctCrvApexVect5_5[5];
struct _IDT_STRUCT_RDE_PrctCrvApexVect5_ {
   IDT_ARRAY_RDE_PrctCrvApexVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_TiCrvEtaVect5_ IDT_STRUCT_RDE_TiCrvEtaVect5;
typedef IDT_float32 IDT_ARRAY_RDE_TiCrvEtaVect5_5[5];
struct _IDT_STRUCT_RDE_TiCrvEtaVect5_ {
   IDT_ARRAY_RDE_TiCrvEtaVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_TiObstEtaVect5_ IDT_STRUCT_RDE_TiObstEtaVect5;
typedef IDT_float32 IDT_ARRAY_RDE_TiObstEtaVect5_5[5];
struct _IDT_STRUCT_RDE_TiObstEtaVect5_ {
   IDT_ARRAY_RDE_TiObstEtaVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_TiRoadClasEtaVect5_ IDT_STRUCT_RDE_TiRoadClasEtaVect5;
typedef IDT_float32 IDT_ARRAY_RDE_TiRoadClasEtaVect5_5[5];
struct _IDT_STRUCT_RDE_TiRoadClasEtaVect5_ {
   IDT_ARRAY_RDE_TiRoadClasEtaVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_TiRoadCtgyEtaVect5_ IDT_STRUCT_RDE_TiRoadCtgyEtaVect5;
typedef IDT_float32 IDT_ARRAY_RDE_TiRoadCtgyEtaVect5_5[5];
struct _IDT_STRUCT_RDE_TiRoadCtgyEtaVect5_ {
   IDT_ARRAY_RDE_TiRoadCtgyEtaVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_TiRoadWavEtaVect5_ IDT_STRUCT_RDE_TiRoadWavEtaVect5;
typedef IDT_float32 IDT_ARRAY_RDE_TiRoadWavEtaVect5_5[5];
struct _IDT_STRUCT_RDE_TiRoadWavEtaVect5_ {
   IDT_ARRAY_RDE_TiRoadWavEtaVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_ValCnfdRoadSrfcStVect3_ IDT_STRUCT_RDE_ValCnfdRoadSrfcStVect3;
typedef IDT_uint8 IDT_ARRAY_RDE_ValCnfdRoadSrfcStVect3_3[3];
struct _IDT_STRUCT_RDE_ValCnfdRoadSrfcStVect3_ {
   IDT_ARRAY_RDE_ValCnfdRoadSrfcStVect3_3 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RDE_ValObstCrProbVect5_ IDT_STRUCT_RDE_ValObstCrProbVect5;
typedef IDT_uint8 IDT_ARRAY_RDE_ValObstCrProbVect5_5[5];
struct _IDT_STRUCT_RDE_ValObstCrProbVect5_ {
   IDT_ARRAY_RDE_ValObstCrProbVect5_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_STRUCT_RWS_AgStgMaxRe_ IDT_STRUCT_RWS_AgStgMaxRe;
typedef IDT_float32 IDT_ARRAY_RWS_AgStgMaxRe_2_5[2][5];
struct _IDT_STRUCT_RWS_AgStgMaxRe_ {
   IDT_ARRAY_RWS_AgStgMaxRe_2_5 Val;
   IDT_uint8 Clas;
};
typedef struct _IDT_VrnConf_s_DscrHwVer_ IDT_VrnConf_s_DscrHwVer;
typedef IDT_uint8 IDT_uint8_3[3];
struct _IDT_VrnConf_s_DscrHwVer_ {
   IDT_uint8_3 Val;
   IDT_uint8 Clas;
};
typedef IDT_uint8 IDT_uint8_2[2];
typedef IDT_uint8 IDT_uint8_1[1];
typedef struct _ObjectDetection_AT_ConfirmationBits_ ObjectDetection_AT_ConfirmationBits;
struct _ObjectDetection_AT_ConfirmationBits_ {
   ObjectDetection_AT_ConfirmationBit confBitPrecedingL1;
   ObjectDetection_AT_ConfirmationBit confBitPrecedingL2;
   ObjectDetection_AT_ConfirmationBit confBitPrecedingL3;
   ObjectDetection_AT_ConfirmationBit confBitOncomingL2;
   ObjectDetection_AT_ConfirmationBit confBitOncomingL3;
   ObjectDetection_AT_ConfirmationBit confBitCrossingL1;
   ObjectDetection_AT_ConfirmationBit confBitCrossingL2;
   ObjectDetection_AT_ConfirmationBit confBitCrossingL3;
   ObjectDetection_AT_ConfirmationBit confBitEgoTurningL3;
   ObjectDetection_ConfirmationBits_confBitPrecedingL1ObjID_type confBitPrecedingL1ObjID;
   ObjectDetection_ConfirmationBits_confBitPrecedingL2ObjID_type confBitPrecedingL2ObjID;
   ObjectDetection_ConfirmationBits_confBitPrecedingL3ObjID_type confBitPrecedingL3ObjID;
   ObjectDetection_ConfirmationBits_confBitOncomingL2ObjID_type confBitOncomingL2ObjID;
   ObjectDetection_ConfirmationBits_confBitOncomingL3ObjID_type confBitOncomingL3ObjID;
   ObjectDetection_ConfirmationBits_confBitCrossingL1ObjID_type confBitCrossingL1ObjID;
   ObjectDetection_ConfirmationBits_confBitCrossingL2ObjID_type confBitCrossingL2ObjID;
   ObjectDetection_ConfirmationBits_confBitCrossingL3ObjID_type confBitCrossingL3ObjID;
   ObjectDetection_ConfirmationBits_confBitEgoTurningL3ObjID_type confBitEgoTurningL3ObjID;
};
typedef struct _ObjectDetection_AT_Objects_ ObjectDetection_AT_Objects;
struct _ObjectDetection_AT_Objects_ {
   ObjectDetection_Objects_objectClass objectClass;
   ObjectDetection_Objects_objectID objectID;
   ObjectDetection_Objects_history history;
   ObjectDetection_Objects_existenceProbability existenceProbability;
   ObjectDetection_Objects_age age;
   ObjectDetection_Objects_objectClassProbability objectClassProbability;
   ObjectDetection_Objects_timeToCollisionFront timeToCollisionFront;
   ObjectDetection_Objects_timeToCollisionFrontSD timeToCollisionFrontSD;
   ObjectDetection_Objects_inverseTimeToCollisionImagePlane inverseTimeToCollisionImagePlane;
   ObjectDetection_Objects_inverseTimeToCollisionImagePlaneSD inverseTimeToCollisionImagePlaneSD;
   ObjectDetection_Objects_inverseTimeToCollisionImagePlaneValid
    inverseTimeToCollisionImagePlaneValid;
   ObjectDetection_Objects_azimuthAngle azimuthAngle;
   ObjectDetection_Objects_azimuthAngleSD azimuthAngleSD;
   ObjectDetection_Objects_azimuthAngleValid azimuthAngleValid;
   ObjectDetection_Objects_elevationAngle elevationAngle;
   ObjectDetection_Objects_elevationAngleSD elevationAngleSD;
   ObjectDetection_Objects_elevationAngleValid elevationAngleValid;
   ObjectDetection_Objects_radialDistance radialDistance;
   ObjectDetection_Objects_radialDistanceSD radialDistanceSD;
   ObjectDetection_Objects_radialDistanceValid radialDistanceValid;
   ObjectDetection_Objects_deltaElevation deltaElevation;
   ObjectDetection_Objects_deltaElevationSD deltaElevationSD;
   ObjectDetection_Objects_deltaElevationValid deltaElevationValid;
   ObjectDetection_Objects_yawAngle yawAngle;
   ObjectDetection_Objects_yawAngleSD yawAngleSD;
   ObjectDetection_Objects_yawAngleValid yawAngleValid;
   ObjectDetection_Objects_angleSpeed angleSpeed;
   ObjectDetection_Objects_angleSpeedSD angleSpeedSD;
   ObjectDetection_Objects_angleSpeedValid angleSpeedValid;
   ObjectDetection_Objects_angleFrontLeft angleFrontLeft;
   ObjectDetection_Objects_angleFrontLeftSD angleFrontLeftSD;
   ObjectDetection_Objects_angleFrontLeftValid angleFrontLeftValid;
   ObjectDetection_Objects_angleFrontRight angleFrontRight;
   ObjectDetection_Objects_angleFrontRightSD angleFrontRightSD;
   ObjectDetection_Objects_angleFrontRightValid angleFrontRightValid;
   ObjectDetection_Objects_angleRearLeft angleRearLeft;
   ObjectDetection_Objects_angleRearLeftSD angleRearLeftSD;
   ObjectDetection_Objects_angleRearLeftValid angleRearLeftValid;
   ObjectDetection_Objects_angleRearRight angleRearRight;
   ObjectDetection_Objects_angleRearRightSD angleRearRightSD;
   ObjectDetection_Objects_angleRearRightValid angleRearRightValid;
   ObjectDetection_Objects_overlapAngleEgoLaneRight overlapAngleEgoLaneRight;
   ObjectDetection_Objects_overlapAngleEgoLaneRightValid overlapAngleEgoLaneRightValid;
   ObjectDetection_Objects_overlapAngleEgoLaneLeft overlapAngleEgoLaneLeft;
   ObjectDetection_Objects_overlapAngleEgoLaneLeftValid overlapAngleEgoLaneLeftValid;
   ObjectDetection_Objects_measurementSource measurementSource;
   ObjectDetection_Objects_referencePoint referencePoint;
   ObjectDetection_Objects_indicatorLeft indicatorLeft;
   ObjectDetection_Objects_indicatorRight indicatorRight;
   ObjectDetection_Objects_brakelight brakelight;
   ObjectDetection_Objects_stationary stationary;
   ObjectDetection_Objects_lanes lanes;
   ObjectDetection_Objects_safetyIndication safetyIndication;
   ObjectDetection_Objects_width width;
   ObjectDetection_Objects_widthSD widthSD;
   ObjectDetection_Objects_widthValid widthValid;
   ObjectDetection_Objects_length length;
   ObjectDetection_Objects_lengthSD lengthSD;
   ObjectDetection_Objects_lengthValid lengthValid;
};
typedef struct _ObjectDetection_AT_ObjectDetection_objects_eventData_
    ObjectDetection_AT_ObjectDetection_objects_eventData;
struct _ObjectDetection_AT_ObjectDetection_objects_eventData_ {
   ObjectDetection_AT_Objects objects;
   ObjectDetection_objects_eventData_timestampSeconds_type timestampSeconds;
   ObjectDetection_objects_eventData_timestampNanoseconds_type timestampNanoseconds;
   ObjectDetection_AT_TimestampStatus timestampStatus;
   ObjectDetection_objects_eventData_timestampLapNumber_type timestampLapNumber;
   ObjectDetection_AT_FunctionStatus functionStatus;
   ObjectDetection_objects_eventData_cipvObjectId_type cipvObjectId;
   ObjectDetection_AT_CutInLevel cutInLeft;
   ObjectDetection_AT_CutInLevel cutInRight;
   ObjectDetection_AT_Intruder intruder;
   ObjectDetection_AT_ConfirmationBits confirmationBits;
};
typedef struct _RoadAttributes_AT_AttributeDouble_ RoadAttributes_AT_AttributeDouble;
struct _RoadAttributes_AT_AttributeDouble_ {
   RoadAttributes_AttributeDouble_id_type id;
   RoadAttributes_AttributeDouble_distance_type distance;
   RoadAttributes_AttributeDouble_value1_type value1;
   RoadAttributes_AttributeDouble_value2_type value2;
   RoadAttributes_AttributeDouble_source_type source;
};
typedef struct _RoadAttributes_AT_AttributeDoubleEgo_ RoadAttributes_AT_AttributeDoubleEgo;
struct _RoadAttributes_AT_AttributeDoubleEgo_ {
   RoadAttributes_AttributeDoubleEgo_id_type id;
   RoadAttributes_AttributeDoubleEgo_value1_type value1;
   RoadAttributes_AttributeDoubleEgo_value2_type value2;
   RoadAttributes_AttributeDoubleEgo_source_type source;
};
typedef struct _RoadAttributes_AT_AttributeEgoSpeedLimit_ RoadAttributes_AT_AttributeEgoSpeedLimit;
typedef RoadAttributes_AttributeEgoSpeedLimit_indexAdditionalSignList_base_type
    RoadAttributes_AttributeEgoSpeedLimit_indexAdditionalSignList[3];
struct _RoadAttributes_AT_AttributeEgoSpeedLimit_ {
   RoadAttributes_AttributeEgoSpeedLimit_id_type id;
   RoadAttributes_AttributeEgoSpeedLimit_distanceStdDev_type distanceStdDev;
   RoadAttributes_AttributeEgoSpeedLimit_value_type value;
   RoadAttributes_AttributeEgoSpeedLimit_indexAdditionalSignList indexAdditionalSignList;
   RoadAttributes_AttributeEgoSpeedLimit_source_type source;
   RoadAttributes_AT_SpeedlimitUnit unit;
};
typedef struct _RoadAttributes_AT_AttributeSingle_ RoadAttributes_AT_AttributeSingle;
struct _RoadAttributes_AT_AttributeSingle_ {
   RoadAttributes_AttributeSingle_id_type id;
   RoadAttributes_AttributeSingle_distance_type distance;
   RoadAttributes_AttributeSingle_value1_type value1;
   RoadAttributes_AttributeSingle_source_type source;
};
typedef struct _RoadAttributes_AT_AttributeSingleEgo_ RoadAttributes_AT_AttributeSingleEgo;
struct _RoadAttributes_AT_AttributeSingleEgo_ {
   RoadAttributes_AttributeSingleEgo_id_type id;
   RoadAttributes_AttributeSingleEgo_value1_type value1;
   RoadAttributes_AttributeSingleEgo_source_type source;
};
typedef struct _RoadAttributes_AT_AttributeSingleSigned_ RoadAttributes_AT_AttributeSingleSigned;
struct _RoadAttributes_AT_AttributeSingleSigned_ {
   RoadAttributes_AttributeSingleSigned_id_type id;
   RoadAttributes_AttributeSingleSigned_distance_type distance;
   RoadAttributes_AttributeSingleSigned_value1_type value1;
   RoadAttributes_AttributeSingleSigned_source_type source;
};
typedef struct _RoadAttributes_AT_AttributeSingleSignedEgo_
    RoadAttributes_AT_AttributeSingleSignedEgo;
struct _RoadAttributes_AT_AttributeSingleSignedEgo_ {
   RoadAttributes_AttributeSingleSignedEgo_id_type id;
   RoadAttributes_AttributeSingleSignedEgo_value1_type value1;
   RoadAttributes_AttributeSingleSignedEgo_source_type source;
};
typedef struct _RoadAttributes_AT_AttributeTriple_ RoadAttributes_AT_AttributeTriple;
struct _RoadAttributes_AT_AttributeTriple_ {
   RoadAttributes_AttributeTriple_id_type id;
   RoadAttributes_AttributeTriple_distance_type distance;
   RoadAttributes_AttributeTriple_value1_type value1;
   RoadAttributes_AttributeTriple_value2_type value2;
   RoadAttributes_AttributeTriple_value3_type value3;
   RoadAttributes_AttributeTriple_source_type source;
};
typedef struct _RoadAttributes_AT_AttributeTripleEgo_ RoadAttributes_AT_AttributeTripleEgo;
struct _RoadAttributes_AT_AttributeTripleEgo_ {
   RoadAttributes_AttributeTripleEgo_id_type id;
   RoadAttributes_AttributeTripleEgo_value1_type value1;
   RoadAttributes_AttributeTripleEgo_value2_type value2;
   RoadAttributes_AttributeTripleEgo_value3_type value3;
   RoadAttributes_AttributeTripleEgo_source_type source;
};
typedef struct _RoadAttributes_AT_EgoInformation_ RoadAttributes_AT_EgoInformation;
struct _RoadAttributes_AT_EgoInformation_ {
   RoadAttributes_AT_AttributeSingleEgo roundabout;
   RoadAttributes_AT_AttributeSingleEgo tollStation;
   RoadAttributes_AT_AttributeSingleEgo railroadcrossing;
   RoadAttributes_AT_AttributeSingleEgo speedbump;
   RoadAttributes_AT_AttributeSingleEgo tunnel;
   RoadAttributes_AT_AttributeSingleEgo urbanArea;
   RoadAttributes_AT_AttributeSingleEgo streetClass;
   RoadAttributes_AT_AttributeSingleEgo functionalRoadClass;
   RoadAttributes_AT_AttributeSingleEgo constructionSite;
   RoadAttributes_AT_AttributeSingleSignedEgo laneIndexEgo;
   RoadAttributes_AT_AttributeDoubleEgo laneNumbers;
   RoadAttributes_AT_AttributeDoubleEgo laneAcceleration;
   RoadAttributes_AT_AttributeTripleEgo laneDeceleration;
   RoadAttributes_AT_AttributeSingleEgo laneWidth;
   RoadAttributes_AT_AttributeSingleEgo structuralSeperation;
   RoadAttributes_AT_AttributeSingleEgo ramp;
   RoadAttributes_AT_AttributeSingleEgo insideCity;
   RoadAttributes_AT_AttributeSingleEgo crosswalk;
   RoadAttributes_AT_AttributeDoubleEgo intersection;
   RoadAttributes_AT_AttributeSingleEgo eDriveZone;
   RoadAttributes_AT_AttributeSingleEgo superelevation;
   RoadAttributes_EgoInformation_relativeYawAngle_type relativeYawAngle;
   RoadAttributes_AT_counter messageCounter;
};
typedef struct _RoadAttributes_AT_Slope_ RoadAttributes_AT_Slope;
struct _RoadAttributes_AT_Slope_ {
   RoadAttributes_Slope_slope_type slope;
   RoadAttributes_Slope_distance_type distance;
};
typedef struct _RoadAttributes_AT_EgoInformationComplex_ RoadAttributes_AT_EgoInformationComplex;
struct _RoadAttributes_AT_EgoInformationComplex_ {
   RoadAttributes_AT_AttributeEgoSpeedLimit speedlimit;
   RoadAttributes_AT_AttributeEgoSpeedLimit trafficOnline;
   RoadAttributes_AT_AttributeEgoSpeedLimit averageSpeed;
   RoadAttributes_AT_Slope slope;
   RoadAttributes_AT_counter messageCounter;
};
typedef struct _RoadAttributes_AT_GeoPosition_ RoadAttributes_AT_GeoPosition;
struct _RoadAttributes_AT_GeoPosition_ {
   RoadAttributes_GeoPosition_latitude_type latitude;
   RoadAttributes_GeoPosition_longitude_type longitude;
   RoadAttributes_GeoPosition_heading_type heading;
};
typedef struct _RoadAttributes_AT_SensorState_ RoadAttributes_AT_SensorState;
struct _RoadAttributes_AT_SensorState_ {
   RoadAttributes_AT_SensorStatus digitalMapOffline;
   RoadAttributes_AT_SensorStatus digitalMapOnline;
   RoadAttributes_AT_SensorStatus cameraTrafficsignrecognition;
   RoadAttributes_AT_SensorStatus cameraLaneDetection;
   RoadAttributes_AT_SensorStatus cameraObjectDetection;
   RoadAttributes_AT_SensorStatus cameraBlindnessDetection;
   RoadAttributes_AT_SensorStatus speedlimitOnline;
   RoadAttributes_AT_SensorStatus trafficLightOnline;
   RoadAttributes_AT_SensorStatus localHazardOnline;
   RoadAttributes_AT_SensorStatus rainLightSensor;
   RoadAttributes_AT_SensorStatus gnss;
   RoadAttributes_AT_SensorStatus cscOnline;
   RoadAttributes_AT_SensorStatus trafficOnline;
   RoadAttributes_AT_SensorStatus roadConditionData;
};
typedef struct _RoadAttributes_AT_VehicleTimestamp_ RoadAttributes_AT_VehicleTimestamp;
struct _RoadAttributes_AT_VehicleTimestamp_ {
   RoadAttributes_VehicleTimestamp_preciseLocalTimeSeconds_type preciseLocalTimeSeconds;
   RoadAttributes_VehicleTimestamp_preciseLocalTimeNanoseconds_type preciseLocalTimeNanoseconds;
};
typedef struct _RoadAttributes_AT_PoseKL152D_ RoadAttributes_AT_PoseKL152D;
struct _RoadAttributes_AT_PoseKL152D_ {
   RoadAttributes_PoseKL152D_x_type x;
   RoadAttributes_PoseKL152D_y_type y;
   RoadAttributes_PoseKL152D_yaw_type yaw;
};
typedef struct _RoadAttributes_AT_VehicleCoordinate_ RoadAttributes_AT_VehicleCoordinate;
struct _RoadAttributes_AT_VehicleCoordinate_ {
   RoadAttributes_AT_PoseKL152D poseKl15;
};
typedef struct _RoadAttributes_AT_MetaDataDefinition_ RoadAttributes_AT_MetaDataDefinition;
typedef RoadAttributes_MetaDataDefinition_countryCodeAlpha3_base_type
    RoadAttributes_MetaDataDefinition_countryCodeAlpha3[3];
typedef RoadAttributes_MetaDataDefinition_nextCountryCodeAlpha3_base_type
    RoadAttributes_MetaDataDefinition_nextCountryCodeAlpha3[3];
typedef RoadAttributes_MetaDataDefinition_regionCode_base_type
    RoadAttributes_MetaDataDefinition_regionCode[3];
typedef RoadAttributes_MetaDataDefinition_nextRegionCode_base_type
    RoadAttributes_MetaDataDefinition_nextRegionCode[3];
struct _RoadAttributes_AT_MetaDataDefinition_ {
   RoadAttributes_AT_Guidance guidanceState;
   RoadAttributes_AT_MppStatus mostProbablePathStatus;
   RoadAttributes_MetaDataDefinition_mppLength_type mppLength;
   RoadAttributes_MetaDataDefinition_mppLaneAccurate_type mppLaneAccurate;
   RoadAttributes_MetaDataDefinition_mppChangedPosition_type mppChangedPosition;
   RoadAttributes_AT_MapOffroad mapOffroad;
   RoadAttributes_AT_StatusInterface functionStatus;
   RoadAttributes_AT_SensorState sensorState;
   RoadAttributes_MetaDataDefinition_countryCode_type countryCode;
   RoadAttributes_MetaDataDefinition_countryCodeAlpha3 countryCodeAlpha3;
   RoadAttributes_MetaDataDefinition_nextCountryDistance_type nextCountryDistance;
   RoadAttributes_MetaDataDefinition_nextCountryCode_type nextCountryCode;
   RoadAttributes_MetaDataDefinition_nextCountryCodeAlpha3 nextCountryCodeAlpha3;
   RoadAttributes_MetaDataDefinition_regionCode regionCode;
   RoadAttributes_MetaDataDefinition_nextRegionDistance_type nextRegionDistance;
   RoadAttributes_MetaDataDefinition_nextRegionCode nextRegionCode;
   RoadAttributes_AT_TrafficHandedness trafficHandedness;
   RoadAttributes_AT_VehicleTimestamp timestamp;
   RoadAttributes_AT_VehicleCoordinate vehicleCoordinate;
   RoadAttributes_AT_GeoPosition geoPosition;
   RoadAttributes_AT_DayTimeDefinition dayTime;
   RoadAttributes_MetaDataDefinition_reducedVisibility_type reducedVisibility;
   RoadAttributes_MetaDataDefinition_weatherCondition_type weatherCondition;
   RoadAttributes_AT_RGVersion source;
};
typedef struct _RoadAttributes_AT_PreviewInformation_ RoadAttributes_AT_PreviewInformation;
struct _RoadAttributes_AT_PreviewInformation_ {
   RoadAttributes_AT_AttributeSingle roundabout;
   RoadAttributes_AT_AttributeSingle tollStation;
   RoadAttributes_AT_AttributeSingle railroadcrossing;
   RoadAttributes_AT_AttributeSingle speedbump;
   RoadAttributes_AT_AttributeSingle tunnel;
   RoadAttributes_AT_AttributeSingle urbanArea;
   RoadAttributes_AT_AttributeSingle streetClass;
   RoadAttributes_AT_AttributeSingle functionalRoadClass;
   RoadAttributes_AT_AttributeSingle constructionSite;
   RoadAttributes_AT_AttributeSingleSigned laneIndex;
   RoadAttributes_AT_AttributeDouble laneNumbers;
   RoadAttributes_AT_AttributeDouble laneAcceleration;
   RoadAttributes_AT_AttributeTriple laneDeceleration;
   RoadAttributes_AT_AttributeSingle laneWidth;
   RoadAttributes_AT_AttributeSingle structuralSeperation;
   RoadAttributes_AT_AttributeSingle ramp;
   RoadAttributes_AT_AttributeSingle insideCity;
   RoadAttributes_AT_AttributeSingle crosswalk;
   RoadAttributes_AT_AttributeDouble intersection;
   RoadAttributes_AT_AttributeSingle superelevation;
   RoadAttributes_AT_counter messageCounter;
};
typedef struct _RoadAttributes_AT_SystemInformation_ RoadAttributes_AT_SystemInformation;
struct _RoadAttributes_AT_SystemInformation_ {
   RoadAttributes_AT_MetaDataDefinition metaData;
   RoadAttributes_AT_counter messageCounter;
};
typedef struct _RoadAttributesExtended_AT_GenericSignValue_
    RoadAttributesExtended_AT_GenericSignValue;
struct _RoadAttributesExtended_AT_GenericSignValue_ {
   availabilityBitfield_1 availabilityBitfield;
   RoadAttributesExtended_GenericSignValue_value1_type value1;
   RoadAttributesExtended_GenericSignValue_value2_type value2;
};
typedef struct _RoadAttributesExtended_AdditionalSign_content_
    RoadAttributesExtended_AdditionalSign_content;
typedef RoadAttributesExtended_AdditionalSign_content_base_type
    RoadAttributesExtended_datatypes_AdditionalSign_content_base_type_40[40];
struct _RoadAttributesExtended_AdditionalSign_content_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AdditionalSign_content_base_type_40 payload;
};
typedef struct _RoadAttributesExtended_AT_AdditionalSign_ RoadAttributesExtended_AT_AdditionalSign;
struct _RoadAttributesExtended_AT_AdditionalSign_ {
   availabilityBitfield_1 availabilityBitfield;
   RoadAttributesExtended_AdditionalSign_type_type type;
   RoadAttributesExtended_AT_GenericSignValue value;
   RoadAttributesExtended_AdditionalSign_content content;
   RoadAttributesExtended_AdditionalSign_id_type id;
   boolean relevant;
};
typedef struct _RoadAttributesExtended_AT_AttributeConnectedSpeed_
    RoadAttributesExtended_AT_AttributeConnectedSpeed;
struct _RoadAttributesExtended_AT_AttributeConnectedSpeed_ {
   RoadAttributesExtended_AttributeConnectedSpeed_id_type id;
   RoadAttributesExtended_AttributeConnectedSpeed_distance_type distance;
   RoadAttributesExtended_AttributeConnectedSpeed_distanceStdDev_type distanceStdDev;
   RoadAttributesExtended_AttributeConnectedSpeed_speed_type speed;
   boolean isGapStart;
   RoadAttributesExtended_AttributeConnectedSpeed_confidence_type confidence;
};
typedef struct _RoadAttributesExtended_AttributeCurvature_id_
    RoadAttributesExtended_AttributeCurvature_id;
typedef RoadAttributesExtended_AttributeCurvature_id_base_type
    RoadAttributesExtended_datatypes_AttributeCurvature_id_base_type_75[75];
struct _RoadAttributesExtended_AttributeCurvature_id_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributeCurvature_id_base_type_75 payload;
};
typedef struct _RoadAttributesExtended_AttributeCurvature_distance_
    RoadAttributesExtended_AttributeCurvature_distance;
typedef RoadAttributesExtended_AttributeCurvature_distance_base_type
    RoadAttributesExtended_datatypes_AttributeCurvature_distance_base_type_75[75];
struct _RoadAttributesExtended_AttributeCurvature_distance_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributeCurvature_distance_base_type_75 payload;
};
typedef struct _RoadAttributesExtended_AttributeCurvature_curvature_
    RoadAttributesExtended_AttributeCurvature_curvature;
typedef RoadAttributesExtended_AttributeCurvature_curvature_base_type
    RoadAttributesExtended_datatypes_AttributeCurvature_curvature_base_type_75[75];
struct _RoadAttributesExtended_AttributeCurvature_curvature_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributeCurvature_curvature_base_type_75 payload;
};
typedef struct _RoadAttributesExtended_AttributeCurvature_source_
    RoadAttributesExtended_AttributeCurvature_source;
typedef RoadAttributesExtended_AttributeCurvature_source_base_type
    RoadAttributesExtended_datatypes_AttributeCurvature_source_base_type_75[75];
struct _RoadAttributesExtended_AttributeCurvature_source_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributeCurvature_source_base_type_75 payload;
};
typedef struct _RoadAttributesExtended_AttributeCurvature_branchingAngle_
    RoadAttributesExtended_AttributeCurvature_branchingAngle;
typedef RoadAttributesExtended_AttributeCurvature_branchingAngle_base_type
    RoadAttributesExtended_datatypes_AttributeCurvature_branchingAngle_base_type_75[75];
struct _RoadAttributesExtended_AttributeCurvature_branchingAngle_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributeCurvature_branchingAngle_base_type_75 payload;
};
typedef struct _RoadAttributesExtended_AT_AttributeCurvature_
    RoadAttributesExtended_AT_AttributeCurvature;
struct _RoadAttributesExtended_AT_AttributeCurvature_ {
   RoadAttributesExtended_AttributeCurvature_id id;
   RoadAttributesExtended_AttributeCurvature_distance distance;
   RoadAttributesExtended_AttributeCurvature_curvature curvature;
   RoadAttributesExtended_AttributeCurvature_source source;
   RoadAttributesExtended_AttributeCurvature_branchingAngle branchingAngle;
   RoadAttributesExtended_AT_counter messageCounter;
};
typedef struct _RoadAttributesExtended_AT_AttributeDouble_
    RoadAttributesExtended_AT_AttributeDouble;
struct _RoadAttributesExtended_AT_AttributeDouble_ {
   RoadAttributesExtended_AttributeDouble_id_type id;
   RoadAttributesExtended_AttributeDouble_distance_type distance;
   RoadAttributesExtended_AttributeDouble_value1_type value1;
   RoadAttributesExtended_AttributeDouble_value2_type value2;
   RoadAttributesExtended_AttributeDouble_source_type source;
};
typedef struct _RoadAttributesExtended_AT_AttributeEgoSpeedLimit_
    RoadAttributesExtended_AT_AttributeEgoSpeedLimit;
typedef RoadAttributesExtended_AttributeEgoSpeedLimit_indexAdditionalSignList_base_type
    RoadAttributesExtended_AttributeEgoSpeedLimit_indexAdditionalSignList[3];
struct _RoadAttributesExtended_AT_AttributeEgoSpeedLimit_ {
   RoadAttributesExtended_AttributeEgoSpeedLimit_id_type id;
   RoadAttributesExtended_AttributeEgoSpeedLimit_distanceStdDev_type distanceStdDev;
   RoadAttributesExtended_AttributeEgoSpeedLimit_value_type value;
   RoadAttributesExtended_AttributeEgoSpeedLimit_indexAdditionalSignList indexAdditionalSignList;
   RoadAttributesExtended_AttributeEgoSpeedLimit_source_type source;
   RoadAttributesExtended_AT_SpeedlimitUnit unit;
};
typedef struct _RoadAttributesExtended_AT_AttributeLocalHazard_
    RoadAttributesExtended_AT_AttributeLocalHazard;
struct _RoadAttributesExtended_AT_AttributeLocalHazard_ {
   RoadAttributesExtended_AttributeLocalHazard_id_type id;
   RoadAttributesExtended_AttributeLocalHazard_distance_type distance;
   RoadAttributesExtended_AttributeLocalHazard_trafficIncidentID_type trafficIncidentID;
   RoadAttributesExtended_AttributeLocalHazard_combinedEventCode_type combinedEventCode;
   RoadAttributesExtended_AT_LocalHazardType localHazardType;
};
typedef struct _RoadAttributesExtended_AT_GenericValue_ RoadAttributesExtended_AT_GenericValue;
struct _RoadAttributesExtended_AT_GenericValue_ {
   availabilityBitfield_1 availabilityBitfield;
   RoadAttributesExtended_GenericValue_value1_type value1;
   RoadAttributesExtended_GenericValue_value2_type value2;
};
typedef struct _RoadAttributesExtended_AttributePointSpeedLimit_indexAdditionalSignList_
    RoadAttributesExtended_AttributePointSpeedLimit_indexAdditionalSignList;
typedef RoadAttributesExtended_AttributePointSpeedLimit_indexAdditionalSignList_base_type
    RoadAttributesExtended_datatypes_AttributePointSpeedLimit_indexAdditionalSignList_base_type_3[3];
struct _RoadAttributesExtended_AttributePointSpeedLimit_indexAdditionalSignList_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributePointSpeedLimit_indexAdditionalSignList_base_type_3
    payload;
};
typedef struct _RoadAttributesExtended_AT_AttributePointSpeedLimit_
    RoadAttributesExtended_AT_AttributePointSpeedLimit;
struct _RoadAttributesExtended_AT_AttributePointSpeedLimit_ {
   availabilityBitfield_1 availabilityBitfield;
   RoadAttributesExtended_AttributePointSpeedLimit_id_type id;
   RoadAttributesExtended_AttributePointSpeedLimit_distance_type distance;
   RoadAttributesExtended_AttributePointSpeedLimit_distanceStdDev_type distanceStdDev;
   RoadAttributesExtended_AT_GenericValue value;
   RoadAttributesExtended_AttributePointSpeedLimit_indexAdditionalSignList indexAdditionalSignList;
   RoadAttributesExtended_AttributePointSpeedLimit_source_type source;
   RoadAttributesExtended_AT_SpeedlimitRelevance relevance;
   RoadAttributesExtended_AT_SpeedlimitUnit unit;
};
typedef struct _RoadAttributesExtended_AT_AttributeSingle_
    RoadAttributesExtended_AT_AttributeSingle;
struct _RoadAttributesExtended_AT_AttributeSingle_ {
   RoadAttributesExtended_AttributeSingle_id_type id;
   RoadAttributesExtended_AttributeSingle_distance_type distance;
   RoadAttributesExtended_AttributeSingle_value1_type value1;
   RoadAttributesExtended_AttributeSingle_source_type source;
};
typedef struct _RoadAttributesExtended_AT_AttributeRoadObstacle_
    RoadAttributesExtended_AT_AttributeRoadObstacle;
struct _RoadAttributesExtended_AT_AttributeRoadObstacle_ {
   RoadAttributesExtended_AttributeRoadObstacle_id_type id;
   RoadAttributesExtended_AttributeRoadObstacle_distance_type distance;
   RoadAttributesExtended_AT_RoadObstacleType roadObstacleType;
   RoadAttributesExtended_AttributeRoadObstacle_height_type height;
   RoadAttributesExtended_AttributeRoadObstacle_length_type length;
   RoadAttributesExtended_AT_RoadObstaclePosition roadObstaclePosition;
   RoadAttributesExtended_AttributeRoadObstacle_lane_type lane;
   RoadAttributesExtended_AttributeRoadObstacle_crossingProbability_type crossingProbability;
   RoadAttributesExtended_AttributeRoadObstacle_source_type source;
};
typedef struct _RoadAttributesExtended_AT_AttributePointGeneric_
    RoadAttributesExtended_AT_AttributePointGeneric;
struct _RoadAttributesExtended_AT_AttributePointGeneric_ {
   RoadAttributesExtended_AttributePointGeneric_id_type id;
   RoadAttributesExtended_AttributePointGeneric_distance_type distance;
   RoadAttributesExtended_AT_GenericValue value;
   RoadAttributesExtended_AttributePointGeneric_source_type source;
};
typedef struct _RoadAttributesExtended_AT_AttributePointGenericStdDev_
    RoadAttributesExtended_AT_AttributePointGenericStdDev;
struct _RoadAttributesExtended_AT_AttributePointGenericStdDev_ {
   RoadAttributesExtended_AttributePointGenericStdDev_id_type id;
   RoadAttributesExtended_AttributePointGenericStdDev_distance_type distance;
   RoadAttributesExtended_AttributePointGenericStdDev_distanceStdDev_type distanceStdDev;
   RoadAttributesExtended_AT_GenericValue value;
   RoadAttributesExtended_AttributePointGenericStdDev_source_type source;
};
typedef struct _RoadAttributesExtended_AttributePointRightOfWay_indexAdditionalSignList_
    RoadAttributesExtended_AttributePointRightOfWay_indexAdditionalSignList;
typedef RoadAttributesExtended_AttributePointRightOfWay_indexAdditionalSignList_base_type
    RoadAttributesExtended_datatypes_AttributePointRightOfWay_indexAdditionalSignList_base_type_3[3];
struct _RoadAttributesExtended_AttributePointRightOfWay_indexAdditionalSignList_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributePointRightOfWay_indexAdditionalSignList_base_type_3
    payload;
};
typedef struct _RoadAttributesExtended_AT_AttributePointRightOfWay_
    RoadAttributesExtended_AT_AttributePointRightOfWay;
struct _RoadAttributesExtended_AT_AttributePointRightOfWay_ {
   availabilityBitfield_1 availabilityBitfield;
   RoadAttributesExtended_AttributePointRightOfWay_id_type id;
   RoadAttributesExtended_AttributePointRightOfWay_referenceIdStopLine_type referenceIdStopLine;
   RoadAttributesExtended_AttributePointRightOfWay_referenceIdIntersection_type
    referenceIdIntersection;
   RoadAttributesExtended_AttributePointRightOfWay_distance_type distance;
   RoadAttributesExtended_AttributePointRightOfWay_value_type value;
   RoadAttributesExtended_AttributePointRightOfWay_indexAdditionalSignList indexAdditionalSignList;
   RoadAttributesExtended_AttributePointRightOfWay_source_type source;
};
typedef struct _RoadAttributesExtended_AttributePointTrafficSign_indexAdditionalSignList_
    RoadAttributesExtended_AttributePointTrafficSign_indexAdditionalSignList;
typedef RoadAttributesExtended_AttributePointTrafficSign_indexAdditionalSignList_base_type RoadAttributesExtended_datatypes_AttributePointTrafficSign_indexAdditionalSignList_base_type_3[3];
struct _RoadAttributesExtended_AttributePointTrafficSign_indexAdditionalSignList_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributePointTrafficSign_indexAdditionalSignList_base_type_3
    payload;
};
typedef struct _RoadAttributesExtended_AT_AttributePointTrafficSign_
    RoadAttributesExtended_AT_AttributePointTrafficSign;
struct _RoadAttributesExtended_AT_AttributePointTrafficSign_ {
   availabilityBitfield_1 availabilityBitfield;
   RoadAttributesExtended_AttributePointTrafficSign_id_type id;
   RoadAttributesExtended_AttributePointTrafficSign_distance_type distance;
   RoadAttributesExtended_AttributePointTrafficSign_type_type type;
   RoadAttributesExtended_AttributePointTrafficSign_value_type value;
   RoadAttributesExtended_AttributePointTrafficSign_indexAdditionalSignList indexAdditionalSignList;
   RoadAttributesExtended_AttributePointTrafficSign_source_type source;
};
typedef struct _RoadAttributesExtended_AT_AttributeSingleSigned_
    RoadAttributesExtended_AT_AttributeSingleSigned;
struct _RoadAttributesExtended_AT_AttributeSingleSigned_ {
   RoadAttributesExtended_AttributeSingleSigned_id_type id;
   RoadAttributesExtended_AttributeSingleSigned_distance_type distance;
   RoadAttributesExtended_AttributeSingleSigned_value1_type value1;
   RoadAttributesExtended_AttributeSingleSigned_source_type source;
};
typedef struct _RoadAttributesExtended_AttributeSlope_id_ RoadAttributesExtended_AttributeSlope_id;
typedef RoadAttributesExtended_AttributeSlope_id_base_type
    RoadAttributesExtended_datatypes_AttributeSlope_id_base_type_116[116];
struct _RoadAttributesExtended_AttributeSlope_id_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributeSlope_id_base_type_116 payload;
};
typedef struct _RoadAttributesExtended_AttributeSlope_distance_
    RoadAttributesExtended_AttributeSlope_distance;
typedef RoadAttributesExtended_AttributeSlope_distance_base_type
    RoadAttributesExtended_datatypes_AttributeSlope_distance_base_type_116[116];
struct _RoadAttributesExtended_AttributeSlope_distance_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributeSlope_distance_base_type_116 payload;
};
typedef struct _RoadAttributesExtended_AttributeSlope_slope_
    RoadAttributesExtended_AttributeSlope_slope;
typedef RoadAttributesExtended_AttributeSlope_slope_base_type
    RoadAttributesExtended_datatypes_AttributeSlope_slope_base_type_116[116];
struct _RoadAttributesExtended_AttributeSlope_slope_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributeSlope_slope_base_type_116 payload;
};
typedef struct _RoadAttributesExtended_AttributeSlope_source_
    RoadAttributesExtended_AttributeSlope_source;
typedef RoadAttributesExtended_AttributeSlope_source_base_type
    RoadAttributesExtended_datatypes_AttributeSlope_source_base_type_116[116];
struct _RoadAttributesExtended_AttributeSlope_source_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AttributeSlope_source_base_type_116 payload;
};
typedef struct _RoadAttributesExtended_AT_AttributeSlope_ RoadAttributesExtended_AT_AttributeSlope;
struct _RoadAttributesExtended_AT_AttributeSlope_ {
   RoadAttributesExtended_AttributeSlope_id id;
   RoadAttributesExtended_AttributeSlope_distance distance;
   RoadAttributesExtended_AttributeSlope_slope slope;
   RoadAttributesExtended_AttributeSlope_source source;
   RoadAttributesExtended_AT_counter messageCounter;
};
typedef struct _RoadAttributesExtended_AT_AttributeTriple_
    RoadAttributesExtended_AT_AttributeTriple;
struct _RoadAttributesExtended_AT_AttributeTriple_ {
   RoadAttributesExtended_AttributeTriple_id_type id;
   RoadAttributesExtended_AttributeTriple_distance_type distance;
   RoadAttributesExtended_AttributeTriple_value1_type value1;
   RoadAttributesExtended_AttributeTriple_value2_type value2;
   RoadAttributesExtended_AttributeTriple_value3_type value3;
   RoadAttributesExtended_AttributeTriple_source_type source;
};
typedef struct _RoadAttributesExtended_AT_Phase_ RoadAttributesExtended_AT_Phase;
struct _RoadAttributesExtended_AT_Phase_ {
   RoadAttributesExtended_AT_MovementPhaseState phase;
   RoadAttributesExtended_Phase_confidence_type confidence;
   RoadAttributesExtended_Phase_timeToChange_type timeToChange;
   RoadAttributesExtended_Phase_timeToChangeMin_type timeToChangeMin;
   RoadAttributesExtended_Phase_timeToChangeMax_type timeToChangeMax;
};
typedef struct _RoadAttributesExtended_TrafficLightSignalGroup_referenceIdStopLine_
    RoadAttributesExtended_TrafficLightSignalGroup_referenceIdStopLine;
typedef RoadAttributesExtended_TrafficLightSignalGroup_referenceIdStopLine_base_type
    RoadAttributesExtended_datatypes_TrafficLightSignalGroup_referenceIdStopLine_base_type_2[2];
struct _RoadAttributesExtended_TrafficLightSignalGroup_referenceIdStopLine_ {
   uint8 size;
   RoadAttributesExtended_datatypes_TrafficLightSignalGroup_referenceIdStopLine_base_type_2 payload;
};
typedef struct _RoadAttributesExtended_TrafficLightSignalGroup_allowedManeuverList_
    RoadAttributesExtended_TrafficLightSignalGroup_allowedManeuverList;
typedef RoadAttributesExtended_AT_AllowedManeuvers
    RoadAttributesExtended_datatypes_AT_AllowedManeuvers_8[8];
struct _RoadAttributesExtended_TrafficLightSignalGroup_allowedManeuverList_ {
   uint8 size;
   RoadAttributesExtended_datatypes_AT_AllowedManeuvers_8 payload;
};
typedef struct _RoadAttributesExtended_AT_VehicleTimestamp_
    RoadAttributesExtended_AT_VehicleTimestamp;
struct _RoadAttributesExtended_AT_VehicleTimestamp_ {
   RoadAttributesExtended_VehicleTimestamp_preciseLocalTimeSeconds_type preciseLocalTimeSeconds;
   RoadAttributesExtended_VehicleTimestamp_preciseLocalTimeNanoseconds_type
    preciseLocalTimeNanoseconds;
};
typedef struct _RoadAttributesExtended_AT_ExtendedPreviewInformation_
    RoadAttributesExtended_AT_ExtendedPreviewInformation;
struct _RoadAttributesExtended_ExtendedPreviewInformation_roundabout_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_roundabout_
    RoadAttributesExtended_ExtendedPreviewInformation_roundabout;
struct _RoadAttributesExtended_ExtendedPreviewInformation_railroadcrossing_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_railroadcrossing_
    RoadAttributesExtended_ExtendedPreviewInformation_railroadcrossing;
struct _RoadAttributesExtended_ExtendedPreviewInformation_speedbump_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_2;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_speedbump_
    RoadAttributesExtended_ExtendedPreviewInformation_speedbump;
struct _RoadAttributesExtended_ExtendedPreviewInformation_tunnel_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_tunnel_
    RoadAttributesExtended_ExtendedPreviewInformation_tunnel;
struct _RoadAttributesExtended_ExtendedPreviewInformation_urbanArea_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_urbanArea_
    RoadAttributesExtended_ExtendedPreviewInformation_urbanArea;
struct _RoadAttributesExtended_ExtendedPreviewInformation_streetClass_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_2;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_3;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_4;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_streetClass_
    RoadAttributesExtended_ExtendedPreviewInformation_streetClass;
struct _RoadAttributesExtended_ExtendedPreviewInformation_functionalRoadClass_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_2;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_3;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_4;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_functionalRoadClass_
    RoadAttributesExtended_ExtendedPreviewInformation_functionalRoadClass;
struct _RoadAttributesExtended_ExtendedPreviewInformation_constructionSite_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_constructionSite_
    RoadAttributesExtended_ExtendedPreviewInformation_constructionSite;
struct _RoadAttributesExtended_ExtendedPreviewInformation_laneIndex_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingleSigned payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingleSigned payload_aos_1;
   RoadAttributesExtended_AT_AttributeSingleSigned payload_aos_2;
   RoadAttributesExtended_AT_AttributeSingleSigned payload_aos_3;
   RoadAttributesExtended_AT_AttributeSingleSigned payload_aos_4;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_laneIndex_
    RoadAttributesExtended_ExtendedPreviewInformation_laneIndex;
struct _RoadAttributesExtended_ExtendedPreviewInformation_laneNumbers_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_0;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_1;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_2;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_3;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_4;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_5;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_6;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_7;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_8;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_9;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_laneNumbers_
    RoadAttributesExtended_ExtendedPreviewInformation_laneNumbers;
struct _RoadAttributesExtended_ExtendedPreviewInformation_laneAcceleration_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_0;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_1;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_laneAcceleration_
    RoadAttributesExtended_ExtendedPreviewInformation_laneAcceleration;
struct _RoadAttributesExtended_ExtendedPreviewInformation_laneDeceleration_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeTriple payload_aos_0;
   RoadAttributesExtended_AT_AttributeTriple payload_aos_1;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_laneDeceleration_
    RoadAttributesExtended_ExtendedPreviewInformation_laneDeceleration;
struct _RoadAttributesExtended_ExtendedPreviewInformation_laneWidth_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_2;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_3;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_4;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_laneWidth_
    RoadAttributesExtended_ExtendedPreviewInformation_laneWidth;
struct _RoadAttributesExtended_ExtendedPreviewInformation_structuralSeperation_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_2;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_structuralSeperation_
    RoadAttributesExtended_ExtendedPreviewInformation_structuralSeperation;
struct _RoadAttributesExtended_ExtendedPreviewInformation_ramp_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_2;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_ramp_
    RoadAttributesExtended_ExtendedPreviewInformation_ramp;
struct _RoadAttributesExtended_ExtendedPreviewInformation_insideCity_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_2;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_insideCity_
    RoadAttributesExtended_ExtendedPreviewInformation_insideCity;
struct _RoadAttributesExtended_ExtendedPreviewInformation_crosswalk_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_crosswalk_
    RoadAttributesExtended_ExtendedPreviewInformation_crosswalk;
struct _RoadAttributesExtended_ExtendedPreviewInformation_intersection_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_0;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_1;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_2;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_3;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_4;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_5;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_6;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_7;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_intersection_
    RoadAttributesExtended_ExtendedPreviewInformation_intersection;
struct _RoadAttributesExtended_ExtendedPreviewInformation_superelevation_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_2;
};
typedef struct _RoadAttributesExtended_ExtendedPreviewInformation_superelevation_
    RoadAttributesExtended_ExtendedPreviewInformation_superelevation;
struct _RoadAttributesExtended_AT_ExtendedPreviewInformation_ {
   RoadAttributesExtended_ExtendedPreviewInformation_roundabout roundabout;
   RoadAttributesExtended_ExtendedPreviewInformation_railroadcrossing railroadcrossing;
   RoadAttributesExtended_ExtendedPreviewInformation_speedbump speedbump;
   RoadAttributesExtended_ExtendedPreviewInformation_tunnel tunnel;
   RoadAttributesExtended_ExtendedPreviewInformation_urbanArea urbanArea;
   RoadAttributesExtended_ExtendedPreviewInformation_streetClass streetClass;
   RoadAttributesExtended_ExtendedPreviewInformation_functionalRoadClass functionalRoadClass;
   RoadAttributesExtended_ExtendedPreviewInformation_constructionSite constructionSite;
   RoadAttributesExtended_ExtendedPreviewInformation_laneIndex laneIndex;
   RoadAttributesExtended_ExtendedPreviewInformation_laneNumbers laneNumbers;
   RoadAttributesExtended_ExtendedPreviewInformation_laneAcceleration laneAcceleration;
   RoadAttributesExtended_ExtendedPreviewInformation_laneDeceleration laneDeceleration;
   RoadAttributesExtended_ExtendedPreviewInformation_laneWidth laneWidth;
   RoadAttributesExtended_ExtendedPreviewInformation_structuralSeperation structuralSeperation;
   RoadAttributesExtended_ExtendedPreviewInformation_ramp ramp;
   RoadAttributesExtended_ExtendedPreviewInformation_insideCity insideCity;
   RoadAttributesExtended_ExtendedPreviewInformation_crosswalk crosswalk;
   RoadAttributesExtended_ExtendedPreviewInformation_intersection intersection;
   RoadAttributesExtended_ExtendedPreviewInformation_superelevation superelevation;
   RoadAttributesExtended_AT_counter messageCounter;
};
typedef struct _RoadAttributesExtended_AT_AttributeOnlineInformation_
    RoadAttributesExtended_AT_AttributeOnlineInformation;
struct _RoadAttributesExtended_AttributeOnlineInformation_localHazardList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeLocalHazard payload_aos_0;
   RoadAttributesExtended_AT_AttributeLocalHazard payload_aos_1;
   RoadAttributesExtended_AT_AttributeLocalHazard payload_aos_2;
   RoadAttributesExtended_AT_AttributeLocalHazard payload_aos_3;
   RoadAttributesExtended_AT_AttributeLocalHazard payload_aos_4;
   RoadAttributesExtended_AT_AttributeLocalHazard payload_aos_5;
   RoadAttributesExtended_AT_AttributeLocalHazard payload_aos_6;
   RoadAttributesExtended_AT_AttributeLocalHazard payload_aos_7;
   RoadAttributesExtended_AT_AttributeLocalHazard payload_aos_8;
   RoadAttributesExtended_AT_AttributeLocalHazard payload_aos_9;
};
typedef struct _RoadAttributesExtended_AttributeOnlineInformation_localHazardList_
    RoadAttributesExtended_AttributeOnlineInformation_localHazardList;
struct _RoadAttributesExtended_AttributeOnlineInformation_trafficOnlineList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_0;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_1;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_2;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_3;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_4;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_5;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_6;
};
typedef struct _RoadAttributesExtended_AttributeOnlineInformation_trafficOnlineList_
    RoadAttributesExtended_AttributeOnlineInformation_trafficOnlineList;
struct _RoadAttributesExtended_AttributeOnlineInformation_speedCourseListA_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_0;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_1;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_2;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_3;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_4;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_5;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_6;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_7;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_8;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_9;
};
typedef struct _RoadAttributesExtended_AttributeOnlineInformation_speedCourseListA_
    RoadAttributesExtended_AttributeOnlineInformation_speedCourseListA;
struct _RoadAttributesExtended_AttributeOnlineInformation_speedCourseListB_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_0;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_1;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_2;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_3;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_4;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_5;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_6;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_7;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_8;
   RoadAttributesExtended_AT_AttributeConnectedSpeed payload_aos_9;
};
typedef struct _RoadAttributesExtended_AttributeOnlineInformation_speedCourseListB_
    RoadAttributesExtended_AttributeOnlineInformation_speedCourseListB;
struct _RoadAttributesExtended_AttributeOnlineInformation_acaEnableHandsFree_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_0;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_1;
   RoadAttributesExtended_AT_AttributeSingle payload_aos_2;
};
typedef struct _RoadAttributesExtended_AttributeOnlineInformation_acaEnableHandsFree_
    RoadAttributesExtended_AttributeOnlineInformation_acaEnableHandsFree;
struct _RoadAttributesExtended_AttributeOnlineInformation_roadObstacleList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeRoadObstacle payload_aos_0;
   RoadAttributesExtended_AT_AttributeRoadObstacle payload_aos_1;
   RoadAttributesExtended_AT_AttributeRoadObstacle payload_aos_2;
   RoadAttributesExtended_AT_AttributeRoadObstacle payload_aos_3;
   RoadAttributesExtended_AT_AttributeRoadObstacle payload_aos_4;
};
typedef struct _RoadAttributesExtended_AttributeOnlineInformation_roadObstacleList_
    RoadAttributesExtended_AttributeOnlineInformation_roadObstacleList;
struct _RoadAttributesExtended_AttributeOnlineInformation_roadCategoryList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributePointGeneric payload_aos_0;
   RoadAttributesExtended_AT_AttributePointGeneric payload_aos_1;
   RoadAttributesExtended_AT_AttributePointGeneric payload_aos_2;
   RoadAttributesExtended_AT_AttributePointGeneric payload_aos_3;
   RoadAttributesExtended_AT_AttributePointGeneric payload_aos_4;
};
typedef struct _RoadAttributesExtended_AttributeOnlineInformation_roadCategoryList_
    RoadAttributesExtended_AttributeOnlineInformation_roadCategoryList;
struct _RoadAttributesExtended_AttributeOnlineInformation_roadWavinessList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributePointGeneric payload_aos_0;
   RoadAttributesExtended_AT_AttributePointGeneric payload_aos_1;
   RoadAttributesExtended_AT_AttributePointGeneric payload_aos_2;
   RoadAttributesExtended_AT_AttributePointGeneric payload_aos_3;
   RoadAttributesExtended_AT_AttributePointGeneric payload_aos_4;
};
typedef struct _RoadAttributesExtended_AttributeOnlineInformation_roadWavinessList_
    RoadAttributesExtended_AttributeOnlineInformation_roadWavinessList;
struct _RoadAttributesExtended_AttributeOnlineInformation_dynamicRoadConditionList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_0;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_1;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_2;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_3;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_4;
};
typedef struct _RoadAttributesExtended_AttributeOnlineInformation_dynamicRoadConditionList_
    RoadAttributesExtended_AttributeOnlineInformation_dynamicRoadConditionList;
struct _RoadAttributesExtended_AttributeOnlineInformation_tractionEventsList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_0;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_1;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_2;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_3;
   RoadAttributesExtended_AT_AttributeDouble payload_aos_4;
};
typedef struct _RoadAttributesExtended_AttributeOnlineInformation_tractionEventsList_
    RoadAttributesExtended_AttributeOnlineInformation_tractionEventsList;
struct _RoadAttributesExtended_AT_AttributeOnlineInformation_ {
   RoadAttributesExtended_AttributeOnlineInformation_localHazardList localHazardList;
   RoadAttributesExtended_AttributeOnlineInformation_trafficOnlineList trafficOnlineList;
   RoadAttributesExtended_AttributeOnlineInformation_speedCourseListA speedCourseListA;
   RoadAttributesExtended_AttributeOnlineInformation_speedCourseListABucketType_type
    speedCourseListABucketType;
   RoadAttributesExtended_AttributeOnlineInformation_speedCourseListAStatisticsType_type
    speedCourseListAStatisticsType;
   RoadAttributesExtended_AttributeOnlineInformation_speedCourseListB speedCourseListB;
   RoadAttributesExtended_AttributeOnlineInformation_speedCourseListBBucketType_type
    speedCourseListBBucketType;
   RoadAttributesExtended_AttributeOnlineInformation_speedCourseListBStatisticsType_type
    speedCourseListBStatisticsType;
   RoadAttributesExtended_AttributeOnlineInformation_acaEnableHandsFree acaEnableHandsFree;
   RoadAttributesExtended_AttributeOnlineInformation_roadObstacleList roadObstacleList;
   RoadAttributesExtended_AttributeOnlineInformation_roadCategoryList roadCategoryList;
   RoadAttributesExtended_AttributeOnlineInformation_roadWavinessList roadWavinessList;
   RoadAttributesExtended_AttributeOnlineInformation_dynamicRoadConditionList
    dynamicRoadConditionList;
   RoadAttributesExtended_AttributeOnlineInformation_tractionEventsList tractionEventsList;
   RoadAttributesExtended_AT_counter messageCounter;
};
typedef struct _RoadAttributesExtended_AT_TrafficSignsPreview_
    RoadAttributesExtended_AT_TrafficSignsPreview;
struct _RoadAttributesExtended_TrafficSignsPreview_poolAdditionalSigns_ {
   uint8 size;
   RoadAttributesExtended_AT_AdditionalSign payload_aos_0;
   RoadAttributesExtended_AT_AdditionalSign payload_aos_1;
   RoadAttributesExtended_AT_AdditionalSign payload_aos_2;
   RoadAttributesExtended_AT_AdditionalSign payload_aos_3;
   RoadAttributesExtended_AT_AdditionalSign payload_aos_4;
   RoadAttributesExtended_AT_AdditionalSign payload_aos_5;
   RoadAttributesExtended_AT_AdditionalSign payload_aos_6;
   RoadAttributesExtended_AT_AdditionalSign payload_aos_7;
};
typedef struct _RoadAttributesExtended_TrafficSignsPreview_poolAdditionalSigns_
    RoadAttributesExtended_TrafficSignsPreview_poolAdditionalSigns;
struct _RoadAttributesExtended_TrafficSignsPreview_speedLimitList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_0;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_1;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_2;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_3;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_4;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_5;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_6;
};
typedef struct _RoadAttributesExtended_TrafficSignsPreview_speedLimitList_
    RoadAttributesExtended_TrafficSignsPreview_speedLimitList;
struct _RoadAttributesExtended_TrafficSignsPreview_speedMinimumRecommendedList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_0;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_1;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_2;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_3;
   RoadAttributesExtended_AT_AttributePointSpeedLimit payload_aos_4;
};
typedef struct _RoadAttributesExtended_TrafficSignsPreview_speedMinimumRecommendedList_
    RoadAttributesExtended_TrafficSignsPreview_speedMinimumRecommendedList;
struct _RoadAttributesExtended_TrafficSignsPreview_instructionRestrictionList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_0;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_1;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_2;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_3;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_4;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_5;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_6;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_7;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_8;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_9;
};
typedef struct _RoadAttributesExtended_TrafficSignsPreview_instructionRestrictionList_
    RoadAttributesExtended_TrafficSignsPreview_instructionRestrictionList;
struct _RoadAttributesExtended_TrafficSignsPreview_dangerWarningList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_0;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_1;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_2;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_3;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_4;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_5;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_6;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_7;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_8;
   RoadAttributesExtended_AT_AttributePointTrafficSign payload_aos_9;
};
typedef struct _RoadAttributesExtended_TrafficSignsPreview_dangerWarningList_
    RoadAttributesExtended_TrafficSignsPreview_dangerWarningList;
struct _RoadAttributesExtended_TrafficSignsPreview_rightOfWayList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributePointRightOfWay payload_aos_0;
   RoadAttributesExtended_AT_AttributePointRightOfWay payload_aos_1;
   RoadAttributesExtended_AT_AttributePointRightOfWay payload_aos_2;
   RoadAttributesExtended_AT_AttributePointRightOfWay payload_aos_3;
   RoadAttributesExtended_AT_AttributePointRightOfWay payload_aos_4;
};
typedef struct _RoadAttributesExtended_TrafficSignsPreview_rightOfWayList_
    RoadAttributesExtended_TrafficSignsPreview_rightOfWayList;
struct _RoadAttributesExtended_TrafficLightSignalGroup_phaseList_ {
   uint8 size;
   RoadAttributesExtended_AT_Phase payload_aos_0;
   RoadAttributesExtended_AT_Phase payload_aos_1;
   RoadAttributesExtended_AT_Phase payload_aos_2;
   RoadAttributesExtended_AT_Phase payload_aos_3;
   RoadAttributesExtended_AT_Phase payload_aos_4;
};
typedef struct _RoadAttributesExtended_TrafficLightSignalGroup_phaseList_
    RoadAttributesExtended_TrafficLightSignalGroup_phaseList;
struct _RoadAttributesExtended_AT_TrafficLightSignalGroup_ {
   availabilityBitfield_1 availabilityBitfield;
   RoadAttributesExtended_TrafficLightSignalGroup_id_type id;
   RoadAttributesExtended_TrafficLightSignalGroup_referenceIdStopLine referenceIdStopLine;
   RoadAttributesExtended_TrafficLightSignalGroup_referenceIdIntersection_type
    referenceIdIntersection;
   RoadAttributesExtended_TrafficLightSignalGroup_distance_type distance;
   RoadAttributesExtended_TrafficLightSignalGroup_source_type source;
   RoadAttributesExtended_TrafficLightSignalGroup_signalGroupID_type signalGroupID;
   RoadAttributesExtended_TrafficLightSignalGroup_regionID_type regionID;
   RoadAttributesExtended_TrafficLightSignalGroup_intersectionID_type intersectionID;
   RoadAttributesExtended_TrafficLightSignalGroup_allowedManeuverList allowedManeuverList;
   RoadAttributesExtended_TrafficLightSignalGroup_phaseList phaseList;
   RoadAttributesExtended_AT_VehicleTimestamp creationTime;
   RoadAttributesExtended_AT_TrafficLightLayout layout;
};
typedef struct _RoadAttributesExtended_AT_TrafficLightSignalGroup_
    RoadAttributesExtended_AT_TrafficLightSignalGroup;
struct _RoadAttributesExtended_TrafficSignsPreview_trafficLightList_ {
   uint8 size;
   RoadAttributesExtended_AT_TrafficLightSignalGroup payload_aos_0;
   RoadAttributesExtended_AT_TrafficLightSignalGroup payload_aos_1;
};
typedef struct _RoadAttributesExtended_TrafficSignsPreview_trafficLightList_
    RoadAttributesExtended_TrafficSignsPreview_trafficLightList;
struct _RoadAttributesExtended_TrafficSignsPreview_stoplineList_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributePointGenericStdDev payload_aos_0;
   RoadAttributesExtended_AT_AttributePointGenericStdDev payload_aos_1;
   RoadAttributesExtended_AT_AttributePointGenericStdDev payload_aos_2;
   RoadAttributesExtended_AT_AttributePointGenericStdDev payload_aos_3;
};
typedef struct _RoadAttributesExtended_TrafficSignsPreview_stoplineList_
    RoadAttributesExtended_TrafficSignsPreview_stoplineList;
struct _RoadAttributesExtended_TrafficSignsPreview_validTrailerSpeedLimits_ {
   uint8 size;
   RoadAttributesExtended_AT_AttributeEgoSpeedLimit payload_aos_0;
   RoadAttributesExtended_AT_AttributeEgoSpeedLimit payload_aos_1;
   RoadAttributesExtended_AT_AttributeEgoSpeedLimit payload_aos_2;
   RoadAttributesExtended_AT_AttributeEgoSpeedLimit payload_aos_3;
   RoadAttributesExtended_AT_AttributeEgoSpeedLimit payload_aos_4;
};
typedef struct _RoadAttributesExtended_TrafficSignsPreview_validTrailerSpeedLimits_
    RoadAttributesExtended_TrafficSignsPreview_validTrailerSpeedLimits;
struct _RoadAttributesExtended_AT_TrafficSignsPreview_ {
   RoadAttributesExtended_TrafficSignsPreview_poolAdditionalSigns poolAdditionalSigns;
   RoadAttributesExtended_TrafficSignsPreview_speedLimitList speedLimitList;
   RoadAttributesExtended_TrafficSignsPreview_speedMinimumRecommendedList
    speedMinimumRecommendedList;
   RoadAttributesExtended_TrafficSignsPreview_instructionRestrictionList instructionRestrictionList;
   RoadAttributesExtended_TrafficSignsPreview_dangerWarningList dangerWarningList;
   RoadAttributesExtended_TrafficSignsPreview_rightOfWayList rightOfWayList;
   RoadAttributesExtended_TrafficSignsPreview_trafficLightList trafficLightList;
   RoadAttributesExtended_TrafficSignsPreview_stoplineList stoplineList;
   RoadAttributesExtended_TrafficSignsPreview_validTrailerSpeedLimits validTrailerSpeedLimits;
   boolean trailerSpeedLimitsConsidered;
   RoadAttributesExtended_AT_counter messageCounter;
};
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
# 64 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.h" 2
# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/tl_defines_USS_SIH.h" 1
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_SIH
 *** TargetLink subsystem : USS_SIH/FrameSIH/Subsystem/FrameSIH/SignalInputHandlerSIH
 *** Codefile             : tl_defines_USS_SIH.h
 ***
 *** Generation date: 2024-08-22 20:27:26
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
# 65 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.h" 2

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
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 16
\**************************************************************************************************/
extern uint16 USS_SIH_s_BitFldDTC_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Bitfield for diagnostic trouble codes */
extern uint16 USS_SIH_s_RGDInsCity_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Distance for attribute */
extern uint16 USS_SIH_s_RGDRoundabout_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Distance for attribute */

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 32
\**************************************************************************************************/
extern float32 USS_SIH_s_ACADxObj01_m_measure; /* 
    Unit: m
    Description: distance x of object in front */
extern float32 USS_SIH_s_ACAVxObj01_mps_measure; /* 
    Unit: m/s
    Description: relative velocity front vehicle LRR */
extern float32 USS_SIH_s_AgStg_rad_measure; /* 
    Unit: rad
    Description: Steeringwheel angle offset compensated. Calculation based on EPS-Signals */
extern float32 USS_SIH_s_EPSStgTq_Nm_measure; /* 
    Unit: Nm
    Description: steering torque EPS */
extern float32 USS_SIH_s_LDALine00HorDistY_m_measure; /* 
    Unit: m
    Description: Distance from the car to the center path */
extern float32 USS_SIH_s_LDALine00HztlCrvtChg_1pm2_measure; /* 
    Unit: -
    Description: center path curvature change horizontal */
extern float32 USS_SIH_s_LDALine00HztlCrvt_1pm_measure; /* 
    Unit: 1/m
    Description: center path curvature horizontal */
extern float32 USS_SIH_s_LDALine00HztlEndX_m_measure; /* 
    Unit: m
    Description: center path end horizontal */
extern float32 USS_SIH_s_LDALine01HorDistY_m_measure; /* 
    Unit: m
    Description: Lateral distance from car to a lane boundary */
extern float32 USS_SIH_s_LDALine01HztlCrvtChg_1pm2_measure; /* 
    Unit: -
    Description: left lane curvature change horizontal */
extern float32 USS_SIH_s_LDALine01HztlCrvt_1pm_measure; /* 
    Unit: 1/m
    Description: left lane curvature horizontal */
extern float32 USS_SIH_s_LDALine01HztlEndX_m_measure; /* 
    Unit: m
    Description: left lane end horizontal */
extern float32 USS_SIH_s_LDALine02HorDistY_m_measure; /* 
    Unit: m
    Description: Lateral distance from car to a lane boundary */
extern float32 USS_SIH_s_LDALine02HztlCrvtChg_1pm2_measure; /* 
    Unit: -
    Description: right lane curvature change horizontal */
extern float32 USS_SIH_s_LDALine02HztlCrvt_1pm_measure; /* 
    Unit: 1/m
    Description: right lane curvature horizontal */
extern float32 USS_SIH_s_LDALine02HztlEndX_m_measure; /* 
    Unit: m
    Description: right lane end horizontal */
extern float32 USS_SIH_s_LDALine09HztlCrvtChg_1pm2_measure; /* 
    Unit: -
    Description: left boundary curvature change horizontal */
extern float32 USS_SIH_s_LDALine09HztlCrvt_1pm_measure; /* 
    Unit: 1/m
    Description: left boundary curvature horizontal */
extern float32 USS_SIH_s_LDALine09HztlEndX_m_measure; /* 
    Unit: m
    Description: left boundary end horizontal */
extern float32 USS_SIH_s_LDALine10HztlCrvtChg_1pm2_measure; /* 
    Unit: -
    Description: right boundary curvature change horizontal */
extern float32 USS_SIH_s_LDALine10HztlCrvt_1pm_measure; /* 
    Unit: 1/m
    Description: right boundary curvature horizontal */
extern float32 USS_SIH_s_LDALine10HztlEndX_m_measure; /* 
    Unit: m
    Description: right boundary end horizontal */
extern float32 USS_SIH_s_VDSOLatA_mps2_measure; /* 
    Unit: m/s^2
    Description: lateral acceleration VDSO */
extern float32 USS_SIH_s_VDSOLgtA_mps2_measure; /* 
    Unit: m/s^2
    Description: longitudinal acceleration from VDSO */
extern float32 USS_SIH_s_VDSOVLgt_mps_measure; /* 
    Unit: m/s
    Description: relative velocity ego vehicle */
extern float32 USS_SIH_s_VMMBrkPedItDmdNorm_measure; /* 
    Unit: -
    Description: Normalised intensity of driver brake pedal request */
extern float32 USS_SIH_s_VMMDrvPedADmdNorm_measure; /* 
    Unit: m/s^2
    Description: Drive pedal request, normalised as acceleration */

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 8
\**************************************************************************************************/
extern uint8 USS_SIH_s_ACAStLat_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: state of function ACA lateral */
extern uint8 USS_SIH_s_ACAStLgt_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: state of function ACA longitudinal (ACC) */
extern uint8 USS_SIH_s_ACCStLgt_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: state of function ACC */
extern uint8 USS_SIH_s_APIStDrvPed_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: state of driver acceleration pedal */
extern uint8 USS_SIH_s_CntrStgDet_SigSt_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
extern uint8 USS_SIH_s_CodCpStgWhl_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: coding capacitive steering wheel */
extern uint8 USS_SIH_s_CodDrvSys_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: coding drive system */
extern uint8 USS_SIH_s_ComLvl_p100_SigSt_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
extern uint8 USS_SIH_s_CpStgWhlErr_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: error in HOD steering wheel */
extern uint8 USS_SIH_s_CpStgWhlTch_SigSt_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
extern uint8 USS_SIH_s_CpStgWhlTch_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: touch analysis of the capacitive steering wheel */
extern uint8 USS_SIH_s_DBRIdcDrvBrk_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Brake Pedal Apply Recognition with certain steps of increasing recognition quality
     */
extern uint8 USS_SIH_s_DrvDrgIdxRgnLvl_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: recuperation level */
extern uint8 USS_SIH_s_DynLvl_p100_SigSt_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
extern sint8 USS_SIH_s_EPSCtlValQFK_measure; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: -128 .. 127
    Description: Beschreibt die aktuell angeforderte Regelgroeße des Zahnstangenpositionsreglers ink
    l. Richtungsvorgabe. */
extern uint8 USS_SIH_s_EPSStStgTq_SigSt_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
extern uint8 USS_SIH_s_EPSStStgTq_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: status steering torque EPS */
extern uint8 USS_SIH_s_ESCOffBtn_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: ESC button off */
extern uint8 USS_SIH_s_EffLvl_p100_SigSt_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
extern uint8 USS_SIH_s_GearShift_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: gear shift */
extern uint8 USS_SIH_s_LDALine00Safe_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Signal representing if a center path trajectory can be considered as safe or not sa
    fe at the moment. */
extern uint8 USS_SIH_s_LDALine01Safe_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Signal representing if a lane-boundary-object can be considered as safe or not safe
     at the moment. */
extern uint8 USS_SIH_s_LDALine02Safe_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Signal representing if a lane-boundary-object can be considered as safe or not safe
     at the moment. */
extern uint8 USS_SIH_s_LDAStatus_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: System status of LDA */
extern uint8 USS_SIH_s_LimGraAccAca_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: state of function ACC */
extern uint8 USS_SIH_s_ODStFct_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Function state of Object Detection */
extern uint8 USS_SIH_s_ODStObjClas_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Class of detected object */
extern uint8 USS_SIH_s_ODValObjProb_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Existence probability of detected object */
extern uint8 USS_SIH_s_RGIdInsCity_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Identifier for attribute */
extern uint8 USS_SIH_s_RGIdRoundabout_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Identifier for attribute */
extern uint8 USS_SIH_s_RGSrcInsCity_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Source for attribute */
extern uint8 USS_SIH_s_RGSrcRoundabout_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Source for attribute */
extern uint8 USS_SIH_s_SteeringActivity_SigSt_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
extern uint8 USS_SIH_s_VLimTrfcSign_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: predictive velocity traffic sign */
extern uint8 USS_SIH_s_VMMBrkPedStReqDmnt_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Information about the drivers deceleration request induced via brake pedal) is dece
    lerating dominant vs. VMM (FASIS) requests. */
extern uint8 USS_SIH_s_VMMLatGuideStReq_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Lateral control state request */

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 8
\**************************************************************************************************/
extern boolean USS_SIH_s_FlgAlwSetDTC_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: allow setting DTCs */
extern boolean USS_SIH_s_FlgDTCRstrt_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: DTC reset */
extern boolean USS_SIH_s_MfwTipDwn_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: multi functional steering wheel tip down */
extern boolean USS_SIH_s_MfwTipUp_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: multi functional steering wheel tip up */
extern boolean USS_SIH_s_PTOMMFlgDrvMdB_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: OnePedalMode */

/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 8
\**************************************************************************************************/
extern uint8 USS_SIH_s_EgoInfo_SigSt_measure;
extern uint8 USS_SIH_s_PvwInfo_SigSt_measure;

/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 8
\**************************************************************************************************/
extern boolean USS_SIH_s_RplcACA_b_measure;
extern boolean USS_s_FlgUseKl15_measure;

/*------------------------------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
    GLOBAL_FCN_UNITY_BUILD_INLINE: global inline function(s) (exported to other modules)
\**************************************************************************************************/
extern void USS_SIH(float32 ACA_s_Obj_01_dx_v, float32 ACA_s_Obj_01_vx_v,
     uint8 ACA_s_Status_Laengs, uint8 ACA_s_Status_Quer, boolean ACA_s_relevanter_Fehler, uint8
     ACA_sc_Obj_01_dx_v, uint8 ACA_sc_Obj_01_vx_v, uint8 ACA_sc_Status_Laengs, uint8
     ACA_sc_Status_Quer, uint8 ACA_sc_relevanter_Fehler, uint8 ACC_s_LgtCtl_StAcv, uint8
     ACC_sc_LgtCtl_StAcv, uint8 API_s_StDrvPed, uint8 API_sc_StDrvPed, uint8 CodSwt_s_CpStgWhl,
     uint8 CodSwt_s_DrvSysVrn, uint8 DBR_s_IdcDrvBrk, uint8 DBR_sc_IdcDrvBrk, boolean
     Diag_s_BoundaryCdn_DiagDlyEt, boolean Diag_s_BoundaryCdn_DiagStartFr, boolean
     Diag_s_BoundaryCdn_FrSyncPres, boolean Diag_s_BoundaryCdn_VoltRange, boolean
     Diag_s_DTCFlgRstrt, uint8 DrvDrg_s_IdxRgnLvl, uint8 DrvDrg_sc_IdxRgnLvl, sint8 EPS_s_CtlValQFK,
      uint8 EPS_s_StStgTq, float32 EPS_s_StgTq, uint8 EPS_sc_CtlValQFK, uint8 EPS_sc_StStgTq, uint8
     EPS_sc_StgTq, uint8 FPM_s_Set_PreSel_LIM_GRA_ACC_ACA, uint8 FPM_sc_Set_PreSel_LIM_GRA_ACC_ACA,
     uint8 KLR_s_Fehler, uint8 KLR_s_Touchauswertung, uint8 KLR_sc_Fehler, uint8
     KLR_sc_Touchauswertung, boolean KST_s_KL_15, uint8 KST_sc_KL_15, float32
     LDA_s_FC1_LIN00HorCurv, float32 LDA_s_FC1_LIN00HorCurvCh, float32 LDA_s_FC1_LIN00HorDistY,
     float32 LDA_s_FC1_LIN00HorEndX, uint8 LDA_s_FC1_LIN00Safe, float32 LDA_s_FC1_LIN01HorCurv,
     float32 LDA_s_FC1_LIN01HorCurvCh, float32 LDA_s_FC1_LIN01HorDistY, float32
     LDA_s_FC1_LIN01HorEndX, uint8 LDA_s_FC1_LIN01Safe, float32 LDA_s_FC1_LIN02HorCurv, float32
     LDA_s_FC1_LIN02HorCurvCh, float32 LDA_s_FC1_LIN02HorDistY, float32 LDA_s_FC1_LIN02HorEndX,
     uint8 LDA_s_FC1_LIN02Safe, float32 LDA_s_FC1_LIN09HorCurv, float32 LDA_s_FC1_LIN09HorCurvCh,
     float32 LDA_s_FC1_LIN09HorEndX, float32 LDA_s_FC1_LIN10HorCurv, float32
     LDA_s_FC1_LIN10HorCurvCh, float32 LDA_s_FC1_LIN10HorEndX, uint8 LDA_s_FC1_Status, uint8
     LDA_sc_FC1_LIN00HorCurv, uint8 LDA_sc_FC1_LIN00HorCurvCh, uint8 LDA_sc_FC1_LIN00HorDistY, uint8
      LDA_sc_FC1_LIN00HorEndX, uint8 LDA_sc_FC1_LIN00Safe, uint8 LDA_sc_FC1_LIN01HorCurv, uint8
     LDA_sc_FC1_LIN01HorCurvCh, uint8 LDA_sc_FC1_LIN01HorDistY, uint8 LDA_sc_FC1_LIN01HorEndX, uint8
      LDA_sc_FC1_LIN01Safe, uint8 LDA_sc_FC1_LIN02HorCurv, uint8 LDA_sc_FC1_LIN02HorCurvCh, uint8
     LDA_sc_FC1_LIN02HorDistY, uint8 LDA_sc_FC1_LIN02HorEndX, uint8 LDA_sc_FC1_LIN02Safe, uint8
     LDA_sc_FC1_LIN09HorCurv, uint8 LDA_sc_FC1_LIN09HorCurvCh, uint8 LDA_sc_FC1_LIN09HorEndX, uint8
     LDA_sc_FC1_LIN10HorCurv, uint8 LDA_sc_FC1_LIN10HorCurvCh, uint8 LDA_sc_FC1_LIN10HorEndX, uint8
     LDA_sc_FC1_Status, uint8 MFL_s_Tip_Down, uint8 MFL_s_Tip_Up, uint8 MFL_sc_Tip_Down, uint8
     MFL_sc_Tip_Up, float32 OD_s_Obj_01_dx_v, float32 OD_s_Obj_01_vx_v, uint8 OD_s_StFct, uint8
     OD_s_StObjClas, uint8 OD_s_ValObjProb, boolean PTOMM_s_FlgDrvMdB, uint8 PTOMM_sc_FlgDrvMdB,
     uint8 RG_s_EgoInfo_MsgCnt, uint8 RG_s_EgoInfo_VLimTrfcSign, uint16 RG_s_PvwInfo_DInsCity,
     uint16 RG_s_PvwInfo_DRoundabout, uint8 RG_s_PvwInfo_IdInsCity, uint8 RG_s_PvwInfo_IdRoundabout,
      uint8 RG_s_PvwInfo_MsgCnt, uint8 RG_s_PvwInfo_SrcInsCity, uint8 RG_s_PvwInfo_SrcRoundabout,
     uint8 RG_s_TrfcSignPvw_MovmtPhaSt, uint8 Taster_s_ESC_Off, uint8 Taster_sc_ESC_Off, float32
     VDSO_s_ALatOfsCmp, float32 VDSO_s_ALgtOfsCmp, float32 VDSO_s_AgStgWhlOfsCmp, boolean
     VDSO_s_StENDA, float32 VDSO_s_Vx3dGNSS, uint8 VDSO_sc_ALatOfsCmp, uint8 VDSO_sc_ALgtOfsCmp,
     uint8 VDSO_sc_AgStgWhlOfsCmp, uint8 VDSO_sc_StENDA, uint8 VDSO_sc_Vx3dGNSS, float32
     VMM_s_BrkPed_ItDmdNorm, uint8 VMM_s_BrkPed_StReqDmnt, float32 VMM_s_DrvPed_ADmdNorm, uint8
     VMM_s_LatGuide_StReq, uint8 VMM_sc_BrkPed_ItDmdNorm, uint8 VMM_sc_BrkPed_StReqDmnt, uint8
     VMM_sc_DrvPed_ADmdNorm, uint8 WH_s_Fahrstufe, uint8 WH_sc_Fahrstufe, uint16 *
     USS_SIH_s_RGTrfcLghtDst_dm, uint8 * USS_SIH_s_RGTrfcMovmtPhaSt);


/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
# 970 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.c" 2
# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_Param/src\\USS_Param.h" 1
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_Param
 *** TargetLink subsystem : USS_Param/FrameUSS_Param
 *** Codefile             : USS_Param.h
 ***
 *** Generation date: 2024-08-22 19:01:27
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
extern const uint16 USS_IPR_p_ThDrvBvrStgAgDcr_deg; /* 
    Unit: deg
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 359
    Description: Steering angle step - Abrupt action */
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
extern const float32 USS_IIAA_p1_AbrpAcclImpIdcCnfd[8]; /* 
    Unit: -
    MIN/MAX: 0 .. 7
    Description: Output Values for LookUpTable impairment indicator acceleration frequency to impair
    ment indicator acceleration confidence */
extern const float32 USS_IIAA_p1_AbrpBrkImpIdcCnfd[8]; /* 
    Unit: -
    MIN/MAX: 0 .. 7
    Description: Output Values for LookUpTable impairment indicator braking frequency to impairment 
    indicator braking confidence */
extern const float32 USS_IIAA_p1_AbrpStgkImpIdcCnfd[8]; /* 
    Unit: -
    MIN/MAX: 0 .. 7
    Description: Output Values for LookUpTable impairment indicator steering frequency to impairment
     indicator steering confidence */
extern const float32 USS_IIAA_px_AbrpAcclIdcFreq[8]; /* 
    Unit: -
    MIN/MAX: 0 .. 7
    Description: Input Values for LookUpTable impairment indicator acceleration frequency to impairm
    ent indicator acceleration */
extern const float32 USS_IIAA_px_AbrpBrkIdcFreq[8]; /* 
    Unit: -
    MIN/MAX: 0 .. 7
    Description: Input Values for LookUpTable impairment indicator braking frequency to impairment i
    ndicator braking */
extern const float32 USS_IIAA_px_AbrpStgIdcFreq[8]; /* 
    Unit: -
    MIN/MAX: 0 .. 7
    Description: Input Values for LookUpTable impairment indicator steering frequency to impairment 
    indicator steering */
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
extern const float32 USS_IPR_p_StgWhlAgLoPs_1ps; /* 
    Unit: 1/s
    MIN/MAX: 0 .. 100
    Description: Steering angle low pass filter time constant */
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
extern const uint8 USSDB_DS_NAME[12]; /* Description: HCP1 DS Name : 170000000000 */
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
extern const uint8 USS_IIAA_p1_AbrpAcclIdcCntThres[8]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7
    Description: Output Values for LookUpTable impairment indicator acceleration frequency to impair
    ment indicator acceleration */
extern const uint8 USS_IIAA_p1_AbrpBrkIdcCntThres[8]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7
    Description: Output Values for LookUpTable impairment indicator braking frequency to impairment 
    indicator braking */
extern const uint8 USS_IIAA_p1_AbrpStgIdcCntThres[8]; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7
    Description: Output Values for LookUpTable impairment indicator steering frequency to impairment
     indicator steering */
extern const uint8 USS_IIAA_p_AbrpActnFreqClcnThres; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 8
    Description: Count threshold from which frequency should be calculated */
extern const uint8 USS_IIAA_p_AbrpActnIdcCntThres; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 20
    Description: Threshold abrupt action events to determine impairment */
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
extern const uint8 USS_IPR_p_MinDistChgBrk_s; /* 
    Unit: s
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Min threshold timed distance to leading vehicle */
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
# 971 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.c" 2

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
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 16
\**************************************************************************************************/
uint16 USS_SIH_s_BitFldDTC_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Bitfield for diagnostic trouble codes */
uint16 USS_SIH_s_RGDInsCity_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Distance for attribute */
uint16 USS_SIH_s_RGDRoundabout_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Distance for attribute */

/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 16
\**************************************************************************************************/
static UInt16 IF_SUSS_SIH249_Constant = 0;
# 1020 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.c"
/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 32
\**************************************************************************************************/
float32 USS_SIH_s_ACADxObj01_m_measure = 0.F; /* 
    Unit: m
    Description: distance x of object in front */
float32 USS_SIH_s_ACAVxObj01_mps_measure = 0.F; /* 
    Unit: m/s
    Description: relative velocity front vehicle LRR */
float32 USS_SIH_s_AgStg_rad_measure = 0.F; /* 
    Unit: rad
    Description: Steeringwheel angle offset compensated. Calculation based on EPS-Signals */
float32 USS_SIH_s_EPSStgTq_Nm_measure = 0.F; /* 
    Unit: Nm
    Description: steering torque EPS */
float32 USS_SIH_s_LDALine00HorDistY_m_measure = 0.F; /* 
    Unit: m
    Description: Distance from the car to the center path */
float32 USS_SIH_s_LDALine00HztlCrvtChg_1pm2_measure = 0.F; /* 
    Unit: -
    Description: center path curvature change horizontal */
float32 USS_SIH_s_LDALine00HztlCrvt_1pm_measure = 0.F; /* 
    Unit: 1/m
    Description: center path curvature horizontal */
float32 USS_SIH_s_LDALine00HztlEndX_m_measure = 0.F; /* 
    Unit: m
    Description: center path end horizontal */
float32 USS_SIH_s_LDALine01HorDistY_m_measure = 0.F; /* 
    Unit: m
    Description: Lateral distance from car to a lane boundary */
float32 USS_SIH_s_LDALine01HztlCrvtChg_1pm2_measure = 0.F; /* 
    Unit: -
    Description: left lane curvature change horizontal */
float32 USS_SIH_s_LDALine01HztlCrvt_1pm_measure = 0.F; /* 
    Unit: 1/m
    Description: left lane curvature horizontal */
float32 USS_SIH_s_LDALine01HztlEndX_m_measure = 0.F; /* 
    Unit: m
    Description: left lane end horizontal */
float32 USS_SIH_s_LDALine02HorDistY_m_measure = 0.F; /* 
    Unit: m
    Description: Lateral distance from car to a lane boundary */
float32 USS_SIH_s_LDALine02HztlCrvtChg_1pm2_measure = 0.F; /* 
    Unit: -
    Description: right lane curvature change horizontal */
float32 USS_SIH_s_LDALine02HztlCrvt_1pm_measure = 0.F; /* 
    Unit: 1/m
    Description: right lane curvature horizontal */
float32 USS_SIH_s_LDALine02HztlEndX_m_measure = 0.F; /* 
    Unit: m
    Description: right lane end horizontal */
float32 USS_SIH_s_LDALine09HztlCrvtChg_1pm2_measure = 0.F; /* 
    Unit: -
    Description: left boundary curvature change horizontal */
float32 USS_SIH_s_LDALine09HztlCrvt_1pm_measure = 0.F; /* 
    Unit: 1/m
    Description: left boundary curvature horizontal */
float32 USS_SIH_s_LDALine09HztlEndX_m_measure = 0.F; /* 
    Unit: m
    Description: left boundary end horizontal */
float32 USS_SIH_s_LDALine10HztlCrvtChg_1pm2_measure = 0.F; /* 
    Unit: -
    Description: right boundary curvature change horizontal */
float32 USS_SIH_s_LDALine10HztlCrvt_1pm_measure = 0.F; /* 
    Unit: 1/m
    Description: right boundary curvature horizontal */
float32 USS_SIH_s_LDALine10HztlEndX_m_measure = 0.F; /* 
    Unit: m
    Description: right boundary end horizontal */
float32 USS_SIH_s_VDSOLatA_mps2_measure = 0.F; /* 
    Unit: m/s^2
    Description: lateral acceleration VDSO */
float32 USS_SIH_s_VDSOLgtA_mps2_measure = 0.F; /* 
    Unit: m/s^2
    Description: longitudinal acceleration from VDSO */
float32 USS_SIH_s_VDSOVLgt_mps_measure = 0.F; /* 
    Unit: m/s
    Description: relative velocity ego vehicle */
float32 USS_SIH_s_VMMBrkPedItDmdNorm_measure = 0.F; /* 
    Unit: -
    Description: Normalised intensity of driver brake pedal request */
float32 USS_SIH_s_VMMDrvPedADmdNorm_measure = 0.F; /* 
    Unit: m/s^2
    Description: Drive pedal request, normalised as acceleration */
# 1114 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.c"
/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 8
\**************************************************************************************************/
uint8 USS_SIH_s_ACAStLat_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: state of function ACA lateral */
uint8 USS_SIH_s_ACAStLgt_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: state of function ACA longitudinal (ACC) */
uint8 USS_SIH_s_ACCStLgt_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: state of function ACC */
uint8 USS_SIH_s_APIStDrvPed_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: state of driver acceleration pedal */
uint8 USS_SIH_s_CntrStgDet_SigSt_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
uint8 USS_SIH_s_CodCpStgWhl_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: coding capacitive steering wheel */
uint8 USS_SIH_s_CodDrvSys_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: coding drive system */
uint8 USS_SIH_s_ComLvl_p100_SigSt_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
uint8 USS_SIH_s_CpStgWhlErr_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: error in HOD steering wheel */
uint8 USS_SIH_s_CpStgWhlTch_SigSt_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
uint8 USS_SIH_s_CpStgWhlTch_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: touch analysis of the capacitive steering wheel */
uint8 USS_SIH_s_DBRIdcDrvBrk_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Brake Pedal Apply Recognition with certain steps of increasing recognition quality
     */
uint8 USS_SIH_s_DrvDrgIdxRgnLvl_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: recuperation level */
uint8 USS_SIH_s_DynLvl_p100_SigSt_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
sint8 USS_SIH_s_EPSCtlValQFK_measure = 0; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: -128 .. 127
    Description: Beschreibt die aktuell angeforderte Regelgroeße des Zahnstangenpositionsreglers ink
    l. Richtungsvorgabe. */
uint8 USS_SIH_s_EPSStStgTq_SigSt_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
uint8 USS_SIH_s_EPSStStgTq_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: status steering torque EPS */
uint8 USS_SIH_s_ESCOffBtn_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: ESC button off */
uint8 USS_SIH_s_EffLvl_p100_SigSt_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
uint8 USS_SIH_s_GearShift_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: gear shift */
uint8 USS_SIH_s_LDALine00Safe_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Signal representing if a center path trajectory can be considered as safe or not sa
    fe at the moment. */
uint8 USS_SIH_s_LDALine01Safe_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Signal representing if a lane-boundary-object can be considered as safe or not safe
     at the moment. */
uint8 USS_SIH_s_LDALine02Safe_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Signal representing if a lane-boundary-object can be considered as safe or not safe
     at the moment. */
uint8 USS_SIH_s_LDAStatus_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: System status of LDA */
uint8 USS_SIH_s_LimGraAccAca_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: state of function ACC */
uint8 USS_SIH_s_ODStFct_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Function state of Object Detection */
uint8 USS_SIH_s_ODStObjClas_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Class of detected object */
uint8 USS_SIH_s_ODValObjProb_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Existence probability of detected object */
uint8 USS_SIH_s_RGIdInsCity_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Identifier for attribute */
uint8 USS_SIH_s_RGIdRoundabout_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Identifier for attribute */
uint8 USS_SIH_s_RGSrcInsCity_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Source for attribute */
uint8 USS_SIH_s_RGSrcRoundabout_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Source for attribute */
uint8 USS_SIH_s_SteeringActivity_SigSt_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: SignalState */
uint8 USS_SIH_s_VLimTrfcSign_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: predictive velocity traffic sign */
uint8 USS_SIH_s_VMMBrkPedStReqDmnt_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Information about the drivers deceleration request induced via brake pedal) is dece
    lerating dominant vs. VMM (FASIS) requests. */
uint8 USS_SIH_s_VMMLatGuideStReq_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Lateral control state request */

/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 8
\**************************************************************************************************/
static uint8 SUSS_SIH315_Switch2 = 0;
static uint8 SUSS_SIH327_Switch2 = 0;
static uint8 SUSS_SIH339_Switch2 = 0;
static uint8 SUSS_SIH351_Switch2 = 0;
static uint8 SUSS_SIH363_Switch2 = 0;
static uint8 SUSS_SIH375_Switch2 = 0;
static uint8 SUSS_SIH387_Switch2 = 0;
static uint8 SUSS_SIH399_Switch2 = 0;
static uint8 SUSS_SIH411_Switch2 = 0;
static uint8 SUSS_SIH423_Switch2 = 0;
static uint8 SUSS_SIH435_Switch2 = 0;
static uint8 SUSS_SIH447_Switch2 = 0;
static uint8 SUSS_SIH596_Switch2 = 0;
static uint8 SUSS_SIH607_Switch2 = 0;
static uint8 SUSS_SIH77_Signal_Conversion_yc = 0;
static uint8 X_SUSS_SIH543_Unit_Delay = 0;
static uint8 X_SUSS_SIH549_Unit_Delay = 0;
# 1299 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.c"
/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 8
\**************************************************************************************************/
boolean USS_SIH_s_FlgAlwSetDTC_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: allow setting DTCs */
boolean USS_SIH_s_FlgDTCRstrt_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: DTC reset */
boolean USS_SIH_s_MfwTipDwn_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: multi functional steering wheel tip down */
boolean USS_SIH_s_MfwTipUp_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: multi functional steering wheel tip up */
boolean USS_SIH_s_PTOMMFlgDrvMdB_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: OnePedalMode */

/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 8
\**************************************************************************************************/
static boolean SUSS_SIH315_ROWD = 0;
static boolean SUSS_SIH315_RSWE = 0;
static boolean SUSS_SIH327_ROWD = 0;
static boolean SUSS_SIH327_RSWE = 0;
static boolean SUSS_SIH339_ROWD = 0;
static boolean SUSS_SIH339_RSWE = 0;
static boolean SUSS_SIH351_ROWD = 0;
static boolean SUSS_SIH351_RSWE = 0;
static boolean SUSS_SIH363_ROWD = 0;
static boolean SUSS_SIH363_RSWE = 0;
static boolean SUSS_SIH375_ROWD = 0;
static boolean SUSS_SIH375_RSWE = 0;
static boolean SUSS_SIH387_ROWD = 0;
static boolean SUSS_SIH387_RSWE = 0;
static boolean SUSS_SIH399_ROWD = 0;
static boolean SUSS_SIH399_RSWE = 0;
static boolean SUSS_SIH411_ROWD = 0;
static boolean SUSS_SIH411_RSWE = 0;
static boolean SUSS_SIH423_ROWD = 0;
static boolean SUSS_SIH423_RSWE = 0;
static boolean SUSS_SIH435_ROWD = 0;
static boolean SUSS_SIH435_RSWE = 0;
static boolean SUSS_SIH447_ROWD = 0;
static boolean SUSS_SIH447_RSWE = 0;
static boolean SUSS_SIH543_ROWD = 0;
static boolean SUSS_SIH543_Relational_Operator1 = 0;
static boolean SUSS_SIH549_ROWD = 0;
static boolean SUSS_SIH549_Relational_Operator1 = 0;
static boolean SUSS_SIH563_ROWD = 0;
static boolean SUSS_SIH563_RSWE = 0;
static boolean SUSS_SIH574_ROWD = 0;
static boolean SUSS_SIH574_RSWE = 0;
static boolean SUSS_SIH585_ROWD = 0;
static boolean SUSS_SIH585_RSWE = 0;
static boolean SUSS_SIH596_ROWD = 0;
static boolean SUSS_SIH596_RSWE = 0;
static boolean SUSS_SIH607_ROWD = 0;
static boolean SUSS_SIH607_RSWE = 0;
static boolean SUSS_SIH618_ROWD = 0;
static boolean SUSS_SIH618_RSWE = 0;
static boolean SUSS_SIH629_ROWD = 0;
static boolean SUSS_SIH629_RSWE = 0;
static boolean SUSS_SIH77_ROWD = 0;
static boolean X_SUSS_SIH79_UnitDelay = 0;
# 1381 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.c"
/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 8
\**************************************************************************************************/
static boolean SUSS_SIH315_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH327_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH339_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH351_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH363_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH375_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH387_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH399_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH411_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH423_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH435_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH447_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH543_Subsystem_FirstRun = 1;
static boolean SUSS_SIH549_Subsystem_FirstRun = 1;
static boolean SUSS_SIH563_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH574_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH585_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH596_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH607_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH618_ClassifierMonitoring_FirstRun = 1;
static boolean SUSS_SIH629_ClassifierMonitoring_FirstRun = 1;
static boolean X_SUSS_SIH317_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH329_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH341_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH353_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH365_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH377_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH389_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH401_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH413_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH425_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH437_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH449_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH565_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH576_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH587_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH598_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH609_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH620_Delay_TriggerIn = 1;
static boolean X_SUSS_SIH631_Delay_TriggerIn = 1;
# 1434 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.c"
/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 32
\**************************************************************************************************/
static float32 X_SUSS_SIH317_Delay;
static float32 X_SUSS_SIH329_Delay;
static float32 X_SUSS_SIH341_Delay;
static float32 X_SUSS_SIH353_Delay;
static float32 X_SUSS_SIH365_Delay;
static float32 X_SUSS_SIH377_Delay;
static float32 X_SUSS_SIH389_Delay;
static float32 X_SUSS_SIH401_Delay;
static float32 X_SUSS_SIH413_Delay;
static float32 X_SUSS_SIH425_Delay;
static float32 X_SUSS_SIH437_Delay;
static float32 X_SUSS_SIH449_Delay;
static float32 X_SUSS_SIH565_Delay;
static float32 X_SUSS_SIH576_Delay;
static float32 X_SUSS_SIH587_Delay;
static float32 X_SUSS_SIH598_Delay;
static float32 X_SUSS_SIH609_Delay;
static float32 X_SUSS_SIH620_Delay;
static float32 X_SUSS_SIH631_Delay;
# 1466 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.c"
/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 8
\**************************************************************************************************/
uint8 USS_SIH_s_EgoInfo_SigSt_measure;
uint8 USS_SIH_s_PvwInfo_SigSt_measure;

/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 8
\**************************************************************************************************/
static uint8 X_SUSS_SIH544_Delay;
static uint8 X_SUSS_SIH550_Delay;
# 1487 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_SIH/src/USS_SIH.c"
/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 8
\**************************************************************************************************/
boolean USS_SIH_s_RplcACA_b_measure;
boolean USS_s_FlgUseKl15_measure;





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
 ***        USS_SIH
 *** 
 ***  DESCRIPTION:
 ***        
 *** 
 ***  PARAMETERS:
 ***        Type               Name                Description
 ***        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***        float32            ACA_s_Obj_01_dx_v   distance x of object in front
 ***        float32            ACA_s_Obj_01_vx_v   relative velocity front vehicle LRR
 ***        uint8              ACA_s_Status_Laengs state of function ACA longitudinal (ACC)
 ***        uint8              ACA_s_Status_Quer   state of function ACA lateral
 ***        boolean            ACA_s_relevanter_Fehler Error state of function ACA
 ***        uint8              ACA_sc_Obj_01_dx_v  Classifier for signal
 ***        uint8              ACA_sc_Obj_01_vx_v  Classifier for signal
 ***        uint8              ACA_sc_Status_Laengs Classifier for signal
 ***        uint8              ACA_sc_Status_Quer  Classifier for signal
 ***        uint8              ACA_sc_relevanter_Fehler Classifier for signal
 ***        uint8              ACC_s_LgtCtl_StAcv  Activation demand for longitudinal guidance
 ***        uint8              ACC_sc_LgtCtl_StAcv Classifier for signal
 ***        uint8              API_s_StDrvPed      state of driver acceleration pedal
 ***        uint8              API_sc_StDrvPed     Classifier for signal
 ***        uint8              CodSwt_s_CpStgWhl   coding capacitive steering wheel
 ***        uint8              CodSwt_s_DrvSysVrn  coding drive system
 ***        uint8              DBR_s_IdcDrvBrk     Brake Pedal Apply Recognition with certain steps 
 of increasing recognition quality
 ***        uint8              DBR_sc_IdcDrvBrk    Classifier for signal
 ***        boolean            Diag_s_BoundaryCdn_DiagDlyEt Debounce time expired for Ethernet bus
 ***        boolean            Diag_s_BoundaryCdn_DiagStartFr Debounce time expired for Flexray bus
 ***        boolean            Diag_s_BoundaryCdn_FrSyncPres Flexray bus is active and has no sync e
 rrors
 ***        boolean            Diag_s_BoundaryCdn_VoltRange Voltage is in valid range
 ***        boolean            Diag_s_DTCFlgRstrt  DTC reset
 ***        uint8              DrvDrg_s_IdxRgnLvl  Index Regeneration Level
 ***        uint8              DrvDrg_sc_IdxRgnLvl Classifier for signal
 ***        sint8              EPS_s_CtlValQFK     Beschreibt die aktuell angeforderte Regelgroeße d
 es Zahnstangenpositionsreglers inkl. Richtungsvorgabe.
 ***        uint8              EPS_s_StStgTq       steering torque status (ASIL)
 ***        float32            EPS_s_StgTq         steering torque EPS
 ***        uint8              EPS_sc_CtlValQFK    Classifier for signal
 ***        uint8              EPS_sc_StStgTq      Classifier for signal
 ***        uint8              EPS_sc_StgTq        Classifier for signal
 ***        uint8              FPM_s_Set_PreSel_LIM_GRA_ACC_ACA Preselected functionality: Speed Lim
 iter, Cruise Control, Adaptive Cruise Control, Hill Descent Control
 ***        uint8              FPM_sc_Set_PreSel_LIM_GRA_ACC_ACA Classifier for signal
 ***        uint8              KLR_s_Fehler        error in HOD steering wheel
 ***        uint8              KLR_s_Touchauswertung touch analysis of the capacitive steering wheel
 ***        uint8              KLR_sc_Fehler       Classifier for signal
 ***        uint8              KLR_sc_Touchauswertung Classifier for signal
 ***        boolean            KST_s_KL_15         Klemme 15: Zuendung (SW-Kl.15)
 ***        uint8              KST_sc_KL_15        Classifier for signal
 ***        float32            LDA_s_FC1_LIN00HorCurv center path curvature horizontal
 ***        float32            LDA_s_FC1_LIN00HorCurvCh center path curvature change horizontal
 ***        float32            LDA_s_FC1_LIN00HorDistY Distance from the car to the center path
 ***        float32            LDA_s_FC1_LIN00HorEndX center path end horizontal
 ***        uint8              LDA_s_FC1_LIN00Safe Signal representing if a center path trajectory c
 an be considered as safe or not safe at the moment.
 ***        float32            LDA_s_FC1_LIN01HorCurv left lane curvature horizontal
 ***        float32            LDA_s_FC1_LIN01HorCurvCh left lane curvature change horizontal
 ***        float32            LDA_s_FC1_LIN01HorDistY Lateral distance from car to a lane boundary
 ***        float32            LDA_s_FC1_LIN01HorEndX left lane end horizontal
 ***        uint8              LDA_s_FC1_LIN01Safe Signal representing if a lane-boundary-object can
  be considered as safe or not safe at the moment.
 ***        float32            LDA_s_FC1_LIN02HorCurv right lane curvature horizontal
 ***        float32            LDA_s_FC1_LIN02HorCurvCh right lane curvature change horizontal
 ***        float32            LDA_s_FC1_LIN02HorDistY Lateral distance from car to a lane boundary
 ***        float32            LDA_s_FC1_LIN02HorEndX right lane end horizontal
 ***        uint8              LDA_s_FC1_LIN02Safe Signal representing if a center path trajectory c
 an be considered as safe or not safe at the moment.
 ***        float32            LDA_s_FC1_LIN09HorCurv left boundary curvature horizontal
 ***        float32            LDA_s_FC1_LIN09HorCurvCh left boundary curvature change horizontal
 ***        float32            LDA_s_FC1_LIN09HorEndX left boundary end horizontal
 ***        float32            LDA_s_FC1_LIN10HorCurv right boundary curvature horizontal
 ***        float32            LDA_s_FC1_LIN10HorCurvCh right boundary curvature change horizontal
 ***        float32            LDA_s_FC1_LIN10HorEndX right boundary end horizontal
 ***        uint8              LDA_s_FC1_Status    System status of LDA
 ***        uint8              LDA_sc_FC1_LIN00HorCurv Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN00HorCurvCh Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN00HorDistY Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN00HorEndX Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN00Safe Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN01HorCurv Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN01HorCurvCh Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN01HorDistY Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN01HorEndX Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN01Safe Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN02HorCurv Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN02HorCurvCh Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN02HorDistY Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN02HorEndX Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN02Safe Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN09HorCurv Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN09HorCurvCh Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN09HorEndX Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN10HorCurv Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN10HorCurvCh Classifier for signal
 ***        uint8              LDA_sc_FC1_LIN10HorEndX Classifier for signal
 ***        uint8              LDA_sc_FC1_Status   Classifier for signal
 ***        uint8              MFL_s_Tip_Down      multi functional steering wheel tip down
 ***        uint8              MFL_s_Tip_Up        multi functional steering wheel tip up
 ***        uint8              MFL_sc_Tip_Down     Classifier for signal
 ***        uint8              MFL_sc_Tip_Up       Classifier for signal
 ***        float32            OD_s_Obj_01_dx_v    distance x of object in front from Object Detecti
 on
 ***        float32            OD_s_Obj_01_vx_v    relative velocity front vehicle from Object Detec
 tion
 ***        uint8              OD_s_StFct          Function state of Object Detection
 ***        uint8              OD_s_StObjClas      Class of detected object
 ***        uint8              OD_s_ValObjProb     Existence probability of detected object
 ***        boolean            PTOMM_s_FlgDrvMdB   Is One Pedal Mode Active
 ***        uint8              PTOMM_sc_FlgDrvMdB  Classifier for signal
 ***        uint8              RG_s_EgoInfo_MsgCnt Message counter
 ***        uint8              RG_s_EgoInfo_VLimTrfcSign Traffic sign based speed limit
 ***        uint16             RG_s_PvwInfo_DInsCity Distance for attribute
 ***        uint16             RG_s_PvwInfo_DRoundabout Distance for attribute
 ***        uint8              RG_s_PvwInfo_IdInsCity Identifier for attribute
 ***        uint8              RG_s_PvwInfo_IdRoundabout Identifier for attribute
 ***        uint8              RG_s_PvwInfo_MsgCnt Message counter
 ***        uint8              RG_s_PvwInfo_SrcInsCity Source for attribute
 ***        uint8              RG_s_PvwInfo_SrcRoundabout Source for attribute
 ***        uint8              RG_s_TrfcSignPvw_MovmtPhaSt Traffic light phase state
 ***        uint8              Taster_s_ESC_Off    ESC button off
 ***        uint8              Taster_sc_ESC_Off   Classifier for signal
 ***        float32            VDSO_s_ALatOfsCmp   lateral acceleration VDSO
 ***        float32            VDSO_s_ALgtOfsCmp   longitudinal acceleration from VDSO
 ***        float32            VDSO_s_AgStgWhlOfsCmp Steeringwheel angle offset compensated. Calcula
 tion based on EPS-Signals
 ***        boolean            VDSO_s_StENDA       State signals useability of VDSO ENDA labeled sig
 nals for ENDA functionality. If Signal == ENDA_Deactivate ENDA Functionality has to be deactivated
 ***        float32            VDSO_s_Vx3dGNSS     Longitudinal velocity estimated at the centre of 
 rear axle. including GNSS adaption. Estimation requires 3D IMU.
 ***        uint8              VDSO_sc_ALatOfsCmp  Classifier for signal
 ***        uint8              VDSO_sc_ALgtOfsCmp  Classifier for signal
 ***        uint8              VDSO_sc_AgStgWhlOfsCmp Classifier for signal
 ***        uint8              VDSO_sc_StENDA      Classifier for signal
 ***        uint8              VDSO_sc_Vx3dGNSS    Classifier for signal
 ***        float32            VMM_s_BrkPed_ItDmdNorm Normalised intensity of driver brake pedal req
 uest
 ***        uint8              VMM_s_BrkPed_StReqDmnt Information about the drivers deceleration req
 uest induced via brake pedal) is decelerating dominant vs. VMM (FASIS) requests.
 ***        float32            VMM_s_DrvPed_ADmdNorm Drive pedal request, normalised as acceleration
 ***        uint8              VMM_s_LatGuide_StReq Lateral control state request
 ***        uint8              VMM_sc_BrkPed_ItDmdNorm Classifier for signal
 ***        uint8              VMM_sc_BrkPed_StReqDmnt Classifier for signal
 ***        uint8              VMM_sc_DrvPed_ADmdNorm Classifier for signal
 ***        uint8              WH_s_Fahrstufe      gear shift
 ***        uint8              WH_sc_Fahrstufe     Classifier for signal
 ***        uint16 *           USS_SIH_s_RGTrfcLghtDst_dm Distance to the next traffic ligth in fron
 t of vehicle position (not relevant for attributes at the ego position) offset: 0 unit: dm
 ***        uint8 *            USS_SIH_s_RGTrfcMovmtPhaSt Traffic light movement phase state
 ***
 ***  RETURNS:
 ***        __UNITY_BUILD_INLINE__ void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/
                       void USS_SIH(float32 ACA_s_Obj_01_dx_v, float32 ACA_s_Obj_01_vx_v, uint8
  ACA_s_Status_Laengs, uint8 ACA_s_Status_Quer, boolean ACA_s_relevanter_Fehler, uint8
  ACA_sc_Obj_01_dx_v, uint8 ACA_sc_Obj_01_vx_v, uint8 ACA_sc_Status_Laengs, uint8
  ACA_sc_Status_Quer, uint8 ACA_sc_relevanter_Fehler, uint8 ACC_s_LgtCtl_StAcv, uint8
  ACC_sc_LgtCtl_StAcv, uint8 API_s_StDrvPed, uint8 API_sc_StDrvPed, uint8 CodSwt_s_CpStgWhl, uint8
  CodSwt_s_DrvSysVrn, uint8 DBR_s_IdcDrvBrk, uint8 DBR_sc_IdcDrvBrk, boolean
  Diag_s_BoundaryCdn_DiagDlyEt, boolean Diag_s_BoundaryCdn_DiagStartFr, boolean
  Diag_s_BoundaryCdn_FrSyncPres, boolean Diag_s_BoundaryCdn_VoltRange, boolean Diag_s_DTCFlgRstrt,
  uint8 DrvDrg_s_IdxRgnLvl, uint8 DrvDrg_sc_IdxRgnLvl, sint8 EPS_s_CtlValQFK, uint8 EPS_s_StStgTq,
  float32 EPS_s_StgTq, uint8 EPS_sc_CtlValQFK, uint8 EPS_sc_StStgTq, uint8 EPS_sc_StgTq, uint8
  FPM_s_Set_PreSel_LIM_GRA_ACC_ACA, uint8 FPM_sc_Set_PreSel_LIM_GRA_ACC_ACA, uint8 KLR_s_Fehler,
  uint8 KLR_s_Touchauswertung, uint8 KLR_sc_Fehler, uint8 KLR_sc_Touchauswertung, boolean
  KST_s_KL_15, uint8 KST_sc_KL_15, float32 LDA_s_FC1_LIN00HorCurv, float32 LDA_s_FC1_LIN00HorCurvCh,
   float32 LDA_s_FC1_LIN00HorDistY, float32 LDA_s_FC1_LIN00HorEndX, uint8 LDA_s_FC1_LIN00Safe,
  float32 LDA_s_FC1_LIN01HorCurv, float32 LDA_s_FC1_LIN01HorCurvCh, float32 LDA_s_FC1_LIN01HorDistY,
   float32 LDA_s_FC1_LIN01HorEndX, uint8 LDA_s_FC1_LIN01Safe, float32 LDA_s_FC1_LIN02HorCurv,
  float32 LDA_s_FC1_LIN02HorCurvCh, float32 LDA_s_FC1_LIN02HorDistY, float32 LDA_s_FC1_LIN02HorEndX,
   uint8 LDA_s_FC1_LIN02Safe, float32 LDA_s_FC1_LIN09HorCurv, float32 LDA_s_FC1_LIN09HorCurvCh,
  float32 LDA_s_FC1_LIN09HorEndX, float32 LDA_s_FC1_LIN10HorCurv, float32 LDA_s_FC1_LIN10HorCurvCh,
  float32 LDA_s_FC1_LIN10HorEndX, uint8 LDA_s_FC1_Status, uint8 LDA_sc_FC1_LIN00HorCurv, uint8
  LDA_sc_FC1_LIN00HorCurvCh, uint8 LDA_sc_FC1_LIN00HorDistY, uint8 LDA_sc_FC1_LIN00HorEndX, uint8
  LDA_sc_FC1_LIN00Safe, uint8 LDA_sc_FC1_LIN01HorCurv, uint8 LDA_sc_FC1_LIN01HorCurvCh, uint8
  LDA_sc_FC1_LIN01HorDistY, uint8 LDA_sc_FC1_LIN01HorEndX, uint8 LDA_sc_FC1_LIN01Safe, uint8
  LDA_sc_FC1_LIN02HorCurv, uint8 LDA_sc_FC1_LIN02HorCurvCh, uint8 LDA_sc_FC1_LIN02HorDistY, uint8
  LDA_sc_FC1_LIN02HorEndX, uint8 LDA_sc_FC1_LIN02Safe, uint8 LDA_sc_FC1_LIN09HorCurv, uint8
  LDA_sc_FC1_LIN09HorCurvCh, uint8 LDA_sc_FC1_LIN09HorEndX, uint8 LDA_sc_FC1_LIN10HorCurv, uint8
  LDA_sc_FC1_LIN10HorCurvCh, uint8 LDA_sc_FC1_LIN10HorEndX, uint8 LDA_sc_FC1_Status, uint8
  MFL_s_Tip_Down, uint8 MFL_s_Tip_Up, uint8 MFL_sc_Tip_Down, uint8 MFL_sc_Tip_Up, float32
  OD_s_Obj_01_dx_v, float32 OD_s_Obj_01_vx_v, uint8 OD_s_StFct, uint8 OD_s_StObjClas, uint8
  OD_s_ValObjProb, boolean PTOMM_s_FlgDrvMdB, uint8 PTOMM_sc_FlgDrvMdB, uint8 RG_s_EgoInfo_MsgCnt,
  uint8 RG_s_EgoInfo_VLimTrfcSign, uint16 RG_s_PvwInfo_DInsCity, uint16 RG_s_PvwInfo_DRoundabout,
  uint8 RG_s_PvwInfo_IdInsCity, uint8 RG_s_PvwInfo_IdRoundabout, uint8 RG_s_PvwInfo_MsgCnt, uint8
  RG_s_PvwInfo_SrcInsCity, uint8 RG_s_PvwInfo_SrcRoundabout, uint8 RG_s_TrfcSignPvw_MovmtPhaSt,
  uint8 Taster_s_ESC_Off, uint8 Taster_sc_ESC_Off, float32 VDSO_s_ALatOfsCmp, float32
  VDSO_s_ALgtOfsCmp, float32 VDSO_s_AgStgWhlOfsCmp, boolean VDSO_s_StENDA, float32 VDSO_s_Vx3dGNSS,
  uint8 VDSO_sc_ALatOfsCmp, uint8 VDSO_sc_ALgtOfsCmp, uint8 VDSO_sc_AgStgWhlOfsCmp, uint8
  VDSO_sc_StENDA, uint8 VDSO_sc_Vx3dGNSS, float32 VMM_s_BrkPed_ItDmdNorm, uint8
  VMM_s_BrkPed_StReqDmnt, float32 VMM_s_DrvPed_ADmdNorm, uint8 VMM_s_LatGuide_StReq, uint8
  VMM_sc_BrkPed_ItDmdNorm, uint8 VMM_sc_BrkPed_StReqDmnt, uint8 VMM_sc_DrvPed_ADmdNorm, uint8
  WH_s_Fahrstufe, uint8 WH_sc_Fahrstufe, uint16 * USS_SIH_s_RGTrfcLghtDst_dm, uint8 *
  USS_SIH_s_RGTrfcMovmtPhaSt)
{
    /* Switch: SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/Switch1
        SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/Switch1: Omitted comparison with const
        ant.
        # combined # Logical: SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/LogicalOperator1
        # combined # Logical: SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/LogicalOperator2
        # combined # SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/TestBit/Rescaler
        # combined # SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/TestBit/BitwiseOperator
        # combined # Logical: SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/LogicalOperator3
        # combined # SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/TestBit1/Rescaler
        # combined # SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/TestBit1/BitwiseOperator
         */
    if ((((uint8) (KST_sc_KL_15 & ((uint8) 128))) != 0) || ((((uint8) (KST_sc_KL_15 & ((uint8) 4)))
     != 0) && (((uint8) (KST_sc_KL_15 & ((uint8) 32))) == 0))) {
        /* Switch: SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/Switch1
            # combined # SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/MeasSubsys/Data Type Conver
            sion
            # combined # SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/Signal Conversion */
        USS_s_FlgUseKl15_measure = USS_SIH_p_FlgClmp15Repl;
    }
    else {
        /* Switch: SignalInputHandlerSIH/DTCDiagnosis/Clamp15Replacement/Switch1
            # combined # SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/MeasSubsys/Data Type Conver
            sion
            # combined # SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/Signal Conversion */
        USS_s_FlgUseKl15_measure = KST_s_KL_15;
    }

    /* Logical: SignalInputHandlerSIH/DTCDiagnosis/Logical Operator2
        # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt
        # combined # Logical: SignalInputHandlerSIH/DTCDiagnosis/EdgeDetectionRising/LogicalOperator
        # combined # Logical: SignalInputHandlerSIH/DTCDiagnosis/EdgeDetectionRising/LogicalOperator
        1
        # combined # SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/MeasSubsys/Data Type Conversion
        # combined # SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/Signal Conversion */
    USS_SIH_s_FlgDTCRstrt_measure = ((!(X_SUSS_SIH79_UnitDelay)) && USS_s_FlgUseKl15_measure) ||
     Diag_s_DTCFlgRstrt;

    /* Unit delay: SignalInputHandlerSIH/DTCDiagnosis/EdgeDetectionRising/UnitDelay
        # combined # SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/MeasSubsys/Data Type Conversion
        # combined # SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/Signal Conversion */
    X_SUSS_SIH79_UnitDelay = USS_s_FlgUseKl15_measure;

    /* Logical: SignalInputHandlerSIH/DTCDiagnosis/Logical Operator1
        # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgAlwSetDTC
        # combined # Logical: SignalInputHandlerSIH/DTCDiagnosis/MonitoringActivation/Logical Operat
        or
        # combined # SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/MeasSubsys/Data Type Conversion
        # combined # SignalInputHandlerSIH/DTCDiagnosis/MultiMeasure/Signal Conversion */
    USS_SIH_s_FlgAlwSetDTC_measure = Diag_s_BoundaryCdn_DiagDlyEt && Diag_s_BoundaryCdn_DiagStartFr
     && Diag_s_BoundaryCdn_FrSyncPres && Diag_s_BoundaryCdn_VoltRange && USS_s_FlgUseKl15_measure;

    /* SignalInputHandlerSIH/SignalProcessing/Enable: Enable condition
        SignalInputHandlerSIH/SignalProcessing/Enable: Omitted comparison with constant.
        # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgAlwSetDTC */
    if (USS_SIH_s_FlgAlwSetDTC_measure) {
        /* SLLocal: Default storage class for local variables | Width: 8 */
        uint8 SUSS_SIH254_Switch;
        uint8 SUSS_SIH255_Switch;
        uint8 SUSS_SIH269_Shift_Arithmetic;
        uint8 SUSS_SIH269_Switch1;
        uint8 SUSS_SIH269_Switch2;
        uint8 SUSS_SIH269_Switch3;
        uint8 SUSS_SIH269_Switch4;
        uint8 SUSS_SIH270_Switch1;
        uint8 SUSS_SIH272_Bitwise_Operator15;
        uint8 SUSS_SIH273_Switch[2];
        uint8 SUSS_SIH274_Bitwise_Operator1;
        uint8 SUSS_SIH274_Bitwise_Operator10;
        uint8 SUSS_SIH274_Bitwise_Operator11;
        uint8 SUSS_SIH274_Bitwise_Operator12;
        uint8 SUSS_SIH274_Bitwise_Operator13;
        uint8 SUSS_SIH274_Bitwise_Operator14;
        uint8 SUSS_SIH274_Bitwise_Operator15;
        uint8 SUSS_SIH274_Bitwise_Operator2;
        uint8 SUSS_SIH274_Bitwise_Operator3;
        uint8 SUSS_SIH274_Bitwise_Operator4;
        uint8 SUSS_SIH274_Bitwise_Operator5;
        uint8 SUSS_SIH274_Bitwise_Operator6;
        uint8 SUSS_SIH274_Bitwise_Operator7;
        uint8 SUSS_SIH274_Bitwise_Operator8;
        uint8 SUSS_SIH274_Bitwise_Operator9;
        boolean SUSS_SIH275_Rescaler;
        uint8 SUSS_SIH288_Switch1;
        uint8 SUSS_SIH289_Switch1;
        uint8 SUSS_SIH297_Bitwise_Operator;
        uint8 SUSS_SIH301_Bitwise_Operator2;
        uint8 SUSS_SIH304_Bitwise_Operator3;
        uint8 SUSS_SIH305_Bitwise_Operator4;
        uint8 SUSS_SIH306_Bitwise_Operator5;
        uint8 SUSS_SIH307_Bitwise_Operator6;
        uint8 SUSS_SIH308_Bitwise_Operator7;
        uint8 SUSS_SIH554_Bitwise_Operator2;
        uint8 SUSS_SIH555_Bitwise_Operator2;
        uint8 SUSS_SIH557_Bitwise_Operator2;
        uint8 SUSS_SIH558_Bitwise_Operator2;
        uint8 SUSS_SIH560_Bitwise_Operator2;

        /* SLLocalInit: Default storage class for local variables with init value | Width: 8 */
        uint8 SUSS_SIH271_Merge;
        uint8 SUSS_SIH271_Merge_a;
        uint8 SUSS_SIH271_Merge_b;
        uint8 SUSS_SIH271_Merge_c;
        uint8 SUSS_SIH271_Merge_d;

        /* update of variable(s) associated with SignalInputHandlerSIH/SignalProcessing/ServiceData/
            Constant */
        IF_SUSS_SIH249_Constant = 0;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CodCpStgWhl */
        USS_SIH_s_CodCpStgWhl_measure = CodSwt_s_CpStgWhl;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CodDrvSys */
        USS_SIH_s_CodDrvSys_measure = CodSwt_s_DrvSysVrn;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ODStFct */
        USS_SIH_s_ODStFct_measure = OD_s_StFct;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ODStObjClas */
        USS_SIH_s_ODStObjClas_measure = OD_s_StObjClas;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ODValObjProb */
        USS_SIH_s_ODValObjProb_measure = OD_s_ValObjProb;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VLimTrfcSign */
        USS_SIH_s_VLimTrfcSign_measure = RG_s_EgoInfo_VLimTrfcSign;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_RGDInsCity */
        USS_SIH_s_RGDInsCity_measure = RG_s_PvwInfo_DInsCity;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_RGDRoundabout */
        USS_SIH_s_RGDRoundabout_measure = RG_s_PvwInfo_DRoundabout;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_RGIdInsCity */
        USS_SIH_s_RGIdInsCity_measure = RG_s_PvwInfo_IdInsCity;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_RGIdRoundabout */
        USS_SIH_s_RGIdRoundabout_measure = RG_s_PvwInfo_IdRoundabout;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_RGSrcInsCity */
        USS_SIH_s_RGSrcInsCity_measure = RG_s_PvwInfo_SrcInsCity;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_RGSrcRoundabout */
        USS_SIH_s_RGSrcRoundabout_measure = RG_s_PvwInfo_SrcRoundabout;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH77_Signal_Conversion_yc = RG_s_TrfcSignPvw_MovmtPhaSt;

        /* SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VMMLatGuideStReq */
        USS_SIH_s_VMMLatGuideStReq_measure = VMM_s_LatGuide_StReq;

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd9/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd9/Switch: Omitted comparison w
            ith constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd9/Logica
            l Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd9/Rel
            ational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitw
            ise Operator22
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != ((uint8) (LDA_sc_FC1_Status & USS_SIH_p_BitFldMonLDA))))
          {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd9/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDAStatus */
            USS_SIH_s_LDAStatus_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd9/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDAStatus
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDAStatus_measure = LDA_s_FC1_Status;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd8/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd8/Switch: Omitted comparison w
            ith constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd8/Logica
            l Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd8/Rel
            ational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitw
            ise Operator21
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != ((uint8) (LDA_sc_FC1_LIN02Safe &
         USS_SIH_p_BitFldMonLDA)))) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd8/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine02Safe */
            USS_SIH_s_LDALine02Safe_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd8/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine02Safe
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine02Safe_measure = LDA_s_FC1_LIN02Safe;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd7/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd7/Switch: Omitted comparison w
            ith constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd7/Logica
            l Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd7/Rel
            ational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitw
            ise Operator20
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != ((uint8) (LDA_sc_FC1_LIN01Safe &
         USS_SIH_p_BitFldMonLDA)))) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd7/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine01Safe */
            USS_SIH_s_LDALine01Safe_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd7/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine01Safe
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine01Safe_measure = LDA_s_FC1_LIN01Safe;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd6/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd6/Switch: Omitted comparison w
            ith constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd6/Logica
            l Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd6/Rel
            ational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitw
            ise Operator19
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != ((uint8) (LDA_sc_FC1_LIN00Safe &
         USS_SIH_p_BitFldMonLDA)))) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd6/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine00Safe */
            USS_SIH_s_LDALine00Safe_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd6/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine00Safe
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine00Safe_measure = LDA_s_FC1_LIN00Safe;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd5/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd5/Switch: Omitted comparison w
            ith constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd5/Logica
            l Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd5/Rel
            ational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitw
            ise Operator18
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != ((uint8) (LDA_sc_FC1_LIN02HorDistY &
         USS_SIH_p_BitFldMonLDA)))) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd5/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine02HorDistY_m
                 */
            USS_SIH_s_LDALine02HorDistY_m_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd5/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine02HorDistY_m
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine02HorDistY_m_measure = LDA_s_FC1_LIN02HorDistY;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd4/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd4/Switch: Omitted comparison w
            ith constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd4/Logica
            l Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd4/Rel
            ational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitw
            ise Operator17
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != ((uint8) (LDA_sc_FC1_LIN01HorDistY &
         USS_SIH_p_BitFldMonLDA)))) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd4/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine01HorDistY_m
                 */
            USS_SIH_s_LDALine01HorDistY_m_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd4/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine01HorDistY_m
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine01HorDistY_m_measure = LDA_s_FC1_LIN01HorDistY;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd3/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd3/Switch: Omitted comparison w
            ith constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd3/Logica
            l Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd3/Rel
            ational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitw
            ise Operator16
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != ((uint8) (LDA_sc_FC1_LIN00HorDistY &
         USS_SIH_p_BitFldMonLDA)))) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd3/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine00HorDistY_m
                 */
            USS_SIH_s_LDALine00HorDistY_m_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd3/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine00HorDistY_m
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine00HorDistY_m_measure = LDA_s_FC1_LIN00HorDistY;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd50/Switch
            SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd50/Switch: Omitte
            d comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InE
            rrHnd50/Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/
            InErrHnd50/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != VMM_sc_DrvPed_ADmdNorm)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd50/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VMMDrvPedADmdNorm
                 */
            USS_SIH_s_VMMDrvPedADmdNorm_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd50/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VMMDrvPedADmdNorm
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_VMMDrvPedADmdNorm_measure = VMM_s_DrvPed_ADmdNorm;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd49/Switch
            SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd49/Switch: Omitte
            d comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InE
            rrHnd49/Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/
            InErrHnd49/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != VMM_sc_BrkPed_StReqDmnt)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd49/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VMMBrkPedStReqDmnt
                 */
            USS_SIH_s_VMMBrkPedStReqDmnt_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd49/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VMMBrkPedStReqDmnt
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_VMMBrkPedStReqDmnt_measure = VMM_s_BrkPed_StReqDmnt;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd47/Switch
            SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd47/Switch: Omitte
            d comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InE
            rrHnd47/Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/
            InErrHnd47/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != VMM_sc_BrkPed_ItDmdNorm)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd47/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VMMBrkPedItDmdNorm
                 */
            USS_SIH_s_VMMBrkPedItDmdNorm_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd47/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VMMBrkPedItDmdNorm
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_VMMBrkPedItDmdNorm_measure = VMM_s_BrkPed_ItDmdNorm;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationENDA/If: Omitted compa
            rison with constant.
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (VDSO_s_StENDA) {
            /* Reference of merge block: Merge SignalInputHandlerSIH/SignalProcessing/ClassifierMerg
                ing/EvaluationENDA/Merge
                update of variable(s) associated with SignalInputHandlerSIH/SignalProcessing/Classif
                ierMerging/EvaluationENDA/If Action
                Subsystem/In1
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH271_Merge = VDSO_sc_ALatOfsCmp;
            SUSS_SIH271_Merge_a = VDSO_sc_ALgtOfsCmp;
            SUSS_SIH271_Merge_b = VDSO_sc_AgStgWhlOfsCmp;
            SUSS_SIH271_Merge_c = VDSO_sc_StENDA;
            SUSS_SIH271_Merge_d = VDSO_sc_Vx3dGNSS;
        }
        else {
            /* Reference of merge block: Merge SignalInputHandlerSIH/SignalProcessing/ClassifierMerg
                ing/EvaluationENDA/Merge
                update of variable(s) associated with SignalInputHandlerSIH/SignalProcessing/Classif
                ierMerging/EvaluationENDA/If Action
                Subsystem1/Bitwise
                Operator3
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationENDA
                /If Action Subsystem1/Bitwise Operator3
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH271_Merge = (uint8) (VDSO_sc_ALatOfsCmp | ((uint8) 4));

            /* Reference of merge block: Merge SignalInputHandlerSIH/SignalProcessing/ClassifierMerg
                ing/EvaluationENDA/Merge
                update of variable(s) associated with SignalInputHandlerSIH/SignalProcessing/Classif
                ierMerging/EvaluationENDA/If Action
                Subsystem1/Bitwise
                Operator1
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationENDA
                /If Action Subsystem1/Bitwise Operator1
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH271_Merge_a = (uint8) (VDSO_sc_ALgtOfsCmp | ((uint8) 4));

            /* Reference of merge block: Merge SignalInputHandlerSIH/SignalProcessing/ClassifierMerg
                ing/EvaluationENDA/Merge
                update of variable(s) associated with SignalInputHandlerSIH/SignalProcessing/Classif
                ierMerging/EvaluationENDA/If Action
                Subsystem1/Bitwise
                Operator2
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationENDA
                /If Action Subsystem1/Bitwise Operator2
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH271_Merge_b = (uint8) (VDSO_sc_AgStgWhlOfsCmp | ((uint8) 4));

            /* Reference of merge block: Merge SignalInputHandlerSIH/SignalProcessing/ClassifierMerg
                ing/EvaluationENDA/Merge
                update of variable(s) associated with SignalInputHandlerSIH/SignalProcessing/Classif
                ierMerging/EvaluationENDA/If Action
                Subsystem1/Bitwise
                Operator4
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationENDA
                /If Action Subsystem1/Bitwise Operator4
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH271_Merge_c = (uint8) (VDSO_sc_StENDA | ((uint8) 4));

            /* Reference of merge block: Merge SignalInputHandlerSIH/SignalProcessing/ClassifierMerg
                ing/EvaluationENDA/Merge
                update of variable(s) associated with SignalInputHandlerSIH/SignalProcessing/Classif
                ierMerging/EvaluationENDA/If Action
                Subsystem1/Bitwise
                Operator5
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationENDA
                /If Action Subsystem1/Bitwise Operator5
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH271_Merge_d = (uint8) (VDSO_sc_Vx3dGNSS | ((uint8) 4));
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd46/Switch
            SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd46/Switch: Omitte
            d comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InE
            rrHnd46/Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/
            InErrHnd46/Relational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH271_Merge_d)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd46/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VDSOVLgt_mps */
            USS_SIH_s_VDSOVLgt_mps_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd46/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VDSOVLgt_mps
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_VDSOVLgt_mps_measure = VDSO_s_Vx3dGNSS;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd45/Switch
            SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd45/Switch: Omitte
            d comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InE
            rrHnd45/Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/
            InErrHnd45/Relational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH271_Merge_a)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd45/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VDSOLgtA_mps2 */
            USS_SIH_s_VDSOLgtA_mps2_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd45/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VDSOLgtA_mps2
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_VDSOLgtA_mps2_measure = VDSO_s_ALgtOfsCmp;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd44/Switch
            SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd44/Switch: Omitte
            d comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InE
            rrHnd44/Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/
            InErrHnd44/Relational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH271_Merge)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd44/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VDSOLatA_mps2 */
            USS_SIH_s_VDSOLatA_mps2_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd44/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_VDSOLatA_mps2
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_VDSOLatA_mps2_measure = VDSO_s_ALatOfsCmp;
        }

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Bitwise Operator2
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH560_Bitwise_Operator2 = (uint8) (EPS_sc_CtlValQFK | EPS_sc_StgTq);

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/ClassifierErrHnd/Cl
            assifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/ClassifierErrHnd/C
            lassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStg
            Acv/ClassifierErrHnd/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStg
            Acv/ClassifierErrHnd/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH560_Bitwise_Operator2 & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH631_Sum;

            if (!(SUSS_SIH629_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateStgAcv/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH629_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH629_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH629_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifi
                erErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH631_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Clas
                    sifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize or reset the s
                    tate */
                X_SUSS_SIH631_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Clas
                    sifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Check the first run state
                    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
                    ErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Omitted comparison with constan
                    t. */
                if (SUSS_SIH629_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/
                        ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize the st
                        ate */
                    X_SUSS_SIH631_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/ClassifierErrHn
                d/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH629_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
                ErrHnd/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateS
                tgAcv/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH631_Sum = X_SUSS_SIH631_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classif
                ierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/ClassifierErrH
                nd/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with constant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalS
                tateStgAcv/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relational Operator1
                 */
            if (SUSS_SIH631_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Cla
                    ssifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateStgAcv/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH631_Delay = SUSS_SIH631_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Cla
                    ssifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateStgAcv/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH631_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classif
                ierErrHnd/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/ClassifierErrH
                nd/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/C
                lassifierErrHnd/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/C
                lassifierErrHnd/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH560_Bitwise_Operator2 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Cla
                    ssifierErrHnd/ClassifierMonitoring/Switch2
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_SteeringActivit
                    y_SigSt */
                USS_SIH_s_SteeringActivity_SigSt_measure = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH633_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/ClassifierE
                    rrHnd/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgA
                    cv/ClassifierErrHnd/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH633_Rescaler = ((uint8) (SUSS_SIH560_Bitwise_Operator2 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Cla
                    ssifierErrHnd/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifier
                    ErrHnd/ClassifierMonitoring/Switch1: Omitted comparison with constant.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/Signal
                    StateStgAcv/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Logical Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateStgAcv/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relational Op
                    erator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateStgAcv/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                if ((0.F > X_SUSS_SIH631_Delay) && SUSS_SIH633_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv
                        /ClassifierErrHnd/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                        nalStateStgAcv/ClassifierErrHnd/ClassifierMonitoring/Switch2
                        # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_SteeringAct
                        ivity_SigSt */
                    USS_SIH_s_SteeringActivity_SigSt_measure = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv
                        /ClassifierErrHnd/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classi
                        fierErrHnd/ClassifierMonitoring/Switch: Omitted comparison with constant. */
                    if (SUSS_SIH633_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateSt
                            gAcv/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateStgAcv/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateStgAcv/ClassifierErrHnd/ClassifierMonitoring/Switch2
                            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_Steerin
                            gActivity_SigSt */
                        USS_SIH_s_SteeringActivity_SigSt_measure = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateSt
                            gAcv/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateStgAcv/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateStgAcv/ClassifierErrHnd/ClassifierMonitoring/Switch2
                            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_Steerin
                            gActivity_SigSt */
                        USS_SIH_s_SteeringActivity_SigSt_measure = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/Classifi
                erErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH631_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStgAcv/ClassifierErrHn
                d/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH629_ROWD) {
                /* outport reset
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_SteeringActivit
                    y_SigSt */
                USS_SIH_s_SteeringActivity_SigSt_measure = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH629_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStat
                    es/SignalStateStgAcv/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH629_RSWE = 0;
            }
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd4/Switch
            SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd4/Switch: Omitted comparison w
            ith constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd4/Logica
            l Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd4/Rel
            ational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != PTOMM_sc_FlgDrvMdB)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd4/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_PTOMMFlgDrvMdB */
            USS_SIH_s_PTOMMFlgDrvMdB_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd4/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_PTOMMFlgDrvMdB
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_PTOMMFlgDrvMdB_measure = PTOMM_s_FlgDrvMdB;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd41/Switch
            SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd41/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd41/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd41/Re
            lational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != MFL_sc_Tip_Up)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd41/Switch */
            SUSS_SIH255_Switch = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd41/Switch
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH255_Switch = MFL_s_Tip_Up;
        }

        /* SignalInputHandlerSIH/SignalProcessing/Boundaries/Rescaler1
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_MfwTipUp */
        USS_SIH_s_MfwTipUp_measure = SUSS_SIH255_Switch != 0;

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd40/Switch
            SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd40/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd40/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd40/Re
            lational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != MFL_sc_Tip_Down)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd40/Switch */
            SUSS_SIH254_Switch = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd40/Switch
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH254_Switch = MFL_s_Tip_Down;
        }

        /* SignalInputHandlerSIH/SignalProcessing/Boundaries/Rescaler
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_MfwTipDwn */
        USS_SIH_s_MfwTipDwn_measure = SUSS_SIH254_Switch != 0;

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationFPM/Bitwise Operator15
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH272_Bitwise_Operator15 = (uint8) (FPM_sc_Set_PreSel_LIM_GRA_ACC_ACA &
         USS_SIH_p_BitFldMonFPM);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd62/Switch
            SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd62/Switch: Omitted comp
            arison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd6
            2/Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrH
            nd62/Relational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH272_Bitwise_Operator15)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd62/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LimGraAccAca */
            USS_SIH_s_LimGraAccAca_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd62/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LimGraAccAca
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LimGraAccAca_measure = FPM_s_Set_PreSel_LIM_GRA_ACC_ACA;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator15
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator15 = (uint8) (LDA_sc_FC1_LIN10HorEndX & USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd37/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd37/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd37/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd37/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator15)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd37/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine10HztlEndX_m
                 */
            USS_SIH_s_LDALine10HztlEndX_m_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd37/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine10HztlEndX_m
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine10HztlEndX_m_measure = LDA_s_FC1_LIN10HorEndX;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator13
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator13 = (uint8) (LDA_sc_FC1_LIN10HorCurv & USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd34/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd34/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd34/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd34/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator13)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd34/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine10HztlCrvt_1
                pm */
            USS_SIH_s_LDALine10HztlCrvt_1pm_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd34/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine10HztlCrvt_1
                pm
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine10HztlCrvt_1pm_measure = LDA_s_FC1_LIN10HorCurv;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator14
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator14 = (uint8) (LDA_sc_FC1_LIN10HorCurvCh &
         USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd35/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd35/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd35/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd35/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator14)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd35/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine10HztlCrvtCh
                g_1pm2 */
            USS_SIH_s_LDALine10HztlCrvtChg_1pm2_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd35/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine10HztlCrvtCh
                g_1pm2
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine10HztlCrvtChg_1pm2_measure = LDA_s_FC1_LIN10HorCurvCh;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator12
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator12 = (uint8) (LDA_sc_FC1_LIN09HorEndX & USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd32/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd32/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd32/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd32/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator12)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd32/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine09HztlEndX_m
                 */
            USS_SIH_s_LDALine09HztlEndX_m_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd32/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine09HztlEndX_m
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine09HztlEndX_m_measure = LDA_s_FC1_LIN09HorEndX;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator10
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator10 = (uint8) (LDA_sc_FC1_LIN09HorCurv & USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd29/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd29/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd29/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd29/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator10)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd29/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine09HztlCrvt_1
                pm */
            USS_SIH_s_LDALine09HztlCrvt_1pm_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd29/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine09HztlCrvt_1
                pm
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine09HztlCrvt_1pm_measure = LDA_s_FC1_LIN09HorCurv;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator11
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator11 = (uint8) (LDA_sc_FC1_LIN09HorCurvCh &
         USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd30/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd30/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd30/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd30/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator11)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd30/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine09HztlCrvtCh
                g_1pm2 */
            USS_SIH_s_LDALine09HztlCrvtChg_1pm2_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd30/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine09HztlCrvtCh
                g_1pm2
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine09HztlCrvtChg_1pm2_measure = LDA_s_FC1_LIN09HorCurvCh;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator9
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator9 = (uint8) (LDA_sc_FC1_LIN02HorEndX & USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd27/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd27/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd27/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd27/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator9)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd27/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine02HztlEndX_m
                 */
            USS_SIH_s_LDALine02HztlEndX_m_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd27/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine02HztlEndX_m
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine02HztlEndX_m_measure = LDA_s_FC1_LIN02HorEndX;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator7
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator7 = (uint8) (LDA_sc_FC1_LIN02HorCurv & USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd24/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd24/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd24/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd24/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator7)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd24/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine02HztlCrvt_1
                pm */
            USS_SIH_s_LDALine02HztlCrvt_1pm_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd24/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine02HztlCrvt_1
                pm
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine02HztlCrvt_1pm_measure = LDA_s_FC1_LIN02HorCurv;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator8
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator8 = (uint8) (LDA_sc_FC1_LIN02HorCurvCh &
         USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd25/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd25/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd25/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd25/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator8)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd25/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine02HztlCrvtCh
                g_1pm2 */
            USS_SIH_s_LDALine02HztlCrvtChg_1pm2_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd25/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine02HztlCrvtCh
                g_1pm2
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine02HztlCrvtChg_1pm2_measure = LDA_s_FC1_LIN02HorCurvCh;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator6
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator6 = (uint8) (LDA_sc_FC1_LIN01HorEndX & USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd22/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd22/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd22/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd22/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator6)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd22/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine01HztlEndX_m
                 */
            USS_SIH_s_LDALine01HztlEndX_m_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd22/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine01HztlEndX_m
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine01HztlEndX_m_measure = LDA_s_FC1_LIN01HorEndX;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator4
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator4 = (uint8) (LDA_sc_FC1_LIN01HorCurv & USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd19/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd19/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd19/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd19/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator4)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd19/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine01HztlCrvt_1
                pm */
            USS_SIH_s_LDALine01HztlCrvt_1pm_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd19/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine01HztlCrvt_1
                pm
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine01HztlCrvt_1pm_measure = LDA_s_FC1_LIN01HorCurv;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator5
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator5 = (uint8) (LDA_sc_FC1_LIN01HorCurvCh &
         USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd20/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd20/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd20/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd20/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator5)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd20/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine01HztlCrvtCh
                g_1pm2 */
            USS_SIH_s_LDALine01HztlCrvtChg_1pm2_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd20/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine01HztlCrvtCh
                g_1pm2
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine01HztlCrvtChg_1pm2_measure = LDA_s_FC1_LIN01HorCurvCh;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator3
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator3 = (uint8) (LDA_sc_FC1_LIN00HorEndX & USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd17/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd17/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd17/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd17/Re
            lational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator3)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd17/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine00HztlEndX_m
                 */
            USS_SIH_s_LDALine00HztlEndX_m_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd17/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine00HztlEndX_m
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine00HztlEndX_m_measure = LDA_s_FC1_LIN00HorEndX;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator1
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator1 = (uint8) (LDA_sc_FC1_LIN00HorCurv & USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd1/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd1/Switch: Omitted comparison w
            ith constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd1/Logica
            l Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd1/Rel
            ational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator1)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd1/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine00HztlCrvt_1
                pm */
            USS_SIH_s_LDALine00HztlCrvt_1pm_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd1/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine00HztlCrvt_1
                pm
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine00HztlCrvt_1pm_measure = LDA_s_FC1_LIN00HorCurv;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationLDA/Bitwise Operator2
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH274_Bitwise_Operator2 = (uint8) (LDA_sc_FC1_LIN00HorCurvCh &
         USS_SIH_p_BitFldMonLDA);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd2/Switch
            SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd2/Switch: Omitted comparison w
            ith constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd2/Logica
            l Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd2/Rel
            ational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH274_Bitwise_Operator2)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd2/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine00HztlCrvtCh
                g_1pm2 */
            USS_SIH_s_LDALine00HztlCrvtChg_1pm2_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/LaneAssist/InErrHnd2/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_LDALine00HztlCrvtCh
                g_1pm2
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_LDALine00HztlCrvtChg_1pm2_measure = LDA_s_FC1_LIN00HorCurvCh;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd54/Switch
            SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd54/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd54/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd54/Re
            lational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != WH_sc_Fahrstufe)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd54/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_GearShift */
            USS_SIH_s_GearShift_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd54/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_GearShift
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_GearShift_measure = WH_s_Fahrstufe;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Shift Arithmetic
            # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Resc
            aler
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH269_Shift_Arithmetic = ((uint8) ACA_s_relevanter_Fehler) << 3;

        /* SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/AcaBuildInChecker/
            Rescaler
            # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/AcaB
            uildInChecker/Bitwise Operator9
            # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/AcaB
            uildInChecker/Bitwise Operator1
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH275_Rescaler = ((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (ACA_sc_Obj_01_dx_v
         | ACA_sc_Obj_01_vx_v)) | ACA_sc_Status_Laengs)) | ACA_sc_Status_Quer)) |
         ACA_sc_relevanter_Fehler)) & ((uint8) 1))) != 0;

        /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch1
            SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch1: Omitted 
            comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/Evaluatio
            nACA/AcaBuildInChecker/Logical Operator */
        if (!(SUSS_SIH275_Rescaler)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch
                1
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/
                Bitwise Operator2
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/
                Bitwise Operator5
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH269_Switch1 = (uint8) (((uint8) (ACA_sc_Obj_01_dx_v |
             SUSS_SIH269_Shift_Arithmetic)) & USS_SIH_p_BitFldMonACA);
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch
                1 */
            SUSS_SIH269_Switch1 = 0;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch2
            SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch2: Omitted 
            comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/Evaluatio
            nACA/AcaBuildInChecker/Logical Operator */
        if (!(SUSS_SIH275_Rescaler)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch
                2
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/
                Bitwise Operator6
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/
                Bitwise Operator4
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH269_Switch2 = (uint8) (((uint8) (ACA_sc_Obj_01_vx_v |
             SUSS_SIH269_Shift_Arithmetic)) & USS_SIH_p_BitFldMonACA);
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch
                2 */
            SUSS_SIH269_Switch2 = 0;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch3
            SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch3: Omitted 
            comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/Evaluatio
            nACA/AcaBuildInChecker/Logical Operator */
        if (!(SUSS_SIH275_Rescaler)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch
                3
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/
                Bitwise Operator7
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/
                Bitwise Operator3
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH269_Switch3 = (uint8) (((uint8) (ACA_sc_Status_Laengs |
             SUSS_SIH269_Shift_Arithmetic)) & USS_SIH_p_BitFldMonACA);
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch
                3 */
            SUSS_SIH269_Switch3 = 0;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch4
            SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch4: Omitted 
            comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/Evaluatio
            nACA/AcaBuildInChecker/Logical Operator */
        if (!(SUSS_SIH275_Rescaler)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch
                4
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/
                Bitwise Operator8
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/
                Bitwise Operator15
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH269_Switch4 = (uint8) (((uint8) (ACA_sc_Status_Quer |
             SUSS_SIH269_Shift_Arithmetic)) & USS_SIH_p_BitFldMonACA);
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACA/Switch
                4 */
            SUSS_SIH269_Switch4 = 0;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACC/Switch1
            SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACC/Switch1: Omitted 
            comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/Evaluatio
            nACC/AccBuildInChecker/Logical Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (((uint8) (ACC_sc_LgtCtl_StAcv & ((uint8) 1))) == 0) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACC/Switch
                1
                # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACC/
                Bitwise Operator15
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH270_Switch1 = (uint8) (ACC_sc_LgtCtl_StAcv & USS_SIH_p_BitFldMonACC);
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationACC/Switch
                1 */
            SUSS_SIH270_Switch1 = 0;
        }

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Bitwise Operator2
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH558_Bitwise_Operator2 = (uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8)
         (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8)
         (SUSS_SIH269_Switch1 | SUSS_SIH269_Switch2)) | SUSS_SIH269_Switch3)) |
         SUSS_SIH269_Switch4)) | SUSS_SIH270_Switch1)) | API_sc_StDrvPed)) | DBR_sc_IdcDrvBrk)) |
         DrvDrg_sc_IdxRgnLvl)) | SUSS_SIH272_Bitwise_Operator15)) | MFL_sc_Tip_Down)) |
         MFL_sc_Tip_Up)) | PTOMM_sc_FlgDrvMdB)) | VMM_sc_DrvPed_ADmdNorm)) | WH_sc_Fahrstufe)) |
         SUSS_SIH271_Merge_a)) | SUSS_SIH271_Merge_d);

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/ClassifierErrHnd/Cl
            assifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/ClassifierErrHnd/C
            lassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEff
            Lvl/ClassifierErrHnd/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEff
            Lvl/ClassifierErrHnd/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH558_Bitwise_Operator2 & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH609_Sum;

            if (!(SUSS_SIH607_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateEffLvl/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH607_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH607_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH607_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifi
                erErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH609_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Clas
                    sifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize or reset the s
                    tate */
                X_SUSS_SIH609_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Clas
                    sifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Check the first run state
                    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
                    ErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Omitted comparison with constan
                    t. */
                if (SUSS_SIH607_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/
                        ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize the st
                        ate */
                    X_SUSS_SIH609_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/ClassifierErrHn
                d/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH607_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
                ErrHnd/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateE
                ffLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH609_Sum = X_SUSS_SIH609_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classif
                ierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/ClassifierErrH
                nd/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with constant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalS
                tateEffLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relational Operator1
                 */
            if (SUSS_SIH609_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateEffLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH609_Delay = SUSS_SIH609_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateEffLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH609_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classif
                ierErrHnd/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/ClassifierErrH
                nd/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/C
                lassifierErrHnd/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/C
                lassifierErrHnd/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH558_Bitwise_Operator2 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/Switch2 */
                SUSS_SIH607_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH611_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/ClassifierE
                    rrHnd/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffL
                    vl/ClassifierErrHnd/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH611_Rescaler = ((uint8) (SUSS_SIH558_Bitwise_Operator2 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifier
                    ErrHnd/ClassifierMonitoring/Switch1: Omitted comparison with constant.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/Signal
                    StateEffLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Logical Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateEffLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relational Op
                    erator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateEffLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                if ((0.F > X_SUSS_SIH609_Delay) && SUSS_SIH611_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl
                        /ClassifierErrHnd/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                        nalStateEffLvl/ClassifierErrHnd/ClassifierMonitoring/Switch2 */
                    SUSS_SIH607_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl
                        /ClassifierErrHnd/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classi
                        fierErrHnd/ClassifierMonitoring/Switch: Omitted comparison with constant. */
                    if (SUSS_SIH611_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEf
                            fLvl/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateEffLvl/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateEffLvl/ClassifierErrHnd/ClassifierMonitoring/Switch2 */
                        SUSS_SIH607_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEf
                            fLvl/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateEffLvl/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateEffLvl/ClassifierErrHnd/ClassifierMonitoring/Switch2 */
                        SUSS_SIH607_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/Classifi
                erErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH609_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/ClassifierErrHn
                d/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH607_ROWD) {
                /* outport reset */
                SUSS_SIH607_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH607_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStat
                    es/SignalStateEffLvl/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH607_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem/Enable: Enable
             condition
            SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem/Enable: Omitt
            ed comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/L
            ogical Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Rescaler
             */
        if (USS_SIH_p_FlgAcvSigMonSrv && (USS_p_SrvEgoInfoEveGrp_StSetMd != 0)) {
            /* SLLocal: Default storage class for local variables | Width: 8 */
            boolean SUSS_SIH543_Relational_Operator;

            /* Relational: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsyste
                m/Relational Operator
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH543_Relational_Operator = RG_s_EgoInfo_MsgCnt != X_SUSS_SIH543_Unit_Delay;

            /* Unit delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsyste
                m/Unit Delay
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            X_SUSS_SIH543_Unit_Delay = RG_s_EgoInfo_MsgCnt;

            /* Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem/Cou
                ntUp/Delay: Check the first run stateSignalInputHandlerSIH/SignalProcessing/ServiceD
                ata/Service_SigSt/Subsystem/CountUp/Delay: Omitted comparison with constant. */
            if (SUSS_SIH543_Subsystem_FirstRun) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem
                    /CountUp/Delay: Initialize the state */
                X_SUSS_SIH544_Delay = 0;
            }

            /* SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem: Reset of 
                the first run state */
            SUSS_SIH543_Subsystem_FirstRun = 0;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem/Co
                untUp/SwitchReset
                SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem/CountUp/S
                witchReset: Omitted comparison with constant.
                # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_Sig
                St/Subsystem/Logical Operator1
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (SUSS_SIH543_Relational_Operator || USS_SIH_s_FlgDTCRstrt_measure) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsyste
                    m/CountUp/SwitchReset
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_S
                    igSt/Subsystem/CountUp/Delay */
                X_SUSS_SIH544_Delay = 0;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsyste
                    m/CountUp/Switch
                    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem/Count
                    Up/Switch: Omitted comparison with constant.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service
                    _SigSt/Subsystem/CountUp/LogicalOperator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/ServiceData/Serv
                    ice_SigSt/Subsystem/CountUp/RelationalOperator
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service
                    _SigSt/Subsystem/Logical Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_S
                    igSt/Subsystem/CountUp/Delay */
                if ((!(SUSS_SIH543_Relational_Operator)) && (X_SUSS_SIH544_Delay < 255)) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subs
                        ystem/CountUp/Switch
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Serv
                        ice_SigSt/Subsystem/CountUp/SwitchReset
                        # combined # Sum: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service
                        _SigSt/Subsystem/CountUp/Sum
                        # combined # Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Servi
                        ce_SigSt/Subsystem/CountUp/Delay
                        # combined # Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Servi
                        ce_SigSt/Subsystem/CountUp/Delay */
                    X_SUSS_SIH544_Delay = (uint8) (X_SUSS_SIH544_Delay + 1);
                }
            }

            /* Relational: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsyste
                m/Relational Operator1
                # combined # Product: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_Sig
                St/Subsystem/Product
                # combined # SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsys
                tem/Rescaler
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt
                /Subsystem/CountUp/Delay */
            SUSS_SIH543_Relational_Operator1 = (0.019999999552965164F * ((float32)
             X_SUSS_SIH544_Delay)) > 1.5F;

            /* outport reset necessary if system will be disabled */
            SUSS_SIH543_ROWD = 1;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Subsystem: Omitted c
                omparison with constant. */
            if (SUSS_SIH543_ROWD) {
                /* outport reset */
                SUSS_SIH543_Relational_Operator1 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH543_ROWD = 0;
            }
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Switch
            SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Switch: Omitted compari
            son with constant. */
        if (SUSS_SIH543_Relational_Operator1) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Switch
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/MeasSubsys/Data Typ
                e Conversion
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/Signal Conversion
                 */
            USS_SIH_s_EgoInfo_SigSt_measure = 3;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt/Switch
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/MeasSubsys/Data Typ
                e Conversion
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/Signal Conversion
                 */
            USS_SIH_s_EgoInfo_SigSt_measure = 0;
        }

        /* SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem/Enable: Enabl
            e condition
            SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem/Enable: Omit
            ted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/
            Logical Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Rescaler
             */
        if (USS_SIH_p_FlgAcvSigMonSrv && (USS_p_SrvPrvwInfoEveGrp_StSetMd != 0)) {
            /* SLLocal: Default storage class for local variables | Width: 8 */
            boolean SUSS_SIH549_Relational_Operator;

            /* Relational: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsyst
                em/Relational Operator
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH549_Relational_Operator = RG_s_PvwInfo_MsgCnt != X_SUSS_SIH549_Unit_Delay;

            /* Unit delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsyst
                em/Unit Delay
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            X_SUSS_SIH549_Unit_Delay = RG_s_PvwInfo_MsgCnt;

            /* Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem/Co
                untUp/Delay: Check the first run stateSignalInputHandlerSIH/SignalProcessing/Service
                Data/Service_SigSt1/Subsystem/CountUp/Delay: Omitted comparison with constant. */
            if (SUSS_SIH549_Subsystem_FirstRun) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsyste
                    m/CountUp/Delay: Initialize the state */
                X_SUSS_SIH550_Delay = 0;
            }

            /* SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem: Reset of
                 the first run state */
            SUSS_SIH549_Subsystem_FirstRun = 0;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem/C
                ountUp/SwitchReset
                SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem/CountUp/
                SwitchReset: Omitted comparison with constant.
                # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_Sig
                St1/Subsystem/Logical Operator1
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (SUSS_SIH549_Relational_Operator || USS_SIH_s_FlgDTCRstrt_measure) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsyst
                    em/CountUp/SwitchReset
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_S
                    igSt1/Subsystem/CountUp/Delay */
                X_SUSS_SIH550_Delay = 0;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsyst
                    em/CountUp/Switch
                    SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem/Coun
                    tUp/Switch: Omitted comparison with constant.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service
                    _SigSt1/Subsystem/CountUp/LogicalOperator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/ServiceData/Serv
                    ice_SigSt1/Subsystem/CountUp/RelationalOperator
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service
                    _SigSt1/Subsystem/Logical Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_S
                    igSt1/Subsystem/CountUp/Delay */
                if ((!(SUSS_SIH549_Relational_Operator)) && (X_SUSS_SIH550_Delay < 255)) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Sub
                        system/CountUp/Switch
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Serv
                        ice_SigSt1/Subsystem/CountUp/SwitchReset
                        # combined # Sum: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service
                        _SigSt1/Subsystem/CountUp/Sum
                        # combined # Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Servi
                        ce_SigSt1/Subsystem/CountUp/Delay
                        # combined # Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Servi
                        ce_SigSt1/Subsystem/CountUp/Delay */
                    X_SUSS_SIH550_Delay = (uint8) (X_SUSS_SIH550_Delay + 1);
                }
            }

            /* Relational: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsyst
                em/Relational Operator1
                # combined # Product: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_Sig
                St1/Subsystem/Product
                # combined # SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsy
                stem/Rescaler
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt
                1/Subsystem/CountUp/Delay */
            SUSS_SIH549_Relational_Operator1 = (0.019999999552965164F * ((float32)
             X_SUSS_SIH550_Delay)) > 1.5F;

            /* outport reset necessary if system will be disabled */
            SUSS_SIH549_ROWD = 1;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Subsystem: Omitted 
                comparison with constant. */
            if (SUSS_SIH549_ROWD) {
                /* outport reset */
                SUSS_SIH549_Relational_Operator1 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH549_ROWD = 0;
            }
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Switch
            SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Switch: Omitted compar
            ison with constant. */
        if (SUSS_SIH549_Relational_Operator1) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Switch
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure1/MeasSubsys/Data Ty
                pe Conversion
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure1/Signal Conversion
                 */
            USS_SIH_s_PvwInfo_SigSt_measure = 3;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ServiceData/Service_SigSt1/Switch
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure1/MeasSubsys/Data Ty
                pe Conversion
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure1/Signal Conversion
                 */
            USS_SIH_s_PvwInfo_SigSt_measure = 0;
        }

        /* MinMax: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/MinMax
            # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/MeasSubsys/Data Type Co
            nversion
            # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/Signal Conversion */
        if (SUSS_SIH607_Switch2 > USS_SIH_s_EgoInfo_SigSt_measure) {
            /* # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EffLvl_p100_SigSt */
            USS_SIH_s_EffLvl_p100_SigSt_measure = SUSS_SIH607_Switch2;
        }
        else {
            /* # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EffLvl_p100_SigSt
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/MeasSubsys/Data Typ
                e Conversion
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/Signal Conversion
                 */
            USS_SIH_s_EffLvl_p100_SigSt_measure = USS_SIH_s_EgoInfo_SigSt_measure;
        }

        /* MinMax: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateEffLvl/MinMax
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EffLvl_p100_SigSt
            # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure1/MeasSubsys/Data Type C
            onversion
            # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure1/Signal Conversion */
        if (USS_SIH_s_PvwInfo_SigSt_measure > USS_SIH_s_EffLvl_p100_SigSt_measure) {
            /* # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EffLvl_p100_SigSt
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure1/MeasSubsys/Data Ty
                pe Conversion
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure1/Signal Conversion
                 */
            USS_SIH_s_EffLvl_p100_SigSt_measure = USS_SIH_s_PvwInfo_SigSt_measure;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd43/Switch
            SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd43/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd43/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd43/Re
            lational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != Taster_sc_ESC_Off)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd43/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ESCOffBtn */
            USS_SIH_s_ESCOffBtn_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd43/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ESCOffBtn
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_ESCOffBtn_measure = Taster_s_ESC_Off;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd3/Switch
            SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd3/Switch: Omitted comparison wit
            h constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd3/Logical 
            Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd3/Relat
            ional Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != EPS_sc_StgTq)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd3/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSStgTq_Nm */
            USS_SIH_s_EPSStgTq_Nm_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd3/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSStgTq_Nm
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_EPSStgTq_Nm_measure = EPS_s_StgTq;
        }

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/ClassifierErrHnd1/
            ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/ClassifierErrHnd1
            /ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStS
            tgTq/ClassifierErrHnd1/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStS
            tgTq/ClassifierErrHnd1/Logical Operator1
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (EPS_sc_StStgTq & ((uint8) 32))) == 0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH620_Sum;

            if (!(SUSS_SIH618_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateStStgTq/ClassifierErrHnd1/ClassifierMonitoring */
                SUSS_SIH618_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH618_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH618_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classif
                ierErrHnd1/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising edge trigg
                er
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH620_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Cla
                    ssifierErrHnd1/ClassifierMonitoring/DebounceTimer/Delay: Initialize or reset the
                     state */
                X_SUSS_SIH620_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Cla
                    ssifierErrHnd1/ClassifierMonitoring/DebounceTimer/Delay: Check the first run sta
                    teSignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classif
                    ierErrHnd1/ClassifierMonitoring/DebounceTimer/Delay: Omitted comparison with con
                    stant. */
                if (SUSS_SIH618_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq
                        /ClassifierErrHnd1/ClassifierMonitoring/DebounceTimer/Delay: Initialize the 
                        state */
                    X_SUSS_SIH620_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/ClassifierErrH
                nd1/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH618_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
                rErrHnd1/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateS
                tStgTq/ClassifierErrHnd1/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH620_Sum = X_SUSS_SIH620_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classi
                fierErrHnd1/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/ClassifierErr
                Hnd1/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with constant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalS
                tateStStgTq/ClassifierErrHnd1/ClassifierMonitoring/DebounceTimer/Relational Operator
                1 */
            if (SUSS_SIH620_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Cl
                    assifierErrHnd1/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateStStgTq/ClassifierErrHnd1/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH620_Delay = SUSS_SIH620_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Cl
                    assifierErrHnd1/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateStStgTq/ClassifierErrHnd1/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH620_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classi
                fierErrHnd1/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/ClassifierErr
                Hnd1/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/
                ClassifierErrHnd1/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/
                ClassifierErrHnd1/ClassifierMonitoring/GetBit/BitwiseOperator
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            if (((uint8) (EPS_sc_StStgTq & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Cl
                    assifierErrHnd1/ClassifierMonitoring/Switch2
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSStStgTq_SigS
                    t */
                USS_SIH_s_EPSStStgTq_SigSt_measure = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH622_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifier
                    ErrHnd1/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStSt
                    gTq/ClassifierErrHnd1/ClassifierMonitoring/GetBit1/BitwiseOperator
                    # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
                SUSS_SIH622_Rescaler = ((uint8) (EPS_sc_StStgTq & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Cl
                    assifierErrHnd1/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classifie
                    rErrHnd1/ClassifierMonitoring/Switch1: Omitted comparison with constant.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/Signal
                    StateStStgTq/ClassifierErrHnd1/ClassifierMonitoring/DebounceTimer/Logical Operat
                    or
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateStStgTq/ClassifierErrHnd1/ClassifierMonitoring/DebounceTimer/Relational 
                    Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateStStgTq/ClassifierErrHnd1/ClassifierMonitoring/DebounceTimer/Delay */
                if ((0.F > X_SUSS_SIH620_Delay) && SUSS_SIH622_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgT
                        q/ClassifierErrHnd1/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                        nalStateStStgTq/ClassifierErrHnd1/ClassifierMonitoring/Switch2
                        # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSStStgTq_
                        SigSt */
                    USS_SIH_s_EPSStStgTq_SigSt_measure = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgT
                        q/ClassifierErrHnd1/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Class
                        ifierErrHnd1/ClassifierMonitoring/Switch: Omitted comparison with constant.
                         */
                    if (SUSS_SIH622_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateSt
                            StgTq/ClassifierErrHnd1/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateStStgTq/ClassifierErrHnd1/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateStStgTq/ClassifierErrHnd1/ClassifierMonitoring/Switch2
                            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSStSt
                            gTq_SigSt */
                        USS_SIH_s_EPSStStgTq_SigSt_measure = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateSt
                            StgTq/ClassifierErrHnd1/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateStStgTq/ClassifierErrHnd1/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateStStgTq/ClassifierErrHnd1/ClassifierMonitoring/Switch2
                            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSStSt
                            gTq_SigSt */
                        USS_SIH_s_EPSStStgTq_SigSt_measure = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/Classif
                ierErrHnd1/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH620_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateStStgTq/ClassifierErrH
                nd1/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH618_ROWD) {
                /* outport reset
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSStStgTq_SigS
                    t */
                USS_SIH_s_EPSStStgTq_SigSt_measure = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH618_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStat
                    es/SignalStateStStgTq/ClassifierErrHnd1/ClassifierMonitoring */
                SUSS_SIH618_RSWE = 0;
            }
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd1/Switch
            SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd1/Switch: Omitted comparison wit
            h constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd1/Logical 
            Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd1/Relat
            ional Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != EPS_sc_StStgTq)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd1/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSStStgTq */
            USS_SIH_s_EPSStStgTq_measure = 7;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd1/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSStStgTq
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_EPSStStgTq_measure = EPS_s_StStgTq;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd58/Switch
            SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd58/Switch: Omitted comparison wi
            th constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd58/Logical
             Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd58/Rela
            tional Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != EPS_sc_CtlValQFK)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd58/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSCtlValQFK */
            USS_SIH_s_EPSCtlValQFK_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd58/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSCtlValQFK
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_EPSCtlValQFK_measure = EPS_s_CtlValQFK;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationKLR/Switch
            SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationKLR/Switch: Omitted c
            omparison with constant.
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/Evalua
            tionKLR/Relational Operator
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CodCpStgWhl */
        if (0 == USS_SIH_s_CodCpStgWhl_measure) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationKLR/Switch
             */
            SUSS_SIH273_Switch[0] = 0;
            SUSS_SIH273_Switch[1] = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationKLR/Switch
                1
                SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationKLR/Switch1: Omit
                ted comparison with constant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/Ev
                aluationKLR/Relational Operator1
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            if (KLR_s_Touchauswertung == 15) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationKLR/Sw
                    itch1
                    # combined # Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/Ev
                    aluationKLR/Switch
                    # combined # SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/Evaluation
                    KLR/Bitwise Operator
                    # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
                SUSS_SIH273_Switch[1] = (uint8) (KLR_sc_Touchauswertung | ((uint8) 4));
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationKLR/Sw
                    itch1
                    # combined # Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/Ev
                    aluationKLR/Switch
                    # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
                SUSS_SIH273_Switch[1] = KLR_sc_Touchauswertung;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/ClassifierMerging/EvaluationKLR/Switch
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            SUSS_SIH273_Switch[0] = KLR_sc_Fehler;
        }

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Bitwise Operator2
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH557_Bitwise_Operator2 = (uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8)
         (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8)
         (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8)
         (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (SUSS_SIH269_Switch1 |
         SUSS_SIH269_Switch2)) | API_sc_StDrvPed)) | DBR_sc_IdcDrvBrk)) | SUSS_SIH273_Switch[1])) |
         SUSS_SIH274_Bitwise_Operator1)) | SUSS_SIH274_Bitwise_Operator2)) |
         SUSS_SIH274_Bitwise_Operator3)) | SUSS_SIH274_Bitwise_Operator4)) |
         SUSS_SIH274_Bitwise_Operator5)) | SUSS_SIH274_Bitwise_Operator6)) |
         SUSS_SIH274_Bitwise_Operator7)) | SUSS_SIH274_Bitwise_Operator8)) |
         SUSS_SIH274_Bitwise_Operator9)) | SUSS_SIH274_Bitwise_Operator10)) |
         SUSS_SIH274_Bitwise_Operator11)) | SUSS_SIH274_Bitwise_Operator12)) |
         SUSS_SIH274_Bitwise_Operator13)) | SUSS_SIH274_Bitwise_Operator14)) |
         SUSS_SIH274_Bitwise_Operator15)) | MFL_sc_Tip_Down)) | PTOMM_sc_FlgDrvMdB)) |
         Taster_sc_ESC_Off)) | SUSS_SIH271_Merge)) | SUSS_SIH271_Merge_a)) | SUSS_SIH271_Merge_b)) |
          SUSS_SIH271_Merge_d)) | VMM_sc_BrkPed_ItDmdNorm)) | VMM_sc_BrkPed_StReqDmnt)) |
         VMM_sc_DrvPed_ADmdNorm)) | WH_sc_Fahrstufe);

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/ClassifierErrHnd/Cl
            assifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/ClassifierErrHnd/C
            lassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDyn
            Lvl/ClassifierErrHnd/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDyn
            Lvl/ClassifierErrHnd/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH557_Bitwise_Operator2 & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH598_Sum;

            if (!(SUSS_SIH596_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateDynLvl/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH596_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH596_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH596_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifi
                erErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH598_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Clas
                    sifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize or reset the s
                    tate */
                X_SUSS_SIH598_Delay = USS_SIH_p_KLRTouchauswertungIntTi;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Clas
                    sifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Check the first run state
                    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
                    ErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Omitted comparison with constan
                    t. */
                if (SUSS_SIH596_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/
                        ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize the st
                        ate */
                    X_SUSS_SIH598_Delay = USS_SIH_p_KLRTouchauswertungIntTi;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/ClassifierErrHn
                d/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH596_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
                ErrHnd/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateD
                ynLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH598_Sum = X_SUSS_SIH598_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classif
                ierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/ClassifierErrH
                nd/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with constant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalS
                tateDynLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relational Operator1
                 */
            if (SUSS_SIH598_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateDynLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH598_Delay = SUSS_SIH598_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateDynLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH598_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classif
                ierErrHnd/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/ClassifierErrH
                nd/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/C
                lassifierErrHnd/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/C
                lassifierErrHnd/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH557_Bitwise_Operator2 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/Switch2 */
                SUSS_SIH596_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH600_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/ClassifierE
                    rrHnd/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynL
                    vl/ClassifierErrHnd/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH600_Rescaler = ((uint8) (SUSS_SIH557_Bitwise_Operator2 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifier
                    ErrHnd/ClassifierMonitoring/Switch1: Omitted comparison with constant.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/Signal
                    StateDynLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Logical Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateDynLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relational Op
                    erator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateDynLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                if ((0.F > X_SUSS_SIH598_Delay) && SUSS_SIH600_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl
                        /ClassifierErrHnd/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                        nalStateDynLvl/ClassifierErrHnd/ClassifierMonitoring/Switch2 */
                    SUSS_SIH596_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl
                        /ClassifierErrHnd/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classi
                        fierErrHnd/ClassifierMonitoring/Switch: Omitted comparison with constant. */
                    if (SUSS_SIH600_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDy
                            nLvl/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateDynLvl/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateDynLvl/ClassifierErrHnd/ClassifierMonitoring/Switch2 */
                        SUSS_SIH596_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDy
                            nLvl/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateDynLvl/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateDynLvl/ClassifierErrHnd/ClassifierMonitoring/Switch2 */
                        SUSS_SIH596_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/Classifi
                erErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH598_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/ClassifierErrHn
                d/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH596_ROWD) {
                /* outport reset */
                SUSS_SIH596_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH596_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStat
                    es/SignalStateDynLvl/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH596_RSWE = 0;
            }
        }

        /* MinMax: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateDynLvl/MinMax
            # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/MeasSubsys/Data Type Co
            nversion
            # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/Signal Conversion */
        if (SUSS_SIH596_Switch2 > USS_SIH_s_EgoInfo_SigSt_measure) {
            /* # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_DynLvl_p100_SigSt */
            USS_SIH_s_DynLvl_p100_SigSt_measure = SUSS_SIH596_Switch2;
        }
        else {
            /* # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_DynLvl_p100_SigSt
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/MeasSubsys/Data Typ
                e Conversion
                # combined # SignalInputHandlerSIH/SignalProcessing/MultiMeasure/Signal Conversion
                 */
            USS_SIH_s_DynLvl_p100_SigSt_measure = USS_SIH_s_EgoInfo_SigSt_measure;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd14/Switch
            SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd14/Switch: Omitted comparison 
            with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd14/Logic
            al Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd14/Re
            lational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != DrvDrg_sc_IdxRgnLvl)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd14/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_DrvDrgIdxRgnLvl */
            USS_SIH_s_DrvDrgIdxRgnLvl_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Boundaries/InErrHnd14/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_DrvDrgIdxRgnLvl
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_DrvDrgIdxRgnLvl_measure = DrvDrg_s_IdxRgnLvl;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd12/Switch
            SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd12/Switch: Omitte
            d comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InE
            rrHnd12/Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/
            InErrHnd12/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != DBR_sc_IdcDrvBrk)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd12/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_DBRIdcDrvBrk */
            USS_SIH_s_DBRIdcDrvBrk_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd12/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_DBRIdcDrvBrk
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_DBRIdcDrvBrk_measure = DBR_s_IdcDrvBrk;
        }

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/ClassifierErrHnd/
            ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/ClassifierErrHnd
            /ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpS
            tgWhl/ClassifierErrHnd/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpS
            tgWhl/ClassifierErrHnd/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH273_Switch[1] & ((uint8) 32))) == 0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH587_Sum;

            if (!(SUSS_SIH585_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH585_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH585_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH585_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classi
                fierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising edge trigg
                er
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH587_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Cl
                    assifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize or reset the
                     state */
                X_SUSS_SIH587_Delay = USS_SIH_p_KLRTouchauswertungIntTi;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Cl
                    assifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Check the first run sta
                    teSignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classi
                    fierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Omitted comparison with con
                    stant. */
                if (SUSS_SIH585_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWh
                        l/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize the 
                        state */
                    X_SUSS_SIH587_Delay = USS_SIH_p_KLRTouchauswertungIntTi;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/ClassifierErr
                Hnd/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH585_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
                erErrHnd/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateC
                pStgWhl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH587_Sum = X_SUSS_SIH587_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Class
                ifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/ClassifierEr
                rHnd/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with constant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalS
                tateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relational Operator
                1 */
            if (SUSS_SIH587_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/C
                    lassifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH587_Delay = SUSS_SIH587_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/C
                    lassifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH587_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Class
                ifierErrHnd/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/ClassifierEr
                rHnd/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl
                /ClassifierErrHnd/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl
                /ClassifierErrHnd/ClassifierMonitoring/GetBit/BitwiseOperator
                # combined # update(s) for inport SignalInputHandlerSIH/SignalProcessing/SignalState
                s/SignalStateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/u8ClasIn */
            if (((uint8) (SUSS_SIH273_Switch[1] & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/C
                    lassifierErrHnd/ClassifierMonitoring/Switch2
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CpStgWhlTch_Sig
                    St */
                USS_SIH_s_CpStgWhlTch_SigSt_measure = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH589_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifie
                    rErrHnd/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpSt
                    gWhl/ClassifierErrHnd/ClassifierMonitoring/GetBit1/BitwiseOperator
                    # combined # update(s) for inport SignalInputHandlerSIH/SignalProcessing/SignalS
                    tates/SignalStateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/u8ClasIn */
                SUSS_SIH589_Rescaler = ((uint8) (SUSS_SIH273_Switch[1] & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/C
                    lassifierErrHnd/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classifi
                    erErrHnd/ClassifierMonitoring/Switch1: Omitted comparison with constant.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/Signal
                    StateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Logical Operat
                    or
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relational 
                    Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                if ((0.F > X_SUSS_SIH587_Delay) && SUSS_SIH589_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgW
                        hl/ClassifierErrHnd/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                        nalStateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/Switch2
                        # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CpStgWhlTch
                        _SigSt */
                    USS_SIH_s_CpStgWhlTch_SigSt_measure = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgW
                        hl/ClassifierErrHnd/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Clas
                        sifierErrHnd/ClassifierMonitoring/Switch: Omitted comparison with constant.
                         */
                    if (SUSS_SIH589_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCp
                            StgWhl/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/Switch2
                            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CpStgWh
                            lTch_SigSt */
                        USS_SIH_s_CpStgWhlTch_SigSt_measure = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCp
                            StgWhl/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring/Switch2
                            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CpStgWh
                            lTch_SigSt */
                        USS_SIH_s_CpStgWhlTch_SigSt_measure = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/Classi
                fierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH587_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCpStgWhl/ClassifierErr
                Hnd/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH585_ROWD) {
                /* outport reset
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CpStgWhlTch_Sig
                    St */
                USS_SIH_s_CpStgWhlTch_SigSt_measure = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH585_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStat
                    es/SignalStateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH585_RSWE = 0;
            }
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd2/Switch
            SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd2/Switch: Omitted comparison wit
            h constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd2/Logical 
            Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd2/Relat
            ional Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH273_Switch[1])) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd2/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CpStgWhlTch */
            USS_SIH_s_CpStgWhlTch_measure = 15;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd2/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CpStgWhlTch
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_CpStgWhlTch_measure = KLR_s_Touchauswertung;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd10/Switch
            SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd10/Switch: Omitted comparison wi
            th constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd10/Logical
             Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd10/Rela
            tional Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH273_Switch[0])) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd10/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CpStgWhlErr */
            USS_SIH_s_CpStgWhlErr_measure = 1;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd10/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CpStgWhlErr
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_CpStgWhlErr_measure = KLR_s_Fehler;
        }

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Bitwise Operator2
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH555_Bitwise_Operator2 = (uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8)
         (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (SUSS_SIH269_Switch1 |
         SUSS_SIH269_Switch3)) | SUSS_SIH269_Switch4)) | SUSS_SIH270_Switch1)) | API_sc_StDrvPed)) |
          DBR_sc_IdcDrvBrk)) | SUSS_SIH272_Bitwise_Operator15)) | SUSS_SIH273_Switch[1])) |
         PTOMM_sc_FlgDrvMdB)) | SUSS_SIH271_Merge)) | SUSS_SIH271_Merge_b)) | SUSS_SIH271_Merge_d);

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/ClassifierErrHnd/Cl
            assifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/ClassifierErrHnd/C
            lassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCom
            Lvl/ClassifierErrHnd/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCom
            Lvl/ClassifierErrHnd/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH555_Bitwise_Operator2 & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH576_Sum;

            if (!(SUSS_SIH574_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateComLvl/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH574_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH574_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH574_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifi
                erErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH576_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Clas
                    sifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize or reset the s
                    tate */
                X_SUSS_SIH576_Delay = USS_SIH_p_KLRTouchauswertungIntTi;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Clas
                    sifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Check the first run state
                    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
                    ErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Omitted comparison with constan
                    t. */
                if (SUSS_SIH574_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/
                        ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize the st
                        ate */
                    X_SUSS_SIH576_Delay = USS_SIH_p_KLRTouchauswertungIntTi;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/ClassifierErrHn
                d/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH574_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
                ErrHnd/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateC
                omLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH576_Sum = X_SUSS_SIH576_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classif
                ierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/ClassifierErrH
                nd/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with constant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalS
                tateComLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relational Operator1
                 */
            if (SUSS_SIH576_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateComLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH576_Delay = SUSS_SIH576_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateComLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH576_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classif
                ierErrHnd/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/ClassifierErrH
                nd/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/C
                lassifierErrHnd/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/C
                lassifierErrHnd/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH555_Bitwise_Operator2 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/Switch2
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ComLvl_p100_Sig
                    St */
                USS_SIH_s_ComLvl_p100_SigSt_measure = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH578_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/ClassifierE
                    rrHnd/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComL
                    vl/ClassifierErrHnd/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH578_Rescaler = ((uint8) (SUSS_SIH555_Bitwise_Operator2 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Cla
                    ssifierErrHnd/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifier
                    ErrHnd/ClassifierMonitoring/Switch1: Omitted comparison with constant.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/Signal
                    StateComLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Logical Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateComLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relational Op
                    erator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateComLvl/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                if ((0.F > X_SUSS_SIH576_Delay) && SUSS_SIH578_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl
                        /ClassifierErrHnd/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                        nalStateComLvl/ClassifierErrHnd/ClassifierMonitoring/Switch2
                        # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ComLvl_p100
                        _SigSt */
                    USS_SIH_s_ComLvl_p100_SigSt_measure = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl
                        /ClassifierErrHnd/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classi
                        fierErrHnd/ClassifierMonitoring/Switch: Omitted comparison with constant. */
                    if (SUSS_SIH578_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCo
                            mLvl/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateComLvl/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateComLvl/ClassifierErrHnd/ClassifierMonitoring/Switch2
                            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ComLvl_
                            p100_SigSt */
                        USS_SIH_s_ComLvl_p100_SigSt_measure = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCo
                            mLvl/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateComLvl/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateComLvl/ClassifierErrHnd/ClassifierMonitoring/Switch2
                            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ComLvl_
                            p100_SigSt */
                        USS_SIH_s_ComLvl_p100_SigSt_measure = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/Classifi
                erErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH576_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateComLvl/ClassifierErrHn
                d/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH574_ROWD) {
                /* outport reset
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ComLvl_p100_Sig
                    St */
                USS_SIH_s_ComLvl_p100_SigSt_measure = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH574_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStat
                    es/SignalStateComLvl/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH574_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Bitwise Operato
            r2
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH554_Bitwise_Operator2 = (uint8) (((uint8) (EPS_sc_CtlValQFK | EPS_sc_StgTq)) |
         SUSS_SIH271_Merge_d);

        /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/ClassifierErrHn
            d/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/ClassifierErrH
            nd/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCnt
            rStgDet/ClassifierErrHnd/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCnt
            rStgDet/ClassifierErrHnd/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH554_Bitwise_Operator2 & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH565_Sum;

            if (!(SUSS_SIH563_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH563_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH563_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH563_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Clas
                sifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising edge tri
                gger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH565_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/
                    ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize or reset t
                    he state */
                X_SUSS_SIH565_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/
                    ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Check the first run s
                    tateSignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Cl
                    assifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Omitted comparison with
                     constant. */
                if (SUSS_SIH563_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStg
                        Det/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Initialize th
                        e state */
                    X_SUSS_SIH565_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/ClassifierE
                rrHnd/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH563_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
                fierErrHnd/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateC
                ntrStgDet/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH565_Sum = X_SUSS_SIH565_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Cla
                ssifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classifier
                ErrHnd/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with constant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalS
                tateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relational Operat
                or1 */
            if (SUSS_SIH565_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet
                    /ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH565_Delay = SUSS_SIH565_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet
                    /ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                X_SUSS_SIH565_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Cla
                ssifierErrHnd/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classifier
                ErrHnd/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgD
                et/ClassifierErrHnd/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgD
                et/ClassifierErrHnd/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH554_Bitwise_Operator2 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet
                    /ClassifierErrHnd/ClassifierMonitoring/Switch2
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CntrStgDet_SigS
                    t */
                USS_SIH_s_CntrStgDet_SigSt_measure = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH567_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classif
                    ierErrHnd/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntr
                    StgDet/ClassifierErrHnd/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH567_Rescaler = ((uint8) (SUSS_SIH554_Bitwise_Operator2 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet
                    /ClassifierErrHnd/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Classi
                    fierErrHnd/ClassifierMonitoring/Switch1: Omitted comparison with constant.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/SignalStates/Signal
                    StateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Logical Oper
                    ator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                    nalStateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Relationa
                    l Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalSt
                    ateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay */
                if ((0.F > X_SUSS_SIH565_Delay) && SUSS_SIH567_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrSt
                        gDet/ClassifierErrHnd/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/Sig
                        nalStateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring/Switch2
                        # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CntrStgDet_
                        SigSt */
                    USS_SIH_s_CntrStgDet_SigSt_measure = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrSt
                        gDet/ClassifierErrHnd/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Cl
                        assifierErrHnd/ClassifierMonitoring/Switch: Omitted comparison with constant
                        . */
                    if (SUSS_SIH567_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCn
                            trStgDet/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring/Switch2
                            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CntrStg
                            Det_SigSt */
                        USS_SIH_s_CntrStgDet_SigSt_measure = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCn
                            trStgDet/ClassifierErrHnd/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring/Switch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/SignalStates
                            /SignalStateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring/Switch2
                            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CntrStg
                            Det_SigSt */
                        USS_SIH_s_CntrStgDet_SigSt_measure = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/Clas
                sifierErrHnd/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH565_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/SignalStates/SignalStateCntrStgDet/ClassifierE
                rrHnd/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH563_ROWD) {
                /* outport reset
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CntrStgDet_SigS
                    t */
                USS_SIH_s_CntrStgDet_SigSt_measure = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH563_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStat
                    es/SignalStateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring */
                SUSS_SIH563_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/Bitwise O
            perator */
        SUSS_SIH297_Bitwise_Operator = (uint8) (((uint8) (((uint8) (SUSS_SIH269_Switch1 |
         SUSS_SIH269_Switch2)) | SUSS_SIH269_Switch3)) | SUSS_SIH269_Switch4);

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/Classifie
            rErrHnd8/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/Classifi
            erErrHnd8/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerACA/ClassifierErrHnd8/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerACA/ClassifierErrHnd8/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH297_Bitwise_Operator & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH317_Sum;

            if (!(SUSS_SIH315_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring */
                SUSS_SIH315_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH315_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH315_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAC
                A/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising e
                dge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH317_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Delay: Initialize or 
                    reset the state */
                X_SUSS_SIH317_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Delay: Check the firs
                    t run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                    TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Delay: Omitted c
                    omparison with constant. */
                if (SUSS_SIH315_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Delay: Initia
                        lize the state */
                    X_SUSS_SIH317_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/Class
                ifierErrHnd8/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH315_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
                ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH317_Sum = X_SUSS_SIH317_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerA
                CA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/Clas
                sifierErrHnd8/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with con
                stant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Relational
                 Operator1 */
            if (SUSS_SIH317_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH317_Delay = SUSS_SIH317_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH317_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerA
                CA/ClassifierErrHnd8/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/Clas
                sifierErrHnd8/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerACA/ClassifierErrHnd8/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerACA/ClassifierErrHnd8/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH297_Bitwise_Operator & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerACA/ClassifierErrHnd8/ClassifierMonitoring/Switch2 */
                SUSS_SIH315_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH319_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/C
                    lassifierErrHnd8/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH319_Rescaler = ((uint8) (SUSS_SIH297_Bitwise_Operator & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerACA/ClassifierErrHnd8/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/
                    ClassifierErrHnd8/ClassifierMonitoring/Switch1: Omitted comparison with constant
                    .
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Logic
                    al Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Re
                    lational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Delay
                     */
                if ((0.F > X_SUSS_SIH317_Delay) && SUSS_SIH319_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/Switch2 */
                    SUSS_SIH315_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        ACA/ClassifierErrHnd8/ClassifierMonitoring/Switch: Omitted comparison with c
                        onstant. */
                    if (SUSS_SIH319_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/Swit
                            ch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/Swit
                            ch2 */
                        SUSS_SIH315_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/Swit
                            ch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring/Swit
                            ch2 */
                        SUSS_SIH315_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAC
                A/ClassifierErrHnd8/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH317_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACA/Class
                ifierErrHnd8/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH315_ROWD) {
                /* outport reset */
                SUSS_SIH315_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH315_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring */
                SUSS_SIH315_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/Classifie
            rErrHnd3/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/Classifi
            erErrHnd3/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerACC/ClassifierErrHnd3/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerACC/ClassifierErrHnd3/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH270_Switch1 & ((uint8) 32))) == 0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH329_Sum;

            if (!(SUSS_SIH327_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring */
                SUSS_SIH327_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH327_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH327_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAC
                C/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising e
                dge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH329_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Initialize or 
                    reset the state */
                X_SUSS_SIH329_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Check the firs
                    t run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                    TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Omitted c
                    omparison with constant. */
                if (SUSS_SIH327_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Initia
                        lize the state */
                    X_SUSS_SIH329_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/Class
                ifierErrHnd3/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH327_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
                ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH329_Sum = X_SUSS_SIH329_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerA
                CC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/Clas
                sifierErrHnd3/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with con
                stant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Relational
                 Operator1 */
            if (SUSS_SIH329_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH329_Delay = SUSS_SIH329_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH329_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerA
                CC/ClassifierErrHnd3/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/Clas
                sifierErrHnd3/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerACC/ClassifierErrHnd3/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerACC/ClassifierErrHnd3/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH270_Switch1 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerACC/ClassifierErrHnd3/ClassifierMonitoring/Switch2 */
                SUSS_SIH327_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH331_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/C
                    lassifierErrHnd3/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH331_Rescaler = ((uint8) (SUSS_SIH270_Switch1 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerACC/ClassifierErrHnd3/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/
                    ClassifierErrHnd3/ClassifierMonitoring/Switch1: Omitted comparison with constant
                    .
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Logic
                    al Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Re
                    lational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay
                     */
                if ((0.F > X_SUSS_SIH329_Delay) && SUSS_SIH331_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/Switch2 */
                    SUSS_SIH327_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        ACC/ClassifierErrHnd3/ClassifierMonitoring/Switch: Omitted comparison with c
                        onstant. */
                    if (SUSS_SIH331_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/Swit
                            ch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/Swit
                            ch2 */
                        SUSS_SIH327_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/Swit
                            ch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring/Swit
                            ch2 */
                        SUSS_SIH327_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAC
                C/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH329_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerACC/Class
                ifierErrHnd3/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH327_ROWD) {
                /* outport reset */
                SUSS_SIH327_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH327_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring */
                SUSS_SIH327_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/Classifie
            rErrHnd9/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/Classifi
            erErrHnd9/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerAPI/ClassifierErrHnd9/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerAPI/ClassifierErrHnd9/Logical Operator1
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (API_sc_StDrvPed & ((uint8) 32))) == 0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH341_Sum;

            if (!(SUSS_SIH339_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring */
                SUSS_SIH339_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH339_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH339_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAP
                I/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising e
                dge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH341_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Delay: Initialize or 
                    reset the state */
                X_SUSS_SIH341_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Delay: Check the firs
                    t run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                    TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Delay: Omitted c
                    omparison with constant. */
                if (SUSS_SIH339_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Delay: Initia
                        lize the state */
                    X_SUSS_SIH341_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/Class
                ifierErrHnd9/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH339_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
                ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH341_Sum = X_SUSS_SIH341_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerA
                PI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/Clas
                sifierErrHnd9/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with con
                stant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Relational
                 Operator1 */
            if (SUSS_SIH341_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH341_Delay = SUSS_SIH341_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH341_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerA
                PI/ClassifierErrHnd9/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/Clas
                sifierErrHnd9/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerAPI/ClassifierErrHnd9/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerAPI/ClassifierErrHnd9/ClassifierMonitoring/GetBit/BitwiseOperator
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            if (((uint8) (API_sc_StDrvPed & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerAPI/ClassifierErrHnd9/ClassifierMonitoring/Switch2 */
                SUSS_SIH339_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH343_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/C
                    lassifierErrHnd9/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/GetBit1/BitwiseOperator
                    # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
                SUSS_SIH343_Rescaler = ((uint8) (API_sc_StDrvPed & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerAPI/ClassifierErrHnd9/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/
                    ClassifierErrHnd9/ClassifierMonitoring/Switch1: Omitted comparison with constant
                    .
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Logic
                    al Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Re
                    lational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Delay
                     */
                if ((0.F > X_SUSS_SIH341_Delay) && SUSS_SIH343_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/Switch2 */
                    SUSS_SIH339_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        API/ClassifierErrHnd9/ClassifierMonitoring/Switch: Omitted comparison with c
                        onstant. */
                    if (SUSS_SIH343_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/Swit
                            ch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/Swit
                            ch2 */
                        SUSS_SIH339_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/Swit
                            ch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring/Swit
                            ch2 */
                        SUSS_SIH339_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAP
                I/ClassifierErrHnd9/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH341_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerAPI/Class
                ifierErrHnd9/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH339_ROWD) {
                /* outport reset */
                SUSS_SIH339_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH339_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring */
                SUSS_SIH339_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvDrg/Classi
            fierErrHnd5/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvDrg/Class
            ifierErrHnd5/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerDrvDrg/ClassifierErrHnd5/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerDrvDrg/ClassifierErrHnd5/Logical Operator1
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (DrvDrg_sc_IdxRgnLvl & ((uint8) 32))) == 0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH353_Sum;

            if (!(SUSS_SIH351_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring */
                SUSS_SIH351_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH351_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH351_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDr
                vDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Delay: Condition for risin
                g edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH353_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Delay: Initialize 
                    or reset the state */
                X_SUSS_SIH353_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Delay: Check the f
                    irst run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
                    rs/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Delay: Omi
                    tted comparison with constant. */
                if (SUSS_SIH351_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Delay: Ini
                        tialize the state */
                    X_SUSS_SIH353_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvDrg/Cl
                assifierErrHnd5/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH351_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
                rg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH353_Sum = X_SUSS_SIH353_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerD
                rvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvDrg/C
                lassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with 
                constant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Relatio
                nal Operator1 */
            if (SUSS_SIH353_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Dela
                    y */
                X_SUSS_SIH353_Delay = SUSS_SIH353_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Dela
                    y */
                X_SUSS_SIH353_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerD
                rvDrg/ClassifierErrHnd5/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvDrg/C
                lassifierErrHnd5/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/GetBit/BitwiseOperator
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            if (((uint8) (DrvDrg_sc_IdxRgnLvl & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/Switch2 */
                SUSS_SIH351_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH355_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvDr
                    g/ClassifierErrHnd5/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/GetBit1/BitwiseOperator
                    # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
                SUSS_SIH355_Rescaler = ((uint8) (DrvDrg_sc_IdxRgnLvl & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvD
                    rg/ClassifierErrHnd5/ClassifierMonitoring/Switch1: Omitted comparison with const
                    ant.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Lo
                    gical Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer
                    /Relational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Dela
                    y */
                if ((0.F > X_SUSS_SIH353_Delay) && SUSS_SIH355_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/Switch2
                         */
                    SUSS_SIH351_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        DrvDrg/ClassifierErrHnd5/ClassifierMonitoring/Switch: Omitted comparison wit
                        h constant. */
                    if (SUSS_SIH355_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/S
                            witch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/S
                            witch2 */
                        SUSS_SIH351_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/S
                            witch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring/S
                            witch2 */
                        SUSS_SIH351_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDr
                vDrg/ClassifierErrHnd5/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH353_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerDrvDrg/Cl
                assifierErrHnd5/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH351_ROWD) {
                /* outport reset */
                SUSS_SIH351_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH351_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring */
                SUSS_SIH351_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/Bitwise O
            perator2
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH301_Bitwise_Operator2 = (uint8) (((uint8) (EPS_sc_CtlValQFK | EPS_sc_StStgTq)) |
         EPS_sc_StgTq);

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/Classifie
            rErrHnd10/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/Classifi
            erErrHnd10/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerEPS/ClassifierErrHnd10/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerEPS/ClassifierErrHnd10/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH301_Bitwise_Operator2 & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH365_Sum;

            if (!(SUSS_SIH363_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring */
                SUSS_SIH363_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH363_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH363_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEP
                S/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising 
                edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH365_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Delay: Initialize or
                     reset the state */
                X_SUSS_SIH365_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Delay: Check the fir
                    st run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers
                    /TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Delay: Omitted
                     comparison with constant. */
                if (SUSS_SIH363_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Delay: Initi
                        alize the state */
                    X_SUSS_SIH365_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/Class
                ifierErrHnd10/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH363_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
                ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH365_Sum = X_SUSS_SIH365_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerE
                PS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/Clas
                sifierErrHnd10/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with co
                nstant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Relationa
                l Operator1 */
            if (SUSS_SIH365_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH365_Delay = SUSS_SIH365_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH365_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerE
                PS/ClassifierErrHnd10/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/Clas
                sifierErrHnd10/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerEPS/ClassifierErrHnd10/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerEPS/ClassifierErrHnd10/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH301_Bitwise_Operator2 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerEPS/ClassifierErrHnd10/ClassifierMonitoring/Switch2 */
                SUSS_SIH363_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH367_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/C
                    lassifierErrHnd10/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH367_Rescaler = ((uint8) (SUSS_SIH301_Bitwise_Operator2 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerEPS/ClassifierErrHnd10/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/
                    ClassifierErrHnd10/ClassifierMonitoring/Switch1: Omitted comparison with constan
                    t.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Logi
                    cal Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/R
                    elational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Delay
                     */
                if ((0.F > X_SUSS_SIH365_Delay) && SUSS_SIH367_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/Switch2 */
                    SUSS_SIH363_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        EPS/ClassifierErrHnd10/ClassifierMonitoring/Switch: Omitted comparison with 
                        constant. */
                    if (SUSS_SIH367_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/Swi
                            tch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/Swi
                            tch2 */
                        SUSS_SIH363_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/Swi
                            tch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring/Swi
                            tch2 */
                        SUSS_SIH363_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEP
                S/ClassifierErrHnd10/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH365_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerEPS/Class
                ifierErrHnd10/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH363_ROWD) {
                /* outport reset */
                SUSS_SIH363_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH363_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring */
                SUSS_SIH363_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCBtn/Classi
            fierErrHnd7/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCBtn/Class
            ifierErrHnd7/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerESCBtn/ClassifierErrHnd7/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerESCBtn/ClassifierErrHnd7/Logical Operator1
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (Taster_sc_ESC_Off & ((uint8) 32))) == 0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH389_Sum;

            if (!(SUSS_SIH387_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring */
                SUSS_SIH387_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH387_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH387_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerES
                CBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Delay: Condition for risin
                g edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH389_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Delay: Initialize 
                    or reset the state */
                X_SUSS_SIH389_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Delay: Check the f
                    irst run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
                    rs/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Delay: Omi
                    tted comparison with constant. */
                if (SUSS_SIH387_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Delay: Ini
                        tialize the state */
                    X_SUSS_SIH389_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCBtn/Cl
                assifierErrHnd7/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH387_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
                tn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH389_Sum = X_SUSS_SIH389_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerE
                SCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCBtn/C
                lassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with 
                constant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Relatio
                nal Operator1 */
            if (SUSS_SIH389_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Dela
                    y */
                X_SUSS_SIH389_Delay = SUSS_SIH389_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Dela
                    y */
                X_SUSS_SIH389_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerE
                SCBtn/ClassifierErrHnd7/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCBtn/C
                lassifierErrHnd7/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/GetBit/BitwiseOperator
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            if (((uint8) (Taster_sc_ESC_Off & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/Switch2 */
                SUSS_SIH387_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH391_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCBt
                    n/ClassifierErrHnd7/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/GetBit1/BitwiseOperator
                    # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
                SUSS_SIH391_Rescaler = ((uint8) (Taster_sc_ESC_Off & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCB
                    tn/ClassifierErrHnd7/ClassifierMonitoring/Switch1: Omitted comparison with const
                    ant.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Lo
                    gical Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer
                    /Relational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Dela
                    y */
                if ((0.F > X_SUSS_SIH389_Delay) && SUSS_SIH391_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/Switch2
                         */
                    SUSS_SIH387_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        ESCBtn/ClassifierErrHnd7/ClassifierMonitoring/Switch: Omitted comparison wit
                        h constant. */
                    if (SUSS_SIH391_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/S
                            witch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/S
                            witch2 */
                        SUSS_SIH387_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/S
                            witch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring/S
                            witch2 */
                        SUSS_SIH387_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerES
                CBtn/ClassifierErrHnd7/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH389_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESCBtn/Cl
                assifierErrHnd7/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH387_ROWD) {
                /* outport reset */
                SUSS_SIH387_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH387_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring */
                SUSS_SIH387_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/Classifie
            rErrHnd3/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/Classifi
            erErrHnd3/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerESC/ClassifierErrHnd3/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerESC/ClassifierErrHnd3/Logical Operator1
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (DBR_sc_IdcDrvBrk & ((uint8) 32))) == 0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH377_Sum;

            if (!(SUSS_SIH375_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring */
                SUSS_SIH375_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH375_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH375_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerES
                C/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising e
                dge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH377_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Initialize or 
                    reset the state */
                X_SUSS_SIH377_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Check the firs
                    t run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                    TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Omitted c
                    omparison with constant. */
                if (SUSS_SIH375_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Initia
                        lize the state */
                    X_SUSS_SIH377_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/Class
                ifierErrHnd3/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH375_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
                ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH377_Sum = X_SUSS_SIH377_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerE
                SC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/Clas
                sifierErrHnd3/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with con
                stant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Relational
                 Operator1 */
            if (SUSS_SIH377_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH377_Delay = SUSS_SIH377_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH377_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerE
                SC/ClassifierErrHnd3/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/Clas
                sifierErrHnd3/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerESC/ClassifierErrHnd3/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerESC/ClassifierErrHnd3/ClassifierMonitoring/GetBit/BitwiseOperator
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            if (((uint8) (DBR_sc_IdcDrvBrk & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerESC/ClassifierErrHnd3/ClassifierMonitoring/Switch2 */
                SUSS_SIH375_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH379_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/C
                    lassifierErrHnd3/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/GetBit1/BitwiseOperator
                    # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
                SUSS_SIH379_Rescaler = ((uint8) (DBR_sc_IdcDrvBrk & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerESC/ClassifierErrHnd3/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/
                    ClassifierErrHnd3/ClassifierMonitoring/Switch1: Omitted comparison with constant
                    .
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Logic
                    al Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Re
                    lational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay
                     */
                if ((0.F > X_SUSS_SIH377_Delay) && SUSS_SIH379_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/Switch2 */
                    SUSS_SIH375_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        ESC/ClassifierErrHnd3/ClassifierMonitoring/Switch: Omitted comparison with c
                        onstant. */
                    if (SUSS_SIH379_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/Swit
                            ch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/Swit
                            ch2 */
                        SUSS_SIH375_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/Swit
                            ch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring/Swit
                            ch2 */
                        SUSS_SIH375_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerES
                C/ClassifierErrHnd3/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH377_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerESC/Class
                ifierErrHnd3/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH375_ROWD) {
                /* outport reset */
                SUSS_SIH375_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH375_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring */
                SUSS_SIH375_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/Bitwise O
            perator3 */
        SUSS_SIH304_Bitwise_Operator3 = (uint8) (SUSS_SIH273_Switch[0] | SUSS_SIH273_Switch[1]);

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/Classifie
            rErrHnd11/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/Classifi
            erErrHnd11/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerKLR/ClassifierErrHnd11/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerKLR/ClassifierErrHnd11/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH304_Bitwise_Operator3 & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH401_Sum;

            if (!(SUSS_SIH399_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring */
                SUSS_SIH399_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH399_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH399_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKL
                R/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising 
                edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH401_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Delay: Initialize or
                     reset the state */
                X_SUSS_SIH401_Delay = USS_SIH_p_KLRTouchauswertungIntTi;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Delay: Check the fir
                    st run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers
                    /TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Delay: Omitted
                     comparison with constant. */
                if (SUSS_SIH399_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Delay: Initi
                        alize the state */
                    X_SUSS_SIH401_Delay = USS_SIH_p_KLRTouchauswertungIntTi;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/Class
                ifierErrHnd11/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH399_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
                ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH401_Sum = X_SUSS_SIH401_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerK
                LR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/Clas
                sifierErrHnd11/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with co
                nstant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Relationa
                l Operator1 */
            if (SUSS_SIH401_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH401_Delay = SUSS_SIH401_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH401_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerK
                LR/ClassifierErrHnd11/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/Clas
                sifierErrHnd11/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerKLR/ClassifierErrHnd11/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerKLR/ClassifierErrHnd11/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH304_Bitwise_Operator3 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerKLR/ClassifierErrHnd11/ClassifierMonitoring/Switch2 */
                SUSS_SIH399_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH403_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/C
                    lassifierErrHnd11/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH403_Rescaler = ((uint8) (SUSS_SIH304_Bitwise_Operator3 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerKLR/ClassifierErrHnd11/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/
                    ClassifierErrHnd11/ClassifierMonitoring/Switch1: Omitted comparison with constan
                    t.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Logi
                    cal Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/R
                    elational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Delay
                     */
                if ((0.F > X_SUSS_SIH401_Delay) && SUSS_SIH403_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/Switch2 */
                    SUSS_SIH399_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        KLR/ClassifierErrHnd11/ClassifierMonitoring/Switch: Omitted comparison with 
                        constant. */
                    if (SUSS_SIH403_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/Swi
                            tch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/Swi
                            tch2 */
                        SUSS_SIH399_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/Swi
                            tch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring/Swi
                            tch2 */
                        SUSS_SIH399_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKL
                R/ClassifierErrHnd11/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH401_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerKLR/Class
                ifierErrHnd11/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH399_ROWD) {
                /* outport reset */
                SUSS_SIH399_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH399_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring */
                SUSS_SIH399_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/Bitwise O
            perator4 */
        SUSS_SIH305_Bitwise_Operator4 = (uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8)
         (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8) (((uint8)
         (SUSS_SIH274_Bitwise_Operator1 | SUSS_SIH274_Bitwise_Operator2)) |
         SUSS_SIH274_Bitwise_Operator3)) | SUSS_SIH274_Bitwise_Operator4)) |
         SUSS_SIH274_Bitwise_Operator5)) | SUSS_SIH274_Bitwise_Operator6)) |
         SUSS_SIH274_Bitwise_Operator7)) | SUSS_SIH274_Bitwise_Operator8)) |
         SUSS_SIH274_Bitwise_Operator9)) | SUSS_SIH274_Bitwise_Operator10)) |
         SUSS_SIH274_Bitwise_Operator11)) | SUSS_SIH274_Bitwise_Operator12)) |
         SUSS_SIH274_Bitwise_Operator13)) | SUSS_SIH274_Bitwise_Operator14)) |
         SUSS_SIH274_Bitwise_Operator15);

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/Classifie
            rErrHnd12/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/Classifi
            erErrHnd12/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerLDA/ClassifierErrHnd12/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerLDA/ClassifierErrHnd12/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH305_Bitwise_Operator4 & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH413_Sum;

            if (!(SUSS_SIH411_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring */
                SUSS_SIH411_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH411_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH411_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLD
                A/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising 
                edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH413_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Delay: Initialize or
                     reset the state */
                X_SUSS_SIH413_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Delay: Check the fir
                    st run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers
                    /TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Delay: Omitted
                     comparison with constant. */
                if (SUSS_SIH411_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Delay: Initi
                        alize the state */
                    X_SUSS_SIH413_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/Class
                ifierErrHnd12/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH411_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
                ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH413_Sum = X_SUSS_SIH413_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerL
                DA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/Clas
                sifierErrHnd12/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with co
                nstant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Relationa
                l Operator1 */
            if (SUSS_SIH413_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH413_Delay = SUSS_SIH413_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH413_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerL
                DA/ClassifierErrHnd12/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/Clas
                sifierErrHnd12/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerLDA/ClassifierErrHnd12/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerLDA/ClassifierErrHnd12/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH305_Bitwise_Operator4 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerLDA/ClassifierErrHnd12/ClassifierMonitoring/Switch2 */
                SUSS_SIH411_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH415_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/C
                    lassifierErrHnd12/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH415_Rescaler = ((uint8) (SUSS_SIH305_Bitwise_Operator4 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerLDA/ClassifierErrHnd12/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/
                    ClassifierErrHnd12/ClassifierMonitoring/Switch1: Omitted comparison with constan
                    t.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Logi
                    cal Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/R
                    elational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Delay
                     */
                if ((0.F > X_SUSS_SIH413_Delay) && SUSS_SIH415_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/Switch2 */
                    SUSS_SIH411_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        LDA/ClassifierErrHnd12/ClassifierMonitoring/Switch: Omitted comparison with 
                        constant. */
                    if (SUSS_SIH415_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/Swi
                            tch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/Swi
                            tch2 */
                        SUSS_SIH411_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/Swi
                            tch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring/Swi
                            tch2 */
                        SUSS_SIH411_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLD
                A/ClassifierErrHnd12/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH413_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerLDA/Class
                ifierErrHnd12/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH411_ROWD) {
                /* outport reset */
                SUSS_SIH411_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH411_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring */
                SUSS_SIH411_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/Bitwise O
            perator5
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH306_Bitwise_Operator5 = (uint8) (MFL_sc_Tip_Down | MFL_sc_Tip_Up);

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/Classifie
            rErrHnd13/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/Classifi
            erErrHnd13/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerMFL/ClassifierErrHnd13/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerMFL/ClassifierErrHnd13/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH306_Bitwise_Operator5 & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH425_Sum;

            if (!(SUSS_SIH423_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring */
                SUSS_SIH423_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH423_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH423_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMF
                L/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising 
                edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH425_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Delay: Initialize or
                     reset the state */
                X_SUSS_SIH425_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Delay: Check the fir
                    st run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers
                    /TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Delay: Omitted
                     comparison with constant. */
                if (SUSS_SIH423_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Delay: Initi
                        alize the state */
                    X_SUSS_SIH425_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/Class
                ifierErrHnd13/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH423_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
                ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH425_Sum = X_SUSS_SIH425_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerM
                FL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/Clas
                sifierErrHnd13/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with co
                nstant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Relationa
                l Operator1 */
            if (SUSS_SIH425_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH425_Delay = SUSS_SIH425_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH425_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerM
                FL/ClassifierErrHnd13/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/Clas
                sifierErrHnd13/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerMFL/ClassifierErrHnd13/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerMFL/ClassifierErrHnd13/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH306_Bitwise_Operator5 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerMFL/ClassifierErrHnd13/ClassifierMonitoring/Switch2 */
                SUSS_SIH423_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH427_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/C
                    lassifierErrHnd13/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH427_Rescaler = ((uint8) (SUSS_SIH306_Bitwise_Operator5 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerMFL/ClassifierErrHnd13/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/
                    ClassifierErrHnd13/ClassifierMonitoring/Switch1: Omitted comparison with constan
                    t.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Logi
                    cal Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/R
                    elational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Delay
                     */
                if ((0.F > X_SUSS_SIH425_Delay) && SUSS_SIH427_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/Switch2 */
                    SUSS_SIH423_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        MFL/ClassifierErrHnd13/ClassifierMonitoring/Switch: Omitted comparison with 
                        constant. */
                    if (SUSS_SIH427_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/Swi
                            tch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/Swi
                            tch2 */
                        SUSS_SIH423_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/Swi
                            tch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring/Swi
                            tch2 */
                        SUSS_SIH423_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMF
                L/ClassifierErrHnd13/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH425_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerMFL/Class
                ifierErrHnd13/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH423_ROWD) {
                /* outport reset */
                SUSS_SIH423_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH423_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring */
                SUSS_SIH423_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO/Bitwise 
            Operator6 */
        SUSS_SIH307_Bitwise_Operator6 = (uint8) (((uint8) (((uint8) (((uint8) (SUSS_SIH271_Merge |
         SUSS_SIH271_Merge_a)) | SUSS_SIH271_Merge_b)) | SUSS_SIH271_Merge_c)) |
         SUSS_SIH271_Merge_d);

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO/Classifi
            erErrHnd14/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO/Classif
            ierErrHnd14/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerVDSO/ClassifierErrHnd14/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerVDSO/ClassifierErrHnd14/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH307_Bitwise_Operator6 & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH437_Sum;

            if (!(SUSS_SIH435_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring */
                SUSS_SIH435_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH435_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH435_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVD
                SO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising
                 edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH437_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Delay: Initialize o
                    r reset the state */
                X_SUSS_SIH437_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Delay: Check the fi
                    rst run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Delay: Omitt
                    ed comparison with constant. */
                if (SUSS_SIH435_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Delay: Init
                        ialize the state */
                    X_SUSS_SIH437_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO/Clas
                sifierErrHnd14/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH435_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
                /ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH437_Sum = X_SUSS_SIH437_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerV
                DSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO/Cla
                ssifierErrHnd14/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with c
                onstant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Relation
                al Operator1 */
            if (SUSS_SIH437_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH437_Delay = SUSS_SIH437_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH437_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerV
                DSO/ClassifierErrHnd14/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO/Cla
                ssifierErrHnd14/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH307_Bitwise_Operator6 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerVDSO/ClassifierErrHnd14/ClassifierMonitoring/Switch2 */
                SUSS_SIH435_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH439_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO/
                    ClassifierErrHnd14/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH439_Rescaler = ((uint8) (SUSS_SIH307_Bitwise_Operator6 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerVDSO/ClassifierErrHnd14/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO
                    /ClassifierErrHnd14/ClassifierMonitoring/Switch1: Omitted comparison with consta
                    nt.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Log
                    ical Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/
                    Relational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Delay
                     */
                if ((0.F > X_SUSS_SIH437_Delay) && SUSS_SIH439_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/Switch2 */
                    SUSS_SIH435_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        VDSO/ClassifierErrHnd14/ClassifierMonitoring/Switch: Omitted comparison with
                         constant. */
                    if (SUSS_SIH439_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/Sw
                            itch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/Sw
                            itch2 */
                        SUSS_SIH435_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/Sw
                            itch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring/Sw
                            itch2 */
                        SUSS_SIH435_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVD
                SO/ClassifierErrHnd14/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH437_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVDSO/Clas
                sifierErrHnd14/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH435_ROWD) {
                /* outport reset */
                SUSS_SIH435_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH435_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring */
                SUSS_SIH435_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP/Bitwise 
            Operator7
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        SUSS_SIH308_Bitwise_Operator7 = (uint8) (((uint8) (VMM_sc_BrkPed_ItDmdNorm |
         VMM_sc_BrkPed_StReqDmnt)) | VMM_sc_DrvPed_ADmdNorm);

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP/Classifi
            erErrHnd15/ClassifierMonitoring/Enable: Enable condition
            SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP/Classif
            ierErrHnd15/ClassifierMonitoring/Enable: Omitted comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerVMMP/ClassifierErrHnd15/Logical Operator
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerVMMP/ClassifierErrHnd15/Logical Operator1 */
        if (USS_SIH_p_FlgAcvSigMon && (((uint8) (SUSS_SIH308_Bitwise_Operator7 & ((uint8) 32))) ==
         0)) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_SIH449_Sum;

            if (!(SUSS_SIH447_RSWE)) {
                /* initialization for block: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring */
                SUSS_SIH447_ClassifierMonitoring_FirstRun = 1;

                /* set system state to 'enabled' */
                SUSS_SIH447_RSWE = 1;

                /* outport reset necessary if system will be disabled */
                SUSS_SIH447_ROWD = 1;
            }
            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVM
                MP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Delay: Condition for rising
                 edge trigger
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            if (USS_SIH_s_FlgDTCRstrt_measure && (!(X_SUSS_SIH449_Delay_TriggerIn))) {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Delay: Initialize o
                    r reset the state */
                X_SUSS_SIH449_Delay = 1.5F;
            }
            else {
                /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigg
                    erVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Delay: Check the fi
                    rst run stateSignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Delay: Omitt
                    ed comparison with constant. */
                if (SUSS_SIH447_ClassifierMonitoring_FirstRun) {
                    /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/T
                        riggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Delay: Init
                        ialize the state */
                    X_SUSS_SIH449_Delay = 1.5F;
                }
            }

            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP/Clas
                sifierErrHnd15/ClassifierMonitoring: Reset of the first run state */
            SUSS_SIH447_ClassifierMonitoring_FirstRun = 0;

            /* Sum: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
                /ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Sum
                # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrig
                gers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Delay */
            SUSS_SIH449_Sum = X_SUSS_SIH449_Delay - 0.019999999552965164F;

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerV
                MMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Switch
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP/Cla
                ssifierErrHnd15/ClassifierMonitoring/DebounceTimer/Switch: Omitted comparison with c
                onstant.
                # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCod
                eTriggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Relation
                al Operator1 */
            if (SUSS_SIH449_Sum >= -1.F) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH449_Delay = SUSS_SIH449_Sum;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Switch
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Delay
                     */
                X_SUSS_SIH449_Delay = -1.F;
            }

            /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerV
                MMP/ClassifierErrHnd15/ClassifierMonitoring/Switch2
                SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP/Cla
                ssifierErrHnd15/ClassifierMonitoring/Switch2: Omitted comparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/GetBit/Rescaler
                # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Tr
                iggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/GetBit/BitwiseOperator */
            if (((uint8) (SUSS_SIH308_Bitwise_Operator7 & ((uint8) 4))) != 0) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerVMMP/ClassifierErrHnd15/ClassifierMonitoring/Switch2 */
                SUSS_SIH447_Switch2 = 3;
            }
            else {
                /* SLLocal: Default storage class for local variables | Width: 8 */
                boolean SUSS_SIH451_Rescaler;

                /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP/
                    ClassifierErrHnd15/ClassifierMonitoring/GetBit1/Rescaler
                    # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigger
                    s/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/GetBit1/BitwiseOperator */
                SUSS_SIH451_Rescaler = ((uint8) (SUSS_SIH308_Bitwise_Operator7 & ((uint8) 8))) != 0;

                /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trig
                    gerVMMP/ClassifierErrHnd15/ClassifierMonitoring/Switch1
                    SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP
                    /ClassifierErrHnd15/ClassifierMonitoring/Switch1: Omitted comparison with consta
                    nt.
                    # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCo
                    deTriggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Log
                    ical Operator
                    # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                    eCodeTriggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/
                    Relational Operator
                    # combined # Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCode
                    Triggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Delay
                     */
                if ((0.F > X_SUSS_SIH449_Delay) && SUSS_SIH451_Rescaler) {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/Switch1
                        # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubl
                        eCodeTriggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/Switch2 */
                    SUSS_SIH447_Switch2 = 2;
                }
                else {
                    /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/
                        TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/Switch
                        SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Trigger
                        VMMP/ClassifierErrHnd15/ClassifierMonitoring/Switch: Omitted comparison with
                         constant. */
                    if (SUSS_SIH451_Rescaler) {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/Sw
                            itch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/Sw
                            itch2 */
                        SUSS_SIH447_Switch2 = 1;
                    }
                    else {
                        /* Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigg
                            ers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/Switch
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/Sw
                            itch1
                            # combined # Switch: SignalInputHandlerSIH/SignalProcessing/DiagnosticTr
                            oubleCodeTriggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring/Sw
                            itch2 */
                        SUSS_SIH447_Switch2 = 0;
                    }
                }
            }

            /* Delay: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVM
                MP/ClassifierErrHnd15/ClassifierMonitoring/DebounceTimer/Delay: Trigger update code
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_FlgDTCRstrt */
            X_SUSS_SIH449_Delay_TriggerIn = USS_SIH_s_FlgDTCRstrt_measure;
        }
        else {
            /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/TriggerVMMP/Clas
                sifierErrHnd15/ClassifierMonitoring: Omitted comparison with constant. */
            if (SUSS_SIH447_ROWD) {
                /* outport reset */
                SUSS_SIH447_Switch2 = 0;

                /* outport reset not necessary in the next step */
                SUSS_SIH447_ROWD = 0;

                /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/Diagnostic
                    TroubleCodeTriggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring */
                SUSS_SIH447_RSWE = 0;
            }
        }

        /* SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Bitwise Operator
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_BitFldDTC
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/BitwiseOperator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/ShiftArithmetic9
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/ShiftArithmetic8
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/ShiftArithmetic7
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/ShiftArithmetic14
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/ShiftArithmetic6
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/ShiftArithmetic5
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/ShiftArithmetic4
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/ShiftArithmetic3
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/ShiftArithmetic2
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/ShiftArithmetic1
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/ShiftArithmetic
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler8
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerACA/ChkErr6/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerACA/ChkErr6/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerACA/ChkErr6/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler9
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler1
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerACC/ChkErr1/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerACC/ChkErr1/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerACC/ChkErr1/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler10
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler2
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerAPI/ChkErr7/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerAPI/ChkErr7/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerAPI/ChkErr7/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler11
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler3
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerDrvDrg/ChkErr3/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerDrvDrg/ChkErr3/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerDrvDrg/ChkErr3/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler12
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler4
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerEPS/ChkErr8/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerEPS/ChkErr8/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerEPS/ChkErr8/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler13
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler5
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerESCBtn/ChkErr5/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerESCBtn/ChkErr5/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerESCBtn/ChkErr5/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler14
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler6
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerESC/ChkErr1/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerESC/ChkErr1/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerESC/ChkErr1/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler15
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler7
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerKLR/ChkErr9/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerKLR/ChkErr9/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerKLR/ChkErr9/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler30
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler16
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerLDA/ChkErr10/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerLDA/ChkErr10/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerLDA/ChkErr10/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler31
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler17
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerMFL/ChkErr11/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerMFL/ChkErr11/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerMFL/ChkErr11/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler18
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler24
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerVDSO/ChkErr12/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerVDSO/ChkErr12/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerVDSO/ChkErr12/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler19
            # combined # SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTriggers/Encode
            16Bits/Rescaler25
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTrigge
            rs/TriggerVMMP/ChkErr13/Logical Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerVMMP/ChkErr13/Relational Operator1
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/DiagnosticTroubleCodeTri
            ggers/TriggerVMMP/ChkErr13/Relational Operator */
        USS_SIH_s_BitFldDTC_measure = (uint16) (((uint16) (((uint16) (((uint16) (((uint16)
         (((uint16) (((uint16) (((uint16) (((uint16) (((uint16) (((uint16) (((uint16) (((uint16)
         ((SUSS_SIH315_Switch2 == 3) || (SUSS_SIH315_Switch2 == 2))) | (((uint16)
         ((SUSS_SIH327_Switch2 == 3) || (SUSS_SIH327_Switch2 == 2))) << 1))) | (((uint16)
         ((SUSS_SIH339_Switch2 == 3) || (SUSS_SIH339_Switch2 == 2))) << 2))) | (((uint16)
         ((SUSS_SIH351_Switch2 == 3) || (SUSS_SIH351_Switch2 == 2))) << 3))) | (((uint16)
         ((SUSS_SIH363_Switch2 == 3) || (SUSS_SIH363_Switch2 == 2))) << 4))) | (((uint16)
         ((SUSS_SIH387_Switch2 == 3) || (SUSS_SIH387_Switch2 == 2))) << 5))) | (((uint16)
         ((SUSS_SIH375_Switch2 == 3) || (SUSS_SIH375_Switch2 == 2))) << 6))) | (((uint16)
         ((SUSS_SIH399_Switch2 == 3) || (SUSS_SIH399_Switch2 == 2))) << 7))) | (((uint16)
         ((SUSS_SIH411_Switch2 == 3) || (SUSS_SIH411_Switch2 == 2))) << 8))) | (((uint16)
         ((SUSS_SIH423_Switch2 == 3) || (SUSS_SIH423_Switch2 == 2))) << 9))) | (((uint16)
         ((SUSS_SIH435_Switch2 == 3) || (SUSS_SIH435_Switch2 == 2))) << 10))) | (((uint16)
         ((SUSS_SIH447_Switch2 == 3) || (SUSS_SIH447_Switch2 == 2))) << 11))) &
         USS_SIH_p_BitFldEnaDTC);

        /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd39/Switch
            SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd39/Switch: Omitted comparison wi
            th constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd39/Logical
             Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd39/Rela
            tional Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH271_Merge_b)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd39/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_AgStg_rad */
            USS_SIH_s_AgStg_rad_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/Steering/InErrHnd39/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_AgStg_rad
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_AgStg_rad_measure = VDSO_s_AgStgWhlOfsCmp;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd10/Switch
            SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd10/Switch: Omitte
            d comparison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InE
            rrHnd10/Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/
            InErrHnd10/Relational Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        if (USS_SIH_p_FlgAcvSubVal && (0 != API_sc_StDrvPed)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd10/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_APIStDrvPed */
            USS_SIH_s_APIStDrvPed_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/EgomotionAndDriverInput/InErrHnd10/Swi
                tch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_APIStDrvPed
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_APIStDrvPed_measure = API_s_StDrvPed;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd1/Switch
            SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd1/Switch: Omitted compa
            rison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd1
            /Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrH
            nd1/Relational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH270_Switch1)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd1/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACCStLgt */
            USS_SIH_s_ACCStLgt_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd1/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACCStLgt
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_ACCStLgt_measure = ACC_s_LgtCtl_StAcv;
        }

        /* Logical: SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/AcaReplacementCond
            ition/Logical Operator1
            # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeasure/
            MeasSubsys/Data Type Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeasure/
            Signal Conversion
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/AcaR
            eplacementCondition/Logical Operator3
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/AcaR
            eplacementCondition/Logical Operator4
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/AcaR
            eplacementCondition/Logical Operator
            # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/AcaReplacemen
            tCondition/Rescaler
            # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/AcaReplacemen
            tCondition/Rescaler
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/A
            caReplacementCondition/Relational Operator
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CodCpStgWhl
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/A
            caReplacementCondition/Relational Operator
            # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CodCpStgWhl
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/A
            caReplacementCondition/Relational Operator2
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/A
            caReplacementCondition/Relational Operator1
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
        USS_SIH_s_RplcACA_b_measure = (USS_p_FlgOvrdACARepl || (((uint8) (((uint8) (1 ==
         USS_SIH_s_CodCpStgWhl_measure)) + ((uint8) (2 == USS_SIH_s_CodCpStgWhl_measure)))) <= 0))
         && ((OD_s_Obj_01_dx_v > 0.F) || (OD_s_Obj_01_vx_v > 0.F));

        /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace2/Switch1
            SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace2/Switch1: Omitted compa
            rison with constant.
            # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeasure/
            MeasSubsys/Data Type Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeasure/
            Signal Conversion */
        if (USS_SIH_s_RplcACA_b_measure) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace2/Switch1 */
            SUSS_SIH289_Switch1 = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace2/Switch1 */
            SUSS_SIH289_Switch1 = SUSS_SIH269_Switch2;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd5/Switch
            SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd5/Switch: Omitted compa
            rison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd5
            /Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrH
            nd5/Relational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH289_Switch1)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd5/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACAVxObj01_mps */
            USS_SIH_s_ACAVxObj01_mps_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace2/Switch
                SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace2/Switch: Omitted co
                mparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeas
                ure/MeasSubsys/Data Type Conversion
                # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeas
                ure/Signal Conversion */
            if (USS_SIH_s_RplcACA_b_measure) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace2/Switch
                    # combined # Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/In
                    ErrHnd5/Switch
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACAVxObj01_mps
                    # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
                USS_SIH_s_ACAVxObj01_mps_measure = OD_s_Obj_01_vx_v;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace2/Switch
                    # combined # Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/In
                    ErrHnd5/Switch
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACAVxObj01_mps
                    # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
                USS_SIH_s_ACAVxObj01_mps_measure = ACA_s_Obj_01_vx_v;
            }
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd59/Switch
            SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd59/Switch: Omitted comp
            arison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd5
            9/Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrH
            nd59/Relational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH269_Switch3)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd59/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACAStLgt */
            USS_SIH_s_ACAStLgt_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd59/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACAStLgt
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_ACAStLgt_measure = ACA_s_Status_Laengs;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd58/Switch
            SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd58/Switch: Omitted comp
            arison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd5
            8/Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrH
            nd58/Relational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH269_Switch4)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd58/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACAStLat */
            USS_SIH_s_ACAStLat_measure = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd58/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACAStLat
                # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
            USS_SIH_s_ACAStLat_measure = ACA_s_Status_Quer;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace1/Switch1
            SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace1/Switch1: Omitted compa
            rison with constant.
            # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeasure/
            MeasSubsys/Data Type Conversion
            # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeasure/
            Signal Conversion */
        if (USS_SIH_s_RplcACA_b_measure) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace1/Switch1 */
            SUSS_SIH288_Switch1 = 0;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace1/Switch1 */
            SUSS_SIH288_Switch1 = SUSS_SIH269_Switch1;
        }

        /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd3/Switch
            SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd3/Switch: Omitted compa
            rison with constant.
            # combined # Logical: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd3
            /Logical Operator
            # combined # Relational: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrH
            nd3/Relational Operator */
        if (USS_SIH_p_FlgAcvSubVal && (0 != SUSS_SIH288_Switch1)) {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/InErrHnd3/Switch
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACADxObj01_m */
            USS_SIH_s_ACADxObj01_m_measure = 0.F;
        }
        else {
            /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace1/Switch
                SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace1/Switch: Omitted co
                mparison with constant.
                # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeas
                ure/MeasSubsys/Data Type Conversion
                # combined # SignalInputHandlerSIH/SignalProcessing/ReplacementCalculation/MultiMeas
                ure/Signal Conversion */
            if (USS_SIH_s_RplcACA_b_measure) {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace1/Switch
                    # combined # Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/In
                    ErrHnd3/Switch
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACADxObj01_m
                    # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
                USS_SIH_s_ACADxObj01_m_measure = OD_s_Obj_01_dx_v;
            }
            else {
                /* Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/replace1/Switch
                    # combined # Switch: SignalInputHandlerSIH/SignalProcessing/CustomerFunctions/In
                    ErrHnd3/Switch
                    # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ACADxObj01_m
                    # combined # SignalInputHandlerSIH/SignalProcessing/Signal Conversion */
                USS_SIH_s_ACADxObj01_m_measure = ACA_s_Obj_01_dx_v;
            }
        }

        /* outport reset necessary if system will be disabled */
        SUSS_SIH77_ROWD = 1;
    }
    else {
        /* SignalInputHandlerSIH/SignalProcessing: Omitted comparison with constant. */
        if (SUSS_SIH77_ROWD) {
            /* outport reset
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CntrStgDet_SigSt */
            USS_SIH_s_CntrStgDet_SigSt_measure = 0;

            /* outport reset
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_ComLvl_p100_SigSt
                 */
            USS_SIH_s_ComLvl_p100_SigSt_measure = 0;

            /* outport reset
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_CpStgWhlTch_SigSt
                 */
            USS_SIH_s_CpStgWhlTch_SigSt_measure = 0;

            /* outport reset
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_DynLvl_p100_SigSt
                 */
            USS_SIH_s_DynLvl_p100_SigSt_measure = 0;

            /* outport reset
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EPSStStgTq_SigSt */
            USS_SIH_s_EPSStStgTq_SigSt_measure = 0;

            /* outport reset
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_EffLvl_p100_SigSt
                 */
            USS_SIH_s_EffLvl_p100_SigSt_measure = 0;

            /* outport reset
                # combined # TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_SteeringActivity_Si
                gSt */
            USS_SIH_s_SteeringActivity_SigSt_measure = 0;

            /* outport reset not necessary in the next step */
            SUSS_SIH77_ROWD = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerACA/ClassifierErrHnd8/ClassifierMonitoring */
            SUSS_SIH315_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerACC/ClassifierErrHnd3/ClassifierMonitoring */
            SUSS_SIH327_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerAPI/ClassifierErrHnd9/ClassifierMonitoring */
            SUSS_SIH339_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerDrvDrg/ClassifierErrHnd5/ClassifierMonitoring */
            SUSS_SIH351_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerEPS/ClassifierErrHnd10/ClassifierMonitoring */
            SUSS_SIH363_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerESC/ClassifierErrHnd3/ClassifierMonitoring */
            SUSS_SIH375_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerESCBtn/ClassifierErrHnd7/ClassifierMonitoring */
            SUSS_SIH387_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerKLR/ClassifierErrHnd11/ClassifierMonitoring */
            SUSS_SIH399_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerLDA/ClassifierErrHnd12/ClassifierMonitoring */
            SUSS_SIH411_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerMFL/ClassifierErrHnd13/ClassifierMonitoring */
            SUSS_SIH423_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerVDSO/ClassifierErrHnd14/ClassifierMonitoring */
            SUSS_SIH435_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/DiagnosticTrou
                bleCodeTriggers/TriggerVMMP/ClassifierErrHnd15/ClassifierMonitoring */
            SUSS_SIH447_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStates/S
                ignalStateCntrStgDet/ClassifierErrHnd/ClassifierMonitoring */
            SUSS_SIH563_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStates/S
                ignalStateComLvl/ClassifierErrHnd/ClassifierMonitoring */
            SUSS_SIH574_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStates/S
                ignalStateCpStgWhl/ClassifierErrHnd/ClassifierMonitoring */
            SUSS_SIH585_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStates/S
                ignalStateDynLvl/ClassifierErrHnd/ClassifierMonitoring */
            SUSS_SIH596_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStates/S
                ignalStateEffLvl/ClassifierErrHnd/ClassifierMonitoring */
            SUSS_SIH607_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStates/S
                ignalStateStStgTq/ClassifierErrHnd1/ClassifierMonitoring */
            SUSS_SIH618_RSWE = 0;

            /* set system state to 'disabled': SignalInputHandlerSIH/SignalProcessing/SignalStates/S
                ignalStateStgAcv/ClassifierErrHnd/ClassifierMonitoring */
            SUSS_SIH629_RSWE = 0;
        }
    }

    /* TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_RGTrfcMovmtPhaSt */
    *USS_SIH_s_RGTrfcMovmtPhaSt = SUSS_SIH77_Signal_Conversion_yc;

    /* TargetLink outport: SignalInputHandlerSIH/USS_SIH_s_RGTrfcLghtDst_dm */
    *USS_SIH_s_RGTrfcLghtDst_dm = IF_SUSS_SIH249_Constant;
}





/*------------------------------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
