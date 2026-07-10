#include <Servo.h>

Servo myServo;
int pos = 90;

int minAngle = 75;
int maxAngle = 130;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    int num = Serial.parseInt();
    
    while (Serial.available()) Serial.read();

    if (num >= 0 && num <= 180) {
      pos = num;
      //myServo.write(pos);
      myServo.write(constrain(pos,minAngle, maxAngle));
    }
  }

}
