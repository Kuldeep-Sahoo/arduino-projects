#define LED_PIN 12
#define IR_PIN 3
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN,OUTPUT);
  pinMode(IR_PIN,INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(IR_PIN)==LOW){
    digitalWrite(LED_PIN,HIGH);
    Serial.print("Connected\n");
    delay(50);
  }
  else{
    digitalWrite(LED_PIN,LOW);
    Serial.print("Disconnected\n");
    delay(50);
  }
  // put your main code here, to run repeatedly:

}
