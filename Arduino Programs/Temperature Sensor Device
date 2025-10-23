#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

const int Thermistorpin = A0;
const float reference = 3.3;

Adafruit_7segment matrix = Adafruit_7segment();

void setup() {
  int power = A2; // A2 is power pin
  int gnd = A3; // A3 is ground pin
  analogReference(EXTERNAL);

  // configuring the pins
  pinMode(power,OUTPUT);
  pinMode(gnd,OUTPUT);
  digitalWrite(power,HIGH);
  digitalWrite(gnd,LOW);
  delay(10);

  matrix.begin(0x70); // init display via i2c
}

void loop(){
  int reading2 = analogRead(Thermistorpin);
  float reading_volts2 = (reading2 - 0.0)/(1023.0 - 0.0)*(reference - 0.0);
  float thermistor_resistance = (((reading_volts2 - 0.0)*(10000))/((3.3 - 0.0)-(reading_volts2 - 0.0)));
  float dtemp = (8571.6*(pow(thermistor_resistance,-0.632))); //insert function with resistance values here for Celcius readings
  // float dtemp2 = (); //insert function with resistance values here for Kelvin readings
  float dtemp2 = (dtemp + 273.15);
  delay(3000);



  matrix.print(abs(dtemp),2);//whats written
  delay(3000);
  // matrix.print(dtemp2,2); //measurement in Kelvin
  matrix.writeDisplay();//update display
  matrix.setBrightness(5);//control brightness

  matrix.clear();
  delay(3000);
  matrix.print(abs(dtemp2),2);
  matrix.writeDisplay();
  matrix.setBrightness(5);


}
