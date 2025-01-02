# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 10 "<built-in>"




# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.c" 2
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_DS_EFF
 *** TargetLink subsystem : USS_DS_EFF/FrameEFF/Subsystem/FrameEFF/EfficiencyDS_EFF
 *** Codefile             : USS_DS_EFF.c
 ***
 *** Generation date: 2024-08-22 19:38:07
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
 ***                                            SS_DS_EFF\20_IMPL\CgTools\Common_C_Tools\Platform_Tl
 ***                                            Config\cconfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLink 4.3\Matlab\Tl\XML
 ***                                            \CodeGen\Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** SUBSYS         CORRESPONDING SIMULINK SUBSYSTEM
 *** SUSS_DS_EFF1   EfficiencyDS_EFF
 *** SUSS_DS_EFF2   EfficiencyDS_EFF/CalculationIndexEfficiency
 *** SUSS_DS_EFF3   EfficiencyDS_EFF/IndexProcessing
 *** SUSS_DS_EFF4   EfficiencyDS_EFF/MultiMeasure
 *** SUSS_DS_EFF5   EfficiencyDS_EFF/MultiMeasure1
 *** SUSS_DS_EFF6   EfficiencyDS_EFF/MultiMeasure10
 *** SUSS_DS_EFF7   EfficiencyDS_EFF/MultiMeasure11
 *** SUSS_DS_EFF8   EfficiencyDS_EFF/MultiMeasure12
 *** SUSS_DS_EFF9   EfficiencyDS_EFF/MultiMeasure13
 *** SUSS_DS_EFF10  EfficiencyDS_EFF/MultiMeasure14
 *** SUSS_DS_EFF11  EfficiencyDS_EFF/MultiMeasure15
 *** SUSS_DS_EFF12  EfficiencyDS_EFF/MultiMeasure16
 *** SUSS_DS_EFF13  EfficiencyDS_EFF/MultiMeasure17
 *** SUSS_DS_EFF14  EfficiencyDS_EFF/MultiMeasure3
 *** SUSS_DS_EFF15  EfficiencyDS_EFF/MultiMeasure4
 *** SUSS_DS_EFF16  EfficiencyDS_EFF/MultiMeasure5
 *** SUSS_DS_EFF17  EfficiencyDS_EFF/MultiMeasure6
 *** SUSS_DS_EFF18  EfficiencyDS_EFF/MultiMeasure8
 *** SUSS_DS_EFF19  EfficiencyDS_EFF/MultiMeasure9
 *** SUSS_DS_EFF20  EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex
 *** SUSS_DS_EFF21  EfficiencyDS_EFF/CalculationIndexEfficiency/CompleteIndexEfficiency
 *** SUSS_DS_EFF22  EfficiencyDS_EFF/CalculationIndexEfficiency/MultiMeasure
 *** SUSS_DS_EFF23  EfficiencyDS_EFF/CalculationIndexEfficiency/ReqBlock
 *** SUSS_DS_EFF24  EfficiencyDS_EFF/CalculationIndexEfficiency/ReqBlock1
 *** SUSS_DS_EFF25  EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation
 *** SUSS_DS_EFF26  EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/ProtectedDivision
 *** SUSS_DS_EFF27  EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation/S
 ***                aturationMixedDynamic
 *** SUSS_DS_EFF28  EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation/S
 ***                aturationMixedDynamic/DocBlock
 *** SUSS_DS_EFF29  EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation/S
 ***                aturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUSS_DS_EFF30  EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/ProtectedDivision/P
 ***                rotectedDivision
 *** SUSS_DS_EFF31  EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/ProtectedDivision/P
 ***                rotectedDivision/DocBlock
 *** SUSS_DS_EFF32  EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/ProtectedDivision/P
 ***                rotectedDivision/DocBlock/EmptySubsystem
 *** SUSS_DS_EFF33  EfficiencyDS_EFF/CalculationIndexEfficiency/CompleteIndexEfficiency/ReqBlock
 *** SUSS_DS_EFF34  EfficiencyDS_EFF/CalculationIndexEfficiency/MultiMeasure/MeasSubsys
 *** SUSS_DS_EFF35  EfficiencyDS_EFF/CalculationIndexEfficiency/MultiMeasure/MeasSubsys/ToWorkspaceM
 ***                easurement
 *** SUSS_DS_EFF36  EfficiencyDS_EFF/IndexProcessing/IndexBrakeFrequencyLow
 *** SUSS_DS_EFF37  EfficiencyDS_EFF/IndexProcessing/IndexDistanceSmall
 *** SUSS_DS_EFF38  EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag
 *** SUSS_DS_EFF39  EfficiencyDS_EFF/IndexProcessing/IndexDriverPedalHigh
 *** SUSS_DS_EFF40  EfficiencyDS_EFF/IndexProcessing/IndexKickDown
 *** SUSS_DS_EFF41  EfficiencyDS_EFF/IndexProcessing/IndexLateralControlActive
 *** SUSS_DS_EFF42  EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh
 *** SUSS_DS_EFF43  EfficiencyDS_EFF/IndexProcessing/IndexLongitudinalControlActive
 *** SUSS_DS_EFF44  EfficiencyDS_EFF/IndexProcessing/IndexOnePedalMode
 *** SUSS_DS_EFF45  EfficiencyDS_EFF/IndexProcessing/IndexPeaEfficient
 *** SUSS_DS_EFF46  EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive
 *** SUSS_DS_EFF47  EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp
 *** SUSS_DS_EFF48  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity
 *** SUSS_DS_EFF49  EfficiencyDS_EFF/IndexProcessing/IndexVelocitySlow
 *** SUSS_DS_EFF50  EfficiencyDS_EFF/IndexProcessing/OffsetDelayTicks
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFrequencyLow/IndexProcessing
 *** SUSS_DS_EFF51  EfficiencyDS_EFF/IndexProcessing/IndexBrakeFrequencyLow/ReqBlock
 *** SUSS_DS_EFF52  EfficiencyDS_EFF/IndexProcessing/IndexBrakeFrequencyLow/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFrequencyLow/IndexProcessing/Saturati
 ***                onDynamic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFrequencyLow/IndexProcessing/Saturati
 ***                onDynamic/SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFrequencyLow/IndexProcessing/Saturati
 ***                onDynamic/SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFrequencyLow/IndexProcessing/Saturati
 ***                onDynamic/SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexDistanceSmall/IndexProcessing
 *** SUSS_DS_EFF53  EfficiencyDS_EFF/IndexProcessing/IndexDistanceSmall/ReqBlock
 *** SUSS_DS_EFF54  EfficiencyDS_EFF/IndexProcessing/IndexDistanceSmall/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexDistanceSmall/IndexProcessing/SaturationDy
 ***                namic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexDistanceSmall/IndexProcessing/SaturationDy
 ***                namic/SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexDistanceSmall/IndexProcessing/SaturationDy
 ***                namic/SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexDistanceSmall/IndexProcessing/SaturationDy
 ***                namic/SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag/IndexProcessing
 *** SUSS_DS_EFF55  EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag/ReqBlock
 *** SUSS_DS_EFF56  EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag/IndexProcessing/SaturationDy
 ***                namic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag/IndexProcessing/SaturationDy
 ***                namic/SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag/IndexProcessing/SaturationDy
 ***                namic/SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag/IndexProcessing/SaturationDy
 ***                namic/SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexDriverPedalHigh/IndexProcessing
 *** SUSS_DS_EFF57  EfficiencyDS_EFF/IndexProcessing/IndexDriverPedalHigh/ReqBlock
 *** SUSS_DS_EFF58  EfficiencyDS_EFF/IndexProcessing/IndexDriverPedalHigh/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexDriverPedalHigh/IndexProcessing/Saturation
 ***                Dynamic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexDriverPedalHigh/IndexProcessing/Saturation
 ***                Dynamic/SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexDriverPedalHigh/IndexProcessing/Saturation
 ***                Dynamic/SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexDriverPedalHigh/IndexProcessing/Saturation
 ***                Dynamic/SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/IndexProcessing
 *** SUSS_DS_EFF59  EfficiencyDS_EFF/IndexProcessing/IndexKickDown/ReqBlock
 *** SUSS_DS_EFF60  EfficiencyDS_EFF/IndexProcessing/IndexKickDown/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/IndexProcessing/SaturationDynamic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/IndexProcessing/SaturationDynamic
 ***                /SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/IndexProcessing/SaturationDynamic
 ***                /SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/IndexProcessing/SaturationDynamic
 ***                /SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexLateralControlActive/IndexProcessing
 *** SUSS_DS_EFF61  EfficiencyDS_EFF/IndexProcessing/IndexLateralControlActive/ReqBlock
 *** SUSS_DS_EFF62  EfficiencyDS_EFF/IndexProcessing/IndexLateralControlActive/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexLateralControlActive/IndexProcessing/Satur
 ***                ationDynamic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexLateralControlActive/IndexProcessing/Satur
 ***                ationDynamic/SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexLateralControlActive/IndexProcessing/Satur
 ***                ationDynamic/SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexLateralControlActive/IndexProcessing/Satur
 ***                ationDynamic/SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUSS_DS_EFF63  EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing
 *** SUSS_DS_EFF64  EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/ReqBlock
 *** SUSS_DS_EFF65  EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing
 ***                /factorCalculation
 *** SUSS_DS_EFF66  EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing
 ***                /factorCalculation/CumulativeMovingAverageFloat32
 *** SUSS_DS_EFF67  EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing
 ***                /factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision
 *** SUSS_DS_EFF68  EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing
 ***                /factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/UnderflowPro
 ***                tection
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexLongitudinalControlActive/IndexProcessing
 *** SUSS_DS_EFF69  EfficiencyDS_EFF/IndexProcessing/IndexLongitudinalControlActive/ReqBlock
 *** SUSS_DS_EFF70  EfficiencyDS_EFF/IndexProcessing/IndexLongitudinalControlActive/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexLongitudinalControlActive/IndexProcessing/
 ***                SaturationDynamic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexLongitudinalControlActive/IndexProcessing/
 ***                SaturationDynamic/SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexLongitudinalControlActive/IndexProcessing/
 ***                SaturationDynamic/SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexLongitudinalControlActive/IndexProcessing/
 ***                SaturationDynamic/SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalMode/IndexProcessing
 *** SUSS_DS_EFF71  EfficiencyDS_EFF/IndexProcessing/IndexOnePedalMode/ReqBlock
 *** SUSS_DS_EFF72  EfficiencyDS_EFF/IndexProcessing/IndexOnePedalMode/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalMode/IndexProcessing/SaturationDyn
 ***                amic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalMode/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalMode/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalMode/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexPeaEfficient/IndexProcessing
 *** SUSS_DS_EFF73  EfficiencyDS_EFF/IndexProcessing/IndexPeaEfficient/ReqBlock
 *** SUSS_DS_EFF74  EfficiencyDS_EFF/IndexProcessing/IndexPeaEfficient/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexPeaEfficient/IndexProcessing/SaturationDyn
 ***                amic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexPeaEfficient/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexPeaEfficient/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexPeaEfficient/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive/IndexProcessing
 *** SUSS_DS_EFF75  EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive/ReqBlock
 *** SUSS_DS_EFF76  EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive/IndexProcessing/Saturat
 ***                ionDynamic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive/IndexProcessing/Saturat
 ***                ionDynamic/SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive/IndexProcessing/Saturat
 ***                ionDynamic/SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive/IndexProcessing/Saturat
 ***                ionDynamic/SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp/IndexProcessing
 *** SUSS_DS_EFF77  EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp/ReqBlock
 *** SUSS_DS_EFF78  EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp/IndexProcessing/SaturationDyn
 ***                amic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUSS_DS_EFF79  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p
 *** SUSS_DS_EFF80  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/ReqBlock
 *** SUSS_DS_EFF81  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/TestBit
 *** SUSS_DS_EFF82  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing
 *** SUSS_DS_EFF83  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation
 *** SUSS_DS_EFF84  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/DynamicIndexProcessing
 *** SUSS_DS_EFF85  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/SaturationDynamic
 *** SUSS_DS_EFF86  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/DynamicIndexProcessing/ProtectedDivi
 ***                sion
 *** SUSS_DS_EFF87  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/DynamicIndexProcessing/ProtectedDivi
 ***                sion1
 *** SUSS_DS_EFF88  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/DynamicIndexProcessing/factorCalcula
 ***                tionLoop
 *** SUSS_DS_EFF89  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/DynamicIndexProcessing/ProtectedDivi
 ***                sion/ProtectedDivision
 *** SUSS_DS_EFF90  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/DynamicIndexProcessing/ProtectedDivi
 ***                sion/ProtectedDivision/DocBlock
 *** SUSS_DS_EFF91  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/DynamicIndexProcessing/ProtectedDivi
 ***                sion/ProtectedDivision/DocBlock/EmptySubsystem
 *** SUSS_DS_EFF92  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/DynamicIndexProcessing/ProtectedDivi
 ***                sion1/ProtectedDivision
 *** SUSS_DS_EFF93  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/DynamicIndexProcessing/ProtectedDivi
 ***                sion1/ProtectedDivision/DocBlock
 *** SUSS_DS_EFF94  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/DynamicIndexProcessing/ProtectedDivi
 ***                sion1/ProtectedDivision/DocBlock/EmptySubsystem
 *** SUSS_DS_EFF95  EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
 ***                ovingIndexProcessing/eventFactorCalculation/DynamicIndexProcessing/factorCalcula
 ***                tionLoop/FirstCycleDetection
 *** SUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexVelocitySlow/IndexProcessing
 *** SUSS_DS_EFF96  EfficiencyDS_EFF/IndexProcessing/IndexVelocitySlow/ReqBlock
 *** SUSS_DS_EFF97  EfficiencyDS_EFF/IndexProcessing/IndexVelocitySlow/TestBit
 *** SUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexVelocitySlow/IndexProcessing/SaturationDyn
 ***                amic
 *** SUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexVelocitySlow/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic
 *** SUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexVelocitySlow/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic/DocBlock
 *** SUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexVelocitySlow/IndexProcessing/SaturationDyn
 ***                amic/SaturationMixedDynamic/DocBlock/EmptySubsystem
 *** SUSS_DS_EFF98  EfficiencyDS_EFF/MultiMeasure/MeasSubsys
 *** SUSS_DS_EFF99  EfficiencyDS_EFF/MultiMeasure/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF100 EfficiencyDS_EFF/MultiMeasure1/MeasSubsys
 *** SUSS_DS_EFF101 EfficiencyDS_EFF/MultiMeasure1/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF102 EfficiencyDS_EFF/MultiMeasure10/MeasSubsys
 *** SUSS_DS_EFF103 EfficiencyDS_EFF/MultiMeasure10/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF104 EfficiencyDS_EFF/MultiMeasure11/MeasSubsys
 *** SUSS_DS_EFF105 EfficiencyDS_EFF/MultiMeasure11/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF106 EfficiencyDS_EFF/MultiMeasure12/MeasSubsys
 *** SUSS_DS_EFF107 EfficiencyDS_EFF/MultiMeasure12/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF108 EfficiencyDS_EFF/MultiMeasure13/MeasSubsys
 *** SUSS_DS_EFF109 EfficiencyDS_EFF/MultiMeasure13/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF110 EfficiencyDS_EFF/MultiMeasure14/MeasSubsys
 *** SUSS_DS_EFF111 EfficiencyDS_EFF/MultiMeasure14/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF112 EfficiencyDS_EFF/MultiMeasure15/MeasSubsys
 *** SUSS_DS_EFF113 EfficiencyDS_EFF/MultiMeasure15/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF114 EfficiencyDS_EFF/MultiMeasure16/MeasSubsys
 *** SUSS_DS_EFF115 EfficiencyDS_EFF/MultiMeasure16/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF116 EfficiencyDS_EFF/MultiMeasure17/MeasSubsys
 *** SUSS_DS_EFF117 EfficiencyDS_EFF/MultiMeasure17/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF118 EfficiencyDS_EFF/MultiMeasure3/MeasSubsys
 *** SUSS_DS_EFF119 EfficiencyDS_EFF/MultiMeasure3/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF120 EfficiencyDS_EFF/MultiMeasure4/MeasSubsys
 *** SUSS_DS_EFF121 EfficiencyDS_EFF/MultiMeasure4/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF122 EfficiencyDS_EFF/MultiMeasure5/MeasSubsys
 *** SUSS_DS_EFF123 EfficiencyDS_EFF/MultiMeasure5/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF124 EfficiencyDS_EFF/MultiMeasure6/MeasSubsys
 *** SUSS_DS_EFF125 EfficiencyDS_EFF/MultiMeasure6/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF126 EfficiencyDS_EFF/MultiMeasure8/MeasSubsys
 *** SUSS_DS_EFF127 EfficiencyDS_EFF/MultiMeasure8/MeasSubsys/ToWorkspaceMeasurement
 *** SUSS_DS_EFF128 EfficiencyDS_EFF/MultiMeasure9/MeasSubsys
 *** SUSS_DS_EFF129 EfficiencyDS_EFF/MultiMeasure9/MeasSubsys/ToWorkspaceMeasurement
 *** 
 *** SUBSYS         CORRESPONDING MODEL BLOCK (REFERENCED MODEL)
 *** 
 *** SF-NODE        CORRESPONDING STATEFLOW NODE                    DESCRIPTION
 *** CUSS_DS_EFF0   UTILS_lib                                       
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFreq
 ***                uencyLow/IndexProcessing/Counter                exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFreq
 ***                uencyLow/IndexProcessing/Counter.COUNTER_START  exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFreq
 ***                uencyLow/IndexProcessing/Counter.COUNTER_HOLD   exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFreq
 *** uencyLow/IndexProcessing/Counter.COUNTER_HOLDTW
 ***                O                                               exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFreq
 *** uencyLow/IndexProcessing/Counter.HOLD_STILLSTAN
 ***                D                                               
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFreq
 *** uencyLow/IndexProcessing/Counter.COUNTER_COUNTU
 ***                P                                               exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexBrakeFreq
 *** uencyLow/IndexProcessing/Counter.COUNTER_COUNTD
 ***                OWN                                             exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexDistanceS
 ***                mall/IndexProcessing/Counter                    exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexDistanceS
 ***                mall/IndexProcessing/Counter.COUNTER_START      exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexDistanceS
 ***                mall/IndexProcessing/Counter.COUNTER_HOLD       exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexDistanceS
 ***                mall/IndexProcessing/Counter.COUNTER_HOLDTWO    exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexDistanceS
 ***                mall/IndexProcessing/Counter.HOLD_STILLSTAND    
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexDistanceS
 ***                mall/IndexProcessing/Counter.COUNTER_COUNTUP    exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexDistanceS
 ***                mall/IndexProcessing/Counter.COUNTER_COUNTDOWN  exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexDownshift
 ***                Drag/IndexProcessing/Counter                    exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexDownshift
 ***                Drag/IndexProcessing/Counter.COUNTER_START      exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexDownshift
 ***                Drag/IndexProcessing/Counter.COUNTER_HOLD       exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexDownshift
 ***                Drag/IndexProcessing/Counter.COUNTER_HOLDTWO    exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexDownshift
 ***                Drag/IndexProcessing/Counter.HOLD_STILLSTAND    
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexDownshift
 ***                Drag/IndexProcessing/Counter.COUNTER_COUNTUP    exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexDownshift
 ***                Drag/IndexProcessing/Counter.COUNTER_COUNTDOWN  exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexDriverPed
 ***                alHigh/IndexProcessing/Counter                  exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexDriverPed
 ***                alHigh/IndexProcessing/Counter.COUNTER_START    exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexDriverPed
 ***                alHigh/IndexProcessing/Counter.COUNTER_HOLD     exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexDriverPed
 ***                alHigh/IndexProcessing/Counter.COUNTER_HOLDTWO  exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexDriverPed
 ***                alHigh/IndexProcessing/Counter.HOLD_STILLSTAND  
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexDriverPed
 ***                alHigh/IndexProcessing/Counter.COUNTER_COUNTUP  exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexDriverPed
 *** alHigh/IndexProcessing/Counter.COUNTER_COUNTDOW
 ***                N                                               exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/
 ***                IndexProcessing/Counter                         exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/
 ***                IndexProcessing/Counter.COUNTER_START           exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/
 ***                IndexProcessing/Counter.COUNTER_HOLD            exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/
 ***                IndexProcessing/Counter.COUNTER_HOLDTWO         exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/
 ***                IndexProcessing/Counter.HOLD_STILLSTAND         
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/
 ***                IndexProcessing/Counter.COUNTER_COUNTUP         exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexKickDown/
 ***                IndexProcessing/Counter.COUNTER_COUNTDOWN       exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexLateralCo
 ***                ntrolActive/IndexProcessing/Counter             exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexLateralCo
 *** ntrolActive/IndexProcessing/Counter.COUNTER_STA
 ***                RT                                              exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexLateralCo
 *** ntrolActive/IndexProcessing/Counter.COUNTER_HOL
 ***                D                                               exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexLateralCo
 *** ntrolActive/IndexProcessing/Counter.COUNTER_HOL
 ***                DTWO                                            exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexLateralCo
 *** ntrolActive/IndexProcessing/Counter.HOLD_STILLS
 ***                TAND                                            
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexLateralCo
 *** ntrolActive/IndexProcessing/Counter.COUNTER_COU
 ***                NTUP                                            exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexLateralCo
 *** ntrolActive/IndexProcessing/Counter.COUNTER_COU
 ***                NTDOWN                                          exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexLongitudi
 ***                nalControlActive/IndexProcessing/Counter        exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexLongitudi
 *** nalControlActive/IndexProcessing/Counter.COUNTE
 ***                R_START                                         exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexLongitudi
 *** nalControlActive/IndexProcessing/Counter.COUNTE
 ***                R_HOLD                                          exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexLongitudi
 *** nalControlActive/IndexProcessing/Counter.COUNTE
 ***                R_HOLDTWO                                       exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexLongitudi
 *** nalControlActive/IndexProcessing/Counter.HOLD_S
 ***                TILLSTAND                                       
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexLongitudi
 *** nalControlActive/IndexProcessing/Counter.COUNTE
 ***                R_COUNTUP                                       exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexLongitudi
 *** nalControlActive/IndexProcessing/Counter.COUNTE
 ***                R_COUNTDOWN                                     exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalM
 ***                ode/IndexProcessing/Counter                     exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalM
 ***                ode/IndexProcessing/Counter.COUNTER_START       exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalM
 ***                ode/IndexProcessing/Counter.COUNTER_HOLD        exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalM
 ***                ode/IndexProcessing/Counter.COUNTER_HOLDTWO     exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalM
 ***                ode/IndexProcessing/Counter.HOLD_STILLSTAND     
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalM
 ***                ode/IndexProcessing/Counter.COUNTER_COUNTUP     exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexOnePedalM
 ***                ode/IndexProcessing/Counter.COUNTER_COUNTDOWN   exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexPeaEffici
 ***                ent/IndexProcessing/Counter                     exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexPeaEffici
 ***                ent/IndexProcessing/Counter.COUNTER_START       exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexPeaEffici
 ***                ent/IndexProcessing/Counter.COUNTER_HOLD        exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexPeaEffici
 ***                ent/IndexProcessing/Counter.COUNTER_HOLDTWO     exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexPeaEffici
 ***                ent/IndexProcessing/Counter.HOLD_STILLSTAND     
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexPeaEffici
 ***                ent/IndexProcessing/Counter.COUNTER_COUNTUP     exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexPeaEffici
 ***                ent/IndexProcessing/Counter.COUNTER_COUNTDOWN   exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexRecuperat
 ***                ionActive/IndexProcessing/Counter               exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexRecuperat
 ***                ionActive/IndexProcessing/Counter.COUNTER_START exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexRecuperat
 ***                ionActive/IndexProcessing/Counter.COUNTER_HOLD  exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexRecuperat
 *** ionActive/IndexProcessing/Counter.COUNTER_HOLDT
 ***                WO                                              exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexRecuperat
 *** ionActive/IndexProcessing/Counter.HOLD_STILLSTA
 ***                ND                                              
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexRecuperat
 *** ionActive/IndexProcessing/Counter.COUNTER_COUNT
 ***                UP                                              exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexRecuperat
 *** ionActive/IndexProcessing/Counter.COUNTER_COUNT
 ***                DOWN                                            exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexShiftPeda
 ***                lUp/IndexProcessing/Counter                     exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexShiftPeda
 ***                lUp/IndexProcessing/Counter.COUNTER_START       exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexShiftPeda
 ***                lUp/IndexProcessing/Counter.COUNTER_HOLD        exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexShiftPeda
 ***                lUp/IndexProcessing/Counter.COUNTER_HOLDTWO     exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexShiftPeda
 ***                lUp/IndexProcessing/Counter.HOLD_STILLSTAND     
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexShiftPeda
 ***                lUp/IndexProcessing/Counter.COUNTER_COUNTUP     exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexShiftPeda
 ***                lUp/IndexProcessing/Counter.COUNTER_COUNTDOWN   exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR1   EfficiencyDS_EFF/IndexProcessing/IndexVelocityS
 ***                low/IndexProcessing/Counter                     exclude "ezcheck.enprove.en_029
 ***                                                                4" EF6BC8T, 2018-09-27: chart 
 ***                                                                
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR1                                                   
 *** CUssIdxPrcR2   EfficiencyDS_EFF/IndexProcessing/IndexVelocityS
 ***                low/IndexProcessing/Counter.COUNTER_START       exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR3   EfficiencyDS_EFF/IndexProcessing/IndexVelocityS
 ***                low/IndexProcessing/Counter.COUNTER_HOLD        exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR4   EfficiencyDS_EFF/IndexProcessing/IndexVelocityS
 ***                low/IndexProcessing/Counter.COUNTER_HOLDTWO     exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR5   EfficiencyDS_EFF/IndexProcessing/IndexVelocityS
 ***                low/IndexProcessing/Counter.HOLD_STILLSTAND     
 *** CUssIdxPrcR6   EfficiencyDS_EFF/IndexProcessing/IndexVelocityS
 ***                low/IndexProcessing/Counter.COUNTER_COUNTUP     exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 *** CUssIdxPrcR7   EfficiencyDS_EFF/IndexProcessing/IndexVelocityS
 ***                low/IndexProcessing/Counter.COUNTER_COUNTDOWN   exclude "ezcheck.enprove.en_004
 ***                                                                3" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_004
 ***                                                                6" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_012
 ***                                                                5" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_023
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
 ***                                                                exclude "ezcheck.enprove.en_001
 ***                                                                0" EF6BC8T, 2018-09-27: chart 
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
# 1120 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.c" 2
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
# 64 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_Param/src\\USS_Param.h" 2

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
# 1121 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.c" 2
# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.h" 1
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_DS_EFF
 *** TargetLink subsystem : USS_DS_EFF/FrameEFF/Subsystem/FrameEFF/EfficiencyDS_EFF
 *** Codefile             : USS_DS_EFF.h
 ***
 *** Generation date: 2024-08-22 19:38:07
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
 ***                                            SS_DS_EFF\20_IMPL\CgTools\Common_C_Tools\Platform_Tl
 ***                                            Config\cconfig.xml
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


# 1 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/UTILS_lib_UssIdxPrcR.h" 1
/**************************************************************************************************\
 *** 
 *** Simulink model       : USS_DS_EFF
 *** TargetLink subsystem : USS_DS_EFF/FrameEFF/Subsystem/FrameEFF/EfficiencyDS_EFF
 *** Codefile             : UTILS_lib_UssIdxPrcR.h
 ***
 *** Generation date: 2024-08-22 19:38:07
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
 ***                                            SS_DS_EFF\20_IMPL\CgTools\Common_C_Tools\Platform_Tl
 ***                                            Config\cconfig.xml
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


typedef struct tagISV_SUssIdxPrcR1_tp {
    float32 X_SUssIdxPrcR1_Unit_Delay;
    uint32 CUssIdxPrcR1_Counter_ctr;
    uint8 CUssIdxPrcR1_CounterTrigger_na;
    unsigned int CUssIdxPrcR1_Counter_ns : 3;
} ISV_SUssIdxPrcR1_tp; /* Description: Reuse structure */

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
    GLOBAL_FCN: global function(s) (exported to other modules)
\**************************************************************************************************/
extern void USS_IndexProcressing_RF_step(boolean SUssIdxPrcR1_Event_b, float32
     SUssIdxPrcR1_Factor_na, float32 SUssIdxPrcR1_Offdelay_tk, boolean
     SUssIdxPrcR1_VehicleIsMoving_b, float32 * SUssIdxPrcR1_IndexOut_na, ISV_SUssIdxPrcR1_tp *
     pISV);


/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
# 65 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.h" 2

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
(entspricht MERGEABLE_GLOBAL) | Width: 32
\**************************************************************************************************/
extern float32 USS_EFF_s_IdxEff_measure; /* 
    Unit: -
    Description: index for driver type efficiency */

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 8
\**************************************************************************************************/
extern uint8 USS_EFF_s_EffLvl_p100_measure; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: level for driver type efficiency */

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_IN: external global variables (RAM)
(entspricht EXTERN_GLOBAL) | Width: 16
\**************************************************************************************************/
extern uint16 USS_DSE_s_BitFldEveEff_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 65535
    Description: Event bitfield for efficiency index */

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_IN: external global variables (RAM)
(entspricht EXTERN_GLOBAL) | Width: 32
\**************************************************************************************************/
extern float32 USS_DSE_s_EveFactorLgtAHi_measure; /* 
    Unit: -
    Description: event acceleration longitudinal intensity factor */

