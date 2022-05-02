#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
int counter = 0;

void setup()
{
    lcd.init();
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Hello, Son!");
}

void loop()
{
    delay(1000);
    lcd.setCursor(counter++, 1);
    lcd.print(counter % 10);
}