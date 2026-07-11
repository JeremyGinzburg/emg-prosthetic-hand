#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int minAngle = 75;
int maxAngle = 130;

int pos = minAngle;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(9);
  servo2.attach(7);
  servo3.attach(3);
  servo4.attach(2);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = minAngle; i <= maxAngle; i++) {
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    delay(15);
  }
  for (int j = maxAngle; j >= minAngle; j--) {
    servo1.write(j);
    servo2.write(j);
    servo3.write(j);
    servo4.write(j);
    delay(15);
  }

}
