#include <Servo.h>

Servo servo_position_sortie;  // Create a servo object

int pos = 0;    // Variable to store the servo position

void setup() {
  servo_position_sortie.attach(9);  // Attach the servo to pin 9
}

void loop() {
  for (pos = 0; pos <= 100; pos += 1) { // Sweep from 0 to 180 degrees
    servo_position_sortie.write(pos);               // Set the servo position
    delay(15);                        // Wait for the servo to reach the position
  }

  for (pos = 100; pos >= 60; pos -= 1) { // Sweep from 180 to 0 degrees
    servo_position_sortie.write(pos);               // Set the servo position
    delay(100);                        // Wait for the servo to reach the position
  }
}
