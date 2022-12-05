#ifndef OUT_H
#define OUT_H

#include "Arduino.h"
#include <Servo.h>

const int motorsCount = 8; 
const int toolsCount = 8;
extern Servo Motors[motorsCount]; 
extern class Thrusters{
  // motor pins
  const int motorPins[motorsCount] =  {3, 5, 7, 9, 11, 13, 4, 6};
  public:
  void init();
  void apply_signal(int *SignalFrame ,float *exponants);
  void prep_And_apply_signal(uint8_t *thrustersFrame);
}thrusters ;

extern class Tools{
  // first 5 are Grippers pins, last 3 lights pins 
  const int toolPins[toolsCount] = {A0 ,A2 ,A4 ,A6 ,A8 ,A10 ,A12 ,A14};
  public:
  void init();
  void apply_signal(uint8_t *SignalFrame);
}tools;







#endif
