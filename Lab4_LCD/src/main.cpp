#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Arduino.h>
LiquidCrystal_I2C lcd(0x27,16,2);  
float val;
const int BALLOON = 0;
int state ;

void setup()
{
  lcd.init();                      
  lcd.backlight();
  lcd.clear();
  pinMode(A0,INPUT);
  state = BALLOON;
}

void loop()
{
  if (state==BALLOON)
  {
    val = analogRead(A0);
    val = (val/1023.0)*3.3;
    lcd.setCursor(0,0);
    lcd.print(val);
    lcd.print(" V.");
    delay(1000);
    state = BALLOON;
  }
  
  
}