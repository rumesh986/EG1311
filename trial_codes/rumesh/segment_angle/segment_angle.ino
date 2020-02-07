#include <Servo.h>

Servo segment_angle;

void setup() {
  // put your setup code here, to run once:
  segment_angle.attach(9);
  segment_angle.write(90);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  segment_angle.write(180);
  delay(1000);
  segment_angle.write(0);
  delay(1000);
  segment_angle.write(90);
  delay(1000);

}
