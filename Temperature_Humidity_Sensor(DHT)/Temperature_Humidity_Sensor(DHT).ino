#include <dht.h>
#define outPin 8
int LED = 12;
int green = 11;
dht DHT;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  int readData = DHT.read11(outPin);  //create an object
  float h = DHT.humidity;
  float t = DHT.temperature;
  // if(h>0 && h<59){
  //   digitalWrite(LED, LOW);
  //   digitalWrite(red, HIGH);
  // }
  // else if (h >= 65) {
  //   digitalWrite(red, LOW);
  //   digitalWrite(LED, HIGH);
  // }
  Serial.print(t );
  Serial.println(h);
  if(h>=59){
    digitalWrite(green, LOW);
    digitalWrite(LED, HIGH);
    if(t>=27){
    digitalWrite(LED, LOW);
    digitalWrite(green, HIGH);
    }
  }
  delay(1000);
}
