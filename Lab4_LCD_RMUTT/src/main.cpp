#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
 
 
const int R_MOVE = 0;
const int M_MOVE = 1;
const int U_MOVE = 2;
const int T1_MOVE = 3;
const int T2_MOVE = 4;
const int CLEAR_MOVE = 5;
int state;
int rowR=0,columnR=0,columnM=0,rowM=1,rowU=2, columnU=0, rowT1=3, columnT1=0, rowT2=4, columnT2=0;
 
LiquidCrystal_I2C lcd(0x27,16,2);  
 
void setup()
{
  state = R_MOVE;
  Serial.begin(115200);
 
  lcd.init();    
  lcd.clear();    
  lcd.backlight();
}
 
void loop()
{
 
  if(state == R_MOVE)
  {
 
    if(rowR==16)
    {
      rowR=0;
      columnR++;
    }
    if (columnR == 2)
    {
      columnR=0;
      rowR=0;
    }
   
    lcd.setCursor(rowR,columnR);
    lcd.print("R");
    rowR++;
    state = M_MOVE;
  }
 
  if(state == M_MOVE)
  {
   
    if(rowM==16)
    {
      rowM=0;
      columnM++;
    }
    if (columnM == 2)
    {
      columnM=0;
      rowM=0;
    }
 
    lcd.setCursor(rowM,columnM);
    lcd.print("M");
    rowM++;
    state = U_MOVE;
  }
 
  if(state == U_MOVE)
  {
   
    if(rowU==16)
    {
      rowU=0;
      columnU++;
    }
    if (columnU == 2)
    {
      columnU=0;
      rowU=0;
    }
 
    lcd.setCursor(rowU,columnU);
    lcd.print("U");
    rowU++;
    state = T1_MOVE;
  }
 
  if(state == T1_MOVE)
  {
   
    if(rowT1==16)
    {
      rowT1=0;
      columnT1++;
    }
    if (columnT1 == 2)
    {
      columnT1=0;
      rowT1=0;
    }
 
    lcd.setCursor(rowT1,columnT1);
    lcd.print("T");
    rowT1++;
    state = T2_MOVE;
  }
  if(state == T2_MOVE)
  {
   
    if(rowT2==16)
    {
      rowT2=0;
      columnT2++;
    }
    if (columnT2 == 2)
    {
      columnT2=0;
      rowT2=0;
    }
 
    lcd.setCursor(rowT2,columnT2);
    lcd.print("T");
    rowT2++;
    state = CLEAR_MOVE;
  }
 
 
  if(state == CLEAR_MOVE)
  {
    delay(500);
    lcd.clear();
    state = R_MOVE;
  }
 
 
   
}