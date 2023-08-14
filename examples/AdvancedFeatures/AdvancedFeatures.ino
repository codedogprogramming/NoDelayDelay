/*
  AdvancedFeatures

  Shows advanced features of NoDelayDelay library.

  The advanced features of the NoDelayDelay library are features that are
  not very commonly used, but can be useful for some users.

  Created: 13 Aug 2023
  by Jesper Weijnen
*/

// Include the NoDelayDelay library in this project.
#include <NoDelayDelay.h>

// Create a NoDelayDelay object and set the desired delay time in milliseconds.
NoDelayDelay exampleDelay(1000);

void setup() {
  // Start serial monitor to visualize NoDelayDelay advanced features.
  Serial.begin(9600);

  // Use .getDelay() to get the currently set delay.
  Serial.println("Delay initially set to: " + String(exampleDelay.getDelay()));
}

void loop() {
  // Use .getElapsedTime() to get the time that has been elapsed since the last delay has past.
  Serial.println(exampleDelay.getElapsedTime());
  if(exampleDelay.check()) {
    // Use .getTimesPast() to get the amount of times the delay has past.
    Serial.println("Delay past " + String(exampleDelay.getTimesPast()) + " time(s)!");

    // Use .setDelay(delay in milliseconds) to set a new delay value.
    exampleDelay.setDelay(5000);
  }
}
