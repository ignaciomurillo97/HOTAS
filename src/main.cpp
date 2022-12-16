#include <Arduino.h>
#include <Joystick.h>

#define joyThrottle A0

Joystick_ Joystick(0x15, JOYSTICK_TYPE_JOYSTICK, 0, 0, false, false, false, false, false, false,
                  false, true, false, false, false);

const bool initAutoSendState = true;
int throttle_ = 0;

void setup() {
  // put your setup code here, to run once:
  Joystick.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  throttle_ = analogRead(joyThrottle);
  Joystick.setThrottle(throttle_);
  delay(10);
}