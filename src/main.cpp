#include <Arduino.h>
#include "led.h"

LED myLED(2);
void setup() {
  // put your setup code here, to run once:
 
  Serial.begin(9600);
}

void loop() {
  myLED.blink(100);
  
  // put your main code here, to run repeatedly:
}
