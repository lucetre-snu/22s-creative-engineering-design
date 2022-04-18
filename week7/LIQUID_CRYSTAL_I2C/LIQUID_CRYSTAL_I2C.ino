#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
    lcd.init();
    lcd.init();
    // Print a message to the LCD.
    lcd.backlight();
    lcd.setCursor(2, 0);
    lcd.print("Hello, world!");
    lcd.setCursor(1, 1);
    lcd.print("This is test...");
}

void loop()
{
}