#include "led.h"
#include <Arduino.h>

LED::LED(int pin){
    this->pin = pin;
    pinMode(pin,OUTPUT);
}

void LED::blink(int delayTime){
  digitalWrite(pin,HIGH);
  Serial.println("led on");
  delay(delayTime);
  digitalWrite(pin,LOW);
  Serial.println("led off");
  delay(delayTime);
}