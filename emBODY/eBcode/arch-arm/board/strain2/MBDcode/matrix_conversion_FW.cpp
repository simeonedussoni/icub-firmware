//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
//
// File: matrix_conversion_FW.cpp
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
#include "matrix_conversion_FW.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

// Skipping ulong_long/long_long check: insufficient preprocessor integer range. 

// Model step function
void matrix_conversion_FWModelClass::step()
{
  int32_T i;
  int32_T i_0;
  real32_T tmp[6];
  real32_T tmp_0;

  // Product: '<Root>/Divide' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<Root>/Constant1'
  //   DataTypeConversion: '<Root>/Data Type Conversion'
  //   Inport: '<Root>/offsets'
  //   Sum: '<Root>/Sum'

  for (i = 0; i < 6; i++) {
    tmp[i] = (static_cast<real32_T>(rtU.Digitaldata[i]) -
              rtConstP.Constant1_Value[i]) / 32768.0F;
  }

  // End of Product: '<Root>/Divide'
  for (i_0 = 0; i_0 < 6; i_0++) {
    // DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
    //   DataTypeConversion: '<Root>/Data Type Conversion4'
    //   Product: '<Root>/Product1'

    tmp_0 = 0.0F;
    for (i = 0; i < 6; i++) {
      tmp_0 += rtDW.DataTypeConversion4[6 * i + i_0] * tmp[i];
    }

    rtDW.DataTypeConversion1[i_0] = static_cast<int16_T>(std::floor(tmp_0 *
      32768.0F));

    // Outport: '<Root>/FTQ15' incorporates:
    //   DataTypeConversion: '<Root>/Data Type Conversion1'

    rtY.FTQ15[i_0] = rtDW.DataTypeConversion1[i_0];
  }
}

// Model initialize function
void matrix_conversion_FWModelClass::initialize()
{
  // Registration code

  // states (dwork)
  {
    rtDW.DataTypeConversion4[0] = 0.00988929532F;
    rtDW.DataTypeConversion4[1] = 0.0191367958F;
    rtDW.DataTypeConversion4[2] = 0.29356432F;
    rtDW.DataTypeConversion4[3] = 0.0135884257F;
    rtDW.DataTypeConversion4[4] = -0.167438075F;
    rtDW.DataTypeConversion4[5] = -0.000763848308F;
    rtDW.DataTypeConversion4[6] = 0.002741053F;
    rtDW.DataTypeConversion4[7] = 0.24446407F;
    rtDW.DataTypeConversion4[8] = 0.00205103774F;
    rtDW.DataTypeConversion4[9] = 0.0359362811F;
    rtDW.DataTypeConversion4[10] = -0.00869085919F;
    rtDW.DataTypeConversion4[11] = 0.0304790251F;
    rtDW.DataTypeConversion4[12] = 0.209965482F;
    rtDW.DataTypeConversion4[13] = -0.122040592F;
    rtDW.DataTypeConversion4[14] = 0.00836832F;
    rtDW.DataTypeConversion4[15] = -0.0175958369F;
    rtDW.DataTypeConversion4[16] = -0.0248202477F;
    rtDW.DataTypeConversion4[17] = 0.0466253348F;
    rtDW.DataTypeConversion4[18] = 0.068172276F;
    rtDW.DataTypeConversion4[19] = -0.0284988303F;
    rtDW.DataTypeConversion4[20] = 0.224846452F;
    rtDW.DataTypeConversion4[21] = -0.139469758F;
    rtDW.DataTypeConversion4[22] = 0.104583777F;
    rtDW.DataTypeConversion4[23] = 0.00978253223F;
    rtDW.DataTypeConversion4[24] = 0.00265106256F;
    rtDW.DataTypeConversion4[25] = 0.00638146512F;
    rtDW.DataTypeConversion4[26] = 0.231949747F;
    rtDW.DataTypeConversion4[27] = 0.130071655F;
    rtDW.DataTypeConversion4[28] = 0.101716511F;
    rtDW.DataTypeConversion4[29] = 0.00350109977F;
    rtDW.DataTypeConversion4[30] = -0.208019406F;
    rtDW.DataTypeConversion4[31] = -0.119167745F;
    rtDW.DataTypeConversion4[32] = 0.00162205042F;
    rtDW.DataTypeConversion4[33] = -0.0200420599F;
    rtDW.DataTypeConversion4[34] = 0.0370682627F;
    rtDW.DataTypeConversion4[35] = 0.0503032804F;
  }

  // ConstCode for DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
  //   Constant: '<Root>/FT-matrix'

  std::memcpy(&rtDW.DataTypeConversion4[0], &rtConstP.FTmatrix_Value[0], 36U *
              sizeof(real32_T));
}

// Constructor
matrix_conversion_FWModelClass::matrix_conversion_FWModelClass() :
  rtU(),
  rtY(),
  rtDW()
{
  // Currently there is no constructor body generated.
}

// Destructor
matrix_conversion_FWModelClass::~matrix_conversion_FWModelClass()
{
  // Currently there is no destructor body generated.
}

//
// File trailer for generated code.
//
// [EOF]
//
