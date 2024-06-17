#include <Stepper.h>
int data = 0;
const int positive = 200;
const int negative = -200;
Stepper myStepper(positive, negative, 8, 9, 10, 11);
int stepCount = 0;

void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(100);
  Serial.begin(9600);
  Serial.print("hr");
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available()) {
    data = Serial.read();
  }
  // if you give two times 1 it will not work beccause of the if condition
  if (data == '1') {
    if (stepCount == 0) {
      Serial.println("Up");
      myStepper.step(positive);
      stepCount++;
    }
    Serial.print(stepCount);
    delay(500);
  }
  else if (data == '0') {
  // if you give two times 0 it will not work beccause of the else if condition
    if (stepCount != 0) {
      Serial.println("Down");
      myStepper.step(negative);
      stepCount--;
    }
    Serial.print(stepCount);
    delay(500);
  }
}