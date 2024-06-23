#include <BluetoothSerial.h>
BluetoothSerial SerialBT;
int received;
char receivedChar;
int redPin = 21;
int greenPin = 22;
int bluePin = 23;
int ledPin;


void setup() {
  Serial.begin(115200);
  SerialBT.begin("Kuldeep : )");
  Serial.println("Bluetooth is ready to receive...");
  Serial.println("TO rurn red write 'r' ");
  Serial.println("TO rurn green write 'g' ");
  Serial.println("TO rurn blue write 'b' ");
  Serial.println("TO rurn off write 'o' ");
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  receivedChar = (char)SerialBT.read();
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()) {
    SerialBT.print("Receaved : ");
    SerialBT.println(receivedChar);

    int rr;
    int gg;
    int bb;
    SerialBT.println("Enter red value");
    rr=SerialBT.read();
    SerialBT.println("Enter green value");
    gg=SerialBT.read();
    SerialBT.println("Enter blue value");
    bb=SerialBT.read();
    analogLED(rr,gg,bb);
  }
  delay(20);
}

void analogLED(int r,int g,int b){
  analogWrite(redPin,r);
  analogWrite(greenPin,g);
  analogWrite(bluePin,b);
}