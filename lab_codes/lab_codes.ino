#include <Servo.h>

Servo serv;

int trig_pin = 13;
int echo_pin = 12;
int serv_pin = 6;
int angle = 0;
int motor_channel_a = 3;
int motor_channel_b = 5;

long get_distance() {
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);
  return 0.01725 * pulseIn(echo_pin, HIGH);
}

void change_servo(int amount, bool direction) {
  if (direction == true) {
    angle += amount;
  } else {
    angle -= amount;
  }
  serv.write(angle);
}

void setup() {
  Serial.begin(9600);
    pinMode(trig_pin, OUTPUT);
    pinMode(echo_pin, INPUT);
    serv.attach(6);
}

void loop() {
//  long dist = get_distance();
//    Serial.println(dist);
    //analogWrite(3, 127);
    
//  if (dist < 5) {
    analogWrite(motor_channel_a, 0);
    analogWrite(motor_channel_b, 127);
//    change_servo(5, true);
//  } else {
//    analogWrite(motor_channel_a, 127);
//    analogWrite(motor_channel_b, 0);
//    change_servo(5, false);
//    serv.write(0);
//  }
  
  delayMicroseconds(1000);
}
