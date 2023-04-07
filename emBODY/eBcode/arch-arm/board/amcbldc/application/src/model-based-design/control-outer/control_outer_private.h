//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// File: control_outer_private.h
//
// Code generated for Simulink model 'control_outer'.
//
// Model version                  : 5.2
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Thu Apr  6 14:46:44 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_control_outer_private_h_
#define RTW_HEADER_control_outer_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "control_outer_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

extern const boolean_T rtCP_pooled_kUC6nmgO8rex[16];

#define rtCP_Logic_table               rtCP_pooled_kUC6nmgO8rex  // Computed Parameter: rtCP_Logic_table
                                                                 //  Referenced by: '<S9>/Logic'

#endif                                 // RTW_HEADER_control_outer_private_h_

//
// File trailer for generated code.
//
// [EOF]
//