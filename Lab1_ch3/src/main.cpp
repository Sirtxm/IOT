#include <Arduino.h>

const int EXTERNAL_LED_ONE_ON = 1;
const int EXTERNAL_LED_TWO_ON = 2;
const int EXTERNAL_LED_THREE_ON = 3;
const int EXTERNAL_LED_FOUR_ON = 4;
int state;

void setup() {
  Serial.begin(115200);
   pinMode (D5, OUTPUT);
   pinMode (D2, OUTPUT);
   pinMode (D3, OUTPUT);
   pinMode (D4, OUTPUT);
  state = EXTERNAL_LED_ONE_ON;
}

void loop() {
  if (state==EXTERNAL_LED_ONE_ON)
  {
    digitalWrite(D5, 1);
    delay(1000);
    digitalWrite(D5, 0);
    // delay(1000);
    
    state=EXTERNAL_LED_TWO_ON;
  }
  else if (state==EXTERNAL_LED_TWO_ON)
  {
    digitalWrite(D2, HIGH);
    delay(1000);
    digitalWrite(D2 ,LOW);
    // delay(1000);
    state=EXTERNAL_LED_THREE_ON;
  }
  else if (state==EXTERNAL_LED_THREE_ON)
  {
    digitalWrite(D3, 1);
    delay(1000);
    digitalWrite(D3, 0);
    // delay(1000);
    
    state=EXTERNAL_LED_FOUR_ON;
  }
  else if (state==EXTERNAL_LED_FOUR_ON)
  {
    digitalWrite(D4, HIGH);
    delay(1000);
    digitalWrite(D4 ,LOW);
    
    state=EXTERNAL_LED_ONE_ON;
  }
  
  
}

