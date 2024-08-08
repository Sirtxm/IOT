#include <Arduino.h>

const int PRESS_ON = 0;
const int PRESS_OFF = 1;
int state;


void setup() {
  Serial.begin(115200);
  state = PRESS_ON;
  pinMode(D6, INPUT);
  pinMode(D1, OUTPUT);
}

void loop() {
  if(state==PRESS_ON){
    if(digitalRead(D6)==0){
    Serial.println("button press on");
    digitalWrite(D1, HIGH);
    state = PRESS_OFF;
    }
  }
  else if (state==PRESS_OFF)
  {
    if(digitalRead(D6)==0){
      Serial.println("button press off");
      digitalWrite(D1,LOW);
      state = PRESS_ON;
    } 
  }
  
}

