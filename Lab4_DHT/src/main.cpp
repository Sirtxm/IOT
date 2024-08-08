#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Arduino.h>
#include <Adafruit_SHTC3.h>
#include <SPI.h>
LiquidCrystal_I2C lcd(0x27,16,2);  
Adafruit_SHTC3 shtc3 = Adafruit_SHTC3();
float val;
const int LCD = 0;
int state ;

void setup()
{
  shtc3.begin();
  lcd.init();                      
  lcd.backlight();
  lcd.clear();
  state = LCD;
}

void loop()
{
  if (state==LCD)
  {
    sensors_event_t humidity, temp;
    shtc3.getEvent(&humidity, &temp);
    lcd.setCursor(0,0);
    lcd.print("Temp : ");
    lcd.print(temp.temperature);
    lcd.print(" C");
    lcd.setCursor(0,1);
    lcd.print("Hum : ");
    lcd.print(humidity.relative_humidity);
    lcd.print(" %");
    delay(1000);
    state = LCD;
  }
  
  
}