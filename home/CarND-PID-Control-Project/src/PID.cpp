
#include "PID.h"
#include <cmath>
#include <iostream>
#include <limits>

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  PID::Kp = Kp;
  PID::Ki = Ki;
  PID::Kd = Kd;

  p_error = 0;
  i_error = 0;
  d_error = 0;
   
}


void PID::UpdateError(double cte) {
  double pre_cte = p_error;
  p_error  = cte;
  i_error += cte;
  d_error  = cte - pre_cte;
  
}
double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  return ((Kp * p_error) + (Ki * i_error) + (Kd * d_error));
  // TODO: Add your total error calc here!
}
