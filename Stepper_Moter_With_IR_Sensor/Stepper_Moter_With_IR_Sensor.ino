#include <Stepper.h>
int data = 0;
// int LED_PIN=12;
int IR_PIN = 3;
const int positive = 200;
const int negative = -200;
Stepper myStepper(positive, negative, 8, 9, 10, 11);
int stepCount = 0;

void setup() {
  myStepper.setSpeed(100);
  Serial.begin(9600);
  Serial.print("<-------------Stared------------->");
}

void loop() {
  if (digitalRead(IR_PIN) == LOW) {
    if (stepCount== 0) {
      Serial.println("Up");
      myStepper.step(positive);
      stepCount++;
      Serial.print(stepCount);
    }
    delay(500);
  } else {
    if (stepCount == 1) {
      Serial.println("Down");
      myStepper.step(negative);
      stepCount--;
      Serial.print(stepCount);
    }
    delay(500);
  }
}