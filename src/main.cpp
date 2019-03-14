#include <LiquidCrystal_I2C.h>
#include "Arduino.h"
#include "DHT.h"

LiquidCrystal_I2C lcd(0x27,16,2); 


void setup()
{
  lcd.init();                      
  lcd.backlight();
  Serial.begin(9600);
}

void loop()
{
  // when characters arrive over the serial port...
  if (Serial.available()) {
    // wait a bit for the entire message to arrive
    delay(100);
    // clear the screen
    lcd.clear();
    // read all the available characters
    while (Serial.available() > 0) {
      // display each character to the LCD
      lcd.write(Serial.read());
    }
  }
}