#ifndef LED_H
#define LED_H

class LED {
private:
  int pin;
  bool status = false;
  int delayTime;
  unsigned long startTime;
  
public:
  LED(int LEDPin);

  void update();
  void setStatus(bool _status);
  void turnOn();
  void turnOff();
  void setBlink(int _delayTime);
};

#endif
