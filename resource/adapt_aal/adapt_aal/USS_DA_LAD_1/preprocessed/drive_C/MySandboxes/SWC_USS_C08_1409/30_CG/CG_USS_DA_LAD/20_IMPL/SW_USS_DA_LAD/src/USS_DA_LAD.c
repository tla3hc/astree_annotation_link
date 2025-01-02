# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 10 "<built-in>"




# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c" 2
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_DA_LAD
 *** TargetLink subsystem : USS_DA_LAD/FrameUSS_DA_LAD/Subsystem/FrameUSS_DA_LAD/DriverActivityLater
 ***                        alDA_LAD
 *** Codefile             : USS_DA_LAD.c
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
 *** SUBSYS         CORRESPONDING SIMULINK SUBSYSTEM
 *** SUSS_DA_LAD1   DriverActivityLateralDA_LAD
 *** SUSS_DA_LAD2   DriverActivityLateralDA_LAD/CounterSteeringDetection
 *** SUSS_DA_LAD3   DriverActivityLateralDA_LAD/LateralSteeringActivity
 *** SUSS_DA_LAD4   DriverActivityLateralDA_LAD/MultiMeasure4
 *** SUSS_DA_LAD5   DriverActivityLateralDA_LAD/MultiMeasure5
 *** SUSS_DA_LAD6   DriverActivityLateralDA_LAD/MultiMeasure6
 *** SUSS_DA_LAD7   DriverActivityLateralDA_LAD/CounterSteeringDetection/ControllerDriverSignCompari
 ***                son
 *** SUSS_DA_LAD8   DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive
 *** SUSS_DA_LAD9   DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity
 *** SUSS_DA_LAD10  DriverActivityLateralDA_LAD/CounterSteeringDetection/LateralRequestActive
 *** SUSS_DA_LAD11  DriverActivityLateralDA_LAD/CounterSteeringDetection/MultiMeasure5
 *** SUSS_DA_LAD12  DriverActivityLateralDA_LAD/CounterSteeringDetection/ReqBlock1
 *** SUSS_DA_LAD13  DriverActivityLateralDA_LAD/CounterSteeringDetection/ControllerDriverSignCompari
 ***                son/ReqBlock
 *** SUSS_DA_LAD14  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure
 *** SUSS_DA_LAD15  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure1
 *** SUSS_DA_LAD16  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure2
 *** SUSS_DA_LAD17  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure3
 *** SUSS_DA_LAD18  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/ReqBl
 ***                ock
 *** SUSS_DA_LAD19  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Trigg
 ***                erDelay
 *** SUSS_DA_LAD20  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure/MeasSubsys
 *** SUSS_DA_LAD21  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD22  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure1/MeasSubsys
 *** SUSS_DA_LAD23  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure1/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD24  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure2/MeasSubsys
 *** SUSS_DA_LAD25  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure2/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD26  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure3/MeasSubsys
 *** SUSS_DA_LAD27  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Multi
 ***                Measure3/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD28  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Trigg
 ***                erDelay/ReqBlock
 *** SUSS_DA_LAD29  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Trigg
 ***                erDelay/TurnOnDelayDynamic
 *** SUSS_DA_LAD30  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Trigg
 ***                erDelay/TurnOnDelayDynamic/TurnOnDelayDynamic
 *** SUSS_DA_LAD31  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Trigg
 ***                erDelay/TurnOnDelayDynamic/TurnOnDelayDynamic/DocBlock
 *** SUSS_DA_LAD32  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Trigg
 ***                erDelay/TurnOnDelayDynamic/TurnOnDelayDynamic/DocBlock/EmptySubsystem
 *** SUSS_DA_LAD33  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Hig
 ***                hTorqueLongDelay
 *** SUSS_DA_LAD34  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Low
 ***                TorqueLongDelay
 *** SUSS_DA_LAD35  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure10
 *** SUSS_DA_LAD36  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure4
 *** SUSS_DA_LAD37  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure6
 *** SUSS_DA_LAD38  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure7
 *** SUSS_DA_LAD39  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure8
 *** SUSS_DA_LAD40  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure9
 *** SUSS_DA_LAD41  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Req
 ***                Block
 *** SUSS_DA_LAD42  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Req
 ***                Block1
 *** SUSS_DA_LAD43  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Hig
 ***                hTorqueLongDelay/TurnOnDelayDynamic
 *** SUSS_DA_LAD44  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Hig
 ***                hTorqueLongDelay/TurnOnDelayDynamic/TurnOnDelayDynamic
 *** SUSS_DA_LAD45  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Hig
 ***                hTorqueLongDelay/TurnOnDelayDynamic/TurnOnDelayDynamic/DocBlock
 *** SUSS_DA_LAD46  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Hig
 ***                hTorqueLongDelay/TurnOnDelayDynamic/TurnOnDelayDynamic/DocBlock/EmptySubsystem
 *** SUSS_DA_LAD47  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Low
 ***                TorqueLongDelay/TurnOnDelayDynamic
 *** SUSS_DA_LAD48  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Low
 ***                TorqueLongDelay/TurnOnDelayDynamic/TurnOnDelayDynamic
 *** SUSS_DA_LAD49  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Low
 ***                TorqueLongDelay/TurnOnDelayDynamic/TurnOnDelayDynamic/DocBlock
 *** SUSS_DA_LAD50  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Low
 ***                TorqueLongDelay/TurnOnDelayDynamic/TurnOnDelayDynamic/DocBlock/EmptySubsystem
 *** SUSS_DA_LAD51  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure10/MeasSubsys
 *** SUSS_DA_LAD52  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure10/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD53  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure4/MeasSubsys
 *** SUSS_DA_LAD54  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure4/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD55  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure6/MeasSubsys
 *** SUSS_DA_LAD56  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure6/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD57  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure7/MeasSubsys
 *** SUSS_DA_LAD58  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure7/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD59  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure8/MeasSubsys
 *** SUSS_DA_LAD60  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure8/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD61  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure9/MeasSubsys
 *** SUSS_DA_LAD62  DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mul
 ***                tiMeasure9/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD63  DriverActivityLateralDA_LAD/CounterSteeringDetection/LateralRequestActive/ReqBlo
 ***                ck
 *** SUSS_DA_LAD64  DriverActivityLateralDA_LAD/CounterSteeringDetection/MultiMeasure5/MeasSubsys
 *** SUSS_DA_LAD65  DriverActivityLateralDA_LAD/CounterSteeringDetection/MultiMeasure5/MeasSubsys/To
 ***                WorkspaceMeasurement
 *** SUSS_DA_LAD66  DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi
 *** SUSS_DA_LAD67  DriverActivityLateralDA_LAD/LateralSteeringActivity/IntervalDynamic
 *** SUSS_DA_LAD68  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased
 *** SUSS_DA_LAD69  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased
 *** SUSS_DA_LAD70  DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure
 *** SUSS_DA_LAD71  DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure1
 *** SUSS_DA_LAD72  DriverActivityLateralDA_LAD/LateralSteeringActivity/ReqBlock
 *** SUSS_DA_LAD73  DriverActivityLateralDA_LAD/LateralSteeringActivity/ReqBlock1
 *** SUSS_DA_LAD74  DriverActivityLateralDA_LAD/LateralSteeringActivity/ReqBlock2
 *** SUSS_DA_LAD75  DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp
 *** SUSS_DA_LAD76  DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Time2Steps1
 *** SUSS_DA_LAD77  DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/CountUp
 *** SUSS_DA_LAD78  DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/CountUp/
 ***                DocBlock
 *** SUSS_DA_LAD79  DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/CountUp/
 ***                DocBlock/EmptySubsystem
 *** SUSS_DA_LAD80  DriverActivityLateralDA_LAD/LateralSteeringActivity/IntervalDynamic/IntervalDyna
 ***                mic
 *** SUSS_DA_LAD81  DriverActivityLateralDA_LAD/LateralSteeringActivity/IntervalDynamic/IntervalDyna
 ***                mic/DocBlock
 *** SUSS_DA_LAD82  DriverActivityLateralDA_LAD/LateralSteeringActivity/IntervalDynamic/IntervalDyna
 ***                mic/DocBlock/EmptySubsystem
 *** SUSS_DA_LAD83  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/MultiMeasure1
 *** SUSS_DA_LAD84  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/MultiMeasure2
 *** SUSS_DA_LAD85  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/MultiMeasure3
 *** SUSS_DA_LAD86  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ProtectedDivision
 *** SUSS_DA_LAD87  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ReqBlock1
 *** SUSS_DA_LAD88  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ReqBlock2
 *** SUSS_DA_LAD89  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ReqBlock3
 *** SUSS_DA_LAD90  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ThresholdCalculation
 *** SUSS_DA_LAD91  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/MultiMeasure1/MeasSubsys
 *** SUSS_DA_LAD92  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/MultiMeasure1/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD93  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/MultiMeasure2/MeasSubsys
 *** SUSS_DA_LAD94  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/MultiMeasure2/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD95  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/MultiMeasure3/MeasSubsys
 *** SUSS_DA_LAD96  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/MultiMeasure3/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD97  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ProtectedDivision/ProtectedDivision
 *** SUSS_DA_LAD98  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ProtectedDivision/ProtectedDivision/DocBlock
 *** SUSS_DA_LAD99  DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ProtectedDivision/ProtectedDivision/DocBlock/EmptySubsystem
 *** SUSS_DA_LAD100 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ThresholdCalculation/MultiMeasure1
 *** SUSS_DA_LAD101 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ThresholdCalculation/ReqBlock
 *** SUSS_DA_LAD102 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ThresholdCalculation/MultiMeasure1/MeasSubsys
 *** SUSS_DA_LAD103 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD104 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation
 *** SUSS_DA_LAD105 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/MultiMeasure2
 *** SUSS_DA_LAD106 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/ProtectedDivision
 *** SUSS_DA_LAD107 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/ReqBlock1
 *** SUSS_DA_LAD108 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/ReqBlock3
 *** SUSS_DA_LAD109 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/ThresholdCalculation
 *** SUSS_DA_LAD110 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/Derivation
 *** SUSS_DA_LAD111 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/LowpassSecondOrder
 *** SUSS_DA_LAD112 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/MultiMeasure
 *** SUSS_DA_LAD113 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/MultiMeasure3
 *** SUSS_DA_LAD114 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/ReqBlock1
 *** SUSS_DA_LAD115 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/ReqBlock2
 *** SUSS_DA_LAD116 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/Derivation/Derivation
 *** SUSS_DA_LAD117 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/Derivation/Derivation/DocBlock
 *** SUSS_DA_LAD118 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/Derivation/Derivation/DocBlock/EmptySubsystem
 *** SUSS_DA_LAD119 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients
 *** SUSS_DA_LAD120 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/LowpassSecondOrder/LowpassFilterSecondOrder
 *** SUSS_DA_LAD121 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/LowpassSecondOrder/LowpassFilterSecondOrder/DocBlock
 *** SUSS_DA_LAD122 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/LowpassSecondOrder/LowpassFilterSecondOrder/DocBlock/E
 ***                mptySubsystem
 *** SUSS_DA_LAD123 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/MultiMeasure/MeasSubsys
 *** SUSS_DA_LAD124 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/MultiMeasure/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD125 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/MultiMeasure3/MeasSubsys
 *** SUSS_DA_LAD126 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/Derivation/MultiMeasure3/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD127 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/MultiMeasure2/MeasSubsys
 *** SUSS_DA_LAD128 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/MultiMeasure2/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD129 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/ProtectedDivision/ProtectedDivision
 *** SUSS_DA_LAD130 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/ProtectedDivision/ProtectedDivision/DocBlock
 *** SUSS_DA_LAD131 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/ProtectedDivision/ProtectedDivision/DocBlock/EmptySubsystem
 *** SUSS_DA_LAD132 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/ThresholdCalculation/MultiMeasure1
 *** SUSS_DA_LAD133 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/ThresholdCalculation/ReqBlock2
 *** SUSS_DA_LAD134 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/ThresholdCalculation/MultiMeasure1/MeasSubsys
 *** SUSS_DA_LAD135 DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
 ***                eVelocityBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/ToWorkspaceMeasurem
 ***                ent
 *** SUSS_DA_LAD136 DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure/MeasSubsys
 *** SUSS_DA_LAD137 DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure/MeasSubsys/ToWo
 ***                rkspaceMeasurement
 *** SUSS_DA_LAD138 DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure1/MeasSubsys
 *** SUSS_DA_LAD139 DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure1/MeasSubsys/ToW
 ***                orkspaceMeasurement
 *** SUSS_DA_LAD140 DriverActivityLateralDA_LAD/MultiMeasure4/MeasSubsys
 *** SUSS_DA_LAD141 DriverActivityLateralDA_LAD/MultiMeasure4/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD142 DriverActivityLateralDA_LAD/MultiMeasure5/MeasSubsys
 *** SUSS_DA_LAD143 DriverActivityLateralDA_LAD/MultiMeasure5/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DA_LAD144 DriverActivityLateralDA_LAD/MultiMeasure6/MeasSubsys
 *** SUSS_DA_LAD145 DriverActivityLateralDA_LAD/MultiMeasure6/MeasSubsys/ToWorkspaceMeasurement
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

# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */



# 1 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h" 1
/* ----------------------------------------------------------------------
 *    AbsInt -- Angewandte Informatik GmbH
 *    http://www.AbsInt.de/
 * ----------------------------------------------------------------------
 *
 * Example implementation of the ISO/IEC 9899:1999 (E) standard C
 * library for static program analyses with Astree.
 *
 * Developed and distributed by AbsInt, under license from the CNRS/ENS.
 * ---------------------------------------------------------------------- */



/* utility */




/* basic */
# 74 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* char */
# 126 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* short */
# 158 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* int */
# 189 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* long */
# 220 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* long long */
# 274 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* float */
# 303 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* double */
# 332 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* long double */
# 374 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* rounding mode */
# 388 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* __ASTREE_SIZE_MAX */
# 470 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\astree_config.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 15 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h" 2





typedef float float_t;
typedef double double_t;
# 49 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h"
/* macros required by the standard */
# 61 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h"
enum {
    FP_INFINITE,
    FP_NAN,
    FP_NORMAL,
    FP_SUBNORMAL,
    FP_ZERO,
};

/* FP_FAST_FMA, FP_FAST_FMAF, FP_FAST_FMAL not supported */
# 85 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h"
typedef float __astree_float;
typedef double __astree_double;
typedef long double __astree_long_double;
# 121 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h"
static inline int __astree_signbit_f(float x)
{
    __ASTREE_attributes((raise_at_caller));
    int any = 0;
    __ASTREE_modify((any; [0, 1]));
    return (x) < 0.0f ? 1 : ((x) > 0.0f ? 0 : any);
}

static inline int __astree_signbit_d(double x)
{
    __ASTREE_attributes((raise_at_caller));
    int any = 0;
    __ASTREE_modify((any; [0, 1]));
    return (x) < 0.0 ? 1 : ((x) > 0.0 ? 0 : any);
}

static inline int __astree_signbit_ld(long double x)
{
    __ASTREE_attributes((raise_at_caller));
    int any = 0;
    __ASTREE_modify((any; [0, 1]));
    return (x) < 0.0L ? 1 : ((x) > 0.0L ? 0 : any);
}