/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 32
\**************************************************************************************************/
extern float32 USS_EFF_s_CompIdxEff_measure;
extern float32 USS_EFF_s_IdxBrkFrqLo_measure;
extern float32 USS_EFF_s_IdxDSml_measure;
extern float32 USS_EFF_s_IdxDrvPedHi_measure;
extern float32 USS_EFF_s_IdxKckDwn_measure;
extern float32 USS_EFF_s_IdxLatCtlAcv_measure;
extern float32 USS_EFF_s_IdxLgtAHi_measure;
extern float32 USS_EFF_s_IdxLgtCtlAcv_measure;
extern float32 USS_EFF_s_IdxOnePedalMode_measure;
extern float32 USS_EFF_s_IdxPEAEff_measure;
extern float32 USS_EFF_s_IdxRgn_measure;
extern float32 USS_EFF_s_IdxShiftPedDwnEff_measure;
extern float32 USS_EFF_s_IdxShiftPedUp_measure;
extern float32 USS_EFF_s_IdxVSlow_measure;
extern float32 USS_EFF_s_IdxVUniform_measure;

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_IN: external global variables (RAM)
(entspricht EXTERN_GLOBAL) | Width: 8
\**************************************************************************************************/
extern uint8 USS_IP_s_FacRgn_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: factor recuperation */
extern uint8 USS_IP_s_FacShiftPedDwnEff_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: factor shift pedals down efficient */
extern uint8 USS_IP_s_FacShiftPedUp_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: factor shift pedal up */

/**************************************************************************************************\
    GLOBAL_A2L_MODULE_IN: external global variables (RAM)
(entspricht EXTERN_GLOBAL) | Width: 8
\**************************************************************************************************/
extern boolean USS_GC_s_VNotSdsl_measure; /* 
    Unit: -
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 1
    Description: 0: standsill  1: standstill */

/*------------------------------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
    GLOBAL_FCN_UNITY_BUILD_INLINE: global inline function(s) (exported to other modules)
\**************************************************************************************************/
extern void USS_DS_EFF(void);


/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
# 1122 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.c" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 1
/**
 * @file       $RCSfile: dsfxp.h $
 * @brief      This file contains include statements for all fixed-point header files.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2012, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.19 $ $Date: 2015/07/13 10:50:04CEST $
 */

/* Note:
 *  RELATED FILES:
 *    adv64.h
 *    cmp.h
 *    copy.h
 *    div.h
 *    fir.h
 *    fit.h
 *    mul.h
 *    neg.h
 *    sat.h
 *    shl.h
 *    shr.h
 *    sqrt.h
 *    sum.h
 *    sumprot.h
 *    trig.h
 *    tl_math.h
 *
 *    C-macros are characterized by a leading "C__".
 *    ANSI-C-functions are characterized by a leading "F__".
 *    The macro/function-name represents the implemented operation(s):
 *    (C__|F__) + output_type + OPERATION + input_type [+ input_type] [+ _SAT|_PROT]
 */
# 52 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h"
# 1 "C:/Program Files/dSPACE TargetLink 4.3/Matlab/Tl/ApplicationBuilder/BoardPackages/HostPC64/GCC\\tllimits.h" 1
/**
 * @file       $RCSfile: tllimits.h $
 * @brief      Implementation of platform-dependent limit definitions for intel x86_64 / GNU C-Compiler  
 * @author     Sebastian Hillebrand
 * @copyright  (c) 2016, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.3 $ $Date: 2016/08/10 10:58:13CEST $
 */
# 53 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2




# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/adv64.h" 1
/**
 * @file       $RCSfile: adv64.h $
 * @brief      This file contains advanced functions and macros for 64bit arithmetic.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2017, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.7 $ $Date: 2017/07/27 14:25:32CEST $
 */

/* Note:
 *   This file functions and macros in this file are implemented in ANSI-C Code,
 *   but they are target dependent! The functions are using complex data types
 *   containing structs, unions and arrays, so the handling of some pointers
 *   depends on the "Endian" of the target.
 * - C-macros are characterized by a leading "C__".
 *   Ansi-C-functions are characterized by a leading "F__".
 * - The macro/function-name represents the implemented operation(s):
 *  (C__|F__) + output_type + OPERATION + input_type [+ input_type] [+ _SAT]
 * - Note: The target's endian must be defined in the "tl_types.h" file.
 *
 ***** TYPEDEFS *****
 *   UInt64s             64bit data type containing a two 32bit values (struct)
 *   Int64s              64bit data type containing a two 32bit values (struct)
 *
 ***** BASE FUNCTIONS *****
 *   negate();           negate a 64bit value
 *
 ***** MUL *****
 *   F__U64sMULU32U32(); multiply two 32bit values with a 64bit result (internal use)
 *   F__I64sMULI32U32(); multiply two 32bit values with a 64bit result (internal use)
 *   F__I64sMULU32I32(); multiply two 32bit values with a 64bit result (internal use)
 *   F__I64sMULI32I32(); multiply two 32bit values with a 64bit result (internal use)
 *
 ***** DIV *****
 *   div3by2();          divide a 3-digit value by a 2-digit value (internal use)
 *
 *   F__U64sDIVU64sU16();divide a 64bit value by a 16bit value (internal use)
 *   F__U32DIVU64sU16(); divide a 64bit value by a 16bit value (internal use)
 *
 *   F__U64sDIVU64sU32();divide a 64bit value by a 32 bit value (internal use)
 *   F__I64sDIVI64sU32();divide a 64bit value by a 32 bit value (internal use)
 *   F__I64sDIVU64sI32();divide a 64bit value by a 32 bit value (internal use)
 *   F__I64sDIVI64sI32();divide a 64bit value by a 32 bit value (internal use)
 *   F__U32DIVU64sU32(); divide a 64bit value by a 32 bit value (internal use)
 *   F__I32DIVI64sU32(); divide a 64bit value by a 32 bit value (internal use)
 *   F__I32DIVU64sI32(); divide a 64bit value by a 32 bit value (internal use)
 *   F__I32DIVI64sI32(); divide a 64bit value by a 32 bit value (internal use)
 */






/* Definition of basic type */


typedef struct
{
    UInt32 lo;
    Int32 hi;
} Int64s;

typedef struct
{
    UInt32 lo;
    UInt32 hi;
} UInt64s;
# 92 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/adv64.h"
/* negate a UInt64s */
void negate(UInt64s *x);


/* divide three digits by two (used by multiword division) */
UInt16 div3by2(UInt16 u[3], UInt32 v);

/* divide a UInt64s by an UInt16 */
UInt64s F__U64sDIVU64sU16(const UInt64s *u, UInt16 a);

/* divide a UInt64s by an UInt16 */
UInt32 F__U32DIVU64sU16(const UInt64s *u, UInt16 a);

/* divide unsigned UInt64s by UInt32 */
UInt64s F__U64sDIVU64sU32(const UInt64s *U, UInt32 v);

/* mixed division of Int64s by UInt32 */
Int64s F__I64sDIVI64sU32(const Int64s *u, UInt32 a);

/* mixed division of UInt64s by Int32 */
Int64s F__I64sDIVU64sI32(const UInt64s *u, Int32 v);

/* signed division of Int64s by Int32 */
Int64s F__I64sDIVI64sI32(const Int64s *u, Int32 v);

/* divide unsigned UInt64s by UInt32 */
UInt32 F__U32DIVU64sU32(const UInt64s *U, UInt32 v);

/* mixed division of Int64s by UInt32 */
Int32 F__I32DIVI64sU32(const Int64s *u, UInt32 a);

/* mixed division of UInt64s by Int32 */
Int32 F__I32DIVU64sI32(const UInt64s *u, Int32 v);

/* signed division of Int64s by Int32 */
Int32 F__I32DIVI64sI32(const Int64s *u, Int32 v);
# 58 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/cmp.h" 1
/**
 * @file       $RCSfile: cmp.h $
 * @brief      This file contains macro definitions for 64bit relational operators.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2016, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.11 $ $Date: 2016/06/23 17:16:07CEST $
 */

/* Note:
 *   Both operands must have the same signedness.
 *
 *   The macro name represents the implemented operation:
 *     C__<operation><input_width>
 *
 *     input_width: 64
 *     operation  : EQ, NE, GT, LT, GE, LE
 *
 *     The result of the comparison is always 0 or 1.
 *     All macros have no return value.
 *
 *   The parameters are classified with three keywords.
 *    Parameter  Description                    Properties
 *    --------------------------------------------------------------------------
 *    v*_h       upper part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 *    v*_l       lower part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 */






/* create essential bool values */



/******************************************************************************
*
* GENERAL:
*   Generic rules, all operations, Wx == 64
*
******************************************************************************/

/******************************************************************************
*
* MACROS:
*   C__EQ64(v1_h, v1_l, v2_h, v2_l)
*   C__NE64(v1_h, v1_l, v2_h, v2_l)
*   C__GT64(v1_h, v1_l, v2_h, v2_l)
*   C__LT64(v1_h, v1_l, v2_h, v2_l)
*   C__GE64(v1_h, v1_l, v2_h, v2_l)
*   C__LE64(v1_h, v1_l, v2_h, v2_l)
*
* NOTE:
*   The input parameter is not put in parantheses inside the macro body.
*   Thus, the input value must not be an expression.
*
******************************************************************************/



/* END C__EQ64() */



/* END C__NE64() */



/* END C__GT64() */



/* END C__LT64() */



/* END C__GE64() */



/* END C__LE64() */





Int8 F__EQFLT(Float32 v1, Float32 v2);
# 105 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/cmp.h"
Int8 F__EQDBL(Float64 v1, Float64 v2);
# 59 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/copy.h" 1
/**
 * @file       $RCSfile: copy.h $
 * @brief      This file contains macro definitions the negation with 64bit values.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2016, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.6 $ $Date: 2016/12/01 08:24:43CET $
 */

/* Note:
 * - C-macros are characterized by a leading "C__".
 *   Ansi-C-functions are characterized by a leading "F__".
 * - The macro/function-name represents the implemented operation(s):
 *	(C__|F__) + output_type + OPERATION + input_type [+ input_type] [+ _SAT]
 *
 *   C__I64COPYI64():             copy value 64bit->64bit
 *   C__U64COPYU64():             copy value 64bit->64bit
 *   C__I64COPYI32():             copy value 32bit->64bit
 *   C__I64COPYU32():             copy value 32bit->64bit
 *   C__U64COPYU32():             copy value 32bit->64bit
 */





/******************************************************************************
*
* MACRO:
*   C__I64COPYI64(v_h, v_l, r_h, r_l)
*   C__U64COPYU64(v_h, v_l, r_h, r_l)
*   C__I64COPYU64(v_h, v_l, r_h, r_l)
*   C__U64COPYI64(v_h, v_l, r_h, r_l)
*
* DESCRIPTION:
*   Copies a 64 bit value to a 64bit value
*
* PARAMETERS:
*   type    name    meaning
*  xInt32   v_h    upper 32bit of the input value
*  UInt32   v_l    lower 32bit of the input value
*
* RETURNS:
*  yInt32   r_h    upper 32bit of the result
*  UInt32   r_l    lower 32bit of the result
*
******************************************************************************/
# 72 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/copy.h"
/******************************************************************************
*
* MACRO:
*   C__I64COPYI32(v, r_h, r_l)
*   C__I64COPYU32(v, r_h, r_l)
*   C__U64COPYU32(v, r_h, r_l)
*   C__U64COPYI32(v, r_h, r_l)
*
* DESCRIPTION:
*   Copies a 32 bit value to a 64bit value
*
* PARAMETERS:
*   type    name    meaning
*  xInt32   v       input value
*
* RETURNS:
*  yInt32   r_h    upper 32bit of the result
*  UInt32   r_l    lower 32bit of the result
*
******************************************************************************/
# 60 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h" 1
/**
 * @file       $RCSfile: div.h $
 * @brief      This file contains macro definitions and function declarations
 *             for the division with 64bit values and automatic saturation.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2017, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.13 $ $Date: 2017/04/07 12:10:36CEST $
 */

/* Note:
 * - C-macros are characterized by a leading "C__".
 *   Ansi-C-functions are characterized by a leading "F__".
 * - The macro/function-name represents the implemented operation(s):
 *  (C__|F__) + output_type + OPERATION + input_type [+ input_type] [+ _SAT]
 *
 *   C__I64DIVI64I32():          signed division 64bit/32bit=>64bit
 *   F__I64DIVI64I32():          signed division 64bit/32bit=>64bit
 *   C__I64DIVI64U32():          mixed division 64bit/32bit=>64bit
 *   F__I64DIVI64U32():          mixed division 64bit/32bit=>64bit
 *   C__I64DIVU64I32():          mixed division 64bit/32bit=>64bit
 *   F__I64DIVU64I32():          mixed division 64bit/32bit=>64bit
 *   C__U64DIVU64U32():          unsigned division 64bit/32bit=>64bit
 *   F__U64DIVU64U32():          unsigned division 64bit/32bit=>64bit
 *   C__U64DIVI64I32():          signed division 64bit/32bit=>64bit
 *   F__U64DIVI64I32():          signed division 64bit/32bit=>64bit
 *   C__U64DIVI64U32():          mixed division 64bit/32bit=>64bit
 *   F__U64DIVI64U32():          mixed division 64bit/32bit=>64bit
 *   C__U64DIVU64I32():          mixed division 64bit/32bit=>64bit
 *   F__U64DIVU64I32():          mixed division 64bit/32bit=>64bit
 *   C__I64DIVU64U32():          unsigned division 64bit/32bit=>64bit
 *   F__I64DIVU64U32():          unsigned division 64bit/32bit=>64bit
 *
 *   C__I64DIVI32I32():          signed division 32bit/32bit=>64bit
 *   C__I64DIVU32I32():          mixed division 32bit/32bit=>64bit
 *
 *   C__I32DIVI64I32():          signed division 64bit/32bit=>32bit
 *   F__I32DIVI64I32():          signed division 64bit/32bit=>32bit
 *   C__I32DIVI64U32():          mixed division 64bit/32bit=>32bit
 *   F__I32DIVI64U32():          mixed division 64bit/32bit=>32bit
 *   C__I32DIVU64I32():          mixed division 64bit/32bit=>32bit
 *   F__I32DIVU64I32():          mixed division 64bit/32bit=>32bit
 *   C__U32DIVU64U32():          unsigned division 64bit/32bit=>32bit
 *   F__U32DIVU64U32():          unsigned division 64bit/32bit=>32bit
 *   C__I32DIVU64U32():          unsigned division 64bit/32bit=>32bit
 *   F__I32DIVU64U32():          unsigned division 64bit/32bit=>32bit
 *   C__U32DIVI64I32():          signed division 64bit/32bit=>32bit
 *   F__U32DIVI64I32():          signed division 64bit/32bit=>32bit
 *   C__U32DIVI64U32():          mixed division 64bit/32bit=>32bit
 *   F__U32DIVI64U32():          mixed division 64bit/32bit=>32bit
 *   C__U32DIVU64I32():          mixed division 64bit/32bit=>32bit
 *   F__U32DIVU64I32():          mixed division 64bit/32bit=>32bit
 *   C__I16DIVI64I32():          signed division 64bit/32bit=>16bit
 *   C__I16DIVI64U32():          mixed division 64bit/32bit=>16bit
 *   C__I16DIVU64I32():          mixed division 64bit/32bit=>16bit
 *   C__I16DIVU64U32():          unsigned division 64bit/32bit=>16bit
 *   C__U16DIVI64I32():          signed division 64bit/32bit=>16bit
 *   C__U16DIVI64U32():          mixed division 64bit/32bit=>16bit
 *   C__U16DIVU64I32():          mixed division 64bit/32bit=>16bit
 *   C__U16DIVU64U32():          unsigned division 64bit/32bit=>16bit
 *   C__I8DIVI64I32():           signed division 64bit/32bit=>8bit
 *   C__I8DIVI64U32():           mixed division 64bit/32bit=>8bit
 *   C__I8DIVU64I32():           mixed division 64bit/32bit=>8bit
 *   C__I8DIVU64U32():           unsigned division 64bit/32bit=>8bit
 *   C__U8DIVI64I32():           signed division 64bit/32bit=>8bit
 *   C__U8DIVI64U32():           mixed division 64bit/32bit=>8bit
 *   C__U8DIVU64I32():           mixed division 64bit/32bit=>8bit
 *   C__U8DIVU64U32():           usigned division 64bit/32bit=>8bit
 *
 *   C__I32DIVI64C32_SAT():      saturated mixed division 64bit/32bit=>32bit
 *   C__I32DIVU64C32_SAT():      saturated unsigned division 64bit/32bit=>32bit
 *   C__U32DIVI64C32_SAT():      saturated mixed division 64bit/32bit=>32bit
 *   C__U32DIVU64C32_SAT():      saturated unsigned division 64bit/32bit=>32bit
 *   C__I16DIVI64C32_SAT():      saturated mixed division 64bit/32bit=>16bit
 *   C__I16DIVU64C32_SAT():      saturated unsigned division 64bit/32bit=>16bit
 *   C__U16DIVI64C32_SAT():      saturated mixed division 64bit/32bit=>16bit
 *   C__U16DIVU64C32_SAT():      saturated unsigned division 64bit/32bit=>16bit
 *   C__I8DIVI64C32_SAT():       saturated mixed division 64bit/32bit=>8bit
 *   C__I8DIVU64C32_SAT():       saturated unsigned division 64bit/32bit=>8bit
 *   C__U8DIVI64C32_SAT():       saturated mixed division 64bit/32bit=>8bit
 *   C__U8DIVU64C32_SAT():       saturated unsigned division 64bit/32bit=>8bit
 */





/******************************************************************************
* MACRO:
*   C__I64DIVI64I32(n_h, n_l, d, r_h, r_l)
*   C__U64DIVI64I32(n_h, n_l, d, r_h, r_l)
*
* DESCRIPTION:
*   Divides the 64bit Value n by the 32bit Value d with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32    n_h    upper 32Bit of the nominator
*   UInt32   n_l    lower 32Bit of the nominator
*   Int32      d    denominator
*
* RETURNS:
*  yInt32    r_h    upper 32bit of the result
*  UInt32    r_l    lower 32bit of the result
*
* NOTE:
*  - the algorithm supports only calculations with unsigned values. Therefore
*    the sign of the result is determined separately.
******************************************************************************/
# 128 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/* END C__I64DIVI64I32()
       C__U64DIVI64I32() */


/******************************************************************************
* FUNCTION:
*   F__I64DIVI64I32(n_h, n_l, d, r_h, r_l)
*   F__U64DIVI64I32(n_h, n_l, d, r_h, r_l)
******************************************************************************/
void F__I64DIVI64I32(Int32 n_h, UInt32 n_l, Int32 d, Int32 *r_h, UInt32 *r_l);





/******************************************************************************
* MACRO:
*   C__I64DIVI64U32(n_h, n_l, d, r_h, r_l)
*   C__U64DIVI64U32(n_h, n_l, d, r_h, r_l)
*
* DESCRIPTION:
*   Divides the 64bit Value n by the 32bit Value d with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32    n_h    upper 32Bit of the nominator
*  UInt32    n_l    lower 32Bit of the nominator
*  UInt32      d    denominator
*  yInt32    r_h    upper 32bit of the result
*  UInt32    r_l    lower 32bit of the result
*
* NOTE:
*  - the algorithm supports only calculations with unsigned values. Therefore
*    the sign of the result is determined separately.
*  - n cannot be negative if result is unsigned -> cast n_h to unsigned
******************************************************************************/
# 183 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/* END C__I64DIVI64U32()
       C__U64DIVI64U32() */

/******************************************************************************
* FUNCTION:
*   F__I64DIVI64U32(n_h, n_l, d, r_h, r_l)
*   F__U64DIVI64U32(n_h, n_l, d, r_h, r_l)
******************************************************************************/
void F__I64DIVI64U32(Int32 n_h, UInt32 n_l, UInt32 d, Int32 *r_h, UInt32 *r_l);





/******************************************************************************
* MACRO:
*   C__I64DIVU64I32(n_h, n_l, d, r_h, r_l)
*   C__U64DIVU64I32(n_h, n_l, d, r_h, r_l)
*
* DESCRIPTION:
*   Divides the 64bit Value n by the 32bit Value d with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*  UInt32    n_h    upper 32Bit of the nominator
*  UInt32    n_l    lower 32Bit of the nominator
*   Int32      d    denominator
*  yInt32    r_h    upper 32bit of the result
*  UInt32    r_l    lower 32bit of the result
*
* NOTE:
*  - the algorithm supports only calculations with unsigned values. Therefore
*    the sign of the result is determined separately.
*  - d cannot be negative if result is unsigned -> cast d to unsigned
******************************************************************************/
# 238 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/* END C__I64DIVU64I32()
       C__U64DIVU64I32() */

/******************************************************************************
* FUNCTION:
*   F__I64DIVU64I32(n_h, n_l, d, r_h, r_l)
*   F__U64DIVU64I32(n_h, n_l, d, r_h, r_l)
******************************************************************************/
void F__I64DIVU64I32(UInt32 n_h, UInt32 n_l, Int32 d, Int32 *r_h, UInt32 *r_l);





/******************************************************************************
* MACRO:
*   C__U64DIVU64U32(n_h, n_l, d, r_h, r_l)
*   C__I64DIVU64U32(n_h, n_l, d, r_h, r_l)
*
* DESCRIPTION:
*   Divides the 64bit Value n by the 32bit Value d with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*  UInt32    n_h    upper 32Bit of the nominator
*  UInt32    n_l    lower 32Bit of the nominator
*  UInt32      d    denominator
*  yInt32    r_h    upper 32bit of the result
*  UInt32    r_l    lower 32bit of the result
*
* NOTE:
*  - the algorithm supports only calculations with unsigned values. Therefore
*    the sign of the result is determined separately.
******************************************************************************/
# 291 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/* END C__I64DIVU64U32()
       C__U64DIVU64U32() */


/******************************************************************************
* FUNCTION:
*   F__U64DIVU64U32(n_h, n_l, d, r_h, r_l)
*   F__I64DIVU64U32(n_h, n_l, d, r_h, r_l)
******************************************************************************/
void F__U64DIVU64U32(UInt32 n_h, UInt32 n_l, UInt32 d, UInt32 *r_h, UInt32 *r_l);





/******************************************************************************
* MACRO:
*   C__I64DIVI32I32(n, d, r_h, r_l)
*
* DESCRIPTION:
*   Divides the 32bit Value n by the 32bit Value d with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32      n    nominator
*   Int32      d    denominator
*   Int32    r_h    upper 32bit of the result
*  UInt32    r_l    lower 32bit of the result
*
* NOTE:
*  - the algorithm supports only calculations with unsigned values. Therefore
*    the sign of the result is determined separately.
******************************************************************************/
# 334 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/******************************************************************************
* MACRO:
*   C__I64DIVU32I32(n, d, r_h, r_l)
*
* DESCRIPTION:
*   Divides the 32bit Value n by the 32bit Value d with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   UInt32     n    nominator
*   Int32      d    denominator
*   Int32    r_h    upper 32bit of the result
*  UInt32    r_l    lower 32bit of the result
*
* NOTE:
*  - the algorithm supports only calculations with unsigned values. Therefore
*    the sign of the result is determined separately.
******************************************************************************/
# 363 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/******************************************************************************
* MACRO:
*   C__I32DIVI64I32(n_h, n_l, d, r)
*
* DESCRIPTION:
*   Divides the 64bit Value n by the 32bit Value d with a 32bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32    n_h    upper 32Bit of the nominator
*   UInt32   n_l    lower 32Bit of the nominator
*   Int32      d    denominator
*   Int32      r    result
*
* NOTE:
*  - the algorithm supports only calculations with unsigned values. Therefore
*    the sign of the result is determined separately.
******************************************************************************/
# 390 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/******************************************************************************
* FUNCTION:
*   F__I32DIVI64I32(n_h, n_l, d)
******************************************************************************/
Int32 F__I32DIVI64I32(Int32 n_h, UInt32 n_l, Int32 d);


/******************************************************************************
* MACRO:
*   C__I32DIVI64U32(n_h, n_l, d, r)
*
* DESCRIPTION:
*   Divides the 64bit Value n by the 32bit Value d with a 32bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32    n_h    upper 32Bit of the nominator
*   UInt32   n_l    lower 32Bit of the nominator
*   UInt32     d    denominator
*   Int32      r    result
*
* NOTE:
*  - the algorithm supports only calculations with unsigned values. Therefore
*    the sign of the result is determined separately.
******************************************************************************/
# 424 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/******************************************************************************
* FUNCTION:
*   F__I32DIVI64U32(n_h, n_l, d)
******************************************************************************/
Int32 F__I32DIVI64U32(Int32 n_h, UInt32 n_l, UInt32 d);


/******************************************************************************
* MACRO:
*   C__I32DIVU64I32(n_h, n_l, d, r)
*
* DESCRIPTION:
*   Divides the 64bit Value n by the 32bit Value d with a 32bit result.
*
* PARAMETERS:
*   type    name    meaning
*   UInt32   n_h    upper 32Bit of the nominator
*   UInt32   n_l    lower 32Bit of the nominator
*   Int32      d    denominator
*   Int32      r    result
*
* NOTE:
*  - the algorithm supports only calculations with unsigned values. Therefore
*    the sign of the result is determined separately.
*  - n must fit into Int64, if the result should fit into Int32. Therefore the
*    macro C__I32DIVI64I32() is used.
******************************************************************************/
# 460 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/******************************************************************************
* FUNCTION:
*   F__I32DIVU64I32(n_h, n_l, d, r)
******************************************************************************/
Int32 F__I32DIVU64I32(UInt32 n_h, UInt32 n_l, Int32 d);


/******************************************************************************
* MACRO:
*   C__U32DIVU64U32(n_h, n_l, d, r)
*
* DESCRIPTION:
*   Divides the 64bit Value n by the 32bit Value d with a 32bit result.
*
* PARAMETERS:
*   type    name    meaning
*   UInt32   n_h    upper 32Bit of the nominator
*   UInt32   n_l    lower 32Bit of the nominator
*   UInt32     d    denominator
*   UInt32     r    result
*
* NOTE:
*  - the algorithm supports only calculations with unsigned values. Therefore
*    the sign of the result is determined separately.
******************************************************************************/
# 494 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/******************************************************************************
* FUNCTION:
*   F__U32DIVU64U32(n_h, n_l, d)
******************************************************************************/
UInt32 F__U32DIVU64U32(UInt32 n_h, UInt32 n_l, UInt32 d);


/******************************************************************************
* MACROs:
*   C__I32DIVU64U32(n_h, n_l, d, r)
*   C__U32DIVI64U32(n_h, n_l, d, r)
*   C__I16DIVI64U32(n_h, n_l, d, r)
*   C__I16DIVU64U32(n_h, n_l, d, r)
*   C__U16DIVI64U32(n_h, n_l, d, r)
*   C__U16DIVU64U32(n_h, n_l, d, r)
*   C__I8DIVI64U32(n_h, n_l, d, r)
*   C__I8DIVU64U32(n_h, n_l, d, r)
*   C__U8DIVI64U32(n_h, n_l, d, r)
*   C__U8DIVU64U32(n_h, n_l, d, r)
*
* DESCRIPTION:
*   Divides the 64bit Value n by the 32bit Value d with a yybit result.
*
* PARAMETERS:
*   type    name    meaning
*   xInt32   n_h    upper 32Bit of the nominator
*   UInt32   n_l    lower 32Bit of the nominator
*   UInt32     d    denominator (0 ... 2^31-1)
*   yIntyy     r    result
******************************************************************************/
# 608 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/******************************************************************************
* FUNCTIONs:
*   F__I32DIVU64U32(n_h, n_l, d)
*   F__U32DIVI64I32(n_h, n_l, d)
*   F__U32DIVI64U32(n_h, n_l, d)
*   F__U32DIVU64I32(n_h, n_l, d)
******************************************************************************/
# 625 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/******************************************************************************
* MACRO:
*   C__I32DIVI64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*   C__I32DIVU64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*   C__U32DIVI64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*   C__U32DIVU64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*   C__I16DIVI64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*   C__I16DIVU64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*   C__U16DIVI64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*   C__U16DIVU64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*   C__I8DIVI64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*   C__I8DIVU64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*   C__U8DIVI64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*   C__U8DIVU64C32_SAT(v_h, v_l, cd, cmax_h, cmax_l, csatval, r)
*
* DESCRIPTION:
*   Macro divides a 64bit value by a 32bit value (with a 32bit result);
*   result = v / d;
*
* PARAMETERS:
*   type    name    meaning
*   xInt32   v_h    input-value highword
*   UInt32   v_l    input-value lowword
*   UInt32    cd    constant denominator
*   xInt32  cmax_h  limit of input value for saturation (highword)
*   UInt32  cmax_l  limit of input value for saturation (lowword)
*   Int32   csatval output value for saturation
*   yIntzz     r    result of division (saturated)
*
* NOTE:
*   for TyWy = Int32:   cmax = (2^31 * n) - 1      ; cmin = -(cmax+1)
*   for TyWy = UInt32:  cmax = (2^32 * n) - 1      ; cmin = -(cmax+1) = 0
*   for TyWy = Int16:   cmax = (2^15 * n) - 1      ; cmin = -(cmax+1)
*   for TyWy = UInt16:  cmax = (2^16 * n) - 1      ; cmin = -(cmax+1) = 0
*   for TyWy = Int8:    cmax = (2^7 * n) - 1       ; cmin = -(cmax+1)
*   for TyWy = UInt8:   cmax = (2^8 * n) - 1       ; cmin = -(cmax+1) = 0
******************************************************************************/
# 724 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/*END C__IyyDIVI64C32_SAT() */
# 789 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/*END C__UyyDIVI64C32_SAT() */

