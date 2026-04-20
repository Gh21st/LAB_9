#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int voltage_out = A0; 
int voltage_inP = A4; 
int voltage_inN = A5; 


void setup() {
  lcd.init();
  lcd.backlight();

  pinMode (voltage_out, OUTPUT);

  pinMode (voltage_inP, INPUT);

  pinMode (voltage_inN, INPUT);
}

void loop() {

  
  int voltage_difference = analogRead(voltage_inP) - analogRead(voltage_inN); 

  if ()

}