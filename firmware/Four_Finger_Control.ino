#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(11);
  servo2.attach(9);
  servo3.attach(7);
  servo4.attach(5);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  open();
  delay(1500);
  close();
  delay(1500);

}

void open() {
  servo1.write(180);
  servo2.write(75);
  servo3.write(80);
  servo4.write(100);
}

void close() {
  servo1.write(70);
  servo2.write(130);
  servo3.write(130);
  servo4.write(160);
}
