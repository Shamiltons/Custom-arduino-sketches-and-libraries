// sketch to reduce clock speed and reduce power consumption

#include <Prescaler.h>

void setup()
{
  pinMode(13, OUTPUT);
  setClockPrescaler(CLOCK_PRESCALER_256);
}

void loop()
{
  digitalWrite(13, HIGH);
  trueDelay(1000);
  digitalWrite(13, LOW);
  trueDelay(5000);
}

//CLOCK_PRESCALER_1 / 16 MHz / 7.8mA
//CLOCK_PRESCALER_2 / 8 Mhz / 5.4mA
//CLOCK_PRESCALER_4 / 4Mhz / 4.0mA
//CLOCK_PRESCALER_8 / 2Mhz / 3.2ma
//CLOCK_PRESCALER_16 / 1 / 2.6
//CLOCK_PRESCALER_32 / 500kHz/ 2.3
//CLOCK_PRESCALER_64 / 250 / 2.2
//CLOCK_PRESCALER_128 / 125 / 2.1
//CLOCK_PRESCALER_256 / 62.5kHz / 2.1 ma
