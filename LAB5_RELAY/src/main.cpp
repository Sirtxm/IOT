#include <Arduino.h>
#include <SPI.h>
#include <MFRC522.h>
#include <Wire.h> 

#define RST_PIN D3
#define SS_PIN D8


MFRC522 mfrc522(SS_PIN, RST_PIN);
String rfid_in = ""; 
String dump_byte_array(byte *buffer, byte bufferSize);

const int CARD_WAIT = 0;
const int CARD_TOUCH = 1;
int state;

void setup() {
  pinMode(D4,OUTPUT);
  state = CARD_WAIT;
  Serial.begin(115200);
  SPI.begin();
  mfrc522.PCD_Init();
  mfrc522.PCD_DumpVersionToSerial();
}

void loop() {
  if (state == CARD_WAIT) {
    if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
      state = CARD_TOUCH;
    }
    delay(1000);
  } else if (state == CARD_TOUCH) {
    rfid_in = dump_byte_array(mfrc522.uid.uidByte, mfrc522.uid.size);
    if (rfid_in == " 0C F4 3E 22") {
      digitalWrite(D4,HIGH);
      Serial.print("Welcome: ");
      Serial.println(rfid_in);
      delay(1000);
      digitalWrite(D4,LOW);
    } else {
      Serial.print("Access Denied : ");
      Serial.println(rfid_in);
    }
    
    Serial.print("Card UID: ");
    Serial.println(rfid_in);
    state = CARD_WAIT;
  }
 }

String dump_byte_array(byte *buffer, byte bufferSize) {
  String content = "";
  for (byte i = 0; i < bufferSize; i++) {
    content.concat(String(buffer[i] < 0x10 ? " 0" : " "));
    content.concat(String(buffer[i], HEX));
  }
  content.toUpperCase();
  return content;
}
