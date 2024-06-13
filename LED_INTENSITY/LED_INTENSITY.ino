// analogWrite is used instead of digitalWrite because analogWrite allows for adjusting the brightness of the LEDs.
//  This is achieved by outputting a PWM (Pulse Width Modulation) signal, which can vary the duty cycle between 0 and 255.
// digitalWrite can only turn the LEDs fully on or fully off, but analogWrite lets you create smooth transitions in brightness, enabling the fading effect seen in your code.

// The delay function pauses the execution of the program for a specified amount of time, in milliseconds. 1 second =1000 milliosecond

int red=11;
int green=10;
int blue=9;
int arr[]={red,green,blue};

void setup(){
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}
void loop(){
  for(int i=0;i<3;i++){
    for(int value=0;value<256;value++){
      analogWrite(arr[i],value);
      delay(10);
    }
    delay(50);
    for(int value=255;value>=0;value--){
      analogWrite(arr[i],value);
      delay(10);
    }
    delay(50);
  }
}
















// int red = 11;
// int green = 10;
// int blue = 9;
// int arr[] = { red, green, blue };
// void setup() {
//   pinMode(red, OUTPUT);
//   pinMode(green, OUTPUT);
//   pinMode(blue, OUTPUT);
// }

// void loop() {
//   for (int i = 0; i <= 2; i++) {
//     for (int value = 0; value <= 255; value++) {

//       analogWrite(arr[i],value);
//       delay(10);
//     }
//     delay(50);

//     for (int value = 255; value >= 0; value--) {
//       analogWrite(arr[i],value);
//       delay(10);
//     }
//     delay(50);
//   }
// }







