//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
//
// File: matrix_conversion_FW.h
//
// Code generated for Simulink model 'matrix_conversion_FW'.
//
// Model version                  : 1.16
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Wed Mar 10 11:10:11 2021
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

// Class declaration for model matrix_conversion_FW
class matrix_conversion_FWModelClass {
  // public data and function members
 public:
  // Block signals and states (default storage) for system '<Root>'
  typedef struct {
    real32_T DataTypeConversion4[36];  // '<Root>/Data Type Conversion4'
    int16_T DataTypeConversion1[6];    // '<Root>/Data Type Conversion1'
  } DW;

  // Constant parameters (default storage)
  typedef struct {
    // Computed Parameter: Constant1_Value
    //  Referenced by: '<Root>/Constant1'

    real32_T Constant1_Value[6];

    // Computed Parameter: FTmatrix_Value
    //  Referenced by: '<Root>/FT-matrix'

    real32_T FTmatrix_Value[36];
  } ConstP;

  // External inputs (root inport signals with default storage)
  typedef struct {
    int16_T Digitaldata[6];            // '<Root>/offsets'
  } ExtU;

  // External outputs (root outports fed by signals with default storage)
  typedef struct {
    int16_T FTQ15[6];                  // '<Root>/FTQ15'
  } ExtY;

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

  // private data and function members
 private:
  // Block signals and states
  DW rtDW;
};

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