double acos(double x);
float acosf(float x);
long double acosl(long double x);
double asin(double x);
float asinf(float x);
long double asinl(long double x);
double atan(double x);
float atanf(float x);
long double atanl(long double x);
double atan2(double y, double x);
float atan2f(float y, float x);
long double atan2l(long double y, long double x);
double cos(double x);
float cosf(float x);
long double cosl(long double x);
double sin(double x);
float sinf(float x);
long double sinl(long double x);
double tan(double x);
float tanf(float x);
long double tanl(long double x);
double acosh(double x);
float acoshf(float x);
long double acoshl(long double x);
double asinh(double x);
float asinhf(float x);
long double asinhl(long double x);
double atanh(double x);
float atanhf(float x);
long double atanhl(long double x);
double cosh(double x);
float coshf(float x);
long double coshl(long double x);
double sinh(double x);
float sinhf(float x);
long double sinhl(long double x);
double tanh(double x);
float tanhf(float x);
long double tanhl(long double x);
double exp(double x);
float expf(float x);
long double expl(long double x);
double exp2(double x);
float exp2f(float x);
long double exp2l(long double x);
double expm1(double x);
float expm1f(float x);
long double expm1l(long double x);
double frexp(double value, int *exp);
float frexpf(float value, int *exp);
long double frexpl(long double value, int *exp);
int ilogb(double x);
int ilogbf(float x);
int ilogbl(long double x);
double ldexp(double x, int exp);
float ldexpf(float x, int exp);
long double ldexpl(long double x, int exp);
double log(double x);
float logf(float x);
long double logl(long double x);
double log10(double x);
float log10f(float x);
long double log10l(long double x);
double log1p(double x);
float log1pf(float x);
long double log1pl(long double x);
double log2(double x);
float log2f(float x);
long double log2l(long double x);
double logb(double x);
float logbf(float x);
long double logbl(long double x);
double modf(double value, double *iptr);
float modff(float value, float *iptr);
long double modfl(long double value, long double *iptr);
double scalbn(double x, int n);
float scalbnf(float x, int n);
long double scalbnl(long double x, int n);
double scalbln(double x, long int n);
float scalblnf(float x, long int n);
long double scalblnl(long double x, long int n);
double cbrt(double x);
float cbrtf(float x);
long double cbrtl(long double x);
double fabs(double x);
float fabsf(float x);
long double fabsl(long double x);
double hypot(double x, double y);
float hypotf(float x, float y);
long double hypotl(long double x, long double y);
double pow(double x, double y);
float powf(float x, float y);
long double powl(long double x, long double y);
double sqrt(double x);
float sqrtf(float x);
long double sqrtl(long double x);
double erf(double x);
float erff(float x);
long double erfl(long double x);
double erfc(double x);
float erfcf(float x);
long double erfcl(long double x);
double lgamma(double x);
float lgammaf(float x);
long double lgammal(long double x);
double tgamma(double x);
float tgammaf(float x);
long double tgammal(long double x);
double ceil(double x);
float ceilf(float x);
long double ceill(long double x);
double floor(double x);
float floorf(float x);
long double floorl(long double x);
double nearbyint(double x);
float nearbyintf(float x);
long double nearbyintl(long double x);
double rint(double x);
float rintf(float x);
long double rintl(long double x);
long int lrint(double x);
long int lrintf(float x);
long int lrintl(long double x);
long long int llrint(double x);
long long int llrintf(float x);
long long int llrintl(long double x);
double round(double x);
float roundf(float x);
long double roundl(long double x);
long int lround(double x);
long int lroundf(float x);
long int lroundl(long double x);
long long int llround(double x);
long long int llroundf(float x);
long long int llroundl(long double x);
double trunc(double x);
float truncf(float x);
long double truncl(long double x);
double fmod(double x, double y);
float fmodf(float x, float y);
long double fmodl(long double x, long double y);
double remainder(double x, double y);
float remainderf(float x, float y);
long double remainderl(long double x, long double y);
double remquo(double x, double y, int *quo);
float remquof(float x, float y, int *quo);
long double remquol(long double x, long double y, int *quo);
double copysign(double x, double y);
float copysignf(float x, float y);
long double copysignl(long double x, long double y);
double nan(const char *tagp);
float nanf(const char *tagp);
long double nanl(const char *tagp);
double nextafter(double x, double y);
float nextafterf(float x, float y);
long double nextafterl(long double x, long double y);
double nexttoward(double x, long double y);
float nexttowardf(float x, long double y);
long double nexttowardl(long double x, long double y);
double fdim(double x, double y);
float fdimf(float x, float y);
long double fdiml(long double x, long double y);
double fmax(double x, double y);
float fmaxf(float x, float y);
long double fmaxl(long double x, long double y);
double fmin(double x, double y);
float fminf(float x, float y);
long double fminl(long double x, long double y);
double fma(double x, double y, double z);
float fmaf(float x, float y, float z);
long double fmal(long double x, long double y, long double z);
# 339 "C:/Program Files/AbsInt/Advanced Analyzer/c/b12875094/share/clibrary/include\\math.h"
/* RULECHECKER_suppress(rules-category) */
__ASTREE_attributes((coverage_ignore, raise_at_caller, hide_directives));
# 333 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c" 2
# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src\\USS_Param.h" 1
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
# 64 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_Param/src\\USS_Param.h" 2

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
# 334 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c" 2
# 1 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.h" 1
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
# 66 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.h" 2

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
    Description: Beschreibt die aktuell angeforderte Regelgroeße des Zahnstangenpositionsreglers ink
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
# 335 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c" 2

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
    SLStaticGlobalConst: Default storage class for global static const variables | Width: N.A.
\**************************************************************************************************/
static const MAP_Tab1DS0I2T3126_USS_DA_LAD SUSS_DA_LAD68_Look_Up_Table_map = {
    8, /* Nx: Description: number of axis points */
    &(USS_LAD_px_VThStgAcv[0]), /* x_table: Description: vector with axis values */
    &(USS_LAD_p1_FacStgAcvAdp[0]) /* z_table: Description: vector with table values */
};
# 370 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c"
/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 16
\**************************************************************************************************/
uint16 USS_LAD_s_LatInAcvTi_s_measure = 0; /* 
    Unit: s
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: time since last driver steering activity */
# 387 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c"
/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 32
\**************************************************************************************************/
static float32 SUSS_DA_LAD119_Product2 = 0.F;
static float32 SUSS_DA_LAD119_Product4 = 0.F;
static float32 SUSS_DA_LAD119_Product5 = 0.F;
static float32 SUSS_DA_LAD119_Product6 = 0.F;
static float32 X_SUSS_DA_LAD110_UnitDelay = 0.F;
static float32 X_SUSS_DA_LAD111_UnitDelay = 0.F;
static float32 X_SUSS_DA_LAD111_UnitDelay1 = 0.F;
static float32 X_SUSS_DA_LAD111_UnitDelay2 = 0.F;
# 408 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c"
/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 8
\**************************************************************************************************/
uint8 USS_LAD_s_CntrStgDet_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Countersteering detection */
uint8 USS_LAD_s_LatStgAcv_measure = 0; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: Current observed driver steering activity */

/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 8
\**************************************************************************************************/
static uint8 X_SUSS_DA_LAD29_UnitDelay = 0;
static uint8 X_SUSS_DA_LAD43_UnitDelay = 0;
static uint8 X_SUSS_DA_LAD47_UnitDelay = 0;
# 437 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c"
/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 8
\**************************************************************************************************/
static boolean SUSS_DA_LAD1_DriverActivityLateralDA_LAD_FirstRun = 1;
# 451 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c"
/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 16
\**************************************************************************************************/
static uint16 X_SUSS_DA_LAD75_Delay;
# 465 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c"
/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 32
\**************************************************************************************************/
float32 USS_DrvCtlTqVFac_measure;
float32 USS_GC_s_EPSStgTqFilAbs_measure;
float32 USS_GC_s_EPSStgTqVAbs_measure;
float32 USS_GC_s_EPSStgTqV_measure;
float32 USS_LAD_s_FacStgAcvAdp_measure;
float32 USS_LAD_s_StgTqTh_measure;
float32 USS_LAD_s_StgTqVTh_measure;
float32 USS_s_DrvCtlTqFac_measure;
# 485 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c"
/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 8
\**************************************************************************************************/
uint8 USS_LAD_s_LatStgAcvTqV_measure;
uint8 USS_LAD_s_LatStgAcvTq_measure;
# 499 "C:/MySandboxes/SWC_USS_C08_1409/30_CG/CG_USS_DA_LAD/20_IMPL/SW_USS_DA_LAD/src/USS_DA_LAD.c"
/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 8
\**************************************************************************************************/
boolean USS_LAD_s_CntrAct_measure;
boolean USS_LAD_s_CntrStgDetAct_measure;
boolean USS_LAD_s_DrvHiLngTq_measure;
boolean USS_LAD_s_DrvHiShoTq_measure;
boolean USS_LAD_s_DrvLoLngTq_measure;
boolean USS_LAD_s_DrvLoShoTq_measure;
boolean USS_LAD_s_HiCntrStgDet_measure;
boolean USS_LAD_s_LatCtlReqAct_measure;
boolean USS_LAD_s_LatStgAcvIsDet_measure;
boolean USS_LAD_s_LoCntrStgDet_measure;
boolean USS_s_CtlDrvSignComp_measure;





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
 ***        Tab1DIntp2I1T438_USS_DA_LAD
 *** 
 ***  DESCRIPTION:
 ***        Automatic generated function for Interpolation using PreLook-Up blocks.
 *** 
 ***  PARAMETERS:
 ***        Type               Name                Description
 ***        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***        const float32 *    z_table             pointer to table vector
 ***        float32            irx                 1. table input index
 ***        float32            fractionX           1. table input fraction
 ***
 ***  RETURNS:
 ***        float32
 ***
 ***  SETTINGS:
 ***        Number of table dimensions.........: 1
 ***        Interpolation......................: on
 ***        Distances fit into given bitlengths: no
 ***
