//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// File: control_outer.h
//
// Code generated for Simulink model 'control_outer'.
//
// Model version                  : 6.3
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Wed Mar 13 10:36:07 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_control_outer_h_
#define RTW_HEADER_control_outer_h_
#include "rtwtypes.h"
#include "control_outer_types.h"
#include <cstring>
#include "zero_crossing_types.h"

// Block signals for model 'control_outer'
struct B_control_outer_c_T {
  real32_T DiscreteTimeIntegrator;     // '<S1>/Discrete-Time Integrator'
};

// Block states (default storage) for model 'control_outer'
struct DW_control_outer_f_T {
  real32_T FilterDifferentiatorTF_states;// '<S47>/Filter Differentiator TF'
  real32_T UnitDelay_DSTATE;           // '<Root>/Unit Delay'
  real32_T Integrator_DSTATE;          // '<S54>/Integrator'
  real32_T FilterDifferentiatorTF_states_i;// '<S97>/Filter Differentiator TF'
  real32_T Integrator_DSTATE_i;        // '<S104>/Integrator'
  real32_T FilterDifferentiatorTF_states_c;// '<S147>/Filter Differentiator TF'
  real32_T UnitDelay1_DSTATE;          // '<Root>/Unit Delay1'
  real32_T Integrator_DSTATE_b;        // '<S154>/Integrator'
  real32_T DiscreteTimeIntegrator_DSTATE;// '<S1>/Discrete-Time Integrator'
  ControlModes DelayInput1_DSTATE;     // '<S18>/Delay Input1'
  real32_T FilterDifferentiatorTF_tmp; // '<S47>/Filter Differentiator TF'
  real32_T FilterDifferentiatorTF_tmp_m;// '<S97>/Filter Differentiator TF'
  real32_T FilterDifferentiatorTF_tmp_p;// '<S147>/Filter Differentiator TF'
  int8_T Integrator_PrevResetState;    // '<S54>/Integrator'
  int8_T Integrator_PrevResetState_n;  // '<S104>/Integrator'
  int8_T Integrator_PrevResetState_c;  // '<S154>/Integrator'
  int8_T DiscreteTimeIntegrator_PrevResetState;// '<S1>/Discrete-Time Integrator' 
  uint8_T DiscreteTimeIntegrator_SYSTEM_ENABLE;// '<S1>/Discrete-Time Integrator' 
  boolean_T Memory_PreviousInput;      // '<S9>/Memory'
};

// Zero-crossing (trigger) state for model 'control_outer'
struct ZCE_control_outer_T {
  ZCSigState FilterDifferentiatorTF_Reset_ZCE;// '<S47>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_ZCE_m;// '<S97>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_ZCE_e;// '<S147>/Filter Differentiator TF' 
};

// Real-time Model Data Structure
struct tag_RTM_control_outer_T {
  const char_T **errorStatus;
};

struct MdlrefDW_control_outer_T {
  B_control_outer_c_T rtb;
  DW_control_outer_f_T rtdw;
  RT_MODEL_control_outer_T rtm;
  ZCE_control_outer_T rtzce;
};

// Model reference registration function
extern void control_outer_initialize(const char_T **rt_errorStatus,
  RT_MODEL_control_outer_T *const control_outer_M, B_control_outer_c_T *localB,
  DW_control_outer_f_T *localDW, ZCE_control_outer_T *localZCE);
extern void control_outer_Init(DW_control_outer_f_T *localDW);
extern void control_outer_Enable(DW_control_outer_f_T *localDW);
extern void control_outer_Disable(B_control_outer_c_T *localB,
  DW_control_outer_f_T *localDW);
