#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int voltageP = A0; 
int voltageN = A1;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init()
  lcd.backlight();

  pinMode (voltageP, INPUT);
  pinMode (voltageN, INPUT);


  lcd.setCursor(0, 0);
  lcd.print("STARTING");
  delay(500);

}

void loop() {


  int voltage_measure = analogRead(voltageP) - analogRead(voltageN); 
  float voltage_output = voltage_measure * 5.0 / 1023; 

  lcd.setCursor(0, 0);
  lcd.print("Volt Diff: ");
  lcd.print(voltage_output);
}