/* DFI8th.c                                 */
/* SOS filter coefficients                  */
/* exported from MATLAB using SOS2c.m  */
/* order is {b0, b1, b2, a0, a1, a2}          */


#include "DFI8th.h"

float var[var_SECTIONS][6] = {
{  0.00236246,   0.00472492,   0.00236246,  1,     -1.95302,     0.962473}, /* var[0] */
{   0.0022833,    0.0045666,    0.0022833,  1,     -1.88758,     0.896714}, /* var[1] */
{   0.0022262,   0.00445241,    0.0022262,  1,     -1.84038,     0.849286}, /* var[2] */
{  0.00219648,   0.00439296,   0.00219648,  1,     -1.81581,     0.824595}, /* var[3] */
};