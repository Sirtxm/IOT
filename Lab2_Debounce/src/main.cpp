#include <Arduino.h>

IRAM_ATTR void handleInterruptPlus();
IRAM_ATTR void handleInterruptMinuse();
const int IDLE = 0;
const int PRESS_PLUS = 1;
const int PRESS_MINUSE = 2;
int flag_plus = false;
int flag_minuse = false;
int state;
int count = 0;

void setup() { 
  Serial.begin(115200);
	state = IDLE;
  // Plus
	pinMode(D6, INPUT); 
	attachInterrupt(digitalPinToInterrupt(D6), handleInterruptPlus, RISING); 
  // Minuse
  pinMode(D5, INPUT); 
	attachInterrupt(digitalPinToInterrupt(D5), handleInterruptMinuse, RISING);
} 
void loop() { 
	if (state == IDLE){
      if (flag_plus == true){
        flag_plus = false;
        delay(50);
        if (digitalRead(D6)==1)
        {
          state = PRESS_PLUS;
        }
        
      }else if (flag_minuse == true)
      {
        flag_minuse = false;
         delay(50);
        if (digitalRead(D5)==1)
        {
           state = PRESS_MINUSE;
        }
      }
      
	}

  else if (state == PRESS_PLUS){
    count ++;
    if (count>9){
      count=0;
    }
    Serial.println(count);
    state = IDLE;
	}
  
  else if (state == PRESS_MINUSE)
  {
    count--;
    if (count<0)
    {
      count=9;
    }
    Serial.println(count);
    state=IDLE;
  }
  }


IRAM_ATTR void handleInterruptPlus() { 
	flag_plus = true;
}


IRAM_ATTR void handleInterruptMinuse() { 
	flag_minuse = true;
}
