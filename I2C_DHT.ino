#include <LiquidCrystal_I2C.h>
#include "DHT.h"

#define DHTPIN 2     

#define DHTTYPE DHT22   

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27,20,4);

void setup() {
  lcd.init();
  lcd.backlight();

  dht.begin();
}

void loop() {
  delay(2000);

  lcd.clear();

  float h = dht.readHumidity();
  
  float t = dht.readTemperature();
  
  if (isnan(h) || isnan(t) || isnan(f)) {
    lcd.print(F("Failed to read from DHT sensor!"));
    return;
  }

  lcd.print(F("Humidity: "));
  lcd.print(h);

  lcd.setCursor(0, 1);

  lcd.print(F("Temp: C "));
  lcd.print(t);

}
