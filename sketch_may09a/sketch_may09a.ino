String a="gayA";
String b="gayB";
int numberA=13;
void setup()
{
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
for (numberA=14;numberA>=0;numberA--)
{
  Serial.println(numberA);
  delay (1000);
}
while (1);
}
