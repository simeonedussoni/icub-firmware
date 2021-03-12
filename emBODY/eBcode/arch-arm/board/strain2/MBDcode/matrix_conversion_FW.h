//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
//
// File: matrix_conversion_FW.h
//
// Code generated for Simulink model 'matrix_conversion_FW'.
//
// Model version                  : 1.13
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Thu Mar 11 13:42:16 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#ifndef RTW_HEADER_matrix_conversion_FW_h_
#define RTW_HEADER_matrix_conversion_FW_h_
#include <cmath>
#include <cstring>
#include "rtwtypes.h"

// Model Code Variants

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model matrix_conversion_FW
class matrix_conversion_FWModelClass {
  // public data and function members
 public:
  // Block signals and states (default storage) for system '<Root>'
  typedef struct {
    real32_T DataTypeConversion4[36];  // '<Root>/Data Type Conversion4'
    int16_T DataTypeConversion1[6];    // '<Root>/Data Type Conversion1'
  } DW;

  // Invariant block signals (default storage)
  typedef const struct tag_ConstB {
    real32_T Digitaldata[6];           // '<Root>/Data Type Conversion2'
  } ConstB;

  // Constant parameters (default storage)
  typedef struct {
    // Expression: calibmat
    //  Referenced by: '<Root>/FT-matrix'

    real32_T FTmatrix_Value[36];
  } ConstP;

  // External inputs (root inport signals with default storage)
  typedef struct {
    uint16_T Digitaldata[6];           // '<Root>/offsets'
  } ExtU;

  // External outputs (root outports fed by signals with default storage)
  typedef struct {
    int16_T FTQ15[6];                  // '<Root>/FTQ15'
  } ExtY;

  // Real-time Model Data Structure
  struct RT_MODEL {
    const char_T * volatile errorStatus;
  };

  // External inputs
  ExtU rtU;

  // External outputs
  ExtY rtY;

  // model initialize function
  void initialize();

  // model step function
  void step();

  // Constructor
  matrix_conversion_FWModelClass();

  // Destructor
  ~matrix_conversion_FWModelClass();

  // Real-Time Model get method
  matrix_conversion_FWModelClass::RT_MODEL * getRTM();

  // private data and function members
 private:
  // Block signals and states
  DW rtDW;

  // Real-Time Model
  RT_MODEL rtM;
};

extern const matrix_conversion_FWModelClass::ConstB rtConstB;// constant block i/o 

// Constant parameters (default storage)
extern const matrix_conversion_FWModelClass::ConstP rtConstP;

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
//  '<Root>' : 'matrix_conversion_FW'

#endif                                 // RTW_HEADER_matrix_conversion_FW_h_

//
// File trailer for generated code.
//
// [EOF]
//
