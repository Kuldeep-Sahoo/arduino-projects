const int sensor_pin = A1;
int red = 9;
int green = 10;
int blue = 11;

void setColor(int rValue, int gValue, int bVAlue) {
  analogWrite(red, rValue);
  analogWrite(green, gValue);
  analogWrite(blue, bValue);
}
void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Violet\n");
  // Color 1: Violet
  setColor(128, 0, 255);
  delay(1000);
  
  // Color 2: 
  Serial.println("Indigo\n");
  setColor(75, 0, 130);
  delay(3000);
  
  // Color 3: 
  Serial.println("Blue\n");
  setColor(0, 0, 255);
  delay(3000);
  
  // Color 4: 
  Serial.println("Green\n");
  setColor(0, 255, 0);
  delay(3000);
  
  // Color 5: 
  Serial.println("Yellow\n");
  setColor(255, 255, 0);
  delay(3000);
  
  // Color 6: 
  Serial.println("Orange\n");
  setColor(255, 165, 0);
  delay(3000);
  
  // Color 7: 
  Serial.println("Red\n");
  setColor(255, 0, 0);
  delay(3000);
}
