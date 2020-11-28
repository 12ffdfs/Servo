
int numberA=180;
#include<Servo.h>
Servo myServo;
void setup() {
  // put your setup code here, to run once:
myServo.attach(11);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (numberA=180;numberA>=0;numberA--)
{
  myServo.write(numberA);
  delay (50);
  if (numberA<=90)
  digitalWrite(13,HIGH);
  if (numberA>90)
  digitalWrite(13,LOW);
}
}
