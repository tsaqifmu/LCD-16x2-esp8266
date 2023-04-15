//INGAT-INGAT
//UNTUK PIN SCL -> D1
//UNTUK PIN SDA -> D2
//INPUT POWER LCD 5V
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  // Kalau gagal ganti 0x3F ke 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init(); // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();  //==> ngasih backlight hijau
  //lcd.noBacklight();  //==> menghilangkan backlight hijau
  lcd.setCursor(0,0);
  lcd.print("Ciee... Cieeee");
  
  
  //lcd.setCursor(0,1);
  //lcd.print("Aku Sayang Ayah");
}


void loop()
{
  lcd.scrollDisplayLeft();  //buat scroll text
  delay(500);
}
