#include "LED.h"
#include <Arduino.h>

LED::LED(int LEDPin) {
  pin = LEDPin;
  delayTime = -1;
  startTime = millis();
  pinMode(pin, OUTPUT);
}

void LED::update() {
  if (delayTime != -1 && millis() - startTime > delayTime) {
    status = !status;
    setStatus(status);
    startTime = millis();
  }
}

void LED::setStatus(bool _status) {
  status = _status;
  digitalWrite(pin, status ? HIGH : LOW);
}

void LED::turnOn() {
  setStatus(true);
}

void LED::turnOff() {
  setStatus(false);
}

void LED::setBlink(int _delayTime) {
  delayTime = _delayTime;
}
