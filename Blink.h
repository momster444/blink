
#ifndef Blink_h
#define Blink_h

#include "Arduino.h"

class Blink
{
  public:
    Blink(int pin);
    void on(int de);
    void off(int de);

  private:
   int _pin;
};

#endif

