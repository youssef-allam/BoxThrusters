#include "Output_signals.h"
#include "softStart.h"


uint8_t thrustersFrame[24] = {0,1,1,1,0,1,1,0, 127 , 100 , 255 , 50 , 100 , 255 , 120, 255 ,33, 20,40,40,20,40,30,40};
uint8_t Frame[8] = {0,255,0,255,255,255,255,255};
Thrusters thrusters;
Tools tools;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  soft_start_initial_value();
  tools.init();
  thrusters.init();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  tools.apply_signal(Frame);
  thrusters.prep_And_apply_signal(thrustersFrame);
  Serial.println("-------------------------");
}