/* check to lower side isn't neccessary, because of unsigned values and saturation to data type limits */
# 824 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/*END C__IyyDIVU64C32_SAT() */

/* check to lower side isn't neccessary, because of unsigned values and saturation to data type limits */
# 859 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/div.h"
/*END C__UyyDIVU64C32_SAT() */
# 61 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h" 1
/**
 * @file       $RCSfile: fir.h $
 * @brief      This file contains macro definitions and function declarations for FIR filter calculations.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2017, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.19 $ $Date: 2017/04/06 09:26:24CEST $
 */

/* Note:
 *   The macro/function name represents the implemented operation:
 *     Syntax: (C__|F__) + <result type> + <OPERATION> + <accu width> [+ _SAT] + _ + <input type> + [CB] + <coefficients' type>
 *
 *   C macro names begin with "C__" and C function names begin with "F__".
 *   CB means a circular buffer is used.
 *
 * Macros:
 *   C__I8FIR8_I8I8()
 *   C__I8FIR8_SAT_I8I8()
 *   C__I16FIR16_I8I8()
 *   C__I16FIR16_SAT_I8I8()
 *   C__I32FIR32_SAT_I8I8()
 *   C__I32FIR32_I8I8()
 *   C__I64FIR64_I8I8()
 *   C__I64FIR64_SAT_I8I8()
 *   C__I16FIR16_I8I16()
 *   C__I16FIR16_I16I16()
 *   C__I16FIR16_SAT_I8I16()
 *   C__I16FIR16_SAT_I16I16()
 *   C__I32FIR32_I8I16()
 *   C__I32FIR32_I16I16()
 *   C__I32FIR32_SAT_I8I16()
 *   C__I32FIR32_SAT_I16I16()
 *   C__I64FIR64_I8I16()
 *   C__I64FIR64_I16I16()
 *   C__I64FIR64_SAT_I8I16()
 *   C__I64FIR64_SAT_I16I16()
 *   C__I32FIR32_I8I32()
 *   C__I32FIR32_I16I32()
 *   C__I32FIR32_I32I32()
 *   C__I32FIR32_SAT_I8I32()
 *   C__I32FIR32_SAT_I16I32()
 *   C__I32FIR32_SAT_I32I32()
 *   C__I64FIR64_I8I32()
 *   C__I64FIR64_I16I32()
 *   C__I64FIR64_I32I32()
 *   C__I64FIR64_SAT_I8I32()
 *   C__I64FIR64_SAT_I16I32()
 *   C__I64FIR64_SAT_I32I32()
 *   C__F32FIR32_F32F32()
 *   C__F64FIR64_F64F64()
 *
 *   C__U8FIR8_U8CBU8()
 *   C__U8FIR8_SAT_U8CBU8()
 *   C__U16FIR16_U8CBU8()
 *   C__U16FIR16_SAT_U8CBU8()
 *   C__U32FIR32_SAT_U8CBU8()
 *   C__U32FIR32_U8CBU8()
 *   C__U64FIR64_U8CBU8()
 *   C__U64FIR64_SAT_U8CBU8()
 *   C__U16FIR16_U8CBU16()
 *   C__U16FIR16_U16CBU16()
 *   C__U16FIR16_SAT_U8CBU16()
 *   C__U16FIR16_SAT_U16CBU16()
 *   C__U32FIR32_U8CBU16()
 *   C__U32FIR32_U16CBU16()
 *   C__U32FIR32_SAT_U8CBU16()
 *   C__U32FIR32_SAT_U16CBU16()
 *   C__U64FIR64_U8CBU16()
 *   C__U64FIR64_U16CBU16()
 *   C__U64FIR64_SAT_U8CBU16()
 *   C__U64FIR64_SAT_U16CBU16()
 *   C__U32FIR32_U8CBU32()
 *   C__U32FIR32_U16CBU32()
 *   C__U32FIR32_U32CBU32()
 *   C__U32FIR32_SAT_U8CBU32()
 *   C__U32FIR32_SAT_U16CBU32()
 *   C__U32FIR32_SAT_U32CBU32()
 *   C__U64FIR64_U8CBU32()
 *   C__U64FIR64_U16CBU32()
 *   C__U64FIR64_U32CBU32()
 *   C__U64FIR64_SAT_U8CBU32()
 *   C__U64FIR64_SAT_U16CBU32()
 *   C__U64FIR64_SAT_U32CBU32()
 *
 * Function declarations:
 *   F__I8FIR8_I8I8()
 *   F__I8FIR8_SAT_I8I8()
 *   F__I16FIR16_I8I8()
 *   F__I16FIR16_SAT_I8I8()
 *   F__I32FIR32_I8I8()
 *   F__I32FIR32_SAT_I8I8()
 *   F__I64FIR64_I8I8()
 *   F__I64FIR64_SAT_I8I8()
 *   F__I16FIR16_I8I16()
 *   F__I16FIR16_I16I16()
 *   F__I16FIR16_SAT_I8I16()
 *   F__I16FIR16_SAT_I16I16()
 *   F__I32FIR32_I8I16()
 *   F__I32FIR32_I16I16()
 *   F__I32FIR32_SAT_I8I16()
 *   F__I32FIR32_SAT_I16I16()
 *   F__I64FIR64_I8I16()
 *   F__I64FIR64_I16I16()
 *   F__I64FIR64_SAT_I8I16()
 *   F__I64FIR64_SAT_I16I16()
 *   F__I32FIR32_I8I32()
 *   F__I32FIR32_I16I32()
 *   F__I32FIR32_I32I32()
 *   F__I32FIR32_SAT_I8I32()
 *   F__I32FIR32_SAT_I16I32()
 *   F__I32FIR32_SAT_I32I32()
 *   F__I64FIR64_I8I32()
 *   F__I64FIR64_I16I32()
 *   F__I64FIR64_I32I32()
 *   F__I64FIR64_SAT_I8I32()
 *   F__I64FIR64_SAT_I16I32()
 *   F__I64FIR64_SAT_I32I32()
 *   F__U8FIR8_U8U8()
 *   F__U8FIR8_SAT_U8U8()
 *   F__U16FIR16_U8U8()
 *   F__U16FIR16_SAT_U8U8()
 *   F__U32FIR32_U8U8()
 *   F__U32FIR32_SAT_U8U8()
 *   F__U64FIR64_U8U8()
 *   F__U64FIR64_SAT_U8U8()
 *   F__U16FIR16_U8U16()
 *   F__U16FIR16_U16U16()
 *   F__U16FIR16_SAT_U8U16()
 *   F__U16FIR16_SAT_U16U16()
 *   F__U32FIR32_U8U16()
 *   F__U32FIR32_U16U16()
 *   F__U32FIR32_SAT_U8U16()
 *   F__U32FIR32_SAT_U16U16()
 *   F__U64FIR64_U8U16()
 *   F__U64FIR64_U16U16()
 *   F__U64FIR64_SAT_U8U16()
 *   F__U64FIR64_SAT_U16U16()
 *   F__U32FIR32_U8U32()
 *   F__U32FIR32_U16U32()
 *   F__U32FIR32_U32U32()
 *   F__U32FIR32_SAT_U8U32()
 *   F__U32FIR32_SAT_U16U32()
 *   F__U32FIR32_SAT_U32U32()
 *   F__U64FIR64_U8U32()
 *   F__U64FIR64_U16U32()
 *   F__U64FIR64_U32U32()
 *   F__U64FIR64_SAT_U8U32()
 *   F__U64FIR64_SAT_U16U32()
 *   F__U64FIR64_SAT_U32U32()
 *   F__F32FIR32_F32F32()
 *   F__F64FIR64_F64F64()
 *   F__I8FIR8_I8CBI8()
 *   F__I8FIR8_SAT_I8CBI8()
 *   F__I16FIR16_I8CBI8()
 *   F__I16FIR16_SAT_I8CBI8()
 *   F__I32FIR32_I8CBI8()
 *   F__I32FIR32_SAT_I8CBI8()
 *   F__I64FIR64_I8CBI8()
 *   F__I64FIR64_SAT_I8CBI8()
 *   F__I16FIR16_I8CBI16()
 *   F__I16FIR16_I16CBI16()
 *   F__I16FIR16_SAT_I8CBI16()
 *   F__I16FIR16_SAT_I16CBI16()
 *   F__I32FIR32_I8CBI16()
 *   F__I32FIR32_I16CBI16()
 *   F__I32FIR32_SAT_I8CBI16()
 *   F__I32FIR32_SAT_I16CBI16()
 *   F__I64FIR64_I8CBI16()
 *   F__I64FIR64_I16CBI16()
 *   F__I64FIR64_SAT_I8CBI16()
 *   F__I64FIR64_SAT_I16CBI16()
 *   F__I32FIR32_I8CBI32()
 *   F__I32FIR32_I16CBI32()
 *   F__I32FIR32_I32CBI32()
 *   F__I32FIR32_SAT_I8CBI32()
 *   F__I32FIR32_SAT_I16CBI32()
 *   F__I32FIR32_SAT_I32CBI32()
 *   F__I64FIR64_I8CBI32()
 *   F__I64FIR64_I16CBI32()
 *   F__I64FIR64_I32CBI32()
 *   F__I64FIR64_SAT_I8CBI32()
 *   F__I64FIR64_SAT_I16CBI32()
 *   F__I64FIR64_SAT_I32CBI32()
 *   F__U8FIR8_U8CBU8()
 *   F__U8FIR8_SAT_U8CBU8()
 *   F__U16FIR16_U8CBU8()
 *   F__U16FIR16_SAT_U8CBU8()
 *   F__U32FIR32_U8CBU8()
 *   F__U32FIR32_SAT_U8CBU8()
 *   F__U64FIR64_U8CBU8()
 *   F__U64FIR64_SAT_U8CBU8()
 *   F__U16FIR16_U8CBU16()
 *   F__U16FIR16_U16CBU16()
 *   F__U16FIR16_SAT_U8CBU16()
 *   F__U16FIR16_SAT_U16CBU16()
 *   F__U32FIR32_U8CBU16()
 *   F__U32FIR32_U16CBU16()
 *   F__U32FIR32_SAT_U8CBU16()
 *   F__U32FIR32_SAT_U16CBU16()
 *   F__U64FIR64_U8CBU16()
 *   F__U64FIR64_U16CBU16()
 *   F__U64FIR64_SAT_U8CBU16()
 *   F__U64FIR64_SAT_U16CBU16()
 *   F__U32FIR32_U8CBU32()
 *   F__U32FIR32_U16CBU32()
 *   F__U32FIR32_U32CBU32()
 *   F__U32FIR32_SAT_U8CBU32()
 *   F__U32FIR32_SAT_U16CBU32()
 *   F__U32FIR32_SAT_U32CBU32()
 *   F__U64FIR64_U8CBU32()
 *   F__U64FIR64_U16CBU32()
 *   F__U64FIR64_U32CBU32()
 *   F__U64FIR64_SAT_U8CBU32()
 *   F__U64FIR64_SAT_U16CBU32()
 *   F__U64FIR64_SAT_U32CBU32()
 *   F__F32FIR32_F32CBF32()
 *   F__F64FIR64_F64CBF64()
 */






/******************************************************************************
 *
 * MACRO:
 *   C__I8FIR8_I8I8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation.
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 * RETURNS:
 *   Int8    Accu       accumulation variable
 *
 ******************************************************************************/
# 270 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I8FIR8_SAT_I8I8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation.
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 * RETURNS:
 *   Int8    Accu       accumulation variable
 *
 ******************************************************************************/
# 317 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I16FIR16_I8I8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 361 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I16FIR16_SAT_I8I8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 424 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_SAT_I8I8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 487 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_I8I8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation.
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 532 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I8I8(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation.
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 580 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_SAT_I8I8(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation.
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 629 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I16FIR16_I8I16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 674 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I16FIR16_I16I16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 719 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I16FIR16_SAT_I8I16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 766 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I16FIR16_SAT_I16I16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 813 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I32FIR32_I8I16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 858 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I32FIR32_I16I16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 902 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I32FIR32_SAT_I8I16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 965 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I32FIR32_SAT_I16I16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 1028 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I8I16(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 1076 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I16I16(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 1124 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_SAT_I8I16(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation.
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 1173 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_SAT_I16I16(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation.
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 1222 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_I8I32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 1268 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I32FIR32_I16I32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 1314 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I32FIR32_I32I32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int32   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int32*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 1360 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I32FIR32_SAT_I8I32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 1410 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I32FIR32_SAT_I16I32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 1460 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__I32FIR32_SAT_I32I32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int32   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int32*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 1510 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I8I32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 1559 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I16I32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int32*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 1608 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I32I32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int32   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int32*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 1657 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_SAT_I8I32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 1706 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_SAT_I16I32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 1756 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_SAT_I32I32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int32   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int32*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable (high word)
 *   UInt32  Accu_l     accumulation variable (low  word)
 *
 ******************************************************************************/
# 1806 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__F32FIR32_F32F32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type     name       meaning
 *   Float32  Input      current Input
 *   UInt16   NTabs      number of tabs
 *   Float32* DelayLine  address of DelayLine vector
 *   Float32* Coeff      address of Coefficients vector
 * RETURNS:
 *   Float32  Accu       accumulation variable
 *
 ******************************************************************************/
# 1852 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__F64FIR64_F64F64(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type     name       meaning
 *   Float64  Input      current Input
 *   UInt16   NTabs      number of tabs
 *   Float64* DelayLine  address of DelayLine vector
 *   Float64* Coeff      address of Coefficients vector
 * RETURNS:
 *   Float64  Accu       accumulation variable
 *
 ******************************************************************************/
# 1897 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I8FIR8_I8CBI8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int8    Accu       accumulation variable
 *
 ******************************************************************************/
# 1944 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I8FIR8_SAT_I8CBI8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int8    Accu       accumulation variable
 *
 ******************************************************************************/
# 1994 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I16FIR16_I8CBI8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 2041 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I16FIR16_SAT_I8CBI8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 2107 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_SAT_I8CBI8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 2173 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_I8CBI8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 2219 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I8CBI8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   Int32   Accu_h     accumulation variable
 *
 ******************************************************************************/
# 2269 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I8CBI8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturatoin
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int8*   Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 2321 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I16FIR16_I8CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 2369 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I16FIR16_SAT_I8CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 2420 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I16FIR16_I16CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 2466 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I16FIR16_SAT_I16CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int16   Accu       accumulation variable
 *
 ******************************************************************************/
# 2517 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_I8CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 2562 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_SAT_I8CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 2628 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_I16CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 2673 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_SAT_I16CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 2739 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I8CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturatoin
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 2790 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I16CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturatoin
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 2841 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_SAT_I8CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturatoin
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 2893 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_SAT_I16CBI16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturatoin
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int16*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 2944 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_I8CBI32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 2992 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_I16CBI32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 3040 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_I32CBI32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int32   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int32*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 3088 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_SAT_I8CBI32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular and
 *   accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 3141 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_SAT_I16CBI32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular and
 *   accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 3194 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I32FIR32_SAT_I32CBI32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular and
 *   accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int32   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int32*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu       accumulation variable
 *
 ******************************************************************************/
# 3247 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I8CBI32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 3298 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I16CBI32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 3349 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_I32CBI32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int32   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int32*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 3400 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_SAT_I8CBI32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturatoin
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int8    Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int8*   DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 3452 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_SAT_I16CBI32(Input,NTabs,DelayLine,(Coeff),CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturatoin
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int16*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 3504 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__I64FIR64_SAT_I32CBI32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and
 *   accumulation saturatoin
 *
 * PARAMETERS:
 *   type    name       meaning
 *   Int32   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   Int32*  DelayLine  address of DelayLine vector
 *   Int32*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 3557 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__F32FIR32_F32CBF32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type     name       meaning
 *   Float32  Input      current Input
 *   UInt16   NTabs      number of tabs
 *   Float32* DelayLine  address of DelayLine vector
 *   Float32* Coeff      address of Coefficients vector
 *   UInt16   CircCnt    state variable
 * RETURNS:
 *   Float32  Accu       accumulation variable
 *
 ******************************************************************************/
# 3605 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__F64FIR64_F64CBF64(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type     name       meaning
 *   Float64  Input      current Input
 *   UInt16   NTabs      number of tabs
 *   Float64* DelayLine  address of DelayLine vector
 *   Float64* Coeff      address of Coefficients vector
 *   UInt16   CircCnt    state variable
 * RETURNS:
 *   Float64  Accu       accumulation variable
 *
 ******************************************************************************/
# 3652 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U8FIR8_U8U8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation.
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt8   Accu       accumulation variable
 *
 ******************************************************************************/
# 3696 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U8FIR8_SAT_U8U8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt8   Accu       accumulation variable
 *
 ******************************************************************************/
# 3744 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_U8U8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 3788 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_U8U8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 3838 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_SAT_U8U8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 3889 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_U8U8(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 3933 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U8U8(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 3981 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U8U8(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 * RETURNS:
 *   Int32   Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 4029 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_U8U16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation.
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 4073 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_U16U16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation.
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 4117 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_SAT_U8U16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 4164 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_SAT_U16U16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 4211 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_U8U16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 4255 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_U16U16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 4299 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_SAT_U8U16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 4350 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_SAT_U16U16(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 4401 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U8U16(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 4451 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U16U16(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 4499 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U8U16(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 4547 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U16U16(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 4595 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *    C__U32FIR32_U8U32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 4639 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *    C__U32FIR32_U16U32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 4683 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *    C__U32FIR32_U32U32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt32  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt32* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 4727 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_SAT_U8U32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 4775 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *    C__U32FIR32_SAT_U16U32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16*  DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 4823 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *    C__U32FIR32_SAT_U32U32(Input,NTabs,DelayLine,Coeff,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt32  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt32* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 4871 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U8U32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 4920 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U16U32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 4969 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U32U32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt32  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt32* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 5018 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U8U32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 5067 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U16U32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 5116 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U32U32(Input,NTabs,DelayLine,Coeff,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt32  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt32* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 5165 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U8FIR8_U8CBU8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt8   Accu       accumulation variable
 *
 ******************************************************************************/
# 5211 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U8FIR8_SAT_U8CBU8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt8   Accu       accumulation variable
 *
 ******************************************************************************/
# 5260 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_U8CBU8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 5306 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_SAT_U8CBU8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 5359 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_SAT_U8CBU8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 5412 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_U8CBU8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 5458 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U8CBU8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 5508 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U8CBU8(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt8*  Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 5558 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_U8CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 5605 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_U16CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 5651 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_SAT_U8CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 5701 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U16FIR16_SAT_U16CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt16  Accu       accumulation variable
 *
 ******************************************************************************/
# 5750 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__U32FIR32_U8CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 5796 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__U32FIR32_U16CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 5842 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__U32FIR32_SAT_U8CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 5895 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *  C__U32FIR32_SAT_U16CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 5948 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U8CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 5999 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U16CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 6049 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U8CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 6099 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U16CBU16(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt16* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 6149 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_U8CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 6195 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_U16CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 6242 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_U32CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt32  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt32* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 6288 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_SAT_U8CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 6338 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_SAT_U16CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 6388 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U32FIR32_SAT_U32CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt32  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt32* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu       accumulation variable
 *
 ******************************************************************************/
# 6438 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U8CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 6489 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U16CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 6540 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_U32CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt32  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt32* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 6591 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U8CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt8   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt8*  DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 6642 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U16CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt16   Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt16*  DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 6694 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/******************************************************************************
 *
 * MACRO:
 *   C__U64FIR64_SAT_U32CBU32(Input,NTabs,DelayLine,Coeff,CircCnt,Accu_h,Accu_l)
 *
 * DESCRIPTION:
 *   FIR - Filter calculation with circular buffer and accumulation saturation
 *
 * PARAMETERS:
 *   type    name       meaning
 *   UInt32  Input      current Input
 *   UInt16  NTabs      number of tabs
 *   UInt32* DelayLine  address of DelayLine vector
 *   UInt32* Coeff      address of Coefficients vector
 *   UInt16  CircCnt    state variable
 * RETURNS:
 *   UInt32  Accu_h     accumulation variable
 *   UInt32  Accu_l     accumulation variable
 *
 ******************************************************************************/
# 6745 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fir.h"
/*****************************************************************************
 *             FIR - Filter function declarations
 ******************************************************************************/

Int8 F__I8FIR8_I8I8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff);
Int8 F__I8FIR8_SAT_I8I8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff);
Int16 F__I16FIR16_I8I8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff);
Int16 F__I16FIR16_SAT_I8I8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff);
Int32 F__I32FIR32_I8I8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff);
Int32 F__I32FIR32_SAT_I8I8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff);
void F__I64FIR64_I8I8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff,Int32 *Result_h,UInt32 *Result_l);
void F__I64FIR64_SAT_I8I8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff,Int32 *Result_h,UInt32 *Result_l);
Int16 F__I16FIR16_I8I16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff);
Int16 F__I16FIR16_I16I16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff);
Int16 F__I16FIR16_SAT_I8I16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff);
Int16 F__I16FIR16_SAT_I16I16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff);
Int32 F__I32FIR32_I8I16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff);
Int32 F__I32FIR32_I16I16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff);
Int32 F__I32FIR32_SAT_I8I16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff);
Int32 F__I32FIR32_SAT_I16I16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff);
void F__I64FIR64_I8I16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff,Int32 *Result_h,UInt32 *Result_l);
void F__I64FIR64_I16I16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff,Int32 *Result_h,UInt32 *Result_l);
void F__I64FIR64_SAT_I8I16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff,Int32 *Result_h,UInt32 *Result_l);
void F__I64FIR64_SAT_I16I16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff,Int32 *Result_h,UInt32 *Result_l);
Int32 F__I32FIR32_I8I32(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int32* Coeff);
Int32 F__I32FIR32_I16I32(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int32* Coeff);
Int32 F__I32FIR32_I32I32(Int32 Input,UInt16 NTabs,Int32* DelayLine,const Int32* Coeff);
Int32 F__I32FIR32_SAT_I8I32(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int32* Coeff);
Int32 F__I32FIR32_SAT_I16I32(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int32* Coeff);
Int32 F__I32FIR32_SAT_I32I32(Int32 Input,UInt16 NTabs,Int32* DelayLine,const Int32* Coeff);
void F__I64FIR64_I8I32(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int32* Coeff,Int32* Result_h,UInt32* Result_l);
void F__I64FIR64_I16I32(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int32* Coeff,Int32* Result_h,UInt32* Result_l);
void F__I64FIR64_I32I32(Int32 Input,UInt16 NTabs,Int32* DelayLine,const Int32* Coeff,Int32* Result_h,UInt32* Result_l);
void F__I64FIR64_SAT_I8I32(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int32* Coeff,Int32* Result_h,UInt32* Result_l);
void F__I64FIR64_SAT_I16I32(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int32* Coeff,Int32* Result_h,UInt32* Result_l);
void F__I64FIR64_SAT_I32I32(Int32 Input,UInt16 NTabs,Int32* DelayLine,const Int32* Coeff,Int32* Result_h,UInt32* Result_l);
UInt8 F__U8FIR8_U8U8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff);
UInt8 F__U8FIR8_SAT_U8U8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff);
UInt16 F__U16FIR16_U8U8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff);
UInt16 F__U16FIR16_SAT_U8U8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff);
UInt32 F__U32FIR32_U8U8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff);
UInt32 F__U32FIR32_SAT_U8U8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff);
void F__U64FIR64_U8U8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff,UInt32 *Result_h,UInt32 *Result_l);
void F__U64FIR64_SAT_U8U8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff,UInt32 *Result_h,UInt32 *Result_l);
UInt16 F__U16FIR16_U8U16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff);
UInt16 F__U16FIR16_U16U16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff);
UInt16 F__U16FIR16_SAT_U8U16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff);
UInt16 F__U16FIR16_SAT_U16U16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff);
UInt32 F__U32FIR32_U8U16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff);
UInt32 F__U32FIR32_U16U16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff);
UInt32 F__U32FIR32_SAT_U8U16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff);
UInt32 F__U32FIR32_SAT_U16U16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff);
void F__U64FIR64_U8U16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff,UInt32 *Result_h,UInt32 *Result_l);
void F__U64FIR64_U16U16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff,UInt32 *Result_h,UInt32 *Result_l);
void F__U64FIR64_SAT_U8U16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff,UInt32 *Result_h,UInt32 *Result_l);
void F__U64FIR64_SAT_U16U16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff,UInt32 *Result_h,UInt32 *Result_l);
UInt32 F__U32FIR32_U8U32(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt32* Coeff);
UInt32 F__U32FIR32_U16U32(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt32* Coeff);
UInt32 F__U32FIR32_U32U32(UInt32 Input,UInt16 NTabs,UInt32* DelayLine,const UInt32* Coeff);
UInt32 F__U32FIR32_SAT_U8U32(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt32* Coeff);
UInt32 F__U32FIR32_SAT_U16U32(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt32* Coeff);
UInt32 F__U32FIR32_SAT_U32U32(UInt32 Input,UInt16 NTabs,UInt32* DelayLine,const UInt32* Coeff);
void F__U64FIR64_U8U32(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt32* Coeff,UInt32* Result_h,UInt32* Result_l);
void F__U64FIR64_U16U32(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt32* Coeff,UInt32* Result_h,UInt32* Result_l);
void F__U64FIR64_U32U32(UInt32 Input,UInt16 NTabs,UInt32* DelayLine,const UInt32* Coeff,UInt32* Result_h,UInt32* Result_l);
void F__U64FIR64_SAT_U8U32(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt32* Coeff,UInt32* Result_h,UInt32* Result_l);
void F__U64FIR64_SAT_U16U32(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt32* Coeff,UInt32* Result_h,UInt32* Result_l);
void F__U64FIR64_SAT_U32U32(UInt32 Input,UInt16 NTabs,UInt32* DelayLine,const UInt32* Coeff,UInt32* Result_h,UInt32* Result_l);

Float32 F__F32FIR32_F32F32(Float32 Input,UInt16 NTabs,Float32* DelayLine,const Float32* Coeff);


Float64 F__F64FIR64_F64F64(Float64 Input,UInt16 NTabs,Float64* DelayLine,const Float64* Coeff);


