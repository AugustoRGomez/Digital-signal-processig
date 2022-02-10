/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.3 and DSP System Toolbox 9.5.
 * Generated on: 10-Jan-2022 13:57:44
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 28
 * Stable            : Yes
 * Linear Phase      : Yes (Type 2)
 * Arithmetic        : fixed
 * Numerator         : s16,16 -> [-5.000000e-01 5.000000e-01)
 * Input             : s16,15 -> [-1 1)
 * Filter Internals  : Full Precision
 *   Output          : s33,31 -> [-2 2)  (auto determined)
 *   Product         : s31,31 -> [-5.000000e-01 5.000000e-01)  (auto determined)
 *   Accumulator     : s33,31 -> [-2 2)  (auto determined)
 *   Round Mode      : No rounding
 *   Overflow Mode   : No overflow
 */

/* General type conversion for MATLAB generated C-code  */
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\MATLAB\R2017b\extern\include\tmwtypes.h 
 */
const q15_t planta_fir[30] = {
     -117,  -1070,  -1326,   -430,   1158,   2197,   1533,   -858,  -3455,
    -3904,   -531,   6314,  14065,  19192,  19192,  14065,   6314,   -531,
    -3904,  -3455,   -858,   1533,   2197,   1158,   -430,  -1326,  -1070,
     -117,		0,		0
};
