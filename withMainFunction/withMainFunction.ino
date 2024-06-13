void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
#include <Arduino.h>

int main() {
  init();

#if defined(USBCON)
  USBDevice.attach();
#endif

  setup();

  while (true) {
    loop();
    if (serialEventRun) serialEventRun();
  }

  return 0;
}
//In Arduino programming, the main function is implicitly provided by the Arduino core library. When you write an Arduino sketch, you define setup() and loop() functions instead of a traditional main() function. The Arduino environment abstracts away the main function to simplify programming for beginners and streamline the development process for embedded systems.