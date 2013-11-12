#include <SoftRcPulseOut.h>
SoftRcPulseOut servo1;

void setup() {
  servo1.attach(5);
  servo1.setMaximumPulse(2200);
}

void loop() {
  servo1.write(0);
  delay(5000);
  servo1.write(180);
  delay(5000);
}

