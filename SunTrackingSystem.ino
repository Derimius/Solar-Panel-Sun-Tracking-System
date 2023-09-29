// Solar Panel Sun Tracking System by Michael Chukwukere

#include <Servo.h>

Servo solarServo; // Create a servo object
int eastSensorPin = A0; // Analog pin for the east sensor
int westSensorPin = A1; // Analog pin for the west sensor
int northSensorPin = A2; // Analog pin for the north sensor
int southSensorPin = A3; // Analog pin for the south sensor

void setup() {
  solarServo.attach(SERVO_PIN); // Attach the servo to a PWM pin
  // Initialize sensors and serial communication if needed
}

void loop() {
  // Read brightness values from all four sensors
  int eastBrightness = analogRead(eastSensorPin);
  int westBrightness = analogRead(westSensorPin);
  int northBrightness = analogRead(northSensorPin);
  int southBrightness = analogRead(southSensorPin);

  // Find the sensor with the highest brightness
  int maxBrightness = max(eastBrightness, max(westBrightness, max(northBrightness, southBrightness)));

  // Determine the angle for the servo based on the maxBrightness sensor
  int servoAngle;

  if (maxBrightness == eastBrightness) {
    servoAngle = 180; // Face east
  } else if (maxBrightness == westBrightness) {
    servoAngle = 0; // Face west
  } else if (maxBrightness == northBrightness) {
    servoAngle = 90; // Face north
  } else {
    servoAngle = 270; // Face south
  }

  // Move the servo to the calculated angle
  solarServo.write(servoAngle);

  // Delay for five seconds before taking the next reading
  delay(5000);
}