/*   FIR - Filter Functions with Circular Buffer  */
Int8 F__I8FIR8_I8CBI8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff,UInt16 *Counter);
Int8 F__I8FIR8_SAT_I8CBI8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff,UInt16 *Counter);
Int16 F__I16FIR16_I8CBI8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff,UInt16 *Counter);
Int16 F__I16FIR16_SAT_I8CBI8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff,UInt16 *Counter);
Int32 F__I32FIR32_I8CBI8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff,UInt16 *Counter);
Int32 F__I32FIR32_SAT_I8CBI8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff,UInt16 *Counter);
void F__I64FIR64_I8CBI8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff,UInt16* Counter,Int32 *Result_h,UInt32 *Result_l);
void F__I64FIR64_SAT_I8CBI8(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int8* Coeff,UInt16* Counter,Int32 *Result_h,UInt32 *Result_l);
Int16 F__I16FIR16_I8CBI16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff,UInt16 *Counter);
Int16 F__I16FIR16_I16CBI16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff,UInt16 *Counter);
Int16 F__I16FIR16_SAT_I8CBI16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff,UInt16 *Counter);
Int16 F__I16FIR16_SAT_I16CBI16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff,UInt16 *Counter);
Int32 F__I32FIR32_I8CBI16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff,UInt16 *Counter);
Int32 F__I32FIR32_I16CBI16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff,UInt16 *Counter);
Int32 F__I32FIR32_SAT_I8CBI16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff,UInt16 *Counter);
Int32 F__I32FIR32_SAT_I16CBI16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff,UInt16 *Counter);
void F__I64FIR64_I8CBI16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff,UInt16 *Counter,Int32 *Result_h,UInt32 *Result_l);
void F__I64FIR64_I16CBI16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff,UInt16 *Counter,Int32 *Result_h,UInt32 *Result_l);
void F__I64FIR64_SAT_I8CBI16(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int16* Coeff,UInt16 *Counter,Int32 *Result_h,UInt32 *Result_l);
void F__I64FIR64_SAT_I16CBI16(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int16* Coeff,UInt16 *Counter,Int32 *Result_h,UInt32 *Result_l);
Int32 F__I32FIR32_I8CBI32(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int32* Coeff,UInt16 *Counter);
Int32 F__I32FIR32_I16CBI32(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int32* Coeff,UInt16 *Counter);
Int32 F__I32FIR32_I32CBI32(Int32 Input,UInt16 NTabs,Int32* DelayLine,const Int32* Coeff,UInt16 *Counter);
Int32 F__I32FIR32_SAT_I8CBI32(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int32* Coeff,UInt16 *Counter);
Int32 F__I32FIR32_SAT_I16CBI32(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int32* Coeff,UInt16 *Counter);
Int32 F__I32FIR32_SAT_I32CBI32(Int32 Input,UInt16 NTabs,Int32* DelayLine,const Int32* Coeff,UInt16 *Counter);
void F__I64FIR64_I8CBI32(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int32* Coeff,UInt16 *Counter,Int32* Result_h,UInt32* Result_l);
void F__I64FIR64_I16CBI32(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int32* Coeff,UInt16 *Counter,Int32* Result_h,UInt32* Result_l);
void F__I64FIR64_I32CBI32(Int32 Input,UInt16 NTabs,Int32* DelayLine,const Int32* Coeff,UInt16 *Counter,Int32* Result_h,UInt32* Result_l);
void F__I64FIR64_SAT_I8CBI32(Int8 Input,UInt16 NTabs,Int8* DelayLine,const Int32* Coeff,UInt16 *Counter,Int32* Result_h,UInt32* Result_l);
void F__I64FIR64_SAT_I16CBI32(Int16 Input,UInt16 NTabs,Int16* DelayLine,const Int32* Coeff,UInt16 *Counter,Int32* Result_h,UInt32* Result_l);
void F__I64FIR64_SAT_I32CBI32(Int32 Input,UInt16 NTabs,Int32* DelayLine,const Int32* Coeff,UInt16 *Counter,Int32* Result_h,UInt32* Result_l);
UInt8 F__U8FIR8_U8CBU8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff,UInt16 *Counter);
UInt8 F__U8FIR8_SAT_U8CBU8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff,UInt16 *Counter);
UInt16 F__U16FIR16_U8CBU8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff,UInt16 *Counter);
UInt16 F__U16FIR16_SAT_U8CBU8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff,UInt16 *Counter);
UInt32 F__U32FIR32_U8CBU8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff,UInt16 *Counter);
UInt32 F__U32FIR32_SAT_U8CBU8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff,UInt16 *Counter);
void F__U64FIR64_U8CBU8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff,UInt16 *Counter,UInt32 *Result_h,UInt32 *Result_l);
void F__U64FIR64_SAT_U8CBU8(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt8* Coeff,UInt16 *Counter,UInt32 *Result_h,UInt32 *Result_l);
UInt16 F__U16FIR16_U8CBU16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff,UInt16 *Counter);
UInt16 F__U16FIR16_U16CBU16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff,UInt16 *Counter);
UInt16 F__U16FIR16_SAT_U8CBU16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff,UInt16 *Counter);
UInt16 F__U16FIR16_SAT_U16CBU16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff,UInt16 *Counter);
UInt32 F__U32FIR32_U8CBU16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff,UInt16 *Counter);
UInt32 F__U32FIR32_U16CBU16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff,UInt16 *Counter);
UInt32 F__U32FIR32_SAT_U8CBU16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff,UInt16 *Counter);
UInt32 F__U32FIR32_SAT_U16CBU16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff,UInt16 *Counter);
void F__U64FIR64_U8CBU16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff,UInt16 *Counter,UInt32 *Result_h,UInt32 *Result_l);
void F__U64FIR64_U16CBU16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff,UInt16 *Counter,UInt32 *Result_h,UInt32 *Result_l);
void F__U64FIR64_SAT_U8CBU16(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt16* Coeff,UInt16 *Counter,UInt32 *Result_h,UInt32 *Result_l);
void F__U64FIR64_SAT_U16CBU16(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt16* Coeff,UInt16 *Counter,UInt32 *Result_h,UInt32 *Result_l);
UInt32 F__U32FIR32_U8CBU32(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt32* Coeff,UInt16 *Counter);
UInt32 F__U32FIR32_U16CBU32(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt32* Coeff,UInt16 *Counter);
UInt32 F__U32FIR32_U32CBU32(UInt32 Input,UInt16 NTabs,UInt32* DelayLine,const UInt32* Coeff,UInt16 *Counter);
UInt32 F__U32FIR32_SAT_U8CBU32(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt32* Coeff,UInt16 *Counter);
UInt32 F__U32FIR32_SAT_U16CBU32(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt32* Coeff,UInt16 *Counter);
UInt32 F__U32FIR32_SAT_U32CBU32(UInt32 Input,UInt16 NTabs,UInt32* DelayLine,const UInt32* Coeff,UInt16 *Counter);
void F__U64FIR64_U8CBU32(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt32* Coeff,UInt16 *Counter,UInt32* Result_h,UInt32* Result_l);
void F__U64FIR64_U16CBU32(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt32* Coeff,UInt16 *Counter,UInt32* Result_h,UInt32* Result_l);
void F__U64FIR64_U32CBU32(UInt32 Input,UInt16 NTabs,UInt32* DelayLine,const UInt32* Coeff,UInt16 *Counter,UInt32* Result_h,UInt32* Result_l);
void F__U64FIR64_SAT_U8CBU32(UInt8 Input,UInt16 NTabs,UInt8* DelayLine,const UInt32* Coeff,UInt16 *Counter,UInt32* Result_h,UInt32* Result_l);
void F__U64FIR64_SAT_U16CBU32(UInt16 Input,UInt16 NTabs,UInt16* DelayLine,const UInt32* Coeff,UInt16 *Counter,UInt32* Result_h,UInt32* Result_l);
void F__U64FIR64_SAT_U32CBU32(UInt32 Input,UInt16 NTabs,UInt32* DelayLine,const UInt32* Coeff,UInt16 *Counter,UInt32* Result_h,UInt32* Result_l);

Float32 F__F32FIR32_F32CBF32(Float32 Input,UInt16 NTabs,Float32* DelayLine,const Float32* Coeff,UInt16 *Counter);


Float64 F__F64FIR64_F64CBF64(Float64 Input,UInt16 NTabs,Float64* DelayLine,const Float64* Coeff,UInt16 *Counter);
# 62 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fit.h" 1
/**
 * @file       $RCSfile: fit.h $
 * @brief      This file contains macro definitions for fitting an input value into an output type.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2016, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.11 $ $Date: 2016/10/27 11:46:31CEST $
 */

/* Note:
 *   The macro name represents the implemented operation:
 *    C__<output_type>FIT<input_type>_SAT[{l|u}]
 *
 *    output_type            : U8, U16, U32,      I8, I16, I32,
 *     input_type            : U8, U16, U32, U64, I8, I16, I32, I64
 *
 *
 *   The parameters are classified with three keywords.
 *
 *    Parameter  Description                    Properties
 *    --------------------------------------------------------------------------
 *    v          input                          rVars,  NoConsts, NoComplexExpr
 *    v_h        upper part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 *    v_l        lower part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 *    csatval    upper implementation limit (positive),
 *               the negative value is used
 *               from tllimits.h                rVars,  Consts,   NoComplexExpr
 *
 *   For compatibility reasons csatval is currently not replaced by values 
 *   from tllimits.h in all cases.
 */






/******************************************************************************
*
* GENERAL:
*   Macros to fit a type into a type with a smaller width
*
******************************************************************************/

/******************************************************************************
*
* MACROS:
*   C__I32FITI64_SAT(v_h, v_l, csatval)
*   C__I32FITI64_SATu(v_h, v_l, csatval)
*   C__I32FITI64_SATl(v_h, v_l, csatval)
*
*   C__I16FITI64_SAT(v_h, v_l, csatval)
*   C__I16FITI64_SATu(v_h, v_l, csatval)
*   C__I16FITI64_SATl(v_h, v_l, csatval)
*
*   C__I8FITI64_SAT(v_h, v_l, csatval)
*   C__I8FITI64_SATu(v_h, v_l, csatval)
*   C__I8FITI64_SATl(v_h, v_l, csatval)
*
*   C__I32FITU64_SAT(v_h, v_l, csatval)
*   C__I32FITU64_SATu(v_h, v_l, csatval)
*
*   C__I16FITU64_SAT(v_h, v_l, csatval)
*   C__I16FITU64_SATu(v_h, v_l, csatval)
*
*   C__I8FITU64_SAT(v_h, v_l, csatval)
*   C__I8FITU64_SATu(v_h, v_l, csatval)
*
*   C__U32FITI64_SAT(v_h, v_l, csatval)
*   C__U32FITI64_SATu(v_h, v_l, csatval)
*   C__U32FITI64_SATl(v_h, v_l, csatval)
*
*   C__U16FITI64_SAT(v_h, v_l, csatval)
*   C__U16FITI64_SATu(v_h, v_l, csatval)
*   C__U16FITI64_SATl(v_h, v_l, csatval)
*
*   C__U8FITI64_SAT(v_h, v_l, csatval)
*   C__U8FITI64_SATu(v_h, v_l, csatval)
*   C__U8FITI64_SATl(v_h, v_l, csatval)
*
*   C__U32FITU64_SAT(v_h, v_l, csatval)
*   C__U32FITU64_SATu(v_h, v_l, csatval)
*
*   C__U16FITU64_SAT(v_h, v_l, csatval)
*   C__U16FITU64_SATu(v_h, v_l, csatval)
*
*   C__U8FITU64_SAT(v_h, v_l, csatval)
*   C__U8FITU64_SATu(v_h, v_l, csatval)
*
*
*   C__I16FITI32_SAT(v, csatval)
*   C__I16FITI32_SATu(v, csatval)
*   C__I16FITI32_SATl(v, csatval)
*
*   C__I8FITI32_SAT(v, csatval)
*   C__I8FITI32_SATu(v, csatval)
*   C__I8FITI32_SATl(v, csatval)
*
*   C__I16FITU32_SAT(v, csatval)
*   C__I16FITU32_SATu(v, csatval)
*
*   C__I8FITU32_SAT(v, csatval)
*   C__I8FITU32_SATu(v, csatval)
*
*   C__U16FITI32_SAT(v, csatval)
*   C__U16FITI32_SATu(v, csatval)
*   C__U16FITI32_SATl(v, csatval)
*
*   C__U8FITI32_SAT(v, csatval)
*   C__U8FITI32_SATu(v, csatval)
*   C__U8FITI32_SATl(v, csatval)
*
*   C__U16FITU32_SAT(v, csatval)
*   C__U16FITU32_SATu(v, csatval)
*
*   C__U8FITU32_SAT(v, csatval)
*   C__U8FITU32_SATu(v, csatval)
*
*
*   C__I8FITI16_SAT(v, csatval)
*   C__I8FITI16_SATu(v, csatval)
*   C__I8FITI16_SATl(v, csatval)
*
*   C__I8FITU16_SAT(v, csatval)
*   C__I8FITU16_SATu(v, csatval)
*
*   C__U8FITI16_SAT(v, csatval)
*   C__U8FITI16_SATu(v, csatval)
*   C__U8FITI16_SATl(v, csatval)
*
*   C__U8FITU16_SAT(v, csatval)
*   C__U8FITU16_SATu(v, csatval)
*
*
* NOTE:
*   The input values are used more than once inside the macro body.
*   Thus, for performance reasons, the input values should be no expressions.
*
******************************************************************************/
# 293 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fit.h"
/******************************************************************************
*
* GENERAL:
*   Macros to fit a type into a type with the same width
*
******************************************************************************/

/******************************************************************************
*
* MACRO(s):
*   C__I32FITU32_SAT(v, csatval)
*   C__I32FITU32_SATu(v, csatval)
*
*   C__U32FITI32_SAT(v, csatval)
*   C__U32FITI32_SATl(v, csatval)
*
*
*   C__I16FITU16_SAT(v, csatval)
*   C__I16FITU16_SATu(v, csatval)
*
*   C__U16FITI16_SAT(v, csatval)
*   C__U16FITI16_SATl(v, csatval)
*
*
*   C__I8FITU8_SAT(v, csatval)
*   C__I8FITU8_SATu(v, csatval)
*
*   C__U8FITI8_SAT(v, csatval)
*   C__U8FITI8_SATl(v, csatval)
*
*
* NOTE:
*   The input value is used more than once inside the macro body.
*   Thus, for performance reasons, the input value should be no expression.
*
******************************************************************************/
# 364 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/fit.h"
/******************************************************************************
*
* GENERAL:
*   Macros to fit a type into a type with a larger width
*
******************************************************************************/

/******************************************************************************
*
* MACRO(s):
*   C__U32FITI16_SAT()
*   C__U32FITI16_SATl()
*
*   C__U32FITI8_SAT()
*   C__U32FITI8_SATl()
*
*   C__U16FITI8_SAT()
*   C__U16FITI8_SATl()
*
*
* NOTE:
*   The input value is used more than once inside the macro body.
*   Thus, for performance reasons, the input value should be no expression.
*
******************************************************************************/
# 63 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/mul.h" 1
/**
 * @file       $RCSfile: mul.h $
 * @brief      This file contains macro definitions and function declarations for multiplication with 64-bit values.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2016, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.7 $ $Date: 2017/04/04 14:52:17CEST $
 */

/* Note:
 *   C macro names begin with "C__" and C function names begin with "F__".
 *   The macro/function name represents the implemented operation:
 *     Syntax: (C__|F__) + <result type> + <OPERATION> + <input type 1> + <input type 2>
 *
 *   The result:
 *    The macro's parameter list contains the parameters r_h and r_l.
 *    These variables contain the calculation result and the macro has no return
 *    value. Those macros must not be used inside expressions!
 *
 *
 *   The parameters are classified with three keywords.
 *
 *    Parameter  Description                    Properties
 *    --------------------------------------------------------------------------
 *    f1         first input                    rVars,  NoConsts, ComplexExpr
 *    f2         second input                   rVars,  NoConsts, ComplexExpr
 *    f1_h       upper part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 *    f1_l       lower part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 *    r_h        upper part of a 64-bit output  wVars,  NoConsts, NoComplexExpr
 *    r_l        lower part of a 64-bit output  wVars,  NoConsts, NoComplexExpr
 *
 * Contents:
 *   F__I64MULI64I32()
 *   F__U64MULI64I32()
 *   F__I64MULI64U32()
 *   F__U64MULI64U32()
 *   F__I64MULU64I32()
 *   F__U64MULU64I32()
 *   F__I64MULU64U32()
 *   F__U64MULU64U32()
 *   C__I64MULI64I32()
 *   C__U64MULI64I32()
 *   C__I64MULI64U32()
 *   C__U64MULI64U32()
 *   C__I64MULU64I32()
 *   C__U64MULU64I32()
 *   C__I64MULU64U32()
 *   C__U64MULU64U32()
 *
 *   F__I64MULI32I32()
 *   F__U64MULI32I32()
 *   F__I64MULI32U32()
 *   F__U64MULI32U32()
 *   F__I64MULU32I32()
 *   F__U64MULU32I32()
 *   F__I64MULU32U32()
 *   F__U64MULU32U32()
 *   C__I64MULI32I32()
 *   C__U64MULI32I32()
 *   C__I64MULI32U32()
 *   C__U64MULI32U32()
 *   C__I64MULU32I32()
 *   C__U64MULU32I32()
 *   C__I64MULU32U32()
 *   C__U64MULU32U32()
 */






/******************************************************************************
*
* signed multiplication 64 x 32 with 64 bit result
*
******************************************************************************/

/******************************************************************************
*
* FUNCTION:
*   void F__I64MULI64I32(Int32 f1_h, UInt32 f1_l, Int32 f2, Int32 *r_h, UInt32 *r_l)
*   void F__U64MULI64I32(Int32 f1_h, UInt32 f1_l, Int32 f2, UInt32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__I64MULI64I32(f1_h, f1_l, f2, r_h, r_l)
*   C__U64MULI64I32(f1_h, f1_l, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   Int32    f1_h    1. factor (high-part)
*   UInt32   f1_l    1. factor (low-part)
*   Int32    f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input values are used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   The macro C__I64MULI64I32 contains the same algorithm as the function F__I64MULI64I32(..)
*   The macro C__U64MULI64I32 contains the same algorithm as the function F__U64MULI64I32(..)
*
******************************************************************************/
void F__I64MULI64I32(Int32 f1_h, UInt32 f1_l, Int32 f2, Int32 *r_h, UInt32 *r_l);

void F__U64MULI64I32(Int32 f1_h, UInt32 f1_l, Int32 f2, UInt32 *r_h, UInt32 *r_l);
# 168 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/mul.h"
/******************************************************************************
*
* mixed multiplication 64 x 32 with 64 bit result
*
******************************************************************************/

/******************************************************************************
*
* FUNCTION:
*   void F__I64MULI64U32(Int32 f1_h, UInt32 f1_l, UInt32 f2, Int32 *r_h, UInt32 *r_l)
*   void F__U64MULI64U32(Int32 f1_h, UInt32 f1_l, UInt32 f2, UInt32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__I64MULI64U32(f1_h, f1_l, f2, r_h, r_l)
*   C__U64MULI64U32(f1_h, f1_l, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   Int32    f1_h    1. factor (high-part)
*   UInt32   f1_l    1. factor (low-part)
*   UInt32   f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input values are used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   The macro C__I64MULI64U32 contains the same algorithm as the function F__I64MULI64U32(..)
*   The macro C__U64MULI64U32 contains the same algorithm as the function F__U64MULI64U32(..)
*
******************************************************************************/
void F__I64MULI64U32(Int32 f1_h, UInt32 f1_l, UInt32 f2, Int32 *r_h, UInt32 *r_l);

void F__U64MULI64U32(Int32 f1_h, UInt32 f1_l, UInt32 f2, UInt32 *r_h, UInt32 *r_l);
# 262 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/mul.h"
/******************************************************************************
*
* FUNCTION:
*   void F__I64MULU64I32(UInt32 f1_h, UInt32 f1_l, Int32 f2, Int32 *r_h, UInt32 *r_l)
*   void F__U64MULU64I32(UInt32 f1_h, UInt32 f1_l, Int32 f2, UInt32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__I64MULU64I32(f1_h, f1_l, f2, r_h, r_l)
*   C__U64MULU64I32(f1_h, f1_l, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   UInt32   f1_h    1. factor (high-part)
*   UInt32   f1_l    1. factor (low-part)
*   Int32    f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input values are used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   The macro C__I64MULU64I32 contains the same algorithm as the function F__I64MULU64I32(..)
*   The macro C__U64MULU64I32 contains the same algorithm as the function F__U64MULU64I32(..)
*
******************************************************************************/


/*END F__I64MULU64I32()*/



/*END F__U64MULU64I32()*/




/*END C__I64MULU64I32()*/



/*END C__U64MULU64I32()*/


/******************************************************************************
*
* unsigned multiplication 64 x 32 with 64 bit result
*
******************************************************************************/

/******************************************************************************
*
* FUNCTION:
*   void F__U64MULU64U32(UInt32 f1_h, UInt32 f1_l UInt32 f2, UInt32 *r_h, UInt32 *r_l)
*   void F__I64MULU64U32(UInt32 f1_h, UInt32 f1_l UInt32 f2, Int32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__U64MULU64U32(f1_h, f1_l, f2, r_h, r_l)
*   C__I64MULU64U32(f1_h, f1_l, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   UInt32   f1_h    1. factor (high-part)
*   UInt32   f1_l    1. factor (low-part)
*   UInt32   f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   This macro contains the same algorithm as the function F__U64MULU64U32(..)
*
******************************************************************************/
void F__U64MULU64U32(UInt32 f1_h, UInt32 f1_l, UInt32 f2, UInt32 *r_h, UInt32 *r_l);



/*END F__I64MULU64U32()*/
# 377 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/mul.h"
/*END C__I64MULU64U32()*/


/******************************************************************************
*
* signed multiplication 32 x 32 with 64 bit result
*
******************************************************************************/

/******************************************************************************
*
* FUNCTION:
*   void F__I64MULI32I32(Int32 f1, Int32 f2, Int32 *r_h, UInt32 *r_l)
*   void F__U64MULI32I32(Int32 f1, Int32 f2, UInt32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__I64MULI32I32(f1, f2, r_h, r_l)
*   C__U64MULI32I32(f1, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   Int32    f1      1. factor
*   Int32    f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   This macro contains the same algorithm as the function F__I64MULI32I32(..)
*
******************************************************************************/
void F__I64MULI32I32(Int32 f1, Int32 f2, Int32 *r_h, UInt32 *r_l);

void F__U64MULI32I32(Int32 f1, Int32 f2, UInt32 *r_h, UInt32 *r_l);
# 476 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/mul.h"
/******************************************************************************
*
* mixed multiplication 32 x 32 with 64 bit result
*
******************************************************************************/

/******************************************************************************
*
* FUNCTION:
*   void F__I64MULI32U32(Int32 f1, UInt32 f2, Int32 *r_h, UInt32 *r_l)
*   void F__U64MULI32U32(Int32 f1, UInt32 f2, UInt32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__I64MULI32U32(f1, f2, r_h, r_l)
*   C__U64MULI32U32(f1, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   Int32    f1      1. factor
*   UInt32   f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   This macro contains the same algorithm as the function F__I64MULI32U32(..)
*
******************************************************************************/
void F__I64MULI32U32(Int32 f1, UInt32 f2, Int32 *r_h, UInt32 *r_l);

void F__U64MULI32U32(Int32 f1, UInt32 f2, UInt32 *r_h, UInt32 *r_l);
# 570 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/mul.h"
/******************************************************************************
*
* FUNCTION:
*   void F__I64MULU32I32(Int32 f1, UInt32 f2, Int32 *r_h, UInt32 *r_l)
*   void F__U64MULU32I32(Int32 f1, UInt32 f2, UInt32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__I64MULU32I32(f1, f2, r_h, r_l)
*   C__U64MULU32I32(f1, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   UInt32   f1      1. factor
*   Int32    f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   This macro contains the same algorithm as the function F__I64MULI32U32(..)
*
******************************************************************************/
# 610 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/mul.h"
/******************************************************************************
*
* unsigned multiplication 32 x 32 with 64 bit result
*
******************************************************************************/

/******************************************************************************
*
* FUNCTION:
*   void F__U64MULU32U32(UInt32 f1, UInt32 f2, UInt32 *r_h, UInt32 *r_l)
*   void F__I64MULU32U32(UInt32 f1, UInt32 f2, Int32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__U64MULU32U32(f1, f2, r_h, r_l)
*   C__I64MULU32U32(f1, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   type     name    meaning
*   UInt32   f1      1. factor
*   UInt32   f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   This macro contains the same algorithm as the function F__U64MULU32U32(..)
*
******************************************************************************/
void F__U64MULU32U32(UInt32 f1, UInt32 f2, UInt32 *r_h, UInt32 *r_l);

void F__I64MULU32U32(UInt32 f1, UInt32 f2, Int32 *r_h, UInt32 *r_l);
# 700 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/mul.h"
/******************************************************************************
*
* signed multiplication 32 x 16 with 64 bit result
*
******************************************************************************/

/******************************************************************************
*
* FUNCTION:
*   void F__I64MULI32I16(Int32 f1, Int16 f2, Int32 *r_h, UInt32 *r_l)
*   void F__U64MULI32I16(Int32 f1, Int16 f2, UInt32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__I64MULI32I16(f1, f2, r_h, r_l)
*   C__U64MULI32I16(f1, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   Int32    f1      1. factor
*   Int16    f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   This macro contains the same algorithm as the function F__I64MULI32I16(..)
*
******************************************************************************/
# 746 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/mul.h"
/******************************************************************************
*
* mixed multiplication 32 x 16 with 64 bit result
*
******************************************************************************/

/******************************************************************************
*
* FUNCTION:
*   void F__I64MULU32I16(UInt32 f1, Int16 f2, Int32 *r_h, UInt32 *r_l)
*   void F__U64MULU32I16(UInt32 f1, Int16 f2, UInt32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__I64MULU32I16(f1, f2, r_h, r_l)
*   C__U64MULU32I16(f1, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   UInt32   f1      1. factor
*   Int16    f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   This macro contains the same algorithm as the function F__I64MULU32I16(..)
*
******************************************************************************/
# 792 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/mul.h"
/******************************************************************************
*
* FUNCTION:
*   void F__I64MULI32U16(Int32 f1, UInt16 f2, Int32 *r_h, UInt32 *r_l)
*   void F__U64MULI32U16(Int32 f1, UInt16 f2, UInt32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__I64MULI32U16(f1, f2, r_h, r_l)
*   C__U64MULI32U16(f1, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   Int32    f1      1. factor
*   UInt16   f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   This macro contains the same algorithm as the function F__I64MULI32U16(..)
*
******************************************************************************/
void F__I64MULI32U16(Int32 f1, UInt16 f2, Int32 *r_h, UInt32 *r_l);

void F__U64MULI32U16(Int32 f1, UInt16 f2, UInt32 *r_h, UInt32 *r_l);
# 866 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/mul.h"
/******************************************************************************
*
* unsigned multiplication 32 x 16 with 64 bit result
*
******************************************************************************/

/******************************************************************************
*
* FUNCTION:
*   void F__U64MULU32U16(UInt32 f1, UInt16 f2, UInt32 *r_h, UInt32 *r_l)
*   void F__I64MULU32U16(UInt32 f1, UInt16 f2, Int32 *r_h, UInt32 *r_l)
*
* MACRO:
*   C__U64MULU32U16(f1, f2, r_h, r_l)
*   C__I64MULU32U16(f1, f2, r_h, r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   type     name    meaning
*   UInt32   f1      1. factor
*   UInt16   f2      2. factor
*   xInt32   r_h     64bit - result (high-part)
*   UInt32   r_l     64bit - result (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*   This macro contains the same algorithm as the function F__U64MULU32U16(..)
*
******************************************************************************/
void F__U64MULU32U16(UInt32 f1, UInt16 f2, UInt32 *r_h, UInt32 *r_l);

void F__I64MULU32U16(UInt32 f1, UInt16 f2, Int32 *r_h, UInt32 *r_l);
# 64 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/neg.h" 1
/**
 * @file       $RCSfile: neg.h $
 * @brief      This file contains several macro definitions for the negation with 64bit values.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2012, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.7 $ $Date: 2016/06/23 13:54:18CEST $
 */

/* Note:
 * - C-macros are characterized by a leading "C__".
 *   Ansi-C-functions are characterized by a leading "F__".
 * - The macro/function-name represents the implemented operation(s):
 *	(C__|F__) + output_type + OPERATION + input_type [+ input_type] [+ _SAT]
 *
 *   C__I64NEGI64():             negate value 64bit->64bit
 *   C__I64NEGU64():             negate value 64bit->64bit
 *   C__I64NEGI32():             negate value 32bit->64bit
 *   C__I64NEGU32():             negate value 32bit->64bit
 */






/******************************************************************************
*
* MACRO:
*   C__I64NEGI64(v_h, v_l, r_h, r_l)
*   C__I64NEGU64(v_h, v_l, r_h, r_l)
*
* DESCRIPTION:
*   Negates a 64 bit value to a 64bit value
*
* PARAMETERS:
*   type    name    meaning
*  xInt32   v_h    upper 32bit of the input value
*  UInt32   v_l    lower 32bit of the input value
*
* RETURNS:
*   Int32   r_h    upper 32bit of the result
*  UInt32   r_l    lower 32bit of the result
*
******************************************************************************/






/* END C__I64NEGI64() */







/* END C__I64NEGU64() */

/******************************************************************************
*
* MACRO:
*   C__I64NEGI32(v, r_h, r_l)
*   C__I64NEGU32(v, r_h, r_l)
*
* DESCRIPTION:
*   Negates a 32 bit value to a 64bit value
*
* PARAMETERS:
*   type    name    meaning
*  xInt32   v       input value
*
* RETURNS:
*   Int32   r_h    upper 32bit of the result
*  UInt32   r_l    lower 32bit of the result
*
******************************************************************************/





/* END C__I64NEGI32() */






/* END C__I64NEGU32() */
# 65 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sat.h" 1
/**
 * @file       $RCSfile: sat.h $
 * @brief      This file contains macro definitions for the operation Saturation.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2016, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.14 $ $Date: 2017/04/19 13:07:53CEST $
 */

/* Note:
 * The macro name represents the implemented operation:
 *  C__<output_type><operation><input_type>[_SAT{b|l|u}]
 *
 *  input_type:   U8, U16, U32, U64, I8, I16, I32, I64
 *  output_type:  U8, U16, U32,      I8, I16, I32
 *  operation:    SAT
 *
 *
 * The result:
 *  All macros have a return value.
 *
 *
 * The parameters are classified with three keywords.
 *
 *  Parameter  Description                        Properties
 *  ---------------------------------------------------------------------------
 *  v          input                              rVars,  NoConsts, NoComplexExpr
 *  v_h        upper part of a 64-bit input       rVars,  NoConsts, NoComplexExpr
 *  v_l        lower part of a 64-bit input       rVars,  NoConsts, NoComplexExpr
 *  upsatval   const upper limit of output_type   rVars,  Consts,   NoComplexExpr
 *  losatval   const lower limit of output_type   rVars,  Consts,   NoComplexExpr
 */






/******************************************************************************
*
* MACROS:
*   Int32  C__I32SATI64_SAT(v_h, v_l, upsatval, losatval)
*   Int32  C__I32SATU64_SAT(v_h, v_l, upsatval, losatval)
*   UInt32 C__U32SATI64_SAT(v_h, v_l, upsatval, losatval)
*   UInt32 C__U32SATU64_SAT(v_h, v_l, upsatval, losatval)
*
*   Int16  C__I16SATI64_SAT(v_h, v_l, upsatval, losatval)
*   Int16  C__I16SATU64_SAT(v_h, v_l, upsatval, losatval)
*   UInt16 C__U16SATI64_SAT(v_h, v_l, upsatval, losatval)
*   UInt16 C__U16SATU64_SAT(v_h, v_l, upsatval, losatval)
*
*   Int8   C__I8SATI64_SAT(v_h, v_l, upsatval, losatval)
*   Int8   C__I8SATU64_SAT(v_h, v_l, upsatval, losatval)
*   UInt8  C__U8SATI64_SAT(v_h, v_l, upsatval, losatval)
*   UInt8  C__U8SATU64_SAT(v_h, v_l, upsatval, losatval)
*
* NOTE:
*   Type of satvals has to be output data type, because of comparision inside the macro
*
*   clearly arranged code of this macro:
*           if((v) > upsatval) r = upsatval;
*           else if((v) < losatval) r = losatval;
*           else r = v ;
*
******************************************************************************/
# 98 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sat.h"
/* END C__IyySATI64_SAT() */
# 121 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sat.h"
/* END C__IyySATU64_SAT() */
# 144 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sat.h"
/* END C__UyySATI64_SAT() */
# 167 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sat.h"
/* END C__UyySATU64_SAT() */

