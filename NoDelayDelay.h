#pragma once
#include <Arduino.h>

class NoDelayDelay {
  private:
    uint32_t delay; // Delay in milliseconds
    uint32_t lastTime; // Time since last delay was completed
    uint16_t timesPast = 0;

  public:
    NoDelayDelay(uint32_t delay); // Constructor function (delay: desired delay until check function returns true)

    bool check(); // Check whether delay has been passed (true or false)

    uint32_t getElapsedTime(); // Get elapsed time since last delay was completed

    uint32_t getDelay(); // Get set delay in milliseconds
    void setDelay(uint32_t delay); // Set delay in milliseconds to new value

    uint16_t getTimesPast(); // Get the amount of times the delay has past

    void reset(); // Resets delay
};