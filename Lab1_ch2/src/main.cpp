#include <Arduino.h>

const int LED_BUILT_IN = 1;
const int LED_ON = 2;
int state;

void setup() {
  Serial.begin(115200);
   pinMode (D7, OUTPUT);
   pinMode (D4, OUTPUT);
  state = LED_BUILT_IN;
}

void loop() {
  if (state==LED_BUILT_IN)
  {
    Serial.println("LED_BUILT");
    for (int i = 0; i < 2; i++)
    {
      digitalWrite(D4, 0);
    delay(1000);
    digitalWrite(D4, 1);
    delay(1000);
    }
    state=LED_ON;
  }
  else if (state==LED_ON)
  {
    Serial.println("LED");
    digitalWrite(D7, HIGH);
    delay(1000);
    digitalWrite(D7 ,LOW);
    delay(1000);
    state=LED_BUILT_IN;
  }
  
  
}

