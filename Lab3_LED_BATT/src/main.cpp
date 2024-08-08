#include <Arduino.h>
const int CHECK = 0;
const int LED_LOW = 1;
const int LED_ONE_ON = 2;
const int LED_TWO_ON = 3;
const int LED_THREE_ON = 4;
int state ;
int val ;

void setup() {
  Serial.begin(9600);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(A0, INPUT);
  state = CHECK;
}

void loop() {
  if (state == CHECK)
  {
    val = analogRead(A0);
    val = map(val,0,1023,0,100);
    Serial.print("Batt : ");
    Serial.print(val);
    Serial.println("%");
    delay(1000);
    if(val<25){
      
      state = LED_LOW;
    }
    else if (val>=25&&val<50)
    {
      state = LED_ONE_ON;
    }else if (val>=50&&val<75)
    {
      state =LED_TWO_ON;
    }else if (val>=75)
    {
      state = LED_THREE_ON;
    }else
      state = CHECK;
  }
  else if (state == LED_LOW)
  {
    analogWrite(D3,255);
    delay(1000);
    analogWrite(D3,0);
    delay(1000);
    state = CHECK ;
  }
  
  else if(state == LED_ONE_ON){
    analogWrite(D3,255);
    analogWrite(D2, 0);
    analogWrite(D1, 0);
    state = CHECK;
  }else if (state == LED_TWO_ON)
  {
    
    analogWrite(D3,255);
    analogWrite(D2,255);
    analogWrite(D1,0);
    state = CHECK;

  }else if (state == LED_THREE_ON)
  {
    analogWrite(D3,255);
    analogWrite(D2,255);
    analogWrite(D1,255);
    state = CHECK;
  }
}

