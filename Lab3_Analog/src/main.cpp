#include <Arduino.h>
const int ROTATE_R = 0;
int state ;
float val ;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  state = ROTATE_R ;
  val = analogRead(A0);
}

void loop() {
  if (state==ROTATE_R)
  {
    val = analogRead(A0);
    val = (val/1023)*3.3;
    Serial.print("Voltage : ");
    Serial.print(val);
    Serial.println("V");
    delay(1000);
    state = ROTATE_R;
  }
  
}
