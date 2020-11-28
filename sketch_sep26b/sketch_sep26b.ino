#include <DHT.h>
#include<DHT_U.h>

#define DHTPIN 2 
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

int t1,t2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
int h=dht.readHumidity();
int t=dht.readTemperature();
t2=t;
if (t2!=t1)
{
  Serial.println(t2);
}


t1=t2;


  
}