\**************************************************************************************************/
float32 Tab1DIntp2I1T438_USS_DA_LAD(const float32 * z_table, float32 irx, float32 fractionX)
{
    /* SLLocal: Default storage class for local variables | Width: 32 */
    float32 Aux_F32;

    z_table += ((sint32) irx);
    Aux_F32 = *(z_table++);
    if (fractionX != 0.F) {
        Aux_F32 += ((*z_table - Aux_F32) * fractionX);
    }
    return Aux_F32;
}

/**************************************************************************************************\
 ***  FUNCTION:
 ***        Tab1DS0I2T3126_USS_DA_LAD
 *** 
 ***  DESCRIPTION:
 ***        Generated function for look-up tables.
 *** 
 ***  PARAMETERS:
 ***        Type               Name                Description
 ***        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***        const MAP_Tab1DS0I2T3126_USS_DA_LAD * mapdata structure
 ***        float32            x                   table input
 ***
 ***  RETURNS:
 ***        float32
 ***
 ***  SETTINGS:
 ***        Search algorithm...................: linear search, start low
 ***        Look-up method.....................: Interpolation - Use end values
 ***        Distances fit into given bitlengths: no
 ***        Behavior at boundaries.............: no
 ***        Starting point.....................: - (non-equidistant implementation)
 ***        Scaling unit.......................: - (non-equidistant implementation)
 ***
\**************************************************************************************************/
float32 Tab1DS0I2T3126_USS_DA_LAD(const MAP_Tab1DS0I2T3126_USS_DA_LAD * map, float32 x)
{
    /* SLLutLocalConst: Default storage class for local variables | Width: N.A. */
    const float32 * x_table; /* Scaling may differ through function reuse. */
    const float32 * z_table; /* Scaling may differ through function reuse. */

    x_table = map->x_table;
    z_table = map->z_table;
    if (x <= *x_table) {
        /* Saturation. */
        return z_table[0];
    }
    if (x >= x_table[(uint8) (map->Nx - 1)]) {
        return z_table[(uint8) (map->Nx - 1)];
    }

    /* Linear search, start low. */
    x_table++;
    while (x > *(x_table++)) {
        z_table++;
    }
    x_table -= 2;

    /* Interpolation. */
    return (z_table[0] + (((z_table[1] - z_table[0]) * (x - x_table[0])) / (x_table[1] -
     x_table[0])));
}

/**************************************************************************************************\
 ***  FUNCTION:
 ***        TabIdxS0T6_USS_DA_LAD
 *** 
 ***  DESCRIPTION:
 ***        Automatic generated function for PreLook-Up Index Search blocks.
 *** 
 ***  PARAMETERS:
 ***        Type               Name                Description
 ***        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***        const float32 *    x_table             pointer to x-axis vector
 ***        uint8              N                   number of values in x-axis vector
 ***        float32            x                   table input
 ***        uint8 *            irx                 table output
 ***
 ***  RETURNS:
 ***        void
 ***
 ***  SETTINGS:
 ***        Search algorithm...................: ascending linear search.
 ***        Output configuration...............: output only the index
 ***
\**************************************************************************************************/
void TabIdxS0T6_USS_DA_LAD(const float32 * x_table, uint8 N, float32 x, uint8 * irx)
{
    /* SLLocal: Default storage class for local variables | Width: 8 */
    uint8 Aux_U8;

    /* Saturation. */
    if (x <= *x_table) {
        *irx = 0;
    }
    else {
        if (x >= x_table[N - 1]) {
            *irx = N - 1;
        }
        else {
            Aux_U8 = 0;

            /* Linear search, start low. */
            x_table++;
            while (x >= *(x_table++)) {
                Aux_U8++;
            }
            x_table -= 2;
            *irx = Aux_U8;
        }
    }
}