extern void control_outer(const Flags *rtu_Flags, const ConfigurationParameters *
  rtu_ConfigurationParameters, const Targets *rtu_Targets, const SensorsData
  *rtu_Sensors, const EstimatedData *rtu_Estimates, ControlOuterOutputs
  *rty_OuterOutputs, B_control_outer_c_T *localB, DW_control_outer_f_T *localDW,
  ZCE_control_outer_T *localZCE);

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S4>/Data Type Duplicate' : Unused code path elimination
//  Block '<S4>/Data Type Propagation' : Unused code path elimination
//  Block '<S5>/Data Type Duplicate' : Unused code path elimination
//  Block '<S5>/Data Type Propagation' : Unused code path elimination
//  Block '<S47>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S65>/Kt' : Eliminated nontunable gain of 1
//  Block '<S97>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S115>/Kt' : Eliminated nontunable gain of 1
//  Block '<S147>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S165>/Kt' : Eliminated nontunable gain of 1


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'control_outer'
//  '<S1>'   : 'control_outer/Current Limiter'
//  '<S2>'   : 'control_outer/Enabling Logic'
//  '<S3>'   : 'control_outer/Position PID control'
//  '<S4>'   : 'control_outer/Saturation Dynamic'
//  '<S5>'   : 'control_outer/Saturation Dynamic1'
//  '<S6>'   : 'control_outer/Velocity PID control'
//  '<S7>'   : 'control_outer/Current Limiter/Compare To Zero'
//  '<S8>'   : 'control_outer/Current Limiter/Compare To Zero1'
//  '<S9>'   : 'control_outer/Current Limiter/S-R Flip-Flop'
//  '<S10>'  : 'control_outer/Enabling Logic/Compare To Constant'
//  '<S11>'  : 'control_outer/Enabling Logic/Compare To Constant1'
//  '<S12>'  : 'control_outer/Enabling Logic/Compare To Constant2'
//  '<S13>'  : 'control_outer/Enabling Logic/Compare To Constant3'
//  '<S14>'  : 'control_outer/Enabling Logic/Compare To Constant4'
//  '<S15>'  : 'control_outer/Enabling Logic/Compare To Constant5'
//  '<S16>'  : 'control_outer/Enabling Logic/Compare To Constant6'
//  '<S17>'  : 'control_outer/Enabling Logic/Compare To Constant7'
//  '<S18>'  : 'control_outer/Enabling Logic/Detect Change'
//  '<S19>'  : 'control_outer/Position PID control/Position PID'
//  '<S20>'  : 'control_outer/Position PID control/Position-Direct PID'
//  '<S21>'  : 'control_outer/Position PID control/Position PID/Anti-windup'
//  '<S22>'  : 'control_outer/Position PID control/Position PID/D Gain'
//  '<S23>'  : 'control_outer/Position PID control/Position PID/Filter'
//  '<S24>'  : 'control_outer/Position PID control/Position PID/Filter ICs'
//  '<S25>'  : 'control_outer/Position PID control/Position PID/I Gain'
//  '<S26>'  : 'control_outer/Position PID control/Position PID/Ideal P Gain'
//  '<S27>'  : 'control_outer/Position PID control/Position PID/Ideal P Gain Fdbk'
//  '<S28>'  : 'control_outer/Position PID control/Position PID/Integrator'
//  '<S29>'  : 'control_outer/Position PID control/Position PID/Integrator ICs'
//  '<S30>'  : 'control_outer/Position PID control/Position PID/N Copy'
//  '<S31>'  : 'control_outer/Position PID control/Position PID/N Gain'
//  '<S32>'  : 'control_outer/Position PID control/Position PID/P Copy'
//  '<S33>'  : 'control_outer/Position PID control/Position PID/Parallel P Gain'
//  '<S34>'  : 'control_outer/Position PID control/Position PID/Reset Signal'
//  '<S35>'  : 'control_outer/Position PID control/Position PID/Saturation'
//  '<S36>'  : 'control_outer/Position PID control/Position PID/Saturation Fdbk'
//  '<S37>'  : 'control_outer/Position PID control/Position PID/Sum'
//  '<S38>'  : 'control_outer/Position PID control/Position PID/Sum Fdbk'
//  '<S39>'  : 'control_outer/Position PID control/Position PID/Tracking Mode'
//  '<S40>'  : 'control_outer/Position PID control/Position PID/Tracking Mode Sum'
//  '<S41>'  : 'control_outer/Position PID control/Position PID/Tsamp - Integral'
//  '<S42>'  : 'control_outer/Position PID control/Position PID/Tsamp - Ngain'
//  '<S43>'  : 'control_outer/Position PID control/Position PID/postSat Signal'
//  '<S44>'  : 'control_outer/Position PID control/Position PID/preSat Signal'
//  '<S45>'  : 'control_outer/Position PID control/Position PID/Anti-windup/Passthrough'
//  '<S46>'  : 'control_outer/Position PID control/Position PID/D Gain/External Parameters'
//  '<S47>'  : 'control_outer/Position PID control/Position PID/Filter/Disc. Trapezoidal Filter'
//  '<S48>'  : 'control_outer/Position PID control/Position PID/Filter/Disc. Trapezoidal Filter/Tsamp'
//  '<S49>'  : 'control_outer/Position PID control/Position PID/Filter/Disc. Trapezoidal Filter/Tsamp/Internal Ts'
//  '<S50>'  : 'control_outer/Position PID control/Position PID/Filter ICs/Internal IC - Filter'
//  '<S51>'  : 'control_outer/Position PID control/Position PID/I Gain/External Parameters'
//  '<S52>'  : 'control_outer/Position PID control/Position PID/Ideal P Gain/Passthrough'
//  '<S53>'  : 'control_outer/Position PID control/Position PID/Ideal P Gain Fdbk/Passthrough'
//  '<S54>'  : 'control_outer/Position PID control/Position PID/Integrator/Discrete'
//  '<S55>'  : 'control_outer/Position PID control/Position PID/Integrator ICs/Internal IC'
//  '<S56>'  : 'control_outer/Position PID control/Position PID/N Copy/External Parameters'
//  '<S57>'  : 'control_outer/Position PID control/Position PID/N Gain/External Parameters'
//  '<S58>'  : 'control_outer/Position PID control/Position PID/P Copy/Disabled'
//  '<S59>'  : 'control_outer/Position PID control/Position PID/Parallel P Gain/External Parameters'
//  '<S60>'  : 'control_outer/Position PID control/Position PID/Reset Signal/External Reset'
//  '<S61>'  : 'control_outer/Position PID control/Position PID/Saturation/Passthrough'
//  '<S62>'  : 'control_outer/Position PID control/Position PID/Saturation Fdbk/Passthrough'
//  '<S63>'  : 'control_outer/Position PID control/Position PID/Sum/Sum_PID'
//  '<S64>'  : 'control_outer/Position PID control/Position PID/Sum Fdbk/Enabled'
//  '<S65>'  : 'control_outer/Position PID control/Position PID/Tracking Mode/Enabled'
//  '<S66>'  : 'control_outer/Position PID control/Position PID/Tracking Mode Sum/Tracking Mode'
//  '<S67>'  : 'control_outer/Position PID control/Position PID/Tsamp - Integral/TsSignalSpecification'
//  '<S68>'  : 'control_outer/Position PID control/Position PID/Tsamp - Ngain/Passthrough'
//  '<S69>'  : 'control_outer/Position PID control/Position PID/postSat Signal/Feedback_Path'
//  '<S70>'  : 'control_outer/Position PID control/Position PID/preSat Signal/Feedback_Path'
//  '<S71>'  : 'control_outer/Position PID control/Position-Direct PID/Anti-windup'
//  '<S72>'  : 'control_outer/Position PID control/Position-Direct PID/D Gain'
//  '<S73>'  : 'control_outer/Position PID control/Position-Direct PID/Filter'
//  '<S74>'  : 'control_outer/Position PID control/Position-Direct PID/Filter ICs'
//  '<S75>'  : 'control_outer/Position PID control/Position-Direct PID/I Gain'
//  '<S76>'  : 'control_outer/Position PID control/Position-Direct PID/Ideal P Gain'
//  '<S77>'  : 'control_outer/Position PID control/Position-Direct PID/Ideal P Gain Fdbk'
//  '<S78>'  : 'control_outer/Position PID control/Position-Direct PID/Integrator'
//  '<S79>'  : 'control_outer/Position PID control/Position-Direct PID/Integrator ICs'
//  '<S80>'  : 'control_outer/Position PID control/Position-Direct PID/N Copy'
//  '<S81>'  : 'control_outer/Position PID control/Position-Direct PID/N Gain'
//  '<S82>'  : 'control_outer/Position PID control/Position-Direct PID/P Copy'
//  '<S83>'  : 'control_outer/Position PID control/Position-Direct PID/Parallel P Gain'
//  '<S84>'  : 'control_outer/Position PID control/Position-Direct PID/Reset Signal'
//  '<S85>'  : 'control_outer/Position PID control/Position-Direct PID/Saturation'
//  '<S86>'  : 'control_outer/Position PID control/Position-Direct PID/Saturation Fdbk'
//  '<S87>'  : 'control_outer/Position PID control/Position-Direct PID/Sum'
//  '<S88>'  : 'control_outer/Position PID control/Position-Direct PID/Sum Fdbk'
//  '<S89>'  : 'control_outer/Position PID control/Position-Direct PID/Tracking Mode'
//  '<S90>'  : 'control_outer/Position PID control/Position-Direct PID/Tracking Mode Sum'
//  '<S91>'  : 'control_outer/Position PID control/Position-Direct PID/Tsamp - Integral'
//  '<S92>'  : 'control_outer/Position PID control/Position-Direct PID/Tsamp - Ngain'
//  '<S93>'  : 'control_outer/Position PID control/Position-Direct PID/postSat Signal'
//  '<S94>'  : 'control_outer/Position PID control/Position-Direct PID/preSat Signal'
//  '<S95>'  : 'control_outer/Position PID control/Position-Direct PID/Anti-windup/Passthrough'
//  '<S96>'  : 'control_outer/Position PID control/Position-Direct PID/D Gain/External Parameters'
//  '<S97>'  : 'control_outer/Position PID control/Position-Direct PID/Filter/Disc. Trapezoidal Filter'
//  '<S98>'  : 'control_outer/Position PID control/Position-Direct PID/Filter/Disc. Trapezoidal Filter/Tsamp'
//  '<S99>'  : 'control_outer/Position PID control/Position-Direct PID/Filter/Disc. Trapezoidal Filter/Tsamp/Internal Ts'
//  '<S100>' : 'control_outer/Position PID control/Position-Direct PID/Filter ICs/Internal IC - Filter'
//  '<S101>' : 'control_outer/Position PID control/Position-Direct PID/I Gain/External Parameters'
//  '<S102>' : 'control_outer/Position PID control/Position-Direct PID/Ideal P Gain/Passthrough'
//  '<S103>' : 'control_outer/Position PID control/Position-Direct PID/Ideal P Gain Fdbk/Passthrough'
//  '<S104>' : 'control_outer/Position PID control/Position-Direct PID/Integrator/Discrete'
//  '<S105>' : 'control_outer/Position PID control/Position-Direct PID/Integrator ICs/Internal IC'
//  '<S106>' : 'control_outer/Position PID control/Position-Direct PID/N Copy/External Parameters'
//  '<S107>' : 'control_outer/Position PID control/Position-Direct PID/N Gain/External Parameters'
//  '<S108>' : 'control_outer/Position PID control/Position-Direct PID/P Copy/Disabled'
//  '<S109>' : 'control_outer/Position PID control/Position-Direct PID/Parallel P Gain/External Parameters'
//  '<S110>' : 'control_outer/Position PID control/Position-Direct PID/Reset Signal/External Reset'
//  '<S111>' : 'control_outer/Position PID control/Position-Direct PID/Saturation/Passthrough'
//  '<S112>' : 'control_outer/Position PID control/Position-Direct PID/Saturation Fdbk/Passthrough'
//  '<S113>' : 'control_outer/Position PID control/Position-Direct PID/Sum/Sum_PID'
//  '<S114>' : 'control_outer/Position PID control/Position-Direct PID/Sum Fdbk/Enabled'
//  '<S115>' : 'control_outer/Position PID control/Position-Direct PID/Tracking Mode/Enabled'
//  '<S116>' : 'control_outer/Position PID control/Position-Direct PID/Tracking Mode Sum/Tracking Mode'
//  '<S117>' : 'control_outer/Position PID control/Position-Direct PID/Tsamp - Integral/TsSignalSpecification'
//  '<S118>' : 'control_outer/Position PID control/Position-Direct PID/Tsamp - Ngain/Passthrough'
//  '<S119>' : 'control_outer/Position PID control/Position-Direct PID/postSat Signal/Feedback_Path'
//  '<S120>' : 'control_outer/Position PID control/Position-Direct PID/preSat Signal/Feedback_Path'
//  '<S121>' : 'control_outer/Velocity PID control/Anti-windup'
//  '<S122>' : 'control_outer/Velocity PID control/D Gain'
//  '<S123>' : 'control_outer/Velocity PID control/Filter'
//  '<S124>' : 'control_outer/Velocity PID control/Filter ICs'
//  '<S125>' : 'control_outer/Velocity PID control/I Gain'
//  '<S126>' : 'control_outer/Velocity PID control/Ideal P Gain'
//  '<S127>' : 'control_outer/Velocity PID control/Ideal P Gain Fdbk'
//  '<S128>' : 'control_outer/Velocity PID control/Integrator'
//  '<S129>' : 'control_outer/Velocity PID control/Integrator ICs'
//  '<S130>' : 'control_outer/Velocity PID control/N Copy'
//  '<S131>' : 'control_outer/Velocity PID control/N Gain'
//  '<S132>' : 'control_outer/Velocity PID control/P Copy'
//  '<S133>' : 'control_outer/Velocity PID control/Parallel P Gain'
//  '<S134>' : 'control_outer/Velocity PID control/Reset Signal'
//  '<S135>' : 'control_outer/Velocity PID control/Saturation'
//  '<S136>' : 'control_outer/Velocity PID control/Saturation Fdbk'
//  '<S137>' : 'control_outer/Velocity PID control/Sum'
//  '<S138>' : 'control_outer/Velocity PID control/Sum Fdbk'
//  '<S139>' : 'control_outer/Velocity PID control/Tracking Mode'
//  '<S140>' : 'control_outer/Velocity PID control/Tracking Mode Sum'
//  '<S141>' : 'control_outer/Velocity PID control/Tsamp - Integral'
//  '<S142>' : 'control_outer/Velocity PID control/Tsamp - Ngain'
//  '<S143>' : 'control_outer/Velocity PID control/postSat Signal'
//  '<S144>' : 'control_outer/Velocity PID control/preSat Signal'
//  '<S145>' : 'control_outer/Velocity PID control/Anti-windup/Passthrough'
//  '<S146>' : 'control_outer/Velocity PID control/D Gain/External Parameters'
//  '<S147>' : 'control_outer/Velocity PID control/Filter/Disc. Trapezoidal Filter'
//  '<S148>' : 'control_outer/Velocity PID control/Filter/Disc. Trapezoidal Filter/Tsamp'
//  '<S149>' : 'control_outer/Velocity PID control/Filter/Disc. Trapezoidal Filter/Tsamp/Internal Ts'
//  '<S150>' : 'control_outer/Velocity PID control/Filter ICs/Internal IC - Filter'
//  '<S151>' : 'control_outer/Velocity PID control/I Gain/External Parameters'
//  '<S152>' : 'control_outer/Velocity PID control/Ideal P Gain/Passthrough'
//  '<S153>' : 'control_outer/Velocity PID control/Ideal P Gain Fdbk/Passthrough'
//  '<S154>' : 'control_outer/Velocity PID control/Integrator/Discrete'
//  '<S155>' : 'control_outer/Velocity PID control/Integrator ICs/Internal IC'
//  '<S156>' : 'control_outer/Velocity PID control/N Copy/External Parameters'
//  '<S157>' : 'control_outer/Velocity PID control/N Gain/External Parameters'
//  '<S158>' : 'control_outer/Velocity PID control/P Copy/Disabled'
//  '<S159>' : 'control_outer/Velocity PID control/Parallel P Gain/External Parameters'
//  '<S160>' : 'control_outer/Velocity PID control/Reset Signal/External Reset'
//  '<S161>' : 'control_outer/Velocity PID control/Saturation/Passthrough'
//  '<S162>' : 'control_outer/Velocity PID control/Saturation Fdbk/Passthrough'
//  '<S163>' : 'control_outer/Velocity PID control/Sum/Sum_PID'
//  '<S164>' : 'control_outer/Velocity PID control/Sum Fdbk/Enabled'
//  '<S165>' : 'control_outer/Velocity PID control/Tracking Mode/Enabled'
//  '<S166>' : 'control_outer/Velocity PID control/Tracking Mode Sum/Tracking Mode'
//  '<S167>' : 'control_outer/Velocity PID control/Tsamp - Integral/TsSignalSpecification'
//  '<S168>' : 'control_outer/Velocity PID control/Tsamp - Ngain/Passthrough'
//  '<S169>' : 'control_outer/Velocity PID control/postSat Signal/Feedback_Path'
//  '<S170>' : 'control_outer/Velocity PID control/preSat Signal/Feedback_Path'

#endif                                 // RTW_HEADER_control_outer_h_

//
// File trailer for generated code.
//
// [EOF]
//