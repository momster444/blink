#include "Arduino.h"
#include "Blink.h"

Blink::Blink(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Blink::on(int de)
{
  digitalWrite(_pin, HIGH);
  delay(de);
}

void Blink::off(int de)
{
  digitalWrite(_pin, LOW);
  delay(de);
}
