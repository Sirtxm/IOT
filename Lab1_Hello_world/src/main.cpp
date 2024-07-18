#include <Arduino.h>

const int SEND_NAME = 1;
const int SEND_EMAIL = 2;
int state;

void setup() {
  Serial.begin(115200);
  state = SEND_NAME;
}

void loop() {
  if(state==SEND_NAME){
    Serial.println("Teeraphat Thongchern");
    delay(1000);
    state = SEND_EMAIL;
  }else if(state==SEND_EMAIL){
    Serial.println("1165104000518@mail.rmutt.ac.th");
    delay(1000);
    state = SEND_NAME;
  }
}

