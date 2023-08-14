/*
  BlinkNoDelay

  Simple Blink example without using delay()

  Uses the NoDelayDelay library and the well known Blink example to show
  an example of how a Blink program can be created without using delay().
  This example shows that it's possible to do other tasks parralel with the
  blink of an, for example, LED.

  Created: 13 Aug 2023
  by Jesper Weijnen
*/

// Include the NoDelayDelay library in this project.
#include <NoDelayDelay.h>

// Create a NoDelayDelay object and set the desired delay time in milliseconds.
NoDelayDelay blinkDelay(1000);

// Variable that represents the state of the LED.
bool ledState = LOW;

void setup() {
  // initialize digital pin LED_BUILTIN (pin 13) as an output. Change LED_BUILTIN to whatever pin you want to use.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Check if the NoDelayDelay has been past with the .check() function. (returns true when delay has past)
  if(blinkDelay.check()) {
    // Change LED state to opposite. (LOW becomes HIGH, HIGH becomes LOW)
    ledState = !ledState;
    // Digital write the LED state to pin. (Change LED_BUILTIN to whatever pin you want to use)
    digitalWrite(LED_BUILTIN, ledState);
  }
}