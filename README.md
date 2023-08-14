# NoDelayDelay Arduino Library

The NoDelayDelay Arduino library allows you to delay/time your tasks without stopping all processes on your Arduino, ESP32, etc. like the standard delay() function does.

For examples of this library, please follow the installation instructions. After installation, examples will be available in the Arduino IDE.

## Installation

- Go to Github page -> Code -> Download ZIP.
- In Arduino IDE: Go to Sketch -> Include Library -> Add .ZIP Library...
- Select downloaded ZIP file.
- Include NoDelayDelay library in your Arduino sketch:

```cpp
#include <NoDelayDelay.h>
```

## Initialisation

- Define a NoDelayDelay object with a name of preference and pass the desired delay in as an argument:

```cpp
// Template:
NoDelayDelay nameOfObject(delay milliseconds);

// Example:
NoDelayDelay exampleDelay(2000);
```

## Functions

#### Check if delay has past

```cpp
  exampleDelay.check();
```

| Parameter(s) | Type      | Description                                        |
| :----------- | :-------- | :------------------------------------------------- |
| `none`       | `boolean` | Returns true when delay has passed set delay time. |

#### Get elapsed time

```cpp
  exampleDelay.getElapsedTime();
```

| Parameter(s) | Type       | Description                                 |
| :----------- | :--------- | :------------------------------------------ |
| `none`       | `uint32_t` | Returns elapsed time since last delay past. |

#### Get set delay

```cpp
  exampleDelay.getDelay();
```

| Parameter(s) | Type       | Description            |
| :----------- | :--------- | :--------------------- |
| `none`       | `uint32_t` | Returns the set delay. |

#### Set delay

```cpp
  exampleDelay.set(delay milliseconds);
```

| Parameter(s)     | Type   | Description                                 |
| :--------------- | :----- | :------------------------------------------ |
| `uint32_t delay` | `void` | Set new delay value. Also resets the delay. |

#### Get times delay has past

```cpp
  exampleDelay.getTimesPast();
```

| Parameter(s) | Type       | Description                                     |
| :----------- | :--------- | :---------------------------------------------- |
| `none`       | `uint16_t` | Returns the amount of times the delay has past. |

## Things to remember

- This library only checks and resets a delay when the .check() function is called. When using delay() alongside this library, or when using other heavy libraries/code which can cause the Arduino to not run the .check() function every milliseconds. This can mean that the delay is longer then intended.
- This library uses the Arduino millis() function to keep track of time. After every 49 days, 17 hours, 2 minutes and 29 seconds (Size of an unsigned long variable = 4,294,967,295) the millis() function overflows and goes back to 0. This can cause the .check() function to return true earlier then expected.
- If you have any feedback or questions, please let me know!