/******************************************************************************
*
* MACRO(s):
*   Int32  C__I32SATI32_SAT(v, upsatval, losatval)
*   UInt32 C__U32SATU32_SAT(v, upsatval, losatval)
*   Int16  C__I16SATI16_SAT(v, upsatval, losatval)
*   UInt16 C__U16SATU16_SAT(v, upsatval, losatval)
*   Int8   C__I8SATI8_SAT(v, upsatval, losatval)
*   UInt8  C__U8SATU8_SAT(v, upsatval, losatval)
*
* NOTE:
*   Type of satvals has to be output data type, because of comparision inside the macro
*
*   clearly arranged code of this macro:
*           if((v) > (upsatval)) return upsatval;
*           else if((v) < (losatval)) return losatval;
*           else return v ;
*
******************************************************************************/
# 231 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sat.h"
/******************************************************************************
*
* MACRO(s):
*   Int32  C__I32SATU32_SAT(v, upsatval, losatval)
*   UInt32 C__U32SATI32_SAT(v, upsatval, losatval)
*   Int16  C__I16SATU16_SAT(v, upsatval, losatval)
*   UInt16 C__U16SATI16_SAT(v, upsatval, losatval)
*   Int8   C__I8SATU8_SAT(v, upsatval, losatval)
*   UInt8  C__U8SATI8_SAT(v, upsatval, losatval)
*
* NOTE:
*   Type of satvals has to be output data type, because of comparision inside the macro
*
*   clearly arranged code of this macro:
*           if((v) > (upsatval)) return upsatval;
*           else if((v) < (losatval)) return losatval;
*           else return v ;
*
******************************************************************************/
# 298 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sat.h"
/******************************************************************************
*
* MACRO(s):
*   Int16  C__I16SATI32_SAT(v, upsatval, losatval)
*   Int16  C__I16SATU32_SAT(v, upsatval, losatval)
*   UInt16 C__U16SATI32_SAT(v, upsatval, losatval)
*   UInt16 C__U16SATU32_SAT(v, upsatval, losatval)
*
*   Int8   C__I8SATI32_SAT(v, upsatval, losatval)
*   Int8   C__I8SATU32_SAT(v, upsatval, losatval)
*   UInt8  C__U8SATI32_SAT(v, upsatval, losatval)
*   UInt8  C__U8SATU32_SAT(v, upsatval, losatval)
*
*   Int8   C__I8SATI16_SAT(v, upsatval, losatval)
*   Int8   C__I8SATU16_SAT(v, upsatval, losatval)
*   UInt8  C__U8SATI16_SAT(v, upsatval, losatval)
*   UInt8  C__U8SATU16_SAT(v, upsatval, losatval)
*
* NOTE:
*   Type of satvals has to be output data type, because of comparision inside the macro
*
*   clearly arranged code of this macro:
*           if((v) > (upsatval)) return upsatval;
*           else if((v) < (losatval)) return losatval;
*           else return v ;
*
******************************************************************************/
# 414 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sat.h"
/******************************************************************************
*
* MACRO(s):
*   Int32  C__I32SATI16_SAT(v, upsatval, losatval)
*   Int32  C__I32SATU16_SAT(v, upsatval, losatval)
*   UInt32 C__U32SATI16_SAT(v, upsatval, losatval)
*   UInt32 C__U32SATU16_SAT(v, upsatval, losatval)
*
*   Int32  C__I32SATI8_SAT(v, upsatval, losatval)
*   Int32  C__I32SATU8_SAT(v, upsatval, losatval)
*   UInt32 C__U32SATI8_SAT(v, upsatval, losatval)
*   UInt32 C__U32SATU8_SAT(v, upsatval, losatval)
*
*   Int16  C__I16SATI8_SAT(v, upsatval, losatval)
*   Int16  C__I16SATU8_SAT(v, upsatval, losatval)
*   UInt16 C__U16SATI8_SAT(v, upsatval, losatval)
*   UInt16 C__U16SATU8_SAT(v, upsatval, losatval)
*
* NOTE:
*   Type of satvals has to be output data type, because of comparision inside the macro
*
*   clearly arranged code of this macro:
*           if((v) > (upsatval)) return upsatval;
*           else if((v) < (losatval)) return losatval;
*           else return v ;
*
******************************************************************************/
# 66 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h" 1
/**
 * @file       $RCSfile: shl.h $
 * @brief      This file contains macro definitions and function declarations for the operation Shift Left.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2016, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.11 $ $Date: 2016/11/28 14:51:47CET $
 */

/* Note:
 *   Macros whose names contain 'SAT' are with automatic saturation.
 *   The saturation limits are defined by the type of the returned variable.
 *
 *   The macro name represents the implemented operation:
 *     C__<output_type><operation><input_type>{C|U}6[{LT|EQ|GT}32][_SAT{b|l|u}]
 *
 *     output_type, input_type: U8, U16, U32, U64, I8, I16, I32, I64
 *     operation              : SHL
 *
 *
 *   The result:
 *    If a macro's parameter list contains the parameters r_h and r_l or hi and lo
 *    these variables contain the calculation result and the macro has no return
 *    value. Those macros must not be used inside expressions!
 *    All other macros have a return value.
 *
 *
 *   The parameters are classified with three keywords.
 *
 *    Parameter  Description                    Properties
 *    --------------------------------------------------------------------------
 *    v          input for a ...
 *                ... fixed type operation      rVars,  NoConsts, ComplexExpr
 *                ... saturated operation       rVars,  NoConsts, NoComplexExpr
 *    v_h        upper part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 *    v_l        lower part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 *    sh         variable shift factor          rVars,  NoConsts, NoComplexExpr
 *    csh        const shift factor             NoVars, Consts,   NoComplexExpr
 *    csh32      abs(32 - csh)                  NoVars, Consts,   NoComplexExpr
 *    r_h        upper part of a 64-bit output  wVars,  NoConsts, NoComplexExpr
 *    r_l        lower part of a 64-bit output  wVars,  NoConsts, NoComplexExpr
 *    hi          upper part of a combined
 *                64-bit input/output           rwVars, NoConsts, NoComplexExpr
 *    lo          lower part of a combined
 *                64-bit input/output           rwVars, NoConsts, NoComplexExpr
 *    maxIn      const upper input limit        rVars,  Consts,   NoComplexExpr
 *    minIn      const lower input limit        rVars,  Consts,   NoComplexExpr
 *    maxIn_h    upper part of the const
 *                upper input limit             rVars,  Consts,   NoComplexExpr
 *    maxIn_l    lower part of the const
 *                upper input limit             rVars,  Consts,   NoComplexExpr
 *    minIn_h    upper part of the const
 *                lower input limit             rVars,  Consts,   NoComplexExpr
 *    minIn_l    lower part of the const
 *                lower input limit             rVars,  Consts,   NoComplexExpr
 */






/******************************************************************************
* GENERAL:
*   Generic rules, no saturation
*   (SH < Wo), (Wo == 64) && (Wx <= 32)
******************************************************************************/

/******************************************************************************
* MACROS:
*   C__I64SHLI32C6_LT32(v, csh, csh32, r_h, r_l)
*   C__I64SHLI32C6_EQ32(v, r_h, r_l)
*   C__I64SHLI32C6_GT32(v, csh32, r_h, r_l)
*
*   C__I64SHLI16C6_LT32(v, csh, csh32, r_h, r_l)
*   C__I64SHLI16C6_EQ32(v, r_h, r_l)
*   C__I64SHLI16C6_GT32(v, csh32, r_h, r_l)
*
*   C__I64SHLI8C6_LT32(v, csh, csh32, r_h, r_l)
*   C__I64SHLI8C6_EQ32(v, r_h, r_l)
*   C__I64SHLI8C6_GT32(v, csh32, r_h, r_l)
*
* NOTE:
*   The input value is used more than once inside the macro body.
*   Thus, for performance reasons, the input value should be no expression.
*   These macros do not have a return value.
******************************************************************************/
# 125 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__U64SHLU32C6_LT32(v, csh, csh32, r_h, r_l)
*   C__U64SHLU32C6_EQ32(v, r_h, r_l)
*   C__U64SHLU32C6_GT32(v, csh32, r_h, r_l)
*
*   C__U64SHLU16C6_LT32(v, csh, csh32, r_h, r_l)
*   C__U64SHLU16C6_EQ32(v, r_h, r_l)
*   C__U64SHLU16C6_GT32(v, csh32, r_h, r_l)
*
*   C__U64SHLU8C6_LT32(v, csh, csh32, r_h, r_l)
*   C__U64SHLU8C6_EQ32(v, r_h, r_l)
*   C__U64SHLU8C6_GT32(v, csh32, r_h, r_l)
*
* NOTE:
*   The input value is used more than once inside the macro body.
*   Thus, for performance reasons, the input value should be no expression.
*   These macros do not have a return value.
******************************************************************************/
# 182 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__I64SHLU32C6_LT32(v, csh, csh32, r_h, r_l)
*   C__I64SHLU32C6_EQ32(v, r_h, r_l)
*   C__I64SHLU32C6_GT32(v, csh32, r_h, r_l)
*
*   C__I64SHLU16C6_LT32(v, csh, csh32, r_h, r_l)
*   C__I64SHLU16C6_EQ32(v, r_h, r_l)
*   C__I64SHLU16C6_GT32(v, csh32, r_h, r_l)
*
*   C__I64SHLU8C6_LT32(v, csh, csh32, r_h, r_l)
*   C__I64SHLU8C6_EQ32(v, r_h, r_l)
*   C__I64SHLU8C6_GT32(v, csh32, r_h, r_l)
*
* NOTE:
*   The input value is used more than once inside the macro body.
*   Thus, for performance reasons, the input value should be no expression.
*   These macros do not have a return value.
******************************************************************************/
# 239 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__U64SHLI32C6_LT32(v, csh, csh32, r_h, r_l)
*   C__U64SHLI32C6_EQ32(v, r_h, r_l)
*   C__U64SHLI32C6_GT32(v, csh32, r_h, r_l)
*
*   C__U64SHLI16C6_LT32(v, csh, csh32, r_h, r_l)
*   C__U64SHLI16C6_EQ32(v, r_h, r_l)
*   C__U64SHLI16C6_GT32(v, csh32, r_h, r_l)
*
*   C__U64SHLI8C6_LT32(v, csh, csh32, r_h, r_l)
*   C__U64SHLI8C6_EQ32(v, r_h, r_l)
*   C__U64SHLI8C6_GT32(v, csh32, r_h, r_l)
*
* NOTE:
*   The input value is used more than once inside the macro body.
*   Thus, for performance reasons, the input value should be no expression.
*   These macros do not have a return value.
******************************************************************************/
# 296 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* GENERAL:
*   Generic rules, no saturation
*   (SH < Wo), (Wo == 64) && (Wx == 64)
******************************************************************************/

/******************************************************************************
* MACROS:
*   C__I64SHLI64C6_LT32(hi, lo, csh, csh32)
*   C__I64SHLI64C6_EQ32(hi, lo)
*   C__I64SHLI64C6_GT32(hi, lo, csh32)
*
* NOTE:
*   The input values are modified.
*   Use these macros only with temporary variables.
*   These macros do not have a return value.
******************************************************************************/
# 327 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__U64SHLU64C6_LT32(v_h, v_l, csh, csh32)
*   C__U64SHLU64C6_EQ32(v_h, v_l)
*   C__U64SHLU64C6_GT32(v_h, v_l, csh32)
*
* NOTE:
*   The input values are modified.
*   Use these macros only with temporary variables.
*   These macros do not have a return value.
******************************************************************************/
# 352 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__I64SHLU64C6_LT32(v_h, v_l, csh, csh32, r_h, r_l)
*   C__I64SHLU64C6_EQ32(v_l, r_h, r_l)
*   C__I64SHLU64C6_GT32(v_l, csh32, r_h, r_l)
*
* NOTE:
*   These macros do not have a return value.
******************************************************************************/
# 375 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__U64SHLI64C6_LT32(v_h, v_l, csh, csh32, r_h, r_l)
*   C__U64SHLI64C6_EQ32(v_l, r_h, r_l)
*   C__U64SHLI64C6_GT32(v_l, csh32, r_h, r_l)
*
* NOTE:
*   These macros do not have a return value.
******************************************************************************/
# 398 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* GENERAL:
*   Generic rules, with saturation
*   (Wo <= 32) && (Wx <= 32)
******************************************************************************/

/******************************************************************************
* MACROS:
*   C__I32SHLI32C6_SATb(v, csh, maxIn, minIn)
*   C__I32SHLI32C6_SATu(v, csh, maxIn)
*   C__I32SHLI32C6_SATl(v, csh, minIn)
*
*   C__I32SHLI16C6_SATb(v, csh, maxIn, minIn)
*   C__I32SHLI16C6_SATu(v, csh, maxIn)
*   C__I32SHLI16C6_SATl(v, csh, minIn)
*
*   C__I32SHLI8C6_SATb(v, csh, maxIn, minIn)
*   C__I32SHLI8C6_SATu(v, csh, maxIn)
*   C__I32SHLI8C6_SATl(v, csh, minIn)
*
*
*   C__I16SHLI32C6_SATb(v, csh, maxIn, minIn)
*   C__I16SHLI32C6_SATu(v, csh, maxIn)
*   C__I16SHLI32C6_SATl(v, csh, minIn)
*
*   C__I16SHLI16C6_SATb(v, csh, maxIn, minIn)
*   C__I16SHLI16C6_SATu(v, csh, maxIn)
*   C__I16SHLI16C6_SATl(v, csh, minIn)
*
*   C__I16SHLI8C6_SATb(v, csh, maxIn, minIn)
*   C__I16SHLI8C6_SATu(v, csh, maxIn)
*   C__I16SHLI8C6_SATl(v, csh, minIn)
*
*
*   C__I8SHLI32C6_SATb(v, csh, maxIn, minIn)
*   C__I8SHLI32C6_SATu(v, csh, maxIn)
*   C__I8SHLI32C6_SATl(v, csh, minIn)
*
*   C__I8SHLI16C6_SATb(v, csh, maxIn, minIn)
*   C__I8SHLI16C6_SATu(v, csh, maxIn)
*   C__I8SHLI16C6_SATl(v, csh, minIn)
*
*   C__I8SHLI8C6_SATb(v, csh, maxIn, minIn)
*   C__I8SHLI8C6_SATu(v, csh, maxIn)
*   C__I8SHLI8C6_SATl(v, csh, minIn)
*
* NOTE:
*   For efficency reasons and to avoid side effects the input values should not be expressions.
*
*           2^(Wresult-1)
*   maxIn = ------------- - 1  ;  minIn = ~maxIn
*               2^csh
******************************************************************************/
# 542 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__U32SHLU32C6_SATu(v, csh, maxIn)
*
*   C__U32SHLU16C6_SATu(v, csh, maxIn)
*
*   C__U32SHLU8C6_SATu(v, csh, maxIn)
*
*
*   C__U16SHLU32C6_SATu(v, csh, maxIn)
*
*   C__U16SHLU16C6_SATu(v, csh, maxIn)
*
*   C__U16SHLU8C6_SATu(v, csh, maxIn)
*
*
*   C__U8SHLU32C6_SATu(v, csh, maxIn)
*
*   C__U8SHLU16C6_SATu(v, csh, maxIn)
*
*   C__U8SHLU8C6_SATu(v, csh, maxIn)
*
* NOTE:
*   For efficency reasons and to avoid side effects the input values should not be expressions.
*
*           2^(Wresult-1)
*   maxIn = ------------- - 1
*               2^csh
******************************************************************************/
# 600 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__I32SHLU32C6_SATu(v, csh, maxIn)
*
*   C__I32SHLU16C6_SATu(v, csh, maxIn)
*
*   C__I32SHLU8C6_SATu(v, csh, maxIn)
*
*
*   C__I16SHLU32C6_SATu(v, csh, maxIn)
*
*   C__I16SHLU16C6_SATu(v, csh, maxIn)
*
*   C__I16SHLU8C6_SATu(v, csh, maxIn)
*
*
*   C__I8SHLU32C6_SATu(v, csh, maxIn)
*
*   C__I8SHLU16C6_SATu(v, csh, maxIn)
*
*   C__I8SHLU8C6_SATu(v, csh, maxIn)
*
* NOTE:
*   For efficency reasons and to avoid side effects the input values should not be expressions.
*
*           2^(Wresult-1)
*   maxIn = ------------- - 1
*               2^csh
******************************************************************************/
# 658 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__U32SHLI32C6_SATb(v, csh, maxIn)
*   C__U32SHLI32C6_SATu(v, csh, maxIn)
*   C__U32SHLI32C6_SATl(v, csh)
*
*   C__U32SHLI16C6_SATb(v, csh, maxIn)
*   C__U32SHLI16C6_SATu(v, csh, maxIn)
*   C__U32SHLI16C6_SATl(v, csh)
*
*   C__U32SHLI8C6_SATb(v, csh, maxIn)
*   C__U32SHLI8C6_SATu(v, csh, maxIn)
*   C__U32SHLI8C6_SATl(v, csh)
*
*
*   C__U16SHLI32C6_SATb(v, csh, maxIn)
*   C__U16SHLI32C6_SATu(v, csh, maxIn)
*   C__U16SHLI32C6_SATl(v, csh)
*
*   C__U16SHLI16C6_SATb(v, csh, maxIn)
*   C__U16SHLI16C6_SATu(v, csh, maxIn)
*   C__U16SHLI16C6_SATl(v, csh)
*
*   C__U16SHLI8C6_SATb(v, csh, maxIn)
*   C__U16SHLI8C6_SATu(v, csh, maxIn)
*   C__U16SHLI8C6_SATl(v, csh)
*
*
*   C__U8SHLI32C6_SATb(v, csh, maxIn)
*   C__U8SHLI32C6_SATu(v, csh, maxIn)
*   C__U8SHLI32C6_SATl(v, csh)
*
*   C__U8SHLI16C6_SATb(v, csh, maxIn)
*   C__U8SHLI16C6_SATu(v, csh, maxIn)
*   C__U8SHLI16C6_SATl(v, csh)
*
*   C__U8SHLI8C6_SATb(v, csh, maxIn)
*   C__U8SHLI8C6_SATu(v, csh, maxIn)
*   C__U8SHLI8C6_SATl(v, csh)
*
* NOTE:
*   For efficency reasons and to avoid side effects the input values should not be expressions.
*
*           2^(Wresult-1)
*   maxIn = ------------- - 1
*               2^csh
******************************************************************************/
# 796 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* GENERAL:
*   Generic rules, with saturation
*   (Wo <= 32) && (Wx == 64)
******************************************************************************/

/******************************************************************************
* MACROS:
*   C__I32SHLI64C6_SATb(v_h, v_l, csh, maxIn_l, minIn_l)
*   C__I32SHLI64C6_SATu(v_h, v_l, csh, maxIn_l)
*   C__I32SHLI64C6_SATl(v_h, v_l, csh, minIn_l)
*
*   C__I16SHLI64C6_SATb(v_h, v_l, csh, maxIn_l, minIn_l)
*   C__I16SHLI64C6_SATu(v_h, v_l, csh, maxIn_l)
*   C__I16SHLI64C6_SATl(v_h, v_l, csh, minIn_l)
*
*   C__I8SHLI64C6_SATb(v_h, v_l, csh, maxIn_l, minIn_l)
*   C__I8SHLI64C6_SATu(v_h, v_l, csh, maxIn_l)
*   C__I8SHLI64C6_SATl(v_h, v_l, csh, minIn_l)
*
* NOTE:
*   For efficency reasons and to avoid side effects the input values should not be expressions.
*
*           2^(Wresult-1)
*   maxIn = ------------- - 1  ;  minIn = ~maxIn
*               2^csh
******************************************************************************/
# 866 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__U32SHLU64C6_SATu(v_h, v_l, csh, maxIn_l)
*
*   C__U16SHLU64C6_SATu(v_h, v_l, csh, maxIn_l)
*
*   C__U8SHLU64C6_SATu(v_h, v_l, csh, maxIn_l)
*
* NOTE:
*   For efficency reasons and to avoid side effects the input values should not be expressions.
*
*           2^(Wresult-1)
*   maxIn = ------------- - 1
*               2^csh
******************************************************************************/
# 895 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__I32SHLU64C6_SATu(v_h, v_l, csh, maxIn_l)
*
*   C__I16SHLU64C6_SATu(v_h, v_l, csh, maxIn_l)
*
*   C__I8SHLU64C6_SATu(v_h, v_l, csh, maxIn_l)
*
* NOTE:
*   For efficency reasons and to avoid side effects the input values should not be expressions.
*
*           2^(Wresult-1)
*   maxIn = ------------- - 1
*               2^csh
******************************************************************************/
# 924 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shl.h"
/******************************************************************************
* MACROS:
*   C__U32SHLI64C6_SATb(v_h, v_l, csh, maxIn_l)
*   C__U32SHLI64C6_SATu(v_h, v_l, csh, maxIn_l)
*   C__U32SHLI64C6_SATl(v_h, v_l, csh)
*
*   C__U16SHLI64C6_SATb(v_h, v_l, csh, maxIn_l)
*   C__U16SHLI64C6_SATu(v_h, v_l, csh, maxIn_l)
*   C__U16SHLI64C6_SATl(v_h, v_l, csh)
*
*   C__U8SHLI64C6_SATb(v_h, v_l, csh, maxIn_l)
*   C__U8SHLI64C6_SATu(v_h, v_l, csh, maxIn_l)
*   C__U8SHLI64C6_SATl(v_h, v_l, csh)
*
* NOTE:
*   For efficency reasons and to avoid side effects the input values should not be expressions.
*
*           2^(Wresult-1)
*   maxIn = ------------- - 1
*               2^csh
******************************************************************************/
# 67 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h" 1
/**
 * @file       $RCSfile: shr.h $
 * @brief      This file contains macro definitions for the operation Shift Right.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2016, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.11 $ $Date: 2016/11/29 11:47:28CET $
 */

/* Note:
 *   Macros whose names contain 'SAT' are with automatic saturation.
 *   The saturation limits are defined by the type of the returned variable.
 *
 *   The macro name represents the implemented operation:
 *     C__<output_type><operation><input_type>{C|U}6[{LT|EQ|GT}32][_SAT{b|l|u}]
 *
 *     output_type, input_type: U8, U16, U32, U64, I8, I16, I32, I64
 *     operation              : SHR
 *
 *
 *   The result:
 *    If a macro's parameter list contains the parameters r_h and r_l or hi and lo
 *    these variables contain the calculation result and the macro has no return
 *    value. Those macros must not be used inside expressions!
 *    All other macros have a return value.
 *
 *
 *   The parameters are classified with three keywords.
 *
 *    Parameter  Description                    Properties
 *    --------------------------------------------------------------------------
 *    v          input for a ...
 *                ... fixed type operation      rVars,  NoConsts, ComplexExpr
 *                ... saturated operation       rVars,  NoConsts, NoComplexExpr
 *    v_h        upper part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 *    v_l        lower part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 *    sh         variable shift factor          rVars,  NoConsts, NoComplexExpr
 *    csh        const shift factor             NoVars, Consts,   NoComplexExpr
 *    csh32      abs(32 - csh)                  NoVars, Consts,   NoComplexExpr
 *    r_h        upper part of a 64-bit output  wVars,  NoConsts, NoComplexExpr
 *    r_l        lower part of a 64-bit output  wVars,  NoConsts, NoComplexExpr
 *    hi         upper part of a combined
 *                64-bit input/output           rwVars, NoConsts, NoComplexExpr
 *    lo         lower part of a combined
 *                64-bit input/output           rwVars, NoConsts, NoComplexExpr
 *    maxIn      = 2^(W_output - 1) * 2^csh - 1
 *               const upper input limit        rVars,  Consts,   NoComplexExpr
 *    minIn      = ~maxIn
 *               const lower input limit        rVars,  Consts,   NoComplexExpr
 *    maxIn_h    upper part of the const
 *                upper input limit             rVars,  Consts,   NoComplexExpr
 *    maxIn_l    lower part of the const
 *                upper input limit             rVars,  Consts,   NoComplexExpr
 *    minIn_h    upper part of the const
 *                lower input limit             rVars,  Consts,   NoComplexExpr
 *    minIn_l    lower part of the const
 *                lower input limit             rVars,  Consts,   NoComplexExpr
 */






/******************************************************************************
*
* GENERAL:
*   Generic rules, no saturation
*   (1 <= csh < Wx), (Wo == 64) && (Wx <= 32)
*
******************************************************************************/

/******************************************************************************
*
* MACROS:
*   C__I64SHRI32C6(v, csh, r_h, r_l)
*   C__I64SHRI16C6(v, csh, r_h, r_l)
*   C__I64SHRI8C6(v, csh, r_h, r_l)
*
* NOTE:
*   The input value is used more than once inside the macro body.
*   Thus, for performance reasons, the input value should be no expression.
*   These macros do not have a return value.
*
******************************************************************************/
# 99 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__U64SHRU32C6(v, csh, r_h, r_l)
*   C__U64SHRU16C6(v, csh, r_h, r_l)
*   C__U64SHRU8C6(v, csh, r_h, r_l)
*
* NOTE:
*   These macros do not have a return value.
*
******************************************************************************/
# 124 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__I64SHRU32C6(v, csh, r_h, r_l)
*   C__I64SHRU16C6(v, csh, r_h, r_l)
*   C__I64SHRU8C6(v, csh, r_h, r_l)
*
* NOTE:
*   These macros do not have a return value.
*
******************************************************************************/
# 149 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__U64SHRI32C6(v, csh, r_h, r_l)
*   C__U64SHRI16C6(v, csh, r_h, r_l)
*   C__U64SHRI8C6(v, csh, r_h, r_l)
*
* NOTE:
*   The input value is used more than once inside the macro body.
*   Thus, for performance reasons, the input value should be no expression.
*   These macros do not have a return value.
*
******************************************************************************/
# 176 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* GENERAL:
*   Generic rules, no saturation
*   (1 <= csh < Wx), (Wo <= 32) && (Wx == 64)
*
******************************************************************************/

/******************************************************************************
*
* MACROS:
*   C__I32SHRI64C6_LT32(v_h, v_l, csh, csh32)
*   C__I32SHRI64C6_EQ32(v_h, v_l)
*   C__I32SHRI64C6_GT32(v_h, v_l, csh32)
*
*   C__I16SHRI64C6_LT32(v_h, v_l, csh, csh32)
*   C__I16SHRI64C6_EQ32(v_h, v_l)
*   C__I16SHRI64C6_GT32(v_h, v_l, csh32)
*
*   C__I8SHRI64C6_LT32(v_h, v_l, csh, csh32)
*   C__I8SHRI64C6_EQ32(v_h, v_l)
*   C__I8SHRI64C6_GT32(v_h, v_l, csh32)
*
* NOTE:
*   -
*
******************************************************************************/
# 232 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__U32SHRU64C6_LT32(v_h, v_l, csh, csh32)
*   C__U32SHRU64C6_EQ32(v_h, v_l)
*   C__U32SHRU64C6_GT32(v_h, v_l, csh32)
*
*   C__U16SHRU64C6_LT32(v_h, v_l, csh, csh32)
*   C__U16SHRU64C6_EQ32(v_h, v_l)
*   C__U16SHRU64C6_GT32(v_h, v_l, csh32)
*
*   C__U8SHRU64C6_LT32(v_h, v_l, csh, csh32)
*   C__U8SHRU64C6_EQ32(v_h, v_l)
*   C__U8SHRU64C6_GT32(v_h, v_l, csh32)
*
* NOTE:
*   The input parameter is not put in parantheses inside the macro body.
*   Thus, the input value must not be an expression.
*
******************************************************************************/
# 281 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__I32SHRU64C6_LT32(v_h, v_l, csh, csh32)
*   C__I32SHRU64C6_EQ32(v_h, v_l)
*   C__I32SHRU64C6_GT32(v_h, v_l, csh32)
*
*   C__I16SHRU64C6_LT32(v_h, v_l, csh, csh32)
*   C__I16SHRU64C6_EQ32(v_h, v_l)
*   C__I16SHRU64C6_GT32(v_h, v_l, csh32)
*
*   C__I8SHRU64C6_LT32(v_h, v_l, csh, csh32)
*   C__I8SHRU64C6_EQ32(v_h, v_l)
*   C__I8SHRU64C6_GT32(v_h, v_l, csh32)
*
* NOTE:
*   -
*
******************************************************************************/
# 329 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__U32SHRI64C6_LT32(v_h, v_l, csh, csh32)
*   C__U32SHRI64C6_EQ32(v_h, v_l)
*   C__U32SHRI64C6_GT32(v_h, v_l, csh32)
*
*   C__U16SHRI64C6_LT32(v_h, v_l, csh, csh32)
*   C__U16SHRI64C6_EQ32(v_h, v_l)
*   C__U16SHRI64C6_GT32(v_h, v_l, csh32)
*
*   C__U8SHRI64C6_LT32(v_h, v_l, csh, csh32)
*   C__U8SHRI64C6_EQ32(v_h, v_l)
*   C__U8SHRI64C6_GT32(v_h, v_l, csh32)
*
* NOTE:
*   The input parameter is not put in parantheses inside the macro body.
*   Thus, the input value must not be an expression.
*
******************************************************************************/
# 378 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* GENERAL:
*   Generic rules, no saturation
*   (1 <= csh < Wx), (Wo == 64) && (Wx == 64)
*
******************************************************************************/

