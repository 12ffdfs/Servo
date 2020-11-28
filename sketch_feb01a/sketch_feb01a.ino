#include <Servo.h>
Servo myServo;
void setup() {
  // put your setup code here, to run once:
myServo.attach(9);
myServo.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:

}
