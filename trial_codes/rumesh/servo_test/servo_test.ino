#include <Servo.h>

Servo servo_test;

void setup() {
  // put your setup code here, to run once:
  servo_test.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo_test.write(0);
  delay(1000);
  servo_test.write(45);
  delay(1000);
  servo_test.write(135);
  delay(1000);
  servo_test.write(180);
  delay(1000);

}
