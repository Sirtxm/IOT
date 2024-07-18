#include <Arduino.h>

const int LED_BUILT_IN = 1;
const int LED_ON = 2;
int state;

void setup() {
  Serial.begin(115200);
   pinMode (D0, OUTPUT);
   pinMode (D4, OUTPUT);
  state = LED_BUILT_IN;
}

void loop() {
  if (state==LED_BUILT_IN)
  {
    digitalWrite(D4, LOW);
    delay(1000);
    digitalWrite(D4, HIGH);
    state=LED_ON;
  }else if (state==LED_ON)
  {
    digitalWrite(D0, HIGH);
    delay(1000);
    digitalWrite(D0 ,LOW);
    state=LED_BUILT_IN;
  }
  
  
}

