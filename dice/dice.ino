int myvalue=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
c:\Users\sahoo\Desktop\sketch_jun11b\sketch_jun11b.ino
void loop() {
  myvalue=random(1,7); //1 to 6
  Serial.print("Random value is  : ");
  Serial.println(myvalue);
  delay(1000);
  // put your main code here, to run repeatedly:

}