#include <dht.h>
#define outPin 8
int  LED  =12;
dht DHT;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  int readData = DHT.read11(outPin); //create an object
  float T = DHT.temperature;
  float F=0;
  F = (9/5)*T + 32;
  Serial.print("temp. in farhenite = ");
  Serial.print(F);
  Serial.print(" F \n");
  delay(1000);
}