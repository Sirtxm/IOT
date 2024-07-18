#include <Arduino.h>

const int ONE = 1;
const int TWO = 2;
const int THREE = 3;
const int FOUR = 4;
const int FIVE = 5;
const int SIX = 6;
const int SEVEN = 7;
const int EIGHT = 8;
const int NINE = 9;
const int TEN = 10;
int state;

void setup() {
  Serial.begin(115200);
  state = 1;
}

void loop() {
  if(state==ONE){
    Serial.println("1");
  }else if(state==TWO){
    Serial.println("2");
  }
  else if(state==THREE){
    Serial.println("3");
  }else if(state==FOUR){
    Serial.println("4");
  }
  else if(state==FIVE){
    Serial.println("5");
  }else if(state==SIX){
    Serial.println("6");
  }
  else if(state==SEVEN){
    Serial.println("7");
  }else if(state==EIGHT){
    Serial.println("8");
  }
  else if(state==NINE){
    Serial.println("9");
  }else if(state==TEN){
    Serial.println("10");
  }
}

