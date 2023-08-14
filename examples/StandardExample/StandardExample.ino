/*
  StandardExample

  Shows standard usage of NoDelayDelay library.

  NoDelayDelay library allows you to use delays in Arduino IDE
  without actually stopping all processes on a Arduino (or other
  Arduino related board like ESP32).

  Created: 13 Aug 2023
  by Jesper Weijnen
*/

// Include the NoDelayDelay library in this project.
#include <NoDelayDelay.h>

// Create a NoDelayDelay object and set the desired delay time in milliseconds.
NoDelayDelay exampleDelay(2000);

// the setup function runs once when you press reset or power the board.
void setup() {
  // Start serial monitor to visualize the working of the NoDelayDelay.
  Serial.begin(9600);
}

// the loop function runs over and over again forever.
void loop() {
  // Check if the NoDelayDelay has been past with the .check() function. (returns true when delay has past)
  if(exampleDelay.check()) {
    // Print "Delay past!" in Serial monitor when NoDelayDelay has past.
    Serial.println("Delay past!");
  }
}
