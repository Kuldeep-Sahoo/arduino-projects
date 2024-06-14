const int sensor_pin = A1;
int green = 10;
int blue = 11;
int red = 12;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int sensor_analog = analogRead(sensor_pin);
  float moisture_percentage = ((sensor_analog / 1023.00) * 100);
  if (moisture_percentage >= 0 && moisture_percentage <= 20) {
    digitalWrite(green, HIGH);
    digitalWrite(blue,HIGH);
    digitalWrite(red, LOW);
    Serial.print("Moisture Percwntage in between 0 to 20 ");
    Serial.print("\tMoisture Percwntage = ");
    Serial.print(moisture_percentage);
    Serial.print("%\n");
    delay(100);
  } else if (moisture_percentage > 20 && moisture_percentage <= 25) {
    digitalWrite(blue, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    Serial.print("Moisture Percwntage in between 20 to 25 ");
    Serial.print("\tMoisture Percwntage = ");
    Serial.print(moisture_percentage);
    Serial.print("%\n");
    delay(100);

  } else if (moisture_percentage > 25 && moisture_percentage <= 26.5) {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
    Serial.print("Moisture Percwntage in between 25 to 26.5 ");
    Serial.print("\tMoisture Percwntage = ");
    Serial.print(moisture_percentage);
    Serial.print("%\n");
    delay(100);

  } else if (moisture_percentage > 26 && moisture_percentage <= 35) {
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(red, HIGH);
    Serial.print("Moisture Percwntage in between 28 to 35 ");
    Serial.print("\tMoisture Percwntage = ");
    Serial.print(moisture_percentage);
    Serial.print("%\n");
    delay(100);

  } else {
    digitalWrite(green, LOW);
    digitalWrite(blue,HIGH);
    digitalWrite(red, HIGH);
    Serial.print("\tMoisture Percwntage = ");
    Serial.print(moisture_percentage);
    Serial.print("%\n");
    delay(100);
  }
  // put your main code here, to run repeatedly:
}