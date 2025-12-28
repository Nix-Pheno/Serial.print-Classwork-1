#include "src/Motor.h"
#define DirectionPin 4
#define BaudRate 115200
 
int innerRPM = 18;
int outerRPM = 36;
unsigned long moveTime = 20000;
 
int motor1Position = 0;
 
void setup() {
  Serial.begin(115200);
  Motor.begin(BaudRate, DirectionPin, &Serial2);
  // Set initial state
  Motor.turnWheel(1, LEFT, innerRPM); 
  Motor.turnWheel(2, LEFT, 0); 
}
 
void loop() {
  motor1Position += 10;
  if (motor1Position > 360) {
    motor1Position = 0;
  }
  Serial.print("M1 Position: ");
  Serial.println(motor1Position);
  if (motor1Position > 180) {
    Motor.turnWheel(2, LEFT, outerRPM);
  } else {
    Motor.turnWheel(2, LEFT, 0);
  }
  delay(100);
}
