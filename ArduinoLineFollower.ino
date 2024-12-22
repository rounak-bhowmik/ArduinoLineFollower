#include "LED.h"

LED led(13);

void setup() {
  Serial.begin(9600);
  led.turnOn();
  led.setBlink(500);
}

void loop() {
  led.update();
}
