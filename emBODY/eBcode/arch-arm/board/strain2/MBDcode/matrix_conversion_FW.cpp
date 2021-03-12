//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
//
// File: matrix_conversion_FW.cpp
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
// Invariant block signals (default storage)

const matrix_conversion_FWModelClass::ConstB rtConstB = {
  {
    32807.0F,
    33310.0F,
    32791.0F,
    32669.0F,
    32905.0F,
    32772.0F
  }
  // '<Root>/Data Type Conversion2'
};
// Model step function
void matrix_conversion_FWModelClass::step()
{
  int32_T i;
  int32_T i_0;
  real32_T tmp[6];
  real32_T tmp_0;

  // Product: '<Root>/Divide' incorporates:
  //   Constant: '<Root>/Constant'
  //   DataTypeConversion: '<Root>/Data Type Conversion'
  //   Inport: '<Root>/offsets'
  //   Sum: '<Root>/Sum'

  for (i = 0; i < 6; i++) {
    tmp[i] = (static_cast<real32_T>(rtU.Digitaldata[i]) - rtConstB.Digitaldata[i])
      / 32767.0F;
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
    rtDW.DataTypeConversion4[0] = 0.0115365172F;
    rtDW.DataTypeConversion4[1] = -0.00637165597F;
    rtDW.DataTypeConversion4[2] = 0.285945207F;
    rtDW.DataTypeConversion4[3] = 0.00472455658F;
    rtDW.DataTypeConversion4[4] = -0.191206485F;
    rtDW.DataTypeConversion4[5] = -0.010941416F;
    rtDW.DataTypeConversion4[6] = 9.49516616E-5F;
    rtDW.DataTypeConversion4[7] = 0.241179094F;
    rtDW.DataTypeConversion4[8] = 0.0039533875F;
    rtDW.DataTypeConversion4[9] = 0.0377529077F;
    rtDW.DataTypeConversion4[10] = -0.0010476599F;
    rtDW.DataTypeConversion4[11] = 0.0424845815F;
    rtDW.DataTypeConversion4[12] = 0.208103538F;
    rtDW.DataTypeConversion4[13] = -0.117632776F;
    rtDW.DataTypeConversion4[14] = 0.000210639453F;
    rtDW.DataTypeConversion4[15] = -0.0163756795F;
    rtDW.DataTypeConversion4[16] = -0.0316488668F;
    rtDW.DataTypeConversion4[17] = 0.0383006036F;
    rtDW.DataTypeConversion4[18] = 0.0144478986F;
    rtDW.DataTypeConversion4[19] = -0.0154705234F;
    rtDW.DataTypeConversion4[20] = 0.236728281F;
    rtDW.DataTypeConversion4[21] = -0.136986122F;
    rtDW.DataTypeConversion4[22] = 0.0827248618F;
    rtDW.DataTypeConversion4[23] = 0.00383874611F;
    rtDW.DataTypeConversion4[24] = 0.0336311981F;
    rtDW.DataTypeConversion4[25] = 0.00663948385F;
    rtDW.DataTypeConversion4[26] = 0.228768289F;
    rtDW.DataTypeConversion4[27] = 0.139233485F;
    rtDW.DataTypeConversion4[28] = 0.0809434429F;
    rtDW.DataTypeConversion4[29] = 0.00503107253F;
    rtDW.DataTypeConversion4[30] = -0.20924668F;
    rtDW.DataTypeConversion4[31] = -0.120131776F;
    rtDW.DataTypeConversion4[32] = 0.00300417026F;
    rtDW.DataTypeConversion4[33] = -0.0189676527F;
    rtDW.DataTypeConversion4[34] = 0.032493718F;
    rtDW.DataTypeConversion4[35] = 0.0446934476F;
  }

  // ConstCode for DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
  //   Constant: '<Root>/FT-matrix'

  //std::memcpy(&rtDW.DataTypeConversion4[0], &rtConstP.FTmatrix_Value[0], 36U *
    //          sizeof(real32_T));
}

// Constructor
matrix_conversion_FWModelClass::matrix_conversion_FWModelClass() :
  rtU(),
  rtY(),
  rtDW(),
  rtM()
{
  // Currently there is no constructor body generated.
}

// Destructor
matrix_conversion_FWModelClass::~matrix_conversion_FWModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
matrix_conversion_FWModelClass::RT_MODEL * matrix_conversion_FWModelClass::
  getRTM()
{
  return (&rtM);
}

//
// File trailer for generated code.
//
// [EOF]
//
