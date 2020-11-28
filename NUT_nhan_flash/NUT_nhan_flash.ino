int Status = 0;
int nut_nhan = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  nut_nhan = digitalRead(6);
  if (nut_nhan == 0)
  {
    digitalWrite(13, HIGH);
    delay(300);
    digitalWrite(13, LOW);
    while (digitalRead(6) == 0)
    {
      digitalWrite(13, LOW);
      Serial.println(nut_nhan);
    }
  }
}