/******************************************************************************
*
* MACROS:
*   C__I64SHRI64C6_LT32(hi, lo, csh, csh32)
*   C__I64SHRI64C6_EQ32(hi, lo)
*   C__I64SHRI64C6_GT32(hi, lo, csh32)
*
* NOTE:
*   The input values are modified.
*   Use these macros only with temporary variables.
*   These macros do not have a return value.
*
******************************************************************************/
# 413 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__U64SHRU64C6_LT32(hi, lo, csh, csh32)
*   C__U64SHRU64C6_EQ32(hi, lo)
*   C__U64SHRU64C6_GT32(hi, lo, csh32)
*
* NOTE:
*   The input values are modified.
*   Use these macros only with temporary variables.
*   These macros do not have a return value.
*
******************************************************************************/
# 440 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__I64SHRU64C6_LT32(v_h, v_l, csh, csh32, r_h, r_l)
*   C__I64SHRU64C6_EQ32(v_h, r_h, r_l)
*   C__I64SHRU64C6_GT32(v_h, csh32, r_h, r_l)
*
* NOTE:
*   These macros do not have a return value.
*
******************************************************************************/
# 464 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__U64SHRI64C6_LT32(v_h, v_l, csh, csh32, r_h, r_l)
*   C__U64SHRI64C6_EQ32(v_h, r_h, r_l)
*   C__U64SHRI64C6_GT32(v_h, csh32, r_h, r_l)
*
* NOTE:
*   These macros do not have a return value.
*
******************************************************************************/
# 489 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* GENERAL:
*   Generic rules, with saturation
*   (Wo <= 32) && (Wx <= 32)
*
******************************************************************************/

/******************************************************************************
*
* MACROS:
*   C__I16SHRI32C6_LT16_SATb(v, csh, maxIn, minIn)          : csh <  |Wx - Wo|
*   C__I16SHRI32C6_LT16_SATu(v, csh, maxIn)                 : csh <  |Wx - Wo|
*   C__I16SHRI32C6_LT16_SATl(v, csh, minIn)                 : csh <  |Wx - Wo|
*
*   C__I8SHRI32C6_LT24_SATb(v, csh, maxIn, minIn)           : csh <  |Wx - Wo|
*   C__I8SHRI32C6_LT24_SATu(v, csh, maxIn)                  : csh <  |Wx - Wo|
*   C__I8SHRI32C6_LT24_SATl(v, csh, minIn)                  : csh <  |Wx - Wo|
*
*   C__I8SHRI16C6_LT8_SATb(v, csh, maxIn, minIn)            : csh <  |Wx - Wo|
*   C__I8SHRI16C6_LT8_SATu(v, csh, maxIn)                   : csh <  |Wx - Wo|
*   C__I8SHRI16C6_LT8_SATl(v, csh, minIn)                   : csh <  |Wx - Wo|
*
* NOTE:
*   The input parameter is not put in parantheses inside the macro body.
*   Thus, the input value must not be an expression.
*
******************************************************************************/
# 547 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__U16SHRU32C6_LT16_SATu(v, csh, maxIn)                 : csh <  |Wx - Wo|
*   C__U8SHRU32C6_LT24_SATu(v, csh, maxIn)                  : csh <  |Wx - Wo|
*   C__U8SHRU16C6_LT8_SATu(v, csh, maxIn)                   : csh <  |Wx - Wo|
*
* NOTE:
*   The input parameter is not put in parantheses inside the macro body.
*   Thus, the input value must not be an expression.
*
******************************************************************************/
# 569 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__I16SHRU32C6_EQ16_SATu(v, maxIn)                      : csh == |Wx - Wo|
*   C__I16SHRU32C6_LT16_SATu(v, csh, maxIn)                 : csh <  |Wx - Wo|
*
*   C__I8SHRU32C6_EQ24_SATu(v, maxIn)                       : csh == |Wx - Wo|
*   C__I8SHRU32C6_LT24_SATu(v, csh, maxIn)                  : csh <  |Wx - Wo|
*
*   C__I8SHRU16C6_EQ8_SATu(v, maxIn)                        : csh == |Wx - Wo|
*   C__I8SHRU16C6_LT8_SATu(v, csh, maxIn)                   : csh <  |Wx - Wo|
*
* NOTE:
*   The input parameter is not put in parantheses inside the macro body.
*   Thus, the input value must not be an expression.
*
******************************************************************************/
# 607 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__U16SHRI32C6_GT16_SATl(v, csh)                        : csh >  |Wx - Wo|
*   C__U16SHRI32C6_EQ16_SATl(v)                             : csh == |Wx - Wo|
*
*   C__U16SHRI32C6_EQ15_SATl(v)                             : csh <  |Wx - Wo|
*   C__U16SHRI32C6_LT15_SATb(v, csh, maxIn)                 : csh <  |Wx - Wo|
*   C__U16SHRI32C6_LT15_SATu(v, csh, maxIn)                 : csh <  |Wx - Wo|
*   C__U16SHRI32C6_LT15_SATl(v, csh)                        : csh <  |Wx - Wo|
*
*   C__U8SHRI32C6_GT24_SATl(v, csh)                         : csh >  |Wx - Wo|
*   C__U8SHRI32C6_EQ24_SATl(v)                              : csh == |Wx - Wo|
*
*   C__U8SHRI32C6_EQ23_SATl(v)                              : csh <  |Wx - Wo|
*   C__U8SHRI32C6_LT23_SATb(v, csh, maxIn)                  : csh <  |Wx - Wo|
*   C__U8SHRI32C6_LT23_SATu(v, csh, maxIn)                  : csh <  |Wx - Wo|
*   C__U8SHRI32C6_LT23_SATl(v, csh)                         : csh <  |Wx - Wo|
*
*   C__U8SHRI16C6_GT8_SATl(v, csh)                          : csh >  |Wx - Wo|
*   C__U8SHRI16C6_EQ8_SATl(v)                               : csh == |Wx - Wo|
*
*   C__U8SHRI16C6_EQ7_SATl(v)                               : csh <  |Wx - Wo|
*   C__U8SHRI16C6_LT7_SATb(v, csh, maxIn)                   : csh <  |Wx - Wo|
*   C__U8SHRI16C6_LT7_SATu(v, csh, maxIn)                   : csh <  |Wx - Wo|
*   C__U8SHRI16C6_LT7_SATl(v, csh)                          : csh <  |Wx - Wo|
*
* NOTE:
*   The input parameter is not put in parantheses inside the macro body.
*   Thus, the input value must not be an expression.
*
******************************************************************************/
# 699 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__U32SHRI32C6_SATl(v, csh)                             : csh >  |Wx - Wo|
*
*   C__U32SHRI16C6_SATl(v, csh)                             : csh >  |Wx - Wo|
*
*   C__U32SHRI8C6_SATl(v, csh)                              : csh >  |Wx - Wo|
*
*   C__U16SHRI16C6_SATl(v, csh)                             : csh >  |Wx - Wo|
*
*   C__U16SHRI8C6_SATl(v, csh)                              : csh >  |Wx - Wo|
*
*   C__U8SHRI8C6_SATl(v, csh)                               : csh >  |Wx - Wo|
*
* NOTE:
*   The input parameter is not put in parantheses inside the macro body.
*   Thus, the input value must not be an expression.
*
******************************************************************************/
# 738 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* GENERAL:
*   Generic rules, with saturation
*   (Wo <= 32) && (Wx == 64)
*
******************************************************************************/

/******************************************************************************
*
* MACROS:
*   C__I32SHRI64C6_LT32_SATb(v_h, v_l, csh, csh32, maxIn_h, maxIn_l, minIn_h, minIn_l) : csh <  |Wx - Wo|
*   C__I32SHRI64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l)                   : csh <  |Wx - Wo|
*   C__I32SHRI64C6_LT32_SATl(v_h, v_l, csh, csh32, minIn_h, minIn_l)                   : csh <  |Wx - Wo|
*
*   C__I16SHRI64C6_LT32_SATb(v_h, v_l, csh, csh32, maxIn_h, maxIn_l, minIn_h, minIn_l) : csh <  |Wx - Wo|
*   C__I16SHRI64C6_EQ32_SATb(v_h, v_l, maxIn_h, maxIn_l, minIn_h, minIn_l)             : csh <  |Wx - Wo|
*   C__I16SHRI64C6_LT48_SATb(v_h, v_l, csh32, maxIn_h, maxIn_l, minIn_h, minIn_l)      : csh <  |Wx - Wo|
*
*   C__I16SHRI64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l)                   : csh <  |Wx - Wo|
*   C__I16SHRI64C6_EQ32_SATu(v_h, v_l, maxIn_h, maxIn_l)                               : csh <  |Wx - Wo|
*   C__I16SHRI64C6_LT48_SATu(v_h, v_l, csh32, maxIn_h, maxIn_l)                        : csh <  |Wx - Wo|
*
*   C__I16SHRI64C6_LT32_SATl(v_h, v_l, csh, csh32, minIn_h, minIn_l)                   : csh <  |Wx - Wo|
*   C__I16SHRI64C6_EQ32_SATl(v_h, v_l, minIn_h, minIn_l)                               : csh <  |Wx - Wo|
*   C__I16SHRI64C6_LT48_SATl(v_h, v_l, csh32, minIn_h, minIn_l)                        : csh <  |Wx - Wo|
*
*   C__I8SHRI64C6_LT32_SATb(v_h, v_l, csh, csh32, maxIn_h, maxIn_l, minIn_h, minIn_l)  : csh <  |Wx - Wo|
*   C__I8SHRI64C6_EQ32_SATb(v_h, v_l, maxIn_h, maxIn_l, minIn_h, minIn_l)              : csh <  |Wx - Wo|
*   C__I8SHRI64C6_LT56_SATb(v_h, v_l, csh32, maxIn_h, maxIn_l, minIn_h, minIn_l)       : csh <  |Wx - Wo|
*
*   C__I8SHRI64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l)                    : csh <  |Wx - Wo|
*   C__I8SHRI64C6_EQ32_SATu(v_h, v_l, maxIn_h, maxIn_l)                                : csh <  |Wx - Wo|
*   C__I8SHRI64C6_LT56_SATu(v_h, v_l, csh32, maxIn_h, maxIn_l)                         : csh <  |Wx - Wo|
*
*   C__I8SHRI64C6_LT32_SATl(v_h, v_l, csh, csh32, minIn_h, minIn_l)                    : csh <  |Wx - Wo|
*   C__I8SHRI64C6_EQ32_SATl(v_h, v_l, minIn_h, minIn_l)                                : csh <  |Wx - Wo|
*   C__I8SHRI64C6_LT56_SATl(v_h, v_l, csh32, minIn_h, minIn_l)                         : csh <  |Wx - Wo|
*
* NOTE:
*   -
*
******************************************************************************/
# 879 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__U32SHRU64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l) : csh <  |Wx - Wo|
*
*   C__U16SHRU64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l) : csh <  |Wx - Wo|
*   C__U16SHRU64C6_EQ32_SATu(v_h, v_l, maxIn_h, maxIn_l)             : csh <  |Wx - Wo|
*   C__U16SHRU64C6_LT48_SATu(v_h, v_l, csh32, maxIn_h, maxIn_l)      : csh <  |Wx - Wo|
*
*   C__U8SHRU64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l)  : csh <  |Wx - Wo|
*   C__U8SHRU64C6_EQ32_SATu(v_h, v_l, maxIn_h, maxIn_l)              : csh <  |Wx - Wo|
*   C__U8SHRU64C6_LT56_SATu(v_h, v_l, csh32, maxIn_h, maxIn_l)       : csh <  |Wx - Wo|
*
* NOTE:
*   -
*
******************************************************************************/
# 927 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__I32SHRU64C6_EQ32_SATu(v_h, v_l, maxIn_h, maxIn_l)             : csh <  |Wx - Wo|
*   C__I32SHRU64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l) : csh <  |Wx - Wo|
*
*   C__I16SHRU64C6_EQ48_SATu(v_h, v_l, maxIn_h, maxIn_l)             : csh == |Wx - Wo|
*
*   C__I16SHRU64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l) : csh <  |Wx - Wo|
*   C__I16SHRU64C6_EQ32_SATu(v_h, v_l, maxIn_h, maxIn_l)             : csh <  |Wx - Wo|
*   C__I16SHRU64C6_LT48_SATu(v_h, v_l, csh32, maxIn_h, maxIn_l)      : csh <  |Wx - Wo|
*
*   C__I8SHRU64C6_EQ56_SATu(v_h, v_l, maxIn_h, maxIn_l)              : csh == |Wx - Wo|
*
*   C__I8SHRU64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l)  : csh <  |Wx - Wo|
*   C__I8SHRU64C6_EQ32_SATu(v_h, v_l, maxIn_h, maxIn_l)              : csh <  |Wx - Wo|
*   C__I8SHRU64C6_LT56_SATu(v_h, v_l, csh32, maxIn_h, maxIn_l)       : csh <  |Wx - Wo|
*
* NOTE:
*   -
*
******************************************************************************/
# 994 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/shr.h"
/******************************************************************************
*
* MACROS:
*   C__U32SHRI64C6_GT32_SATl(v_h, v_l, csh32)                        : csh >  |Wx - Wo|
*   C__U32SHRI64C6_EQ32_SATl(v_h, v_l)                               : csh == |Wx - Wo|
*   C__U32SHRI64C6_LT32_SATb(v_h, v_l, csh, csh32, maxIn_h, maxIn_l) : csh <  |Wx - Wo|
*   C__U32SHRI64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l) : csh <  |Wx - Wo|
*   C__U32SHRI64C6_LT32_SATl(v_h, v_l, csh, csh32)                   : csh <  |Wx - Wo|
*
*   C__U32SHRI64C6_EQ31_SATl(v_h, v_l)                               : csh <  |Wx - Wo|
*
*
*   C__U16SHRI64C6_GT48_SATl(v_h, v_l, csh32)                        : csh >  |Wx - Wo|
*   C__U16SHRI64C6_EQ48_SATl(v_h, v_l)                               : csh == |Wx - Wo|
*
*   C__U16SHRI64C6_EQ47_SATl(v_h, v_l)                               : csh <  |Wx - Wo|
*   C__U16SHRI64C6_LT47_SATb(v_h, v_l, csh32, maxIn_h, maxIn_l)      : csh <  |Wx - Wo|
*   C__U16SHRI64C6_LT47_SATu(v_h, v_l, csh32, maxIn_h, maxIn_l)      : csh <  |Wx - Wo|
*   C__U16SHRI64C6_LT47_SATl(v_h, v_l, csh32)                        : csh <  |Wx - Wo|
*
*   C__U16SHRI64C6_EQ32_SATb(v_h, v_l, maxIn_h, maxIn_l)             : csh <  |Wx - Wo|
*   C__U16SHRI64C6_EQ32_SATu(v_h, v_l, maxIn_h, maxIn_l)             : csh <  |Wx - Wo|
*   C__U16SHRI64C6_EQ32_SATl(v_h, v_l)                               : csh <  |Wx - Wo|
*   C__U16SHRI64C6_LT32_SATb(v_h, v_l, csh, csh32, maxIn_h, maxIn_l) : csh <  |Wx - Wo|
*   C__U16SHRI64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l) : csh <  |Wx - Wo|
*   C__U16SHRI64C6_LT32_SATl(v_h, v_l, csh, csh32)                   : csh <  |Wx - Wo|
*
*
*   C__U8SHRI64C6_GT56_SATl(v_h, v_l, csh32)                         : csh >  |Wx - Wo|
*   C__U8SHRI64C6_EQ56_SATl(v_h, v_l)                                : csh == |Wx - Wo|
*
*   C__U8SHRI64C6_EQ55_SATl(v_h, v_l)                                : csh <  |Wx - Wo|
*   C__U8SHRI64C6_LT55_SATb(v_h, v_l, csh32, maxIn_h, maxIn_l)       : csh <  |Wx - Wo|
*   C__U8SHRI64C6_LT55_SATu(v_h, v_l, csh32, maxIn_h, maxIn_l)       : csh <  |Wx - Wo|
*   C__U8SHRI64C6_LT55_SATl(v_h, v_l, csh32)                         : csh <  |Wx - Wo|
*
*   C__U8SHRI64C6_EQ32_SATb(v_h, v_l, maxIn_h, maxIn_l)              : csh <  |Wx - Wo|
*   C__U8SHRI64C6_EQ32_SATu(v_h, v_l, maxIn_h, maxIn_l)              : csh <  |Wx - Wo|
*   C__U8SHRI64C6_EQ32_SATl(v_h, v_l)                                : csh <  |Wx - Wo|
*   C__U8SHRI64C6_LT32_SATb(v_h, v_l, csh, csh32, maxIn_h, maxIn_l)  : csh <  |Wx - Wo|
*   C__U8SHRI64C6_LT32_SATu(v_h, v_l, csh, csh32, maxIn_h, maxIn_l)  : csh <  |Wx - Wo|
*   C__U8SHRI64C6_LT32_SATl(v_h, v_l, csh, csh32)                    : csh <  |Wx - Wo|
*
* NOTE:
*   -
*
******************************************************************************/
# 68 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h" 1
/**
 * @file       $RCSfile: sqrt.h $
 * @brief      This file contains macro definitions and function declarations for SQRT calculations.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2016, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.15 $ $Date: 2016/06/23 13:45:16CEST $
 */

/* DESCRIPTION:
*   Calculates an integer square root from argument 'ar'. The result 'rslt' is
*   the largest integer whose square is less than or equal 'ar'.
*   Expression for 'ar' possible.
*
* NOTE:
*   For the algorithm are several formulas used:
*   1. Getting next square in a loop (the last added digit is also the number
*      whose square you were taking):
*       (n+1)^2 = n^2 + n + (n+1)
*   2. Shifting to the next pair of digits (always calculating numbers in pairs)
*      ar   = 10p + q  (two digits, decimal number)
*      ar^2 = 100p^2 + 20pq + q^2
*      q    = (ar^2-100p^2) / (20p+q)
*
* - This file contains several macro definitions and function declarations
*   for square-root operations
* - C-macros are characterized by a leading "C__".
*   Ansi-C-functions are characterized by a leading "F__".
* - The macro/function-name represents the implemented operation(s):
*   (C__|F__) + output_type + OPERATION + input_type [+ input_type] [+ _SAT]
*
*   C__U8SQRTU8():        sqrt(UInt8)    full
*   C__U8SQRTU16():       sqrt(UInt16)   full
*   C__U8SQRTU32():       sqrt(UInt32)   range [0, 0xffff]
*   C__U8SQRTU32_SAT():   sqrt(UInt32)   full range
*   C__U16SQRTU32():      sqrt(UInt32)   full
*
*   C__U8SQRTI8():        sqrt(Int8)     range [0, 0x7f]
*   C__U8SQRTI8_SAT():    sqrt(Int8)     full
*   C__U8SQRTI16():       sqrt(Int16)    range [0, 0x7fff]
*   C__U8SQRTI16_SAT():   sqrt(Int16)    full
*   C__U8SQRTI32():       sqrt(Int32)    range [0, 0x0000ffff]
*   C__U8SQRTI32_SAT():   sqrt(Int32)    full
*   C__U16SQRTI32():      sqrt(Int32)    range [0, 0x7fffffff]
*   C__U16SQRTI32()_SAT:  sqrt(Int32)    full
*
*
*   C__I8SQRTU8():        sqrt(UInt8)    full
*   C__I8SQRTU16():       sqrt(UInt16)   range [0, 0x3fff]
*   C__I8SQRTU16_SAT():   sqrt(UInt16)   full range
*   C__I8SQRTU32():       sqrt(UInt32)   range [0, 0x3fff]
*   C__I8SQRTU32_SAT():   sqrt(UInt32)   full range
*   C__I16SQRTU32():      sqrt(UInt32)   range [0, 0x3FFFFFFF]
*   C__I16SQRTU32_SAT():  sqrt(UInt32)   full range
*   C__I16SQRTU16():      sqrt(UInt16)   full
*   C__I32SQRTU32():      sqrt(UInt32)   full
*
*   C__I8SQRTI8():        sqrt(Int8)     full
*   C__I8SQRTI16():       sqrt(Int16)    range [-(0x3fff), 0x3fff]
*   C__I8SQRTI16_SAT():   sqrt(Int16)    full range
*   C__I8SQRTI32():       sqrt(Int32)    range [-(0x3fff), 0x3fff]
*   C__I8SQRTI32_SAT():   sqrt(Int32)    full range
*   C__I16SQRTI32():      sqrt(Int32)    range [-(0x3FFFFFFF), 0x3FFFFFFF]
*   C__I16SQRTI32_SAT():  sqrt(Int32)    full range
*   C__I16SQRTI16():      sqrt(Int16)    full
*   C__I32SQRTI32():      sqrt(Int32)    full
*/





/******************************************************************************
*
*   C__U8SQRTU8():        sqrt(UInt8)
*
******************************************************************************/
# 100 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U8SQRTU8() */


/******************************************************************************
*
*   C__U8SQRTU16():       sqrt(UInt16)
*
******************************************************************************/
# 131 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U8SQRTU16() */



/******************************************************************************
*
*   C__U8SQRTU32():       sqrt(UInt32)    range [0, 0xffff]
*
******************************************************************************/
# 166 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U8SQRTU32() */



/******************************************************************************
*
*   C__U8SQRTU32_SAT():   sqrt(UInt32), full range
*
******************************************************************************/
# 205 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U8SQRTU32_SAT() */


/******************************************************************************
*
*   C__U16SQRTU32():      sqrt(UInt32)
*
******************************************************************************/
# 239 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U16SQRTU32() */


/******************************************************************************
*
*   C__U8SQRTI8():        sqrt(Int8)
*
******************************************************************************/
# 257 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U8SQRTI8() */


/******************************************************************************
*
*   C__U8SQRTI8_SAT():    sqrt(Int8)
*
******************************************************************************/
# 276 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U8SQRTI8_SAT() */



/******************************************************************************
*
*   C__U8SQRTI16():       sqrt(Int16)
*
******************************************************************************/
# 295 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U8SQRTI16() */


/******************************************************************************
*
*   C__U8SQRTI16_SAT():   sqrt(Int16)
*
******************************************************************************/
# 315 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U8SQRTI16_SAT() */


/******************************************************************************
*
*   C__U8SQRTI32():       sqrt(Int32)    range [-(0xffff),0xffff]
*
******************************************************************************/
# 333 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U8SQRTI32() */


/******************************************************************************
*
*   C__U8SQRTI32_SAT():   sqrt(Int32),  full range
*
******************************************************************************/
# 352 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U8SQRTI32_SAT() */


/******************************************************************************
*
*   C__U16SQRTI32():      sqrt(Int32)
*
******************************************************************************/
# 370 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U16SQRTI32() */


/******************************************************************************
*
*   C__U16SQRTI32_SAT():  sqrt(Int32)
*
******************************************************************************/
# 389 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__U16SQRTI32_SAT() */


/******************************************************************************
*
*   C__I8SQRTU8():        sqrt(UInt8)
*
******************************************************************************/







/* END C__I8SQRTU8() */


/******************************************************************************
*
*   C__I8SQRTU16():       sqrt(UInt16)    range [0, 0x3fff]
*
******************************************************************************/







/* END C__I8SQRTU16() */


/******************************************************************************
*
*   C__I8SQRTU16_SAT():   sqrt(UInt16)    full range
*
******************************************************************************/
# 437 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I8SQRTU16_SAT() */


/******************************************************************************
*
*   C__I8SQRTU32():       sqrt(UInt32)    range [0, 0x3fff]
*
******************************************************************************/







/* END C__I8SQRTU32() */


/******************************************************************************
*
*   C__I8SQRTU32_SAT():   sqrt(UInt32), full range
*
******************************************************************************/
# 490 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I8SQRTU32_SAT() */


/******************************************************************************
*
*   C__I16SQRTU32():      sqrt(UInt32)    range [0, 0x3FFFFFFF]
*
******************************************************************************/







/* END C__I16SQRTU32() */


/******************************************************************************
*
*   C__I16SQRTU32_SAT():  sqrt(UInt32), full range
*
******************************************************************************/
# 523 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I16SQRTU32_SAT() */


/******************************************************************************
*
*   C__I16SQRTU16():      sqrt(UInt16)
*
******************************************************************************/







/* END C__I16SQRTU16() */


/******************************************************************************
*
*   C__I16SQRTU32():      sqrt(UInt32)
*
******************************************************************************/







/* END C__I32SQRTU32() */


/******************************************************************************
*
*   C__I8SQRTI8():        sqrt(Int8)
*
******************************************************************************/
# 575 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I8SQRTI8() */


/******************************************************************************
*
*   C__I8SQRTI16():       sqrt(Int16)    range [-(0x3fff), 0x3fff]
*
******************************************************************************/
# 597 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I8SQRTI16() */


/******************************************************************************
*
*   C__I8SQRTI16_SAT():   sqrt(Int16)    full range
*
******************************************************************************/
# 623 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I8SQRTI16_SAT() */


/******************************************************************************
*
*   C__I8SQRTI32():       sqrt(Int32)    range [-(0x3fff), 0x3fff]
*
******************************************************************************/
# 645 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I8SQRTI32() */


/******************************************************************************
*
*   C__I8SQRTI32_SAT():   sqrt(Int32),  full range
*
******************************************************************************/
# 671 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I8SQRTI32_SAT() */


/******************************************************************************
*
*   C__I16SQRTI32():      sqrt(Int32)    range [-(0x3FFFFFFF), 0x3FFFFFFF]
*
******************************************************************************/
# 693 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I16SQRTI32() */


/******************************************************************************
*
*   C__I16SQRTI32_SAT():  sqrt(Int32),  full range
*
******************************************************************************/
# 719 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I16SQRTI32_SAT() */


/******************************************************************************
*
*   C__I16SQRTI16():      sqrt(Int16)
*
******************************************************************************/
# 741 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I16SQRTI16() */


/******************************************************************************
*
*   C__I16SQRTI32():      sqrt(Int32)
*
******************************************************************************/
# 763 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sqrt.h"
/* END C__I32SQRTI32() */


UInt8 F__U8SQRTU8( UInt8 ar);
UInt8 F__U8SQRTU16( UInt16 ar);
UInt8 F__U8SQRTU32( UInt32 ar);
UInt8 F__U8SQRTU32_SAT( UInt32 ar);
UInt16 F__U16SQRTU32( UInt32 ar);

UInt8 F__U8SQRTI8( Int8 ar);
UInt8 F__U8SQRTI8_SAT( Int8 ar);
UInt8 F__U8SQRTI16( Int16 ar);
UInt8 F__U8SQRTI16_SAT( Int16 ar);
UInt8 F__U8SQRTI32( Int32 ar);
UInt8 F__U8SQRTI32_SAT( Int32 ar);
UInt16 F__U16SQRTI32( Int32 ar);
UInt16 F__U16SQRTI32_SAT( Int32 ar);

Int8 F__I8SQRTU8( UInt8 ar);
Int8 F__I8SQRTU16( UInt16 ar);
Int8 F__I8SQRTU16_SAT( UInt16 ar);
Int8 F__I8SQRTU32( UInt32 ar);
Int8 F__I8SQRTU32_SAT( UInt32 ar);
Int16 F__I16SQRTU32( UInt32 ar);
Int16 F__I16SQRTU32_SAT( UInt32 ar);
Int16 F__I16SQRTU16( UInt16 ar);
Int32 F__I32SQRTU32( UInt32 ar);

Int8 F__I8SQRTI8( Int8 ar);
Int8 F__I8SQRTI16( Int16 ar);
Int8 F__I8SQRTI16_SAT( Int16 ar);
Int8 F__I8SQRTI32( Int32 ar);
Int8 F__I8SQRTI32_SAT( Int32 ar);
Int16 F__I16SQRTI32( Int32 ar);
Int16 F__I16SQRTI32_SAT( Int32 ar);
Int16 F__I16SQRTI16( Int16 ar);
Int32 F__I32SQRTI32( Int32 ar);
# 69 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h" 1
/**
 * @file       $RCSfile: sum.h $
 * @brief      This file contains several macro definitions for the addition and subtraction with 64bit values.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2017, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.14 $ $Date: 2017/02/17 13:40:26CET $
 */

