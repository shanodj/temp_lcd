#include <LiquidCrystal.h>
#include <Wire.h>
#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

LiquidCrystal lcd(9, 8, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);

  mlx.begin();  
}

void loop() {
    delay(500);
    lcd.setCursor(0,0);
    lcd.print("Amb = "); lcd.print(mlx.readAmbientTempC());lcd.print("*C");
    lcd.setCursor(0,1);
    lcd.print("Obj = "); lcd.print(mlx.readObjectTempC()); lcd.print("*C");
}

