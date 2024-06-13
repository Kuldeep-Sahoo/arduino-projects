#define NEW_PIN 11
#define LED_PIN 12
#define IR_PIN 3
void setup() {
  // put your setup code here, to run once:
  pinMode(NEW_PIN,OUTPUT);
  pinMode(LED_PIN,OUTPUT);
  pinMode(IR_PIN,INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(IR_PIN)==LOW){
    digitalWrite(LED_PIN,LOW);
    digitalWrite(NEW_PIN,HIGH);
    Serial.print("Connected\n");
    delay(1);
  }
  else{
    digitalWrite(NEW_PIN,LOW);
    digitalWrite(LED_PIN,HIGH);
    Serial.print("Disconnected\n");
    delay(1);
  }
}
