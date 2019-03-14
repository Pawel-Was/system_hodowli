#include <LiquidCrystal_I2C.h>
#include "Arduino.h"
#include "DHT.h"

LiquidCrystal_I2C lcd(0x27,16,2); 
DHT dht();


void setup()
{
  lcd.init();                      
  lcd.backlight();
  Serial.begin(9600);
}

void loop()
{
  //test ekranu
  if (Serial.available()) {
    delay(100);
    lcd.clear();
    while (Serial.available() > 0) {
      lcd.write(Serial.read());
    }
  }
}