#include <Arduino.h>

const int LED_ON = 1;
const int LED_OFF = 2;
int state;

void setup() {
  Serial.begin(115200);
  pinMode(D1, OUTPUT);
  state = LED_ON;
}

void loop() {
if (state==LED_ON)
{
  digitalWrite(D1, HIGH);
  Serial.println("LED ON");
  delay(1000);
  state = LED_OFF;
}else if (state == LED_OFF)
{
  digitalWrite(D1, LOW);
   Serial.println("LED OFF");
  delay(1000);
  state = LED_ON;
}


}

