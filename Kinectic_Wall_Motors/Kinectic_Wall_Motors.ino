#include <AccelStepper.h>

// Define the pins for the stepper motors
#define X_STEP_PIN 2
#define X_DIR_PIN 5

#define Y_STEP_PIN 3
#define Y_DIR_PIN 6

#define Z_STEP_PIN 4
#define Z_DIR_PIN 7

#define A_STEP_PIN 12
#define A_DIR_PIN 13

// Create instances for each motor
AccelStepper stepper1(AccelStepper::DRIVER, X_STEP_PIN, X_DIR_PIN);
AccelStepper stepper2(AccelStepper::DRIVER, Y_STEP_PIN, Y_DIR_PIN);
AccelStepper stepper3(AccelStepper::DRIVER, Z_STEP_PIN, Z_DIR_PIN);
AccelStepper stepper4(AccelStepper::DRIVER, A_STEP_PIN, A_DIR_PIN);

void setup() {
  // Set the maximum speed and acceleration for each stepper
  stepper1.setMaxSpeed(2000); // Lowering initial values to reduce noise and heat
  stepper1.setAcceleration(800);
  stepper2.setMaxSpeed(2000);
  stepper2.setAcceleration(800);
  stepper3.setMaxSpeed(2000);
  stepper3.setAcceleration(800);
  stepper4.setMaxSpeed(2000);
  stepper4.setAcceleration(800);

  // Set initial speed for each stepper
  stepper1.setSpeed(1000);  // Set the speed (steps per second)
  stepper2.setSpeed(1000);
  stepper3.setSpeed(1000);
  stepper4.setSpeed(1000);
}

void loop() {
  // Move the steppers in the same direction
  stepper1.runSpeed();
  stepper2.runSpeed();
  stepper3.runSpeed();
  stepper4.runSpeed();

  // Add a small delay to avoid continuous high-speed running
  //delay(10);
}