/* Note:
 * The macros in this file calculate the two 32 bit parts of the 64 bit result seperately. 
 * During calculation of the lower part overflow can occurs. The algorithm recognizes this 
 * and corrects the upper bits, if necessary. As in ANSI C the result of operations that 
 * overflow is not defined for signed operands, unsigned casts are inserted.
 *
 *
 * - C-macros are characterized by a leading "C__".
 *   Ansi-C-functions are characterized by a leading "F__".
 * - The macro/function-name represents the implemented operation(s):
 *	(C__|F__) + output_type + OPERATION + input_type [+ input_type] [+ _SAT]
 *
 *   C__I64ADDI32I32():          Addition of 32bit numbers with a 64bit result
 *   C__I64ADDI32U32():          Addition of 32bit numbers with a 64bit result
 *   C__I64ADDU32I32():          Addition of 32bit numbers with a 64bit result
 *   C__I64ADDU32U32():          Addition of 32bit numbers with a 64bit result
 *   C__U64ADDI32I32():          Addition of 32bit numbers with a 64bit result
 *   C__U64ADDI32U32():          Addition of 32bit numbers with a 64bit result
 *   C__U64ADDU32I32():          Addition of 32bit numbers with a 64bit result
 *   C__U64ADDU32U32():          Addition of 32bit numbers with a 64bit result
 *
 *   C__I64SUBI32I32():          Subtraction of 32bit numbers with a 64bit result
 *   C__I64SUBI32U32():          Subtraction of 32bit numbers with a 64bit result
 *   C__I64SUBU32I32():          Subtraction of 32bit numbers with a 64bit result
 *   C__I64SUBU32U32():          Subtraction of 32bit numbers with a 64bit result
 *   C__U64SUBI32I32():          Subtraction of 32bit numbers with a 64bit result
 *   C__U64SUBI32U32():          Subtraction of 32bit numbers with a 64bit result
 *   C__U64SUBU32I32():          Subtraction of 32bit numbers with a 64bit result
 *   C__U64SUBU32U32():          Subtraction of 32bit numbers with a 64bit result
 *
 *   C__I64ADDI64I32():          Addition 64bit + 32bit with a 64bit result
 *   C__I64ADDI64U32():          Addition 64bit + 32bit with a 64bit result
 *   C__I64ADDU64I32():          Addition 64bit + 32bit with a 64bit result
 *   C__I64ADDU64U32():          Addition 64bit + 32bit with a 64bit result
 *   C__U64ADDI64I32():          Addition 64bit + 32bit with a 64bit result
 *   C__U64ADDI64U32():          Addition 64bit + 32bit with a 64bit result
 *   C__U64ADDU64I32():          Addition 64bit + 32bit with a 64bit result
 *   C__U64ADDU64U32():          Addition 64bit + 32bit with a 64bit result
 *
 *   C__I64SUBI64I32():          Subtraction 64bit - 32bit with a 64bit result
 *   C__I64SUBI64U32():          Subtraction 64bit - 32bit with a 64bit result
 *   C__I64SUBU64I32():          Subtraction 64bit - 32bit with a 64bit result
 *   C__I64SUBU64U32():          Subtraction 64bit - 32bit with a 64bit result
 *   C__U64SUBI64I32():          Subtraction 64bit - 32bit with a 64bit result
 *   C__U64SUBI64U32():          Subtraction 64bit - 32bit with a 64bit result
 *   C__U64SUBU64I32():          Subtraction 64bit - 32bit with a 64bit result
 *   C__U64SUBU64U32():          Subtraction 64bit - 32bit with a 64bit result
 *
 *   C__I64SUBI32I64():          Subtraction 32bit - 64bit with a 64bit result
 *   C__I64SUBI32U64():          Subtraction 32bit - 64bit with a 64bit result
 *   C__I64SUBU32I64():          Subtraction 32bit - 64bit with a 64bit result
 *   C__I64SUBU32U64():          Subtraction 32bit - 64bit with a 64bit result
 *   C__U64SUBI32I64():          Subtraction 32bit - 64bit with a 64bit result
 *   C__U64SUBI32U64():          Subtraction 32bit - 64bit with a 64bit result
 *   C__U64SUBU32I64():          Subtraction 32bit - 64bit with a 64bit result
 *   C__U64SUBU32U64():          Subtraction 32bit - 64bit with a 64bit result
 *
 *   C__I64ADDI64I64():          Addition of 64bit numbers
 *   C__I64ADDI64U64():          Addition of 64bit numbers
 *   C__I64ADDU64I64():          Addition of 64bit numbers
 *   C__I64ADDU64U64():          Addition of 64bit numbers
 *   C__U64ADDI64I64():          Addition of 64bit numbers
 *   C__U64ADDI64U64():          Addition of 64bit numbers
 *   C__U64ADDU64I64():          Addition of 64bit numbers
 *   C__U64ADDU64U64():          Addition of 64bit numbers
 *
 *   C__I64SUBI64I64():          Subtraction of 64bit mumbers
 *   C__I64SUBI64U64():          Subtraction of 64bit mumbers
 *   C__I64SUBU64I64():          Subtraction of 64bit mumbers
 *   C__I64SUBU64U64():          Subtraction of 64bit mumbers
 *   C__U64SUBI64I64():          Subtraction of 64bit mumbers
 *   C__U64SUBI64U64():          Subtraction of 64bit mumbers
 *   C__U64SUBU64I64():          Subtraction of 64bit mumbers
 *   C__U64SUBU64U64():          Subtraction of 64bit mumbers
 *
 *   C__I64ADDI64I64_SAT():      Addition of 64bit numbers with saturation
 *   C__I64ADDI64I32_SAT():      Addition of 64bit numbers with saturation
 *
 *   C__U64ADDU64U64_SAT():      Addition of 64bit numbers
 *   C__U64ADDU64U32_SAT():      Addition of 64bit numbers
 */






