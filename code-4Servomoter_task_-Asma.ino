#include <Servo.h>

// Create 4 servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pos = 0;  // variable to store the servo position

void setup() {
  // Attach each servo to its pin
  servo1.attach(8);
  servo2.attach(9);
  servo3.attach(10);
  servo4.attach(11);
}

void loop() {
  // Sweep from 0° to 90°
  for (pos = 0; pos <= 90; pos++) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    delay(15);  // wait for servo to reach the position
  }

  // Sweep back from 90° to 0°
  for (pos = 90; pos >= 0; pos--) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    delay(15);
  }
}
