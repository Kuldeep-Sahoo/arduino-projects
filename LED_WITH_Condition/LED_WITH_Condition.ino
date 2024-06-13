int data;
void setup() {
  // put your setup code here, to run once:
  //Serial.begin() is used to initialize the serial communication at a specified baud rate, allowing the Ard
  // uino to send data to and receive data from a connected computer or other devices over the serial port. This 
  // is useful for debugging, logging data, or communicating with other serial devices.
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("\nTHis is my Second example >>>");
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available()) {
    data = Serial.read();
    Serial.println(data-48);
  }
  if (data == '1') {
    digitalWrite(LED_BUILTIN, HIGH);
  } else if (data == '0') {
    digitalWrite(LED_BUILTIN, LOW);
  } else if(data=='2'){
    digitalWrite(LED_BUILTIN, HIGH);
  }
}
