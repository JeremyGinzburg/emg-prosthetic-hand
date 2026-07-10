#include <Servo.h>

Servo myServo;

int minAngle = 75;
int maxAngle = 130;

int pos = minAngle;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = minAngle; i <= maxAngle; i++) {
    myServo.write(i);
    delay(15);
  }
  for (int j = maxAngle; j >= minAngle; j--) {
    myServo.write(j);
    delay(15);
  }

}
