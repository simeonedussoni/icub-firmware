//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// File: rt_roundd_snf.cpp
//
// Code generated for Simulink model 'SupervisorFSM_RX'.
//
// Model version                  : 6.22
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Wed Sep 20 16:37:54 2023
//
#include "rtwtypes.h"
#include "rt_roundd_snf.h"
#include <cmath>

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (std::abs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = std::floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = std::ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

//
// File trailer for generated code.
//
// [EOF]
//
