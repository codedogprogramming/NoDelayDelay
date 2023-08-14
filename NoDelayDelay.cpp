#include "NoDelayDelay.h"

NoDelayDelay::NoDelayDelay(uint32_t delay) {
  this->delay = delay;
  this->lastTime = millis();
}

bool NoDelayDelay::check() {
  if(millis() - this->lastTime >= this->delay) {
    reset();
    this->timesPast++;
    return true;
  }
  else {
    return false;
  }
}

uint32_t NoDelayDelay::getElapsedTime() {
  return millis() - this->lastTime;
}

uint32_t NoDelayDelay::getDelay() {
  return this->delay;
}
void NoDelayDelay::setDelay(uint32_t delay) {
  reset();
  this->delay = delay;
}

uint16_t NoDelayDelay::getTimesPast() {
  return this->timesPast;
}

void NoDelayDelay::reset() {
  this->lastTime = millis();
}