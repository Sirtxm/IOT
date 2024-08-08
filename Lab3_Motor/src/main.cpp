#include <Arduino.h>

const int CHECK_STATE = 0;
int state ;
int val ;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  state = CHECK_STATE ;
}

void loop() {
  if(state == CHECK_STATE){
    val = analogRead(A0);
    val = map(val, 0, 1023, 0 , 255);
    analogWrite(D1,0);
    analogWrite(D2, val);
    
    state = CHECK_STATE ;
  }
}
