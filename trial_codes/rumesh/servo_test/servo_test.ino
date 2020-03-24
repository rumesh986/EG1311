#include <Servo.h>

Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
//  servo_test.write(0);
//  delay(1000);
//  servo_test.write(45);
//  delay(1000);
//  servo_test.write(135);
//  delay(1000);
//  servo_test.write(180);
//  delay(1000);

  servo.writeMicroseconds(1600);
  delay(20000);
  servo.writeMicroseconds(1500);
  delay(10000);
//  servo.writeMicroseconds(1400);
//  delay(1000);
  servo.writeMicroseconds(900);
  delay(10000);
}