/**************************************************************************************************\
 ***  FUNCTION:
 ***        USS_DA_LAD
 *** 
 ***  DESCRIPTION:
 ***        
 *** 
 ***  PARAMETERS:
 ***        Type               Name                Description
 ***        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***        __UNITY_BUILD_INLINE__ void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/
                       void USS_DA_LAD(void)
{
    /* SLLocal: Default storage class for local variables | Width: 32 */
    float32 SUSS_DA_LAD106_Switch;
    float32 SUSS_DA_LAD109_Rescaler[2];
    float32 SUSS_DA_LAD111_Sum;
    float32 SUSS_DA_LAD2_Abs;
    float32 SUSS_DA_LAD68_Product[5];
    float32 SUSS_DA_LAD86_Switch;
    float32 SUSS_DA_LAD90_Switch[2]; /* MIN/MAX: 0.00999999977648258 .. 4 */

    /* SLLocal: Default storage class for local variables | Width: 16 */
    uint16 SUSS_DA_LAD66_Product;

    /* SLLocal: Default storage class for local variables | Width: 8 */
    boolean SUSS_DA_LAD29_RelationalOperator;
    boolean SUSS_DA_LAD43_RelationalOperator;
    boolean SUSS_DA_LAD47_RelationalOperator;
    sint8 SUSS_DA_LAD8_Abs2;
    boolean SUSS_DA_LAD9_Relational_Operator2;
    boolean SUSS_DA_LAD9_Relational_Operator4;

    /* SLLocal: Default storage class for local variables | Width: 32 */
    sint32 Aux_S32;

    /* Abs: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueBased/A
        bs
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/MultiMeasure2/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/MultiMeasure2/Signal Conversion */
    USS_GC_s_EPSStgTqFilAbs_measure = fabsf(USS_GC_s_EPSStgTqFil_Nm_measure);

    /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueBase
        d/ThresholdCalculation/Switch
        DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueBased/Thres
        holdCalculation/Switch: Omitted comparison with constant. */
    if (USS_GC_s_FlgCpStgWhlPres_measure) {
        /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorque
            Based/ThresholdCalculation/Switch */
        SUSS_DA_LAD90_Switch[0] = USS_LAD_p_LoThEPSTqCpWhl;
        SUSS_DA_LAD90_Switch[1] = USS_LAD_p_HiThEPSTqCpWhl;
    }
    else {
        /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorque
            Based/ThresholdCalculation/Switch */
        SUSS_DA_LAD90_Switch[0] = USS_LAD_p_LoThEPSTq;
        SUSS_DA_LAD90_Switch[1] = USS_LAD_p_HiThEPSTq;
    }

    /* Interpolation: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTor
        queBased/ThresholdCalculation/Interpolation Using Prelookup1
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/ThresholdCalculation/MultiMeasure1/Signal Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/ThresholdCalculation/Rescaler */
    USS_LAD_s_StgTqTh_measure = Tab1DIntp2I1T438_USS_DA_LAD((const float32 *)
     &(SUSS_DA_LAD90_Switch[0]), USS_c_Cnst0F32, USS_PRP_s_AsiSysLatActFac_measure);

    /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueBase
        d/ProtectedDivision/Switch
        DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueBased/Prote
        ctedDivision/Switch: Omitted comparison with constant.
        # combined # Relational: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteering
        ActivityTorqueBased/ProtectedDivision/RelationalOperator
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/ThresholdCalculation/MultiMeasure1/Signal Conversion */
    if (USS_LAD_s_StgTqTh_measure >= 0.F) {
        /* # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityT
            orqueBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conversion
            # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivity
            TorqueBased/ThresholdCalculation/MultiMeasure1/Signal Conversion */
        if (USS_LAD_s_StgTqTh_measure > USS_c_ValDivLim) {
            /* # combined # Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteer
                ingActivityTorqueBased/ProtectedDivision/Switch
                # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActi
                vityTorqueBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conversion
                # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActi
                vityTorqueBased/ThresholdCalculation/MultiMeasure1/Signal Conversion */
            SUSS_DA_LAD86_Switch = USS_LAD_s_StgTqTh_measure;
        }
        else {
            /* # combined # Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteer
                ingActivityTorqueBased/ProtectedDivision/Switch */
            SUSS_DA_LAD86_Switch = USS_c_ValDivLim;
        }
    }
    else {
        /* SLLocal: Default storage class for local variables | Width: 32 */
        float32 SUSS_DA_LAD86_Negate;

        /* Gain: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueBa
            sed/ProtectedDivision/Negate */
        SUSS_DA_LAD86_Negate = USS_c_ValDivLim * -1.F;

        /* # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityT
            orqueBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conversion
            # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivity
            TorqueBased/ThresholdCalculation/MultiMeasure1/Signal Conversion */
        if (USS_LAD_s_StgTqTh_measure < SUSS_DA_LAD86_Negate) {
            /* # combined # Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteer
                ingActivityTorqueBased/ProtectedDivision/Switch
                # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActi
                vityTorqueBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conversion
                # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActi
                vityTorqueBased/ThresholdCalculation/MultiMeasure1/Signal Conversion */
            SUSS_DA_LAD86_Switch = USS_LAD_s_StgTqTh_measure;
        }
        else {
            /* # combined # Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteer
                ingActivityTorqueBased/ProtectedDivision/Switch */
            SUSS_DA_LAD86_Switch = SUSS_DA_LAD86_Negate;
        }
    }

    /* Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueBas
        ed/ProtectedDivision/Product
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/MultiMeasure3/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/MultiMeasure3/Signal Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/MultiMeasure2/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/MultiMeasure2/Signal Conversion */
    USS_s_DrvCtlTqFac_measure = USS_GC_s_EPSStgTqFilAbs_measure / SUSS_DA_LAD86_Switch;

    /* TableLookup: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
        eBased/Look-Up Table
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/MultiMeasure1/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/MultiMeasure1/Signal Conversion */
    USS_LAD_s_FacStgAcvAdp_measure = Tab1DS0I2T3126_USS_DA_LAD(&SUSS_DA_LAD68_Look_Up_Table_map,
     USS_GC_s_VDSOVLgt_kmph_measure);
    for (Aux_S32 = 0; Aux_S32 < 5; Aux_S32++)
    {
        /* Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
            eBased/Product
            # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivity
            TorqueBased/MultiMeasure1/MeasSubsys/Data Type Conversion
            # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivity
            TorqueBased/MultiMeasure1/Signal Conversion */
        SUSS_DA_LAD68_Product[Aux_S32] = USS_LAD_s_FacStgAcvAdp_measure *
         USS_LAD_p1_ThLatStgAcvTq[Aux_S32];
    }

    /* IndexSearch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
        eBased/Prelookup
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure/MeasSubsys/Dat
        a Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure/Signal Convers
        ion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/MultiMeasure3/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueBased/MultiMeasure3/Signal Conversion */
    TabIdxS0T6_USS_DA_LAD((const float32 *) &(SUSS_DA_LAD68_Product[0]), 5,
     USS_s_DrvCtlTqFac_measure, &USS_LAD_s_LatStgAcvTq_measure);

    /* DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVelocityBase
        d/Derivation/LowpassSecondOrder/ButterworthCoefficients/Enable: Enable condition
        DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVelocityBas
        ed/Derivation/LowpassSecondOrder/ButterworthCoefficients/Enable: Omitted comparison with con
        stant.
        # combined # Relational: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteering
        ActivityTorqueVelocityBased/Derivation/LowpassSecondOrder/RelationalOperator */
    if (USS_LAD_p_EPSStgTqVFreCut != X_SUSS_DA_LAD111_UnitDelay) {
        /* SLLocal: Default storage class for local variables | Width: 32 */
        float32 SUSS_DA_LAD119_Gain;
        float32 SUSS_DA_LAD119_Math;
        float32 SUSS_DA_LAD119_Product1;
        float32 SUSS_DA_LAD119_Sum;

        /* Gain: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVe
            locityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Gain
            # combined # Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteerin
            gActivityTorqueVelocityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Produ
            ct */
        SUSS_DA_LAD119_Gain = USS_LAD_p_EPSStgTqVFreCut * USS_c_TiSmpl_s * 3.1415927410125732F;

        /* Math: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVe
            locityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Math */
        SUSS_DA_LAD119_Math = SUSS_DA_LAD119_Gain * SUSS_DA_LAD119_Gain;

        /* Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
            eVelocityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Product1
            # combined # Sqrt: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringAc
            tivityTorqueVelocityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Sqrt */
        SUSS_DA_LAD119_Product1 = SUSS_DA_LAD119_Gain * 1.4142135623730951F;

        /* Sum: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVel
            ocityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Sum */
        SUSS_DA_LAD119_Sum = SUSS_DA_LAD119_Math + SUSS_DA_LAD119_Product1 + 1.F;

        /* Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
            eVelocityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Product5
            # combined # Sum: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringAct
            ivityTorqueVelocityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Sum1 */
        SUSS_DA_LAD119_Product5 = ((SUSS_DA_LAD119_Math - SUSS_DA_LAD119_Product1) + 1.F) /
         SUSS_DA_LAD119_Sum;

        /* Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
            eVelocityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Product6
            # combined # Sum: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringAct
            ivityTorqueVelocityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Sum2 */
        SUSS_DA_LAD119_Product6 = (2.F * (SUSS_DA_LAD119_Math - 1.F)) / SUSS_DA_LAD119_Sum;

        /* Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
            eVelocityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Product2 */
        SUSS_DA_LAD119_Product2 = SUSS_DA_LAD119_Math / SUSS_DA_LAD119_Sum;

        /* Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
            eVelocityBased/Derivation/LowpassSecondOrder/ButterworthCoefficients/Product4 */
        SUSS_DA_LAD119_Product4 = 2.F * SUSS_DA_LAD119_Product2;
    }

    /* Unit delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorque
        VelocityBased/Derivation/LowpassSecondOrder/UnitDelay */
    X_SUSS_DA_LAD111_UnitDelay = USS_LAD_p_EPSStgTqVFreCut;

    /* Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVel
        ocityBased/Derivation/Derivation/Product
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/Derivation/MultiMeasure3/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/Derivation/MultiMeasure3/Signal Conversion
        # combined # Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringAct
        ivityTorqueVelocityBased/Derivation/Derivation/Divide
        # combined # Sum: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivit
        yTorqueVelocityBased/Derivation/Derivation/Sum */
    USS_GC_s_EPSStgTqV_measure = (USS_GC_s_EPSStgTqFil_Nm_measure - X_SUSS_DA_LAD110_UnitDelay) *
     (1.F / USS_c_TiSmpl_s);

    /* Unit delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorque
        VelocityBased/Derivation/Derivation/UnitDelay */
    X_SUSS_DA_LAD110_UnitDelay = USS_GC_s_EPSStgTqFil_Nm_measure;

    /* Sum: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVelocit
        yBased/Derivation/LowpassSecondOrder/Sum
        # combined # Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringAct
        ivityTorqueVelocityBased/Derivation/LowpassSecondOrder/Product1
        # combined # Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringAct
        ivityTorqueVelocityBased/Derivation/LowpassSecondOrder/Product5
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/Derivation/MultiMeasure3/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/Derivation/MultiMeasure3/Signal Conversion
        # combined # Unit delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteering
        ActivityTorqueVelocityBased/Derivation/LowpassSecondOrder/UnitDelay1 */
    SUSS_DA_LAD111_Sum = USS_GC_s_EPSStgTqV_measure - (SUSS_DA_LAD119_Product5 *
     X_SUSS_DA_LAD111_UnitDelay2) - (SUSS_DA_LAD119_Product6 * X_SUSS_DA_LAD111_UnitDelay1);

    /* Abs: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVelocit
        yBased/Derivation/Abs
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/Derivation/MultiMeasure/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/Derivation/MultiMeasure/Signal Conversion
        # combined # Sum: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivit
        yTorqueVelocityBased/Derivation/LowpassSecondOrder/Sum1
        # combined # Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringAct
        ivityTorqueVelocityBased/Derivation/LowpassSecondOrder/Product4
        # combined # Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringAct
        ivityTorqueVelocityBased/Derivation/LowpassSecondOrder/Product2
        # combined # Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringAct
        ivityTorqueVelocityBased/Derivation/LowpassSecondOrder/Product
        # combined # Unit delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteering
        ActivityTorqueVelocityBased/Derivation/LowpassSecondOrder/UnitDelay1 */
    USS_GC_s_EPSStgTqVAbs_measure = fabsf((SUSS_DA_LAD119_Product2 * SUSS_DA_LAD111_Sum) +
     (SUSS_DA_LAD119_Product4 * X_SUSS_DA_LAD111_UnitDelay1) + (SUSS_DA_LAD119_Product2 *
     X_SUSS_DA_LAD111_UnitDelay2));

    /* Unit delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorque
        VelocityBased/Derivation/LowpassSecondOrder/UnitDelay2
        # combined # Unit delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteering
        ActivityTorqueVelocityBased/Derivation/LowpassSecondOrder/UnitDelay1 */
    X_SUSS_DA_LAD111_UnitDelay2 = X_SUSS_DA_LAD111_UnitDelay1;

    /* Unit delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorque
        VelocityBased/Derivation/LowpassSecondOrder/UnitDelay1 */
    X_SUSS_DA_LAD111_UnitDelay1 = SUSS_DA_LAD111_Sum;

    /* DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVelocityBase
        d/ThresholdCalculation/Rescaler */
    SUSS_DA_LAD109_Rescaler[0] = USS_LAD_p_LoThEPSTqV;
    SUSS_DA_LAD109_Rescaler[1] = USS_LAD_p_HiThEPSTqV;

    /* Interpolation: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTor
        queVelocityBased/ThresholdCalculation/Interpolation Using Prelookup1
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/ThresholdCalculation/MultiMeasure1/Signal Conversion */
    USS_LAD_s_StgTqVTh_measure = Tab1DIntp2I1T438_USS_DA_LAD((const float32 *)
     &(SUSS_DA_LAD109_Rescaler[0]), USS_c_Cnst0F32, USS_PRP_s_AsiSysLatActFac_measure);

    /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVelo
        cityBased/ProtectedDivision/Switch
        DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVelocityBas
        ed/ProtectedDivision/Switch: Omitted comparison with constant.
        # combined # Relational: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteering
        ActivityTorqueVelocityBased/ProtectedDivision/RelationalOperator
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/ThresholdCalculation/MultiMeasure1/Signal Conversion */
    if (USS_LAD_s_StgTqVTh_measure >= 0.F) {
        /* # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityT
            orqueVelocityBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conversion
            # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivity
            TorqueVelocityBased/ThresholdCalculation/MultiMeasure1/Signal Conversion */
        if (USS_LAD_s_StgTqVTh_measure > USS_c_ValDivLim) {
            /* # combined # Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteer
                ingActivityTorqueVelocityBased/ProtectedDivision/Switch
                # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActi
                vityTorqueVelocityBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conv
                ersion
                # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActi
                vityTorqueVelocityBased/ThresholdCalculation/MultiMeasure1/Signal Conversion */
            SUSS_DA_LAD106_Switch = USS_LAD_s_StgTqVTh_measure;
        }
        else {
            /* # combined # Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteer
                ingActivityTorqueVelocityBased/ProtectedDivision/Switch */
            SUSS_DA_LAD106_Switch = USS_c_ValDivLim;
        }
    }
    else {
        /* SLLocal: Default storage class for local variables | Width: 32 */
        float32 SUSS_DA_LAD106_Negate;

        /* Gain: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVe
            locityBased/ProtectedDivision/Negate */
        SUSS_DA_LAD106_Negate = USS_c_ValDivLim * -1.F;

        /* # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityT
            orqueVelocityBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conversion
            # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivity
            TorqueVelocityBased/ThresholdCalculation/MultiMeasure1/Signal Conversion */
        if (USS_LAD_s_StgTqVTh_measure < SUSS_DA_LAD106_Negate) {
            /* # combined # Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteer
                ingActivityTorqueVelocityBased/ProtectedDivision/Switch
                # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActi
                vityTorqueVelocityBased/ThresholdCalculation/MultiMeasure1/MeasSubsys/Data Type Conv
                ersion
                # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActi
                vityTorqueVelocityBased/ThresholdCalculation/MultiMeasure1/Signal Conversion */
            SUSS_DA_LAD106_Switch = USS_LAD_s_StgTqVTh_measure;
        }
        else {
            /* # combined # Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteer
                ingActivityTorqueVelocityBased/ProtectedDivision/Switch */
            SUSS_DA_LAD106_Switch = SUSS_DA_LAD106_Negate;
        }
    }

    /* Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqueVel
        ocityBased/ProtectedDivision/Product
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/MultiMeasure2/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/MultiMeasure2/Signal Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/Derivation/MultiMeasure/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/Derivation/MultiMeasure/Signal Conversion */
    USS_DrvCtlTqVFac_measure = USS_GC_s_EPSStgTqVAbs_measure / SUSS_DA_LAD106_Switch;

    /* IndexSearch: DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorqu
        eVelocityBased/Prelookup
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure1/MeasSubsys/Da
        ta Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure1/Signal Conver
        sion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/MultiMeasure2/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/LateralSteeringActivityTorq
        ueVelocityBased/MultiMeasure2/Signal Conversion */
    TabIdxS0T6_USS_DA_LAD(&(USS_LAD_p1_ThLatStgAcvTqV[0]), 5, USS_DrvCtlTqVFac_measure,
     &USS_LAD_s_LatStgAcvTqV_measure);

    /* MinMax: DriverActivityLateralDA_LAD/LateralSteeringActivity/MinMax1
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure1/MeasSubsys/Da
        ta Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure1/Signal Conver
        sion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure/MeasSubsys/Dat
        a Type Conversion
        # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure/Signal Convers
        ion */
    if (USS_LAD_s_LatStgAcvTq_measure > USS_LAD_s_LatStgAcvTqV_measure) {
        /* # combined # TargetLink outport: DriverActivityLateralDA_LAD/USS_LAD_s_LatStgAcv
            # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure/MeasSubsys
            /Data Type Conversion
            # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure/Signal Con
            version */
        USS_LAD_s_LatStgAcv_measure = USS_LAD_s_LatStgAcvTq_measure;
    }
    else {
        /* # combined # TargetLink outport: DriverActivityLateralDA_LAD/USS_LAD_s_LatStgAcv
            # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure1/MeasSubsy
            s/Data Type Conversion
            # combined # DriverActivityLateralDA_LAD/LateralSteeringActivity/MultiMeasure1/Signal Co
            nversion */
        USS_LAD_s_LatStgAcv_measure = USS_LAD_s_LatStgAcvTqV_measure;
    }

    /* Delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/Delay: Check t
        he first run stateDriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/De
        lay: Omitted comparison with constant. */
    if (SUSS_DA_LAD1_DriverActivityLateralDA_LAD_FirstRun) {
        /* Delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/Delay: Ini
            tialize the state */
        X_SUSS_DA_LAD75_Delay = 0;
    }

    /* Logical: DriverActivityLateralDA_LAD/LateralSteeringActivity/IntervalDynamic/LogicalOperator
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure3/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure3/Signal Conversion
        # combined # Relational: DriverActivityLateralDA_LAD/LateralSteeringActivity/IntervalDynamic
        /RelationalOperatorMin
        # combined # Relational: DriverActivityLateralDA_LAD/LateralSteeringActivity/IntervalDynamic
        /RelationalOperatorMax
        # combined # TargetLink outport: DriverActivityLateralDA_LAD/USS_LAD_s_LatStgAcv
        # combined # TargetLink outport: DriverActivityLateralDA_LAD/USS_LAD_s_LatStgAcv */
    USS_LAD_s_LatStgAcvIsDet_measure = (USS_LAD_s_LatStgAcv_measure < 5) &&
     (USS_LAD_s_LatStgAcv_measure > 0);

    /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/SwitchReset
        DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/SwitchReset: Omitted
         comparison with constant.
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure3/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure3/Signal Conversion */
    if (USS_LAD_s_LatStgAcvIsDet_measure) {
        /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/SwitchRes
            et
            # combined # Delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Coun
            tUp/Delay */
        X_SUSS_DA_LAD75_Delay = 0;
    }
    else {
        /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/Switch
            DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/Switch: Omitted 
            comparison with constant.
            # combined # Logical: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Co
            untUp/LogicalOperator
            # combined # Relational: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi
            /CountUp/RelationalOperator
            # combined # Logical: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Lo
            gical Operator
            # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/
            MultiMeasure3/MeasSubsys/Data Type Conversion
            # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/
            MultiMeasure3/Signal Conversion
            # combined # Delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Coun
            tUp/Delay */
        if ((!(USS_LAD_s_LatStgAcvIsDet_measure)) && (X_SUSS_DA_LAD75_Delay < 25450)) {
            /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/Switc
                h
                # combined # Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi
                /CountUp/SwitchReset
                # combined # Sum: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Co
                untUp/Sum
                # combined # Delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/
                CountUp/Delay
                # combined # Delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/
                CountUp/Delay */
            X_SUSS_DA_LAD75_Delay = (uint16) (X_SUSS_DA_LAD75_Delay + 1);
        }
    }

    /* Product: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Product
        # combined # Delay: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/CountUp/
        Delay */
    SUSS_DA_LAD66_Product = (uint16) ((((uint32) X_SUSS_DA_LAD75_Delay) * 41943) >> 21);

    /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Switch
        DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Switch: Omitted comparison w
        ith constant.
        # combined # Relational: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Rel
        ational Operator */
    if (SUSS_DA_LAD66_Product <= USS_LAD_c_LatInAcvTiUpprLim) {
        /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Switch
            # combined # TargetLink outport: DriverActivityLateralDA_LAD/USS_LAD_s_LatInAcvTi_s */
        USS_LAD_s_LatInAcvTi_s_measure = SUSS_DA_LAD66_Product;
    }
    else {
        /* Switch: DriverActivityLateralDA_LAD/LateralSteeringActivity/CalcInActTi/Switch
            # combined # TargetLink outport: DriverActivityLateralDA_LAD/USS_LAD_s_LatInAcvTi_s */
        USS_LAD_s_LatInAcvTi_s_measure = USS_LAD_c_LatInAcvTiUpprLim;
    }

    /* Abs: DriverActivityLateralDA_LAD/CounterSteeringDetection/Abs */
    SUSS_DA_LAD2_Abs = fabsf(USS_GC_s_EPSStgTqFil_Nm_measure);

    /* Relational: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Rela
        tional_Operator6
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure10/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure10/Signal Conversion */
    USS_LAD_s_DrvHiShoTq_measure = SUSS_DA_LAD2_Abs > USS_LAD_p_CntrStgHiShoThTq;

    /* Relational: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Rela
        tional_Operator4 */
    SUSS_DA_LAD9_Relational_Operator4 = SUSS_DA_LAD2_Abs > USS_LAD_p_CntrStgHiLngThTq;

    /* Relational: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/High
        TorqueLongDelay/TurnOnDelayDynamic/RelationalOperator
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Hi
        ghTorqueLongDelay/Rescaler
        # combined # Product: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringAc
        tivity/HighTorqueLongDelay/Product */
    SUSS_DA_LAD43_RelationalOperator = ((uint8) (USS_LAD_p_CntrStgHiTqDly_s * USS_c_FrqSmpl)) <=
     X_SUSS_DA_LAD43_UnitDelay;

    /* Logical: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/HighTor
        queLongDelay/TurnOnDelayDynamic/LogicalOperator
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure8/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure8/Signal Conversion */
    USS_LAD_s_DrvHiLngTq_measure = SUSS_DA_LAD9_Relational_Operator4 &&
     SUSS_DA_LAD43_RelationalOperator;

    /* Logical: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Logical
        _Operator3
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure6/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure6/Signal Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure8/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure8/Signal Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure10/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure10/Signal Conversion */
    USS_LAD_s_HiCntrStgDet_measure = USS_LAD_s_DrvHiShoTq_measure || USS_LAD_s_DrvHiLngTq_measure;

    /* Relational: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Rela
        tional_Operator3
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure4/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure4/Signal Conversion */
    USS_LAD_s_DrvLoShoTq_measure = SUSS_DA_LAD2_Abs > USS_LAD_p_CntrStgLoShoThTq;

    /* Relational: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Rela
        tional_Operator2 */
    SUSS_DA_LAD9_Relational_Operator2 = SUSS_DA_LAD2_Abs > USS_LAD_p_CntrStgLoLngThTq;

    /* Relational: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/LowT
        orqueLongDelay/TurnOnDelayDynamic/RelationalOperator
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Lo
        wTorqueLongDelay/Rescaler
        # combined # Product: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringAc
        tivity/LowTorqueLongDelay/Product */
    SUSS_DA_LAD47_RelationalOperator = ((uint8) (USS_LAD_p_CntrStgLoTqDly_s * USS_c_FrqSmpl)) <=
     X_SUSS_DA_LAD47_UnitDelay;

    /* Logical: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/LowTorq
        ueLongDelay/TurnOnDelayDynamic/LogicalOperator
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure9/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure9/Signal Conversion */
    USS_LAD_s_DrvLoLngTq_measure = SUSS_DA_LAD9_Relational_Operator2 &&
     SUSS_DA_LAD47_RelationalOperator;

    /* Logical: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Logical
        _Operator1
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure7/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure7/Signal Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure9/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure9/Signal Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure4/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure4/Signal Conversion */
    USS_LAD_s_LoCntrStgDet_measure = USS_LAD_s_DrvLoShoTq_measure || USS_LAD_s_DrvLoLngTq_measure;

    /* Relational: DriverActivityLateralDA_LAD/CounterSteeringDetection/LateralRequestActive/Relatio
        nal_Operator2
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure1/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure1/Signal Conversion */
    USS_LAD_s_LatCtlReqAct_measure = USS_SIH_s_VMMLatGuideStReq_measure >
     USS_LAD_c_VMMLatGuideNoReq;

    /* Relational: DriverActivityLateralDA_LAD/CounterSteeringDetection/ControllerDriverSignComparis
        on/Relational Operator
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure2/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure2/Signal Conversion
        # combined # Product: DriverActivityLateralDA_LAD/CounterSteeringDetection/ControllerDriverS
        ignComparison/Product
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/ControllerDriverSignCompar
        ison/Rescaler */
    USS_s_CtlDrvSignComp_measure = (USS_GC_s_EPSStgTqFil_Nm_measure * ((float32)
     USS_SIH_s_EPSCtlValQFK_measure)) >= 0.F;

    /* Abs: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Abs2 */
    if (USS_SIH_s_EPSCtlValQFK_measure >= 0) {
        SUSS_DA_LAD8_Abs2 = USS_SIH_s_EPSCtlValQFK_measure;
    }
    else {
        SUSS_DA_LAD8_Abs2 = (sint8) (-USS_SIH_s_EPSCtlValQFK_measure);
    }

    /* Logical: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Logical_O
        perator4
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure/Signal Conversion
        # combined # Relational: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteerin
        gActive/Relational_Operator1
        # combined # Logical: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringAc
        tive/Logical_Operator2
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure1/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure1/Signal Conversion
        # combined # Relational: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteerin
        gActive/Relational_Operator5
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure3/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure3/Signal Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure2/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure2/Signal Conversion */
    USS_LAD_s_CntrAct_measure = USS_LAD_s_LatStgAcvIsDet_measure && (USS_GC_s_VDSOVLgt_kmph_measure
     > USS_LAD_p_CntrStgThSdsl_kmph) && USS_LAD_s_LatCtlReqAct_measure &&
     (!(USS_s_CtlDrvSignComp_measure)) && (SUSS_DA_LAD8_Abs2 > USS_LAD_p_CntrStgMinEPSCtlValQfk);

    /* Relational: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Trigge
        rDelay/TurnOnDelayDynamic/RelationalOperator
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Trig
        gerDelay/Rescaler1
        # combined # Product: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringAc
        tive/TriggerDelay/Product */
    SUSS_DA_LAD29_RelationalOperator = ((uint8) (USS_LAD_p_CntrStgDly_s * USS_c_FrqSmpl)) <=
     X_SUSS_DA_LAD29_UnitDelay;

    /* Logical: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/TriggerDe
        lay/TurnOnDelayDynamic/LogicalOperator
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/MultiMeasure5/MeasSubsys/D
        ata Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/MultiMeasure5/Signal Conve
        rsion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure/Signal Conversion */
    USS_LAD_s_CntrStgDetAct_measure = USS_LAD_s_CntrAct_measure && SUSS_DA_LAD29_RelationalOperator;

    /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/Switch3
        DriverActivityLateralDA_LAD/CounterSteeringDetection/Switch3: Omitted comparison with consta
        nt.
        # combined # Logical: DriverActivityLateralDA_LAD/CounterSteeringDetection/Logical_Operator5
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/MultiMeasure5/MeasSubsys/D
        ata Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/MultiMeasure5/Signal Conve
        rsion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure7/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/Mu
        ltiMeasure7/Signal Conversion */
    if (USS_LAD_s_LoCntrStgDet_measure && USS_LAD_s_CntrStgDetAct_measure) {
        /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/Switch2
            DriverActivityLateralDA_LAD/CounterSteeringDetection/Switch2: Omitted comparison with co
            nstant.
            # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivit
            y/MultiMeasure6/MeasSubsys/Data Type Conversion
            # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivit
            y/MultiMeasure6/Signal Conversion */
        if (USS_LAD_s_HiCntrStgDet_measure) {
            /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/Switch2
                # combined # Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/Switch3
                # combined # TargetLink outport: DriverActivityLateralDA_LAD/USS_LAD_s_CntrStgDet */
            USS_LAD_s_CntrStgDet_measure = USS_LAD_c_CntrStgHiAcv;
        }
        else {
            /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/Switch2
                # combined # Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/Switch3
                # combined # TargetLink outport: DriverActivityLateralDA_LAD/USS_LAD_s_CntrStgDet */
            USS_LAD_s_CntrStgDet_measure = USS_LAD_c_CntrStgLowAcv;
        }
    }
    else {
        /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/Switch3
            # combined # TargetLink outport: DriverActivityLateralDA_LAD/USS_LAD_s_CntrStgDet */
        USS_LAD_s_CntrStgDet_measure = USS_LAD_c_CntrStgNoAcv;
    }

    /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/LowTorqu
        eLongDelay/TurnOnDelayDynamic/Switch1
        DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/LowTorqueLongDe
        lay/TurnOnDelayDynamic/Switch1: Omitted comparison with constant. */
    if (SUSS_DA_LAD9_Relational_Operator2) {
        /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/LowT
            orqueLongDelay/TurnOnDelayDynamic/Switch2
            DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/LowTorqueLo
            ngDelay/TurnOnDelayDynamic/Switch2: Omitted comparison with constant. */
        if (!(SUSS_DA_LAD47_RelationalOperator)) {
            /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/
                LowTorqueLongDelay/TurnOnDelayDynamic/Switch2
                # combined # Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSte
                eringActivity/LowTorqueLongDelay/TurnOnDelayDynamic/Switch1
                # combined # Unit delay: DriverActivityLateralDA_LAD/CounterSteeringDetection/Counte
                rSteeringActivity/LowTorqueLongDelay/TurnOnDelayDynamic/UnitDelay
                # combined # Sum: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeri
                ngActivity/LowTorqueLongDelay/TurnOnDelayDynamic/Sum */
            X_SUSS_DA_LAD47_UnitDelay = (uint8) (X_SUSS_DA_LAD47_UnitDelay + 1);
        }
    }
    else {
        /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/LowT
            orqueLongDelay/TurnOnDelayDynamic/Switch1
            # combined # Unit delay: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSte
            eringActivity/LowTorqueLongDelay/TurnOnDelayDynamic/UnitDelay */
        X_SUSS_DA_LAD47_UnitDelay = 0;
    }

    /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/HighTorq
        ueLongDelay/TurnOnDelayDynamic/Switch1
        DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/HighTorqueLongD
        elay/TurnOnDelayDynamic/Switch1: Omitted comparison with constant. */
    if (SUSS_DA_LAD9_Relational_Operator4) {
        /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/High
            TorqueLongDelay/TurnOnDelayDynamic/Switch2
            DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/HighTorqueL
            ongDelay/TurnOnDelayDynamic/Switch2: Omitted comparison with constant. */
        if (!(SUSS_DA_LAD43_RelationalOperator)) {
            /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/
                HighTorqueLongDelay/TurnOnDelayDynamic/Switch2
                # combined # Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSte
                eringActivity/HighTorqueLongDelay/TurnOnDelayDynamic/Switch1
                # combined # Unit delay: DriverActivityLateralDA_LAD/CounterSteeringDetection/Counte
                rSteeringActivity/HighTorqueLongDelay/TurnOnDelayDynamic/UnitDelay
                # combined # Sum: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeri
                ngActivity/HighTorqueLongDelay/TurnOnDelayDynamic/Sum */
            X_SUSS_DA_LAD43_UnitDelay = (uint8) (X_SUSS_DA_LAD43_UnitDelay + 1);
        }
    }
    else {
        /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActivity/High
            TorqueLongDelay/TurnOnDelayDynamic/Switch1
            # combined # Unit delay: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSte
            eringActivity/HighTorqueLongDelay/TurnOnDelayDynamic/UnitDelay */
        X_SUSS_DA_LAD43_UnitDelay = 0;
    }

    /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/TriggerDel
        ay/TurnOnDelayDynamic/Switch1
        DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/TriggerDelay/Turn
        OnDelayDynamic/Switch1: Omitted comparison with constant.
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure/MeasSubsys/Data Type Conversion
        # combined # DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Mult
        iMeasure/Signal Conversion */
    if (USS_LAD_s_CntrAct_measure) {
        /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Trigge
            rDelay/TurnOnDelayDynamic/Switch2
            DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/TriggerDelay/
            TurnOnDelayDynamic/Switch2: Omitted comparison with constant. */
        if (!(SUSS_DA_LAD29_RelationalOperator)) {
            /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Tr
                iggerDelay/TurnOnDelayDynamic/Switch2
                # combined # Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSte
                eringActive/TriggerDelay/TurnOnDelayDynamic/Switch1
                # combined # Unit delay: DriverActivityLateralDA_LAD/CounterSteeringDetection/Counte
                rSteeringActive/TriggerDelay/TurnOnDelayDynamic/UnitDelay
                # combined # Sum: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeri
                ngActive/TriggerDelay/TurnOnDelayDynamic/Sum */
            X_SUSS_DA_LAD29_UnitDelay = (uint8) (X_SUSS_DA_LAD29_UnitDelay + 1);
        }
    }
    else {
        /* Switch: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSteeringActive/Trigge
            rDelay/TurnOnDelayDynamic/Switch1
            # combined # Unit delay: DriverActivityLateralDA_LAD/CounterSteeringDetection/CounterSte
            eringActive/TriggerDelay/TurnOnDelayDynamic/UnitDelay */
        X_SUSS_DA_LAD29_UnitDelay = 0;
    }

    /* DriverActivityLateralDA_LAD: Reset of the first run state */
    SUSS_DA_LAD1_DriverActivityLateralDA_LAD_FirstRun = 0;
}





/*------------------------------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