/******************************************************************************
*
* MACRO:
*   void C__I64ADDI32I32(s1, s2, r_h, r_l)
*   void C__U64ADDI32I32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Add two 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32     s1    1. 32bit number
*   Int32     s2    2. 32bit number
*
* RETURNS:
*   yInt32   r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
******************************************************************************/
# 136 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64ADDI64I32_SAT(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Add a 64bit value and a 32bit values with a 64bit result and saturation.
*
* PARAMETERS:
*   type    name    meaning
*   Int32     s1    1. 32bit number
*   Int32     s2    2. 32bit number
*
* RETURNS:
*   Int32    r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
******************************************************************************/
# 164 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64ADDI32U32(s1, s2, r_h, r_l)
*   void C__U64ADDI32U32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Add two 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32     s1    1. 32bit number
*   UInt32    s2    2. 32bit number
*
* RETURNS:
*   yInt32   r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*
******************************************************************************/
# 215 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64ADDU32I32(s1, s2, r_h, r_l)
*   void C__U64ADDU32I32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Add two 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   UInt32    s1    1. 32bit number
*   Int32     s2    2. 32bit number
*
* RETURNS:
*   Int32    r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*
******************************************************************************/
# 266 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64ADDU32U32(s1, s2, r_h, r_l)
*   void C__U64ADDU32U32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Add two 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   UInt32    s1    1. 32bit number
*   UInt32    s2    2. 32bit number
*
* RETURNS:
*   yInt32   r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*
******************************************************************************/
# 316 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64SUBI32I32(s1, s2, r_h, r_l)
*   void C__U64SUBI32I32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Sub two 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32     s1    1. 32bit number
*   Int32     s2    2. 32bit number
*
* RETURNS:
*   yInt32   r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*
******************************************************************************/
# 360 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64SUBI32U32(s1, s2, r_h, r_l)
*   void C__U64SUBI32U32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Add two 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32     s1    1. 32bit number
*   UInt32    s2    2. 32bit number
*
* RETURNS:
*   yInt32   r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*
******************************************************************************/
# 400 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64SUBU32I32(s1, s2, r_h, r_l)
*   void C__U64SUBU32I32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Sub two 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   UInt32    s1    1. 32bit number
*   Int32     s2    2. 32bit number
*
* RETURNS:
*   yInt32   r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*
******************************************************************************/
# 444 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64SUBU32U32(s1, s2, r_h, r_l)
*   void C__U64SUBU32U32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Sub two 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   UInt32    s1    1. 32bit number
*   UInt32    s2    2. 32bit number
*
* RETURNS:
*   yInt32   r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*   The input value(s) is(are) used more than one time inside this macro.
*     For this reason, no expressions should be inserted at the macro call.
*
******************************************************************************/
# 487 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64ADDI64I32(s1_h, s1_l, s2, r_h, r_l)
*   void C__U64ADDI64I32(s1_h, s1_l, s2, r_h, r_l)
*
* DESCRIPTION:
*   Add a 64bit value and a 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32   s1_h    1. 64bit number (high-part)
*  UInt32   s1_1    1. 64bit number (low-part)
*   Int32     s2    2. 32bit number
*
* RETURNS:
*   yInt32   r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 541 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64ADDI64U32(s1_h, s1_l, s2, r_h, r_l)
*   void C__U64ADDI64U32(s1_h, s1_l, s2, r_h, r_l)
*
* DESCRIPTION:
*   Add a 64bit value and a 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32   s1_h    1. 64bit number (high-part)
*  UInt32   s1_1    1. 64bit number (low-part)
*  UInt32     s2    2. 32bit number
*
* RETURNS:
*  yInt32    r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 587 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64ADDU64I32(s1_h, s1_l, s2, r_h, r_l)
*   void C__U64ADDU64I32(s1_h, s1_l, s2, r_h, r_l)
*
* DESCRIPTION:
*   Add a 64bit value and a 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*  UInt32   s1_h    1. 64bit number (high-part)
*  UInt32   s1_1    1. 64bit number (low-part)
*   Int32     s2    2. 32bit number
*
* RETURNS:
*  yInt32    r_h    64bit result    (high-part)
*  UInt32    r_l    64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 641 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64ADDU64U32(s1_h, s1_l, s2, r_h, r_l)
*   void C__U64ADDU64U32(s1_h, s1_l, s2, r_h, r_l)
*
* DESCRIPTION:
*   Add a 64bit value and a 32bit values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*  UInt32   s1_h    1. 64bit number (high-part)
*  UInt32   s1_1    1. 64bit number (low-part)
*  UInt32     s2    2. 32bit number
*
* RETURNS:
*  yInt32    r_h    64bit result    (high-part)
*  UInt32    r_l    64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 687 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64SUBI64I32(s1, s2, r_h, r_l)
*   void C__U64SUBI64I32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Sub a 32bit value from a 64bit value with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32   s1_h    1. 64bit number (high-part)
*  UInt32   s1_l    1. 64bit number (low-part)
*   Int32     s2    2. 32bit number
*
* RETURNS:
*  yInt32    r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 741 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64SUBI64U32(s1, s2, r_h, r_l)
*   void C__U64SUBI64U32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Sub a 32bit value from a 64bit value with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32   s1_h    1. 64bit number (high-part)
*  UInt32   s1_l    1. 64bit number (low-part)
*  UInt32     s2    2. 32bit number
*
* RETURNS:
*  yInt32    r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 787 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64SUBU64I32(s1, s2, r_h, r_l)
*   void C__U64SUBU64I32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Sub a 32bit value from a 64bit value with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*  UInt32   s1_h    1. 64bit number (high-part)
*  UInt32   s1_l    1. 64bit number (low-part)
*   Int32     s2    2. 32bit number
*
* RETURNS:
*  yInt32    r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 841 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64SUBU64U32(s1, s2, r_h, r_l)
*   void C__U64SUBU64U32(s1, s2, r_h, r_l)
*
* DESCRIPTION:
*   Sub a 32bit value from a 64bit value with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*  UInt32   s1_h    1. 64bit number (high-part)
*  UInt32   s1_l    1. 64bit number (low-part)
*  UInt32     s2    2. 32bit number
*
* RETURNS:
*  yInt32    r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 887 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64SUBI32I64(s1, s2_h, s2_l, r_h, r_l)
*   void C__I64SUBI32U64(s1, s2_h, s2_l, r_h, r_l)
*   void C__U64SUBI32I64(s1, s2_h, s2_l, r_h, r_l)
*   void C__U64SUBI32U64(s1, s2_h, s2_l, r_h, r_l)
*
* DESCRIPTION:
*   Sub a 64bit value from a 32bit value with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   Int32     s1    1. 32bit number
*   Int32   s2_h    2. 64bit number (high-part)
*  xInt32   s2_l    2. 64bit number (low-part)
*
* RETURNS:
*  yInt32    r_h    64bit result    (high-part)
*  UInt32    r_l    64bit result    (low-part)
*
* NOTE:
* 2001-05-03 remark: if s1 is negative the pseudo high byte must set to -1.
*
******************************************************************************/
# 953 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64SUBU32I64(s1, s2_h, s2_l, r_h, r_l)
*   void C__I64SUBU32U64(s1, s2_h, s2_l, r_h, r_l)
*   void C__U64SUBU32I64(s1, s2_h, s2_l, r_h, r_l)
*   void C__U64SUBU32U64(s1, s2_h, s2_l, r_h, r_l)
*
* DESCRIPTION:
*   Sub a 64bit value from a 32bit value with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*  UInt32     s1    1. 32bit number
*   Int32   s2_h    2. 64bit number (high-part)
*  xInt32   s2_l    2. 64bit number (low-part)
*
* RETURNS:
*  yInt32    r_h    64bit result    (high-part)
*  UInt32    r_l    64bit result    (low-part)
*
******************************************************************************/
# 1012 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64ADDI64I64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__I64ADDI64U64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__I64ADDU64I64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__I64ADDU64U64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__U64ADDI64I64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__U64ADDI64U64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__U64ADDU64I64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__U64ADDU64U64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*
* DESCRIPTION:
*   Add two 64bit signed values with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   xInt32  s1_h    1. 64bit number (high-part)
*   UInt32  s1_l    1. 64bit number (low-part)
*   xInt32  s2_h    2. 64bit number (high-part)
*   UInt32  s2_l    2. 64bit number (low-part)
*
* RETURNS:
*   yInt32   r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 1131 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64ADDI64I64_SAT(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*
* DESCRIPTION:
*   Add two 64bit signed values with a 64bit result and saturation.
*
* PARAMETERS:
*   type    name    meaning
*   Int32   s1_h    1. 64bit number (high-part)
*   UInt32  s1_l    1. 64bit number (low-part)
*   Int32   s2_h    2. 64bit number (high-part)
*   UInt32  s2_l    2. 64bit number (low-part)
*
* RETURNS:
*   Int32    r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 1186 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__U64ADDU64U64_SAT(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*
* DESCRIPTION:
*   Add two 64bit signed values with a 64bit saturated result.
*
* PARAMETERS:
*   type    name    meaning
*   UInt32  s1_h    1. 64bit number (high-part)
*   UInt32  s1_l    1. 64bit number (low-part)
*   UInt32  s2_h    2. 64bit number (high-part)
*   UInt32  s2_l    2. 64bit number (low-part)
*
* RETURNS:
*   UInt32  r_h     64bit result    (high-part)
*   UInt32  r_l     64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 1242 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__U64ADDU64U32_SAT(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*
* DESCRIPTION:
*   Add a 64bit value with a 32bit value with a 64Bit saturated result.
*
* PARAMETERS:
*   type    name    meaning
*   UInt32  s1_h    1. 64bit number (high-part)
*   UInt32  s1_l    1. 64bit number (low-part)
*   UInt32  s2_h    2. 64bit number (high-part)
*   UInt32  s2_l    2. 64bit number (low-part)
*
* RETURNS:
*   UInt32  r_h     64bit result    (high-part)
*   UInt32  r_l     64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 1287 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sum.h"
/******************************************************************************
*
* MACRO:
*   void C__I64SUBI64I64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__I64SUBU64I64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__I64SUBI64U64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__I64SUBU64U64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__U64SUBI64I64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__U64SUBU64I64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__U64SUBI64U64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*   void C__U64SUBU64U64(s1_h, s1_l, s2_h, s2_l, r_h, r_l)
*
* DESCRIPTION:
*   Subtracts operand1 - operrand2 with a 64bit result.
*
* PARAMETERS:
*   type    name    meaning
*   xInt32   s1_h   1. 64bit number (high-part)
*   UInt32  s1_l    1. 64bit number (low-part)
*   xInt32   s2_h   2. 64bit number (high-part)
*   UInt32  s2_l    2. 64bit number (low-part)
*
* RETURNS:
*   yInt32   r_h    64bit result    (high-part)
*   UInt32   r_l    64bit result    (low-part)
*
* NOTE:
*	temp variable is necessary for implementation of y += u
*
******************************************************************************/
# 70 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/sumprot.h" 1
/**
 * @file       $RCSfile: sumprot.h $
 * @brief      This file contains several macro definitions for the addition and subtraction with 32bit values.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2016, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.12 $ $Date: 2017/05/31 16:13:15CEST $
 */

/* Note:
 * - C-macros are characterized by a leading "C__".
 *   Ansi-C-functions are characterized by a leading "F__".
 *
 * - The macro/function-name represents the implemented operation(s):
 *      (C__|F__) + output_type + OPERATION + input_type [+ input_type] + _PROT
 *
 *   C__U32ADDI32I32_PROT():   Addition of 32bit numbers
 *   C__U32ADDI32U32_PROT():   Addition of 32bit numbers
 *   C__I32ADDI32U32_PROT():   Addition of 32bit numbers
 *   C__U32SUBU32I32_PROT():   Substraction of 32bit numbers
 *   C__U32SUBI32I32_PROT():   Substraction of 32bit numbers
 *   C__I32SUBI32U32_PROT():   Substraction of 32bit numbers
 *   C__I32SUBU32I32_PROT():   Substraction of 32bit numbers
 *   C__I32SUBU32U32_PROT():   Substraction of 32bit numbers
 *
 *   C__U32ADDI16U32_PROT():   Addition of 32bit numbers
 *   C__I32ADDI16U32_PROT():   Addition of 32bit numbers
 *   C__U32SUBU32I16_PROT():   Substraction of 32bit numbers
 *   C__U32SUBI32I16_PROT():   Substraction of 32bit numbers
 *   C__I32SUBU32U16_PROT():   Substraction of 32bit numbers
 */
# 71 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/trig.h" 1
/**
 * @file       $RCSfile: trig.h $
 * @brief      This file contains prototype definitions of trigonometric functions.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2012, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.4 $ $Date: 2013/05/08 12:45:02CEST $
 */

/* Note:
 *   The function name represents the implemented operation:
 *     F__<output_type><operation><input_type>
 *
 *     output_type, input_type: U8, U16, U32, U64, I8, I16, I32, I64
 *     operation              : SIN, COS, TAN, ASIN, ACOS, ATAN, ATAN2
 *
 *
 *   The parameters are classified with three keywords.
 *
 *    Parameter  Description                    Properties
 *    --------------------------------------------------------------------------
 *    v, x       input for a
 *                fixed type operation          rVars,  NoConsts, ComplexExpr
 *    v_h        upper part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 *    v_l        lower part of a 64-bit input   rVars,  NoConsts, NoComplexExpr
 *    ysh        const shift factor
 *                of output rescaling           NoVars, Consts,   NoComplexExpr
 *    yD         denomitator
 *                of output rescaling           NoVars, Consts,   NoComplexExpr
 *    yN         nominator
 *                of output rescaling           NoVars, Consts,   NoComplexExpr
 */






/* table contains a quarter of cosine values */
extern const UInt16 cosLUT[129];

/******************************************************************************
*
*   Int16 F__I16SINI16(Int16 x)
*
*   Int32 F__I32SINI32_LE7(Int32 v)
*   Int32 F__I32SINI32_LE8(Int32 v)
*   Int32 F__I32SINI32_LE9(Int32 v)
*   Int32 F__I32SINI32_LE10(Int32 v)
*   Int32 F__I32SINI32_LE11(Int32 v)
*
*   Int32 F__I32SINI64_LE7(Int32 v_h, UInt32 v_l)
*   Int32 F__I32SINI64_LE8(Int32 v_h, UInt32 v_l)
*   Int32 F__I32SINI64_LE9(Int32 v_h, UInt32 v_l)
*   Int32 F__I32SINI64_LE10(Int32 v_h, UInt32 v_l)
*   Int32 F__I32SINI64_LE11(Int32 v_h, UInt32 v_l)
*
* NOTE:
*   With 16 bit input type and 16 bit output type the calculation of sine uses
*   a table. In 32 bit series approach with various number of summands.
*
******************************************************************************/
Int16 F__I16SINI16(Int16 x);

Int32 F__I32SINI32_LE7(Int32 v);
Int32 F__I32SINI32_LE8(Int32 v);
Int32 F__I32SINI32_LE9(Int32 v);
Int32 F__I32SINI32_LE10(Int32 v);
Int32 F__I32SINI32_LE11(Int32 v);
# 85 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/trig.h"
/******************************************************************************
*
*   Int16 F__I16COSI16(v)
*
*   Int32 F__I32COSI32_LE7(v)
*   Int32 F__I32COSI32_LE8(v)
*   Int32 F__I32COSI32_LE9(v)
*   Int32 F__I32COSI32_LE10(v)
*   Int32 F__I32COSI32_LE11(v)
*
*   Int32 F__I32COSI64_LE7(Int32 v_h, UInt32 v_l)
*   Int32 F__I32COSI64_LE8(Int32 v_h, UInt32 v_l)
*   Int32 F__I32COSI64_LE9(Int32 v_h, UInt32 v_l)
*   Int32 F__I32COSI64_LE10(Int32 v_h, UInt32 v_l)
*   Int32 F__I32COSI64_LE11(Int32 v_h, UInt32 v_l)
*
* NOTE:
*   cosine calculation uses sine calculation.
*
******************************************************************************/
# 138 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/trig.h"
/******************************************************************************
*
*   functions that calculate n terms of sine series
*   Int32 F__I32SINI32_6TERMS(Int32 v)
*   Int32 F__I32SINI32_5TERMS(Int32 v)
*   Int32 F__I32SINI32_4TERMS(Int32 v)
*
*   functions that calculate n terms of cosine series
*   Int32 F__I32COSI32_6TERMS(Int32 v)
*   Int32 F__I32COSI32_5TERMS(Int32 v)
*   Int32 F__I32COSI32_4TERMS(Int32 v)
*
* NOTE:
*   These functions are auxiliary functions for calculation of sine and cosine
*   using series approach.
*
******************************************************************************/
Int32 F__I32SINI32_6TERMS(Int32 v);
Int32 F__I32SINI32_5TERMS(Int32 v);
Int32 F__I32SINI32_4TERMS(Int32 v);

Int32 F__I32COSI32_6TERMS(Int32 v);
Int32 F__I32COSI32_5TERMS(Int32 v);
Int32 F__I32COSI32_4TERMS(Int32 v);

/******************************************************************************
*
*   Int16 F__I16TANI16(Int16 v, Int8 ysh)
*   Int16 F__I16TANI16_SHR(Int16 v, Int8 ysh)
*   Int16 F__I16TANI16_ARB(Int16 v, Int16 yN, Int16 yD)
*
*   Int32 F__I32TANI32_LE7(Int32 v, Int8 ysh)
*   Int32 F__I32TANI32_LE7_ARB(Int32 v, Int32 yN, Int32 yD)
*   Int32 F__I32TANI32_LE8(Int32 v, Int8 ysh)
*   Int32 F__I32TANI32_LE8_ARB(Int32 v, Int32 yN, Int32 yD)
*   Int32 F__I32TANI32_LE9(Int32 v, Int8 ysh)
*   Int32 F__I32TANI32_LE9_ARB(Int32 v, Int32 yN, Int32 yD)
*   Int32 F__I32TANI32_LE10(Int32 v, Int8 ysh)
*   Int32 F__I32TANI32_LE10_ARB(Int32 v, Int32 yN, Int32 yD)
*   Int32 F__I32TANI32_LE11(Int32 v, Int8 ysh)
*   Int32 F__I32TANI32_LE11_ARB(Int32 v, Int32 yN, Int32 yD)
*
*   Int32 F__I32TANI64_LE7(Int32 v_h, UInt32 v_l, Int8 ysh)
*   Int32 F__I32TANI64_LE7_ARB(Int32 v_h, UInt32 v_l, Int32 yN, Int32 yD)
*   Int32 F__I32TANI64_LE8(Int32 v_h, UInt32 v_l, Int8 ysh)
*   Int32 F__I32TANI64_LE8_ARB(Int32 v_h, UInt32 v_l, Int32 yN, Int32 yD)
*   Int32 F__I32TANI64_LE9(Int32 v_h, UInt32 v_l, Int8 ysh)
*   Int32 F__I32TANI64_LE9_ARB(Int32 v_h, UInt32 v_l, Int32 yN, Int32 yD)
*   Int32 F__I32TANI64_LE10(Int32 v_h, UInt32 v_l, Int8 ysh)
*   Int32 F__I32TANI64_LE10_ARB(Int32 v_h, UInt32 v_l, Int32 yN, Int32 yD)
*   Int32 F__I32TANI64_LE11(Int32 v_h, UInt32 v_l, Int8 ysh)
*   Int32 F__I32TANI64_LE11_ARB(Int32 v_h, UInt32 v_l, Int32 yN, Int32 yD)
*
* NOTE:
*   calculation of tangent uses 'sin/cos'
*
******************************************************************************/
Int16 F__I16TANI16(Int16 v, Int8 ysh);
Int16 F__I16TANI16_SHR(Int16 v, Int8 ysh);
Int16 F__I16TANI16_ARB(Int16 v, Int16 yN, Int16 yD);

Int32 F__I32TANI32_LE7(Int32 v, Int8 ysh);
Int32 F__I32TANI32_LE7_ARB(Int32 v, Int32 yN, Int32 yD);
Int32 F__I32TANI32_LE8(Int32 v, Int8 ysh);
Int32 F__I32TANI32_LE8_ARB(Int32 v, Int32 yN, Int32 yD);
Int32 F__I32TANI32_LE9(Int32 v, Int8 ysh);
Int32 F__I32TANI32_LE9_ARB(Int32 v, Int32 yN, Int32 yD);
Int32 F__I32TANI32_LE10(Int32 v, Int8 ysh);
Int32 F__I32TANI32_LE10_ARB(Int32 v, Int32 yN, Int32 yD);
Int32 F__I32TANI32_LE11(Int32 v, Int8 ysh);
Int32 F__I32TANI32_LE11_ARB(Int32 v, Int32 yN, Int32 yD);
# 240 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/trig.h"
/******************************************************************************
*
*   Int16 F__I16ASINI16(Int16 v)
*
* NOTE:
*   the calculation of asin uses a 2D table
*
******************************************************************************/
Int16 F__I16ASINI16(Int16 v);

/******************************************************************************
*
*   UInt16 F__U16ACOSI16(Int16 v)
*
* NOTE:
*   acos is implemented using asin.
*
******************************************************************************/



/******************************************************************************
*
*   Int16 F__I16ATANI16(Int16 v, Int32 c)
*
*   Int16 F__I16ATAN2I16(Int16 v, Int32 c, Int16 y)
*
* NOTE:
*   atan can be calculated using the asin.
*
******************************************************************************/
Int16 F__I16ATANI16(Int16 v, Int32 c);

Int16 F__I16ATAN2I16(Int16 v, Int32 c, Int16 y);
# 72 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2


# 1 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic/tl_math.h" 1
/**
 * @file       $RCSfile: tl_math.h $
 * @brief      This file definines prototype of hypot function for double and single precision.
 * @author     Klaus Goebel, Dagmar Andoleit
 * @copyright  (c) 2012, dSPACE GmbH, Paderborn, Germany
 * @version    $Revision: 1.4 $ $Date: 2013/05/08 12:45:02CEST $
 */

/* Note:
 *   Calculates the hypotenuse.
 *   C__HYPOT(x, y);
 *   C__HYPOTF(x, y);
 */







/* hypot */




/* hypotf */
# 75 "C:/ProgramData/dSPACE/0163BCB4-9093-43BC-B3EF-CC570F9DBD41/Archives/FxpLibSrc/Generic\\dsfxp.h" 2
# 1123 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.c" 2

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
(entspricht MERGEABLE_GLOBAL) | Width: 32
\**************************************************************************************************/
float32 USS_EFF_s_IdxEff_measure = 0.F; /* 
    Unit: -
    Description: index for driver type efficiency */

/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 32
\**************************************************************************************************/
static float32 SUSS_DS_EFF65_Product1 = 0.F;
static float32 SUSS_DS_EFF84_Multiply1 = 0.F;
static float32 X_SUSS_DS_EFF88_Delay = 0.F;
static float32 X_SUSS_DS_EFF95_Delay = 0.F;
# 1166 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.c"
/**************************************************************************************************\
    GLOBAL_A2L_MODULE_OUT: mergeable global variables (RAM)
(entspricht MERGEABLE_GLOBAL) | Width: 8
\**************************************************************************************************/
uint8 USS_EFF_s_EffLvl_p100_measure = 0; /* 
    Unit: %
    LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 255
    Description: level for driver type efficiency */
# 1183 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.c"
/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : N.A.
\**************************************************************************************************/
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_a = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_b = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_c = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_d = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_e = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_f = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_g = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_h = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_i = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_j = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
static ISV_SUssIdxPrcR1_tp tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_k = {
    0.F, /* X_SUssIdxPrcR1_Unit_Delay */
    0, /* CUssIdxPrcR1_Counter_ctr */
    0, /* CUssIdxPrcR1_CounterTrigger_na */
    0 /* CUssIdxPrcR1_Counter_ns: LSB: 2^0 OFF: 0 MIN/MAX: 0 .. 7 */
};
# 1268 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.c"
/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 8
\**************************************************************************************************/
static boolean SUSS_DS_EFF65_factorCalculation_FirstRun = 1;
# 1282 "C:/MySandboxes/Prodserver/USS/C08_1710_V1/30_CG/CG_USS/20_IMPL/SW_USS_DS_EFF/src/USS_DS_EFF.c"
/**************************************************************************************************\
    MEASUREMENT: global observable variables (RAM) -- used by Utilities_lib/Measurement | Width: 32
\**************************************************************************************************/
float32 USS_EFF_s_CompIdxEff_measure;
float32 USS_EFF_s_IdxBrkFrqLo_measure;
float32 USS_EFF_s_IdxDSml_measure;
float32 USS_EFF_s_IdxDrvPedHi_measure;
float32 USS_EFF_s_IdxKckDwn_measure;
float32 USS_EFF_s_IdxLatCtlAcv_measure;
float32 USS_EFF_s_IdxLgtAHi_measure;
float32 USS_EFF_s_IdxLgtCtlAcv_measure;
float32 USS_EFF_s_IdxOnePedalMode_measure;
float32 USS_EFF_s_IdxPEAEff_measure;
float32 USS_EFF_s_IdxRgn_measure;
float32 USS_EFF_s_IdxShiftPedDwnEff_measure;
float32 USS_EFF_s_IdxShiftPedUp_measure;
float32 USS_EFF_s_IdxVSlow_measure;
float32 USS_EFF_s_IdxVUniform_measure;

/**************************************************************************************************\
    SLStaticGlobalInit: Default storage class for global static variables with initial value | Width
    : 32
\**************************************************************************************************/
static float32 X_SUSS_DS_EFF66_Delay;





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
 ***        USS_DS_EFF
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
                       void USS_DS_EFF(void)
{
    /* SLLocal: Default storage class for local variables | Width: 32 */
    float32 SUSS_DS_EFF20_Product;
    float32 SUSS_DS_EFF25_Switch1;
    float32 SUSS_DS_EFF26_Positive;
    float32 SUSS_DS_EFF50_Product;
    float32 SUSS_DS_EFF50_Product1;

    /* Product: EfficiencyDS_EFF/IndexProcessing/OffsetDelayTicks/Product */
    SUSS_DS_EFF50_Product = USS_DS_p_OfsDlySho_s * 50.F;

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexBrakeFrequencyLow/IndexProcessing
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexBrakeFrequencyLow/TestBit/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure1/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure1/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexBrakeFrequencyLow/TestBit/BitwiseOperator
         */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 1))) != 0,
     USS_EFF_p_FacBrkFrqLo, SUSS_DS_EFF50_Product, USS_GC_s_VNotSdsl_measure,
     &USS_EFF_s_IdxBrkFrqLo_measure, &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF);

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexLateralControlActive/IndexProcessing
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexLateralControlActive/TestBit/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure4/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure4/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexLateralControlActive/TestBit/BitwiseOpera
        tor */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 32))) != 0,
     USS_EFF_p_FacLatCtlAcvEff, SUSS_DS_EFF50_Product, USS_GC_s_VNotSdsl_measure,
     &USS_EFF_s_IdxLatCtlAcv_measure, &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_e);

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexLongitudinalControlActive/IndexProces
        sing
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongitudinalControlActive/TestBit/Rescale
        r
        # combined # EfficiencyDS_EFF/MultiMeasure3/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure3/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongitudinalControlActive/TestBit/Bitwise
        Operator */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 128))) != 0,
     USS_EFF_p_FacLgtCtlAcvEff, SUSS_DS_EFF50_Product, USS_GC_s_VNotSdsl_measure,
     &USS_EFF_s_IdxLgtCtlAcv_measure, &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_f);

    /* Product: EfficiencyDS_EFF/IndexProcessing/OffsetDelayTicks/Product1 */
    SUSS_DS_EFF50_Product1 = USS_DS_p_OfsDlyMed_s * 50.F;

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexOnePedalMode/IndexProcessing
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexOnePedalMode/TestBit/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure11/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure11/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexOnePedalMode/TestBit/BitwiseOperator */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 256))) != 0,
     USS_EFF_p_FacOnePedalMode, SUSS_DS_EFF50_Product1, USS_GC_s_VNotSdsl_measure,
     &USS_EFF_s_IdxOnePedalMode_measure, &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_g);

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexPeaEfficient/IndexProcessing
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexPeaEfficient/TestBit/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure8/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure8/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexPeaEfficient/TestBit/BitwiseOperator */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 512))) != 0,
     USS_EFF_p_FacPEAAcv, SUSS_DS_EFF50_Product, USS_GC_s_VNotSdsl_measure,
     &USS_EFF_s_IdxPEAEff_measure, &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_h);

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive/IndexProcessing
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive/Rescaler
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive/TestBit/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure5/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure5/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexRecuperationActive/TestBit/BitwiseOperato
        r */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 1024))) != 0,
      (float32) USS_IP_s_FacRgn_measure, SUSS_DS_EFF50_Product1, USS_GC_s_VNotSdsl_measure,
     &USS_EFF_s_IdxRgn_measure, &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_i);

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag/IndexProcessing
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag/Rescaler
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag/TestBit/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure16/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure16/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexDownshiftDrag/TestBit/BitwiseOperator */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 2048))) != 0,
      (float32) USS_IP_s_FacShiftPedDwnEff_measure, SUSS_DS_EFF50_Product1,
     USS_GC_s_VNotSdsl_measure, &USS_EFF_s_IdxShiftPedDwnEff_measure,
     &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_b);

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp/IndexProcessing
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp/Rescaler
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp/TestBit/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure10/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure10/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexShiftPedalUp/TestBit/BitwiseOperator */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 4096))) != 0,
      (float32) USS_IP_s_FacShiftPedUp_measure, SUSS_DS_EFF50_Product, USS_GC_s_VNotSdsl_measure,
     &USS_EFF_s_IdxShiftPedUp_measure, &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_j);

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexVelocitySlow/IndexProcessing
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexVelocitySlow/TestBit/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexVelocitySlow/TestBit/BitwiseOperator */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 16384))) !=
     0, USS_EFF_p_FacVSlow, SUSS_DS_EFF50_Product, USS_GC_s_VNotSdsl_measure,
     &USS_EFF_s_IdxVSlow_measure, &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_k);

    /* EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/MovingIndexPro
        cessing /eventFactorCalculation/Enable: Enable condition
        EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/MovingIndexPr
        ocessing /eventFactorCalculation/Enable: Omitted comparison with constant.
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/
        MovingIndexProcessing /Rescaler4 */
    if (USS_GC_s_VNotSdsl_measure) {
        /* SLLocal: Default storage class for local variables | Width: 32 */
        float32 SUSS_DS_EFF83_Abs2;

        /* SLLocal: Default storage class for local variables | Width: 8 */
        uint8 SUSS_DS_EFF95_Add1;
        uint8 SUSS_DS_EFF95_Saturation;

        /* Sum: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/Movin
            gIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCalculationLoop/Fi
            rstCycleDetection/Add1
            # combined # Delay: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexPro
            cessing50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCa
            lculationLoop/FirstCycleDetection/Delay */
        SUSS_DS_EFF95_Add1 = (uint8) (1.F + X_SUSS_DS_EFF95_Delay);

        /* Saturation: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50
            p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCalculation
            Loop/FirstCycleDetection/Saturation
            EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/MovingInd
            exProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCalculationLoop/FirstC
            ycleDetection/Saturation: Omitted lower saturation */
        SUSS_DS_EFF95_Saturation = ( ((SUSS_DS_EFF95_Add1) > (UInt8)(2)) ? (UInt8)(2) : (SUSS_DS_EFF95_Add1) );

        /* Delay: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/Mov
            ingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCalculationLoop/
            FirstCycleDetection/Delay */
        X_SUSS_DS_EFF95_Delay = (float32) SUSS_DS_EFF95_Saturation;

        /* Abs: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/Movin
            gIndexProcessing /eventFactorCalculation/Abs2
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing
            50p/MovingIndexProcessing /Rescaler */
        SUSS_DS_EFF83_Abs2 = fabsf(USS_EFF_p_FacVUniform);

        /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/Mo
            vingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCalculationLoop
            /Switch1
            EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/MovingInd
            exProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCalculationLoop/Switch
            1: Omitted comparison with constant.
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing
            50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCalculati
            onLoop/FirstCycleDetection/Rescaler
            # combined # Relational: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingInd
            exProcessing50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/fac
            torCalculationLoop/FirstCycleDetection/Relational Operator */
        if (SUSS_DS_EFF95_Saturation > 1) {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_DS_EFF50_Product3;
            float32 SUSS_DS_EFF84_Switch;
            float32 SUSS_DS_EFF87_Positive;
            float32 SUSS_DS_EFF87_Product;
            float32 SUSS_DS_EFF88_Add;

            /* Product: EfficiencyDS_EFF/IndexProcessing/OffsetDelayTicks/Product3 */
            SUSS_DS_EFF50_Product3 = USS_DS_p_OfsDlyXLng_s * 50.F;

            /* # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcess
                ing50p/MovingIndexProcessing /Rescaler2 */
            if (SUSS_DS_EFF50_Product3 > 0.1F) {
                /* # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexPro
                    cessing50p/MovingIndexProcessing /Rescaler2 */
                SUSS_DS_EFF87_Positive = SUSS_DS_EFF50_Product3;
            }
            else {
                SUSS_DS_EFF87_Positive = 0.1F;
            }

            /* Product: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing5
                0p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/ProtectedDiv
                ision1/Product
                # combined # Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingInd
                exProcessing50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing
                /ProtectedDivision1/Switch */
            SUSS_DS_EFF87_Product = 1.F / SUSS_DS_EFF87_Positive;

            /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50
                p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/Switch
                EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/Movin
                gIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/Switch: Omitted comp
                arison with constant.
                # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProces
                sing50p/MovingIndexProcessing /Rescaler3
                # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/TestBit/Rescaler
                # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/TestBit/BitwiseOp
                erator */
            if (((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 32768))) != 0) {
                /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessi
                    ng50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/Switc
                    h */
                SUSS_DS_EFF84_Switch = SUSS_DS_EFF87_Product;
            }
            else {
                /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessi
                    ng50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/Switc
                    h
                    # combined # Gain: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingI
                    ndexProcessing50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProc
                    essing/Gain */
                SUSS_DS_EFF84_Switch = SUSS_DS_EFF87_Product * -1.F;
            }

            /* Sum: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
                ovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCalculatio
                nLoop/Add
                # combined # Delay: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingInde
                xProcessing50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/
                factorCalculationLoop/Delay */
            SUSS_DS_EFF88_Add = X_SUSS_DS_EFF88_Delay + SUSS_DS_EFF84_Switch;

            /* Saturation: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessi
                ng50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCal
                culationLoop/Saturation */
            if (SUSS_DS_EFF88_Add > 1.F) {
                /* # combined # Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/Moving
                    IndexProcessing50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexPro
                    cessing/factorCalculationLoop/Switch1
                    # combined # Delay: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/Moving
                    IndexProcessing50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexPro
                    cessing/factorCalculationLoop/Delay */
                X_SUSS_DS_EFF88_Delay = 1.F;
            }
            else {
                if (SUSS_DS_EFF88_Add < 0.F) {
                    /* # combined # Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/Mo
                        vingIndexProcessing50p/MovingIndexProcessing /eventFactorCalculation/Dynamic
                        IndexProcessing/factorCalculationLoop/Switch1
                        # combined # Delay: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/Mo
                        vingIndexProcessing50p/MovingIndexProcessing /eventFactorCalculation/Dynamic
                        IndexProcessing/factorCalculationLoop/Delay */
                    X_SUSS_DS_EFF88_Delay = 0.F;
                }
                else {
                    /* # combined # Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/Mo
                        vingIndexProcessing50p/MovingIndexProcessing /eventFactorCalculation/Dynamic
                        IndexProcessing/factorCalculationLoop/Switch1
                        # combined # Delay: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/Mo
                        vingIndexProcessing50p/MovingIndexProcessing /eventFactorCalculation/Dynamic
                        IndexProcessing/factorCalculationLoop/Delay */
                    X_SUSS_DS_EFF88_Delay = SUSS_DS_EFF88_Add;
                }
            }
        }
        else {
            /* SLLocal: Default storage class for local variables | Width: 32 */
            float32 SUSS_DS_EFF83_Abs;
            float32 SUSS_DS_EFF83_Abs1;
            float32 SUSS_DS_EFF85_MinMax;
            float32 SUSS_DS_EFF85_MinMax1;
            float32 SUSS_DS_EFF86_Positive;

            /* Abs: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
                ovingIndexProcessing /eventFactorCalculation/Abs1
                # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProces
                sing50p/MovingIndexProcessing /Rescaler1
                # combined # Gain: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndex
                Processing50p/Gain */
            SUSS_DS_EFF83_Abs1 = fabsf(USS_EFF_p_FacVUniform * 0.5F);

            /* Abs: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
                ovingIndexProcessing /eventFactorCalculation/Abs
                # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProces
                sing50p/MovingIndexProcessing /Rescaler */
            SUSS_DS_EFF83_Abs = fabsf(USS_EFF_p_FacVUniform);
            if (SUSS_DS_EFF83_Abs1 < SUSS_DS_EFF83_Abs) {
                SUSS_DS_EFF85_MinMax = SUSS_DS_EFF83_Abs1;
            }
            else {
                SUSS_DS_EFF85_MinMax = SUSS_DS_EFF83_Abs;
            }
            if (SUSS_DS_EFF85_MinMax > 0.F) {
                SUSS_DS_EFF85_MinMax1 = SUSS_DS_EFF85_MinMax;
            }
            else {
                SUSS_DS_EFF85_MinMax1 = 0.F;
            }
            if (SUSS_DS_EFF83_Abs2 > 0.1F) {
                SUSS_DS_EFF86_Positive = SUSS_DS_EFF83_Abs2;
            }
            else {
                SUSS_DS_EFF86_Positive = 0.1F;
            }

            /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50
                p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCalcula
                tionLoop/Switch1
                # combined # Product: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIn
                dexProcessing50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessin
                g/ProtectedDivision/Product
                # combined # Delay: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingInde
                xProcessing50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/
                factorCalculationLoop/Delay
                # combined # Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingInd
                exProcessing50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing
                /ProtectedDivision/Switch */
            X_SUSS_DS_EFF88_Delay = SUSS_DS_EFF85_MinMax1 / SUSS_DS_EFF86_Positive;
        }

        /* Product: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/M
            ovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/Multiply1
            # combined # Delay: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexPro
            cessing50p/MovingIndexProcessing /eventFactorCalculation/DynamicIndexProcessing/factorCa
            lculationLoop/Delay */
        SUSS_DS_EFF84_Multiply1 = X_SUSS_DS_EFF88_Delay * SUSS_DS_EFF83_Abs2;
    }

    /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/Moving
        IndexProcessing /Switch1
        EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/MovingIndexPr
        ocessing /Switch1: Omitted comparison with constant.
        # combined # Logical: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProce
        ssing50p/MovingIndexProcessing /Logical Operator
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/
        MovingIndexProcessing /Rescaler4 */
    if (!(USS_GC_s_VNotSdsl_measure)) {
        /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/Mo
            vingIndexProcessing /Switch1
            # combined # EfficiencyDS_EFF/MultiMeasure17/MeasSubsys/Data Type Conversion
            # combined # EfficiencyDS_EFF/MultiMeasure17/Signal Conversion
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing
            50p/MovingIndexProcessing /Rescaler5 */
        USS_EFF_s_IdxVUniform_measure = 0.F;
    }
    else {
        /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/Mo
            vingIndexProcessing /Switch1
            # combined # EfficiencyDS_EFF/MultiMeasure17/MeasSubsys/Data Type Conversion
            # combined # EfficiencyDS_EFF/MultiMeasure17/Signal Conversion
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing
            50p/MovingIndexProcessing /Rescaler5 */
        USS_EFF_s_IdxVUniform_measure = SUSS_DS_EFF84_Multiply1;
    }

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexDriverPedalHigh/IndexProcessing
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexDriverPedalHigh/TestBit/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure9/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure9/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexDriverPedalHigh/TestBit/BitwiseOperator
         */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 4))) != 0,
     USS_EFF_p_FacDrvPedHi, SUSS_DS_EFF50_Product1, USS_GC_s_VNotSdsl_measure,
     &USS_EFF_s_IdxDrvPedHi_measure, &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_c);

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexDistanceSmall/IndexProcessing
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexDistanceSmall/TestBit/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure14/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure14/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexDistanceSmall/TestBit/BitwiseOperator */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 8))) != 0,
     USS_EFF_p_FacDSmlEff, SUSS_DS_EFF50_Product1, USS_GC_s_VNotSdsl_measure,
     &USS_EFF_s_IdxDSml_measure, &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_a);

    /* call of function: EfficiencyDS_EFF/IndexProcessing/IndexKickDown/IndexProcessing
        # combined # Product: EfficiencyDS_EFF/IndexProcessing/OffsetDelayTicks/Product2
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexKickDown/TestBit/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure6/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure6/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexKickDown/TestBit/BitwiseOperator */
    USS_IndexProcressing_RF_step(((uint16) (USS_DSE_s_BitFldEveEff_measure & ((uint16) 16))) != 0,
     USS_EFF_p_FacKckDwnEff, USS_DS_p_OfsDlyLng_s * 50.F, USS_GC_s_VNotSdsl_measure,
     &USS_EFF_s_IdxKckDwn_measure, &tagISV_SUssIdxPrcR1_IndexProcessing_EfficiencyDS_EFF_d);

    /* EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/factorCalcul
        ation/Enable: Enable condition
        EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/factorCalcu
        lation/Enable: Omitted comparison with constant.
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessin
        g/Rescaler4 */
    if (USS_GC_s_VNotSdsl_measure) {
        /* SLLocal: Default storage class for local variables | Width: 32 */
        float32 SUSS_DS_EFF65_Saturation;
        float32 SUSS_DS_EFF67_Product1;
        float32 SUSS_DS_EFF67_Switch;

        /* Saturation: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcess
            ing/factorCalculation/Saturation
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/Rescaler2 */
        if (USS_DSE_s_EveFactorLgtAHi_measure > 1.F) {
            SUSS_DS_EFF65_Saturation = 1.F;
        }
        else {
            /* # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexPr
                ocessing/Rescaler2 */
            if (USS_DSE_s_EveFactorLgtAHi_measure < 0.F) {
                SUSS_DS_EFF65_Saturation = 0.F;
            }
            else {
                /* # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorInd
                    exProcessing/Rescaler2 */
                SUSS_DS_EFF65_Saturation = USS_DSE_s_EveFactorLgtAHi_measure;
            }
        }

        /* Delay: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/f
            actorCalculation/CumulativeMovingAverageFloat32/Delay: Check the first run stateEfficien
            cyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/factorCalculati
            on/CumulativeMovingAverageFloat32/Delay: Omitted comparison with constant. */
        if (SUSS_DS_EFF65_factorCalculation_FirstRun) {
            /* Delay: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessi
                ng/factorCalculation/CumulativeMovingAverageFloat32/Delay: Initialize the state */
            X_SUSS_DS_EFF66_Delay = SUSS_DS_EFF65_Saturation;
        }

        /* EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/factorCa
            lculation: Reset of the first run state */
        SUSS_DS_EFF65_factorCalculation_FirstRun = 0;

        /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/
            factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/Switch
            EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/factorC
            alculation/CumulativeMovingAverageFloat32/ProtectedDivision/Switch: Omitted comparison w
            ith constant.
            # combined # Logical: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorI
            ndexProcessing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/Logica
            l Operator
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/TypeConversion3
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/TypeConversion2
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/factorCalculation/CumulativeMovingAverageFloat32/Data Type Conversion
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/Rescaler1 */
        if (((float32) (uint16) SUSS_DS_EFF50_Product) >= 1.F) {
            /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcess
                ing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/Switch
                # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexP
                rocessing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/TypeCon
                version2
                # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexP
                rocessing/factorCalculation/CumulativeMovingAverageFloat32/Data Type Conversion
                # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexP
                rocessing/Rescaler1 */
            SUSS_DS_EFF67_Switch = (float32) (uint16) SUSS_DS_EFF50_Product;
        }
        else {
            /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcess
                ing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/Switch2
                # combined # Switch: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/Fact
                orIndexProcessing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision
                /Switch
                # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexP
                rocessing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/TypeCon
                version3 */
            SUSS_DS_EFF67_Switch = 1.F;
        }

        /* Product: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing
            /factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/Product1
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/TypeConversion1
            # combined # Sum: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndex
            Processing/factorCalculation/CumulativeMovingAverageFloat32/Sum1
            # combined # Product: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorI
            ndexProcessing/factorCalculation/CumulativeMovingAverageFloat32/Product1
            # combined # Sum: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndex
            Processing/factorCalculation/CumulativeMovingAverageFloat32/Sum
            # combined # Delay: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorInd
            exProcessing/factorCalculation/CumulativeMovingAverageFloat32/Delay
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/Rescaler1 */
        SUSS_DS_EFF67_Product1 = (SUSS_DS_EFF65_Saturation + (X_SUSS_DS_EFF66_Delay * (((float32)
         (uint16) SUSS_DS_EFF50_Product) - 1.F))) / SUSS_DS_EFF67_Switch;

        /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/
            factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/UnderflowProtection/S
            witch
            EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/factorC
            alculation/CumulativeMovingAverageFloat32/ProtectedDivision/UnderflowProtection/Switch: 
            Omitted comparison with constant.
            # combined # Logical: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorI
            ndexProcessing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/Underf
            lowProtection/Logical Operator
            # combined # Relational: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/Fact
            orIndexProcessing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/Und
            erflowProtection/Relational Operator
            # combined # Relational: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/Fact
            orIndexProcessing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/Und
            erflowProtection/Relational Operator1
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/UnderflowProtec
            tion/TypeConversion
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/UnderflowProtec
            tion/TypeConversion */
        if ((SUSS_DS_EFF67_Product1 < 9.9999996826552254e-20F) && (SUSS_DS_EFF67_Product1 >
         -9.9999996826552254e-20F)) {
            /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcess
                ing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/UnderflowProt
                ection/Switch
                # combined # Delay: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/Facto
                rIndexProcessing/factorCalculation/CumulativeMovingAverageFloat32/Delay */
            X_SUSS_DS_EFF66_Delay = 0.F;
        }
        else {
            /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcess
                ing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/UnderflowProt
                ection/Switch
                # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexP
                rocessing/factorCalculation/CumulativeMovingAverageFloat32/ProtectedDivision/Underfl
                owProtection/TypeConversion
                # combined # Delay: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/Facto
                rIndexProcessing/factorCalculation/CumulativeMovingAverageFloat32/Delay */
            X_SUSS_DS_EFF66_Delay = SUSS_DS_EFF67_Product1;
        }

        /* Product: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing
            /factorCalculation/Product1
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/Rescaler3
            # combined # Delay: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorInd
            exProcessing/factorCalculation/CumulativeMovingAverageFloat32/Delay */
        SUSS_DS_EFF65_Product1 = X_SUSS_DS_EFF66_Delay * USS_EFF_p_FacLgtAHi;
    }

    /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/Swit
        ch1
        EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/Switch1: Om
        itted comparison with constant.
        # combined # Logical: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndex
        Processing/Logical Operator
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessin
        g/Rescaler4 */
    if (!(USS_GC_s_VNotSdsl_measure)) {
        /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/
            Switch1
            # combined # EfficiencyDS_EFF/MultiMeasure15/MeasSubsys/Data Type Conversion
            # combined # EfficiencyDS_EFF/MultiMeasure15/Signal Conversion
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/Rescaler */
        USS_EFF_s_IdxLgtAHi_measure = 0.F;
    }
    else {
        /* Switch: EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessing/
            Switch1
            # combined # EfficiencyDS_EFF/MultiMeasure15/MeasSubsys/Data Type Conversion
            # combined # EfficiencyDS_EFF/MultiMeasure15/Signal Conversion
            # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProce
            ssing/Rescaler */
        USS_EFF_s_IdxLgtAHi_measure = SUSS_DS_EFF65_Product1;
    }

    /* Sum: EfficiencyDS_EFF/CalculationIndexEfficiency/Add10
        # combined # TargetLink outport: EfficiencyDS_EFF/USS_EFF_s_IdxEff
        # combined # Sum: EfficiencyDS_EFF/CalculationIndexEfficiency/Add11
        # combined # Sum: EfficiencyDS_EFF/CalculationIndexEfficiency/Add1
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/
        MovingIndexProcessing /Rescaler5
        # combined # EfficiencyDS_EFF/MultiMeasure17/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure17/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexUniformVelocity/MovingIndexProcessing50p/
        MovingIndexProcessing /Rescaler5
        # combined # EfficiencyDS_EFF/MultiMeasure/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure/Signal Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure10/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure10/Signal Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure16/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure16/Signal Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure5/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure5/Signal Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure8/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure8/Signal Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure11/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure11/Signal Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure3/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure3/Signal Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure4/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure4/Signal Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure1/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure1/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessin
        g/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure15/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure15/Signal Conversion
        # combined # EfficiencyDS_EFF/IndexProcessing/IndexLongAccelerationHigh/FactorIndexProcessin
        g/Rescaler
        # combined # EfficiencyDS_EFF/MultiMeasure6/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure6/Signal Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure14/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure14/Signal Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure9/MeasSubsys/Data Type Conversion
        # combined # EfficiencyDS_EFF/MultiMeasure9/Signal Conversion */
    USS_EFF_s_IdxEff_measure = (USS_EFF_s_IdxBrkFrqLo_measure + USS_EFF_s_IdxLatCtlAcv_measure +
     USS_EFF_s_IdxLgtCtlAcv_measure + USS_EFF_s_IdxOnePedalMode_measure +
     USS_EFF_s_IdxPEAEff_measure + USS_EFF_s_IdxRgn_measure + USS_EFF_s_IdxShiftPedDwnEff_measure +
     USS_EFF_s_IdxShiftPedUp_measure + USS_EFF_s_IdxVSlow_measure + USS_EFF_s_IdxVUniform_measure) -
      (USS_EFF_s_IdxDrvPedHi_measure + USS_EFF_s_IdxDSml_measure + USS_EFF_s_IdxKckDwn_measure +
     USS_EFF_s_IdxLgtAHi_measure);

    /* Sum: EfficiencyDS_EFF/CalculationIndexEfficiency/CompleteIndexEfficiency/Add8
        # combined # EfficiencyDS_EFF/CalculationIndexEfficiency/MultiMeasure/MeasSubsys/Data Type C
        onversion
        # combined # EfficiencyDS_EFF/CalculationIndexEfficiency/MultiMeasure/Signal Conversion
        # combined # Sum: EfficiencyDS_EFF/CalculationIndexEfficiency/CompleteIndexEfficiency/Add1
        # combined # Sum: EfficiencyDS_EFF/CalculationIndexEfficiency/CompleteIndexEfficiency/Add2
        # combined # EfficiencyDS_EFF/Rescaler7
        # combined # EfficiencyDS_EFF/Rescaler6
        # combined # EfficiencyDS_EFF/Rescaler4 */
    USS_EFF_s_CompIdxEff_measure = USS_EFF_p_FacVUniform + USS_EFF_p_FacVSlow +
     USS_EFF_p_FacBrkFrqLo + USS_EFF_p_FacOnePedalMode + USS_EFF_p_FacPEAAcv +
     USS_EFF_p_FacLgtCtlAcvEff + USS_EFF_p_FacLatCtlAcvEff + (((float32) USS_IP_s_FacRgn_measure) +
     ((float32) USS_IP_s_FacShiftPedDwnEff_measure) + ((float32) USS_IP_s_FacShiftPedUp_measure));
    /* # combined # EfficiencyDS_EFF/CalculationIndexEfficiency/MultiMeasure/MeasSubsys/Data Type Co
        nversion
        # combined # EfficiencyDS_EFF/CalculationIndexEfficiency/MultiMeasure/Signal Conversion */
    if (USS_EFF_s_CompIdxEff_measure > 9.9999999747524271e-07F) {
        /* # combined # EfficiencyDS_EFF/CalculationIndexEfficiency/MultiMeasure/MeasSubsys/Data Typ
            e Conversion
            # combined # EfficiencyDS_EFF/CalculationIndexEfficiency/MultiMeasure/Signal Conversion
             */
        SUSS_DS_EFF26_Positive = USS_EFF_s_CompIdxEff_measure;
    }
    else {
        SUSS_DS_EFF26_Positive = 9.9999999747524271e-07F;
    }

    /* Product: EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/Product
        # combined # Product: EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/Protected
        Division/Product
        # combined # Switch: EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/ProtectedD
        ivision/Switch
        # combined # TargetLink outport: EfficiencyDS_EFF/USS_EFF_s_IdxEff */
    SUSS_DS_EFF20_Product = 100.F * (USS_EFF_s_IdxEff_measure / SUSS_DS_EFF26_Positive);

    /* Switch: EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation/Switch
        1
        EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation/Switch1: Omit
        ted comparison with constant.
        # combined # Relational: EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/Dynami
        cSaturation/RelationalOperator1 */
    if (SUSS_DS_EFF20_Product < 0.F) {
        /* Switch: EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation/Sw
            itch1 */
        SUSS_DS_EFF25_Switch1 = 0.F;
    }
    else {
        /* Switch: EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation/Sw
            itch1 */
        SUSS_DS_EFF25_Switch1 = SUSS_DS_EFF20_Product;
    }

    /* Switch: EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation/Switch
        EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation/Switch: Omitt
        ed comparison with constant.
        # combined # Relational: EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/Dynami
        cSaturation/RelationalOperator */
    if (SUSS_DS_EFF25_Switch1 > 100.F) {
        /* Switch: EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation/Sw
            itch
            # combined # TargetLink outport: EfficiencyDS_EFF/USS_EFF_s_EffLvl_p100
            # combined # EfficiencyDS_EFF/CalculationIndexEfficiency/Rescaler */
        USS_EFF_s_EffLvl_p100_measure = 100;
    }
    else {
        /* Switch: EfficiencyDS_EFF/CalculationIndexEfficiency/CalculationIndex/DynamicSaturation/Sw
            itch
            # combined # TargetLink outport: EfficiencyDS_EFF/USS_EFF_s_EffLvl_p100
            # combined # EfficiencyDS_EFF/CalculationIndexEfficiency/Rescaler */
        USS_EFF_s_EffLvl_p100_measure = (uint8) SUSS_DS_EFF25_Switch1;
    }
}





/*------------------------------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
