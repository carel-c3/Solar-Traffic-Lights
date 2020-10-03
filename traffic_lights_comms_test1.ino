//Comms test - MEC Code

#include <Wire.h>

void setup()
{
  Wire.begin(); // join i2c bus (address optional for master)
}

byte x = 0;

void loop()
{
  //Event1
  x = 1;
  Wire.beginTransmission(4); // broadcast to device #4
  Wire.write(x);              // sends one byte  
  Wire.endTransmission();    // stop transmitting
  delay(10000);
  
  //Event2
  x = 2;
  Wire.beginTransmission(4); // broadcast to device #4
  Wire.write(x);              // sends one byte  
  Wire.endTransmission();    // stop transmitting
  delay(2000);
  
  //Event3
  x = 3;
  Wire.beginTransmission(4); // broadcast to device #4
  Wire.write(x);              // sends one byte  
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  
  //Event4
  x = 4;
  Wire.beginTransmission(4); // broadcast to device #4
  Wire.write(x);              // sends one byte  
  Wire.endTransmission();    // stop transmitting
  delay(10000);
  
  //Event5
  x = 5;
  Wire.beginTransmission(4); // broadcast to device #4
  Wire.write(x);              // sends one byte  
  Wire.endTransmission();    // stop transmitting
  delay(2000);
  
  //Event6
  x = 6;
  Wire.beginTransmission(4); // broadcast to device #4
  Wire.write(x);              // sends one byte  
  Wire.endTransmission();    // stop transmitting
  delay(1000);
  
}
