const int sensor_pin=A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int sensor_analog = analogRead(sensor_pin);
  float moisture_percentage=(((sensor_analog/1023.00)*100));
  Serial.print("Moisture Percwntage = ");
  Serial.print(moisture_percentage);
  Serial.print("%\n");
  delay(1000);
  // put your main code here, to run repeatedly:

}
