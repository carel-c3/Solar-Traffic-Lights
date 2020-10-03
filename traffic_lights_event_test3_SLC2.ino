//Comms Test - SLC Code

#include <Wire.h>

void setup()
{
  Wire.begin(4);                // join i2c bus with address #4
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output
  
  pinMode(13, OUTPUT);//Setup Red LED
  pinMode(12, OUTPUT);//Setup Yellow LED
  pinMode(11, OUTPUT);//Setup Greeg LED
  
}

void loop()
{
  delay(100);
}

// function that executes whenever data is received from master
// this function is registered as an event, see setup()

void receiveEvent(int howMany)
{

  int x = Wire.read();    // receive byte as an integer
  Serial.println(x);         // print the integer
  
  
  switch (x) {
  case 1:
    //Control Lights for Event1
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    break;
    
  case 2:
    //Control Lights for Event2
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    break;
    
   case 3:
    //Control Lights for Event3
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    break; 
   
    case 4:
    //Control Lights for Event4
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    break;
    
  	case 5:
    //Control Lights for Event5
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    break;
    
   case 6:
    //Control Lights for Event6
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    break; 
       
  default:
    // if nothing else matches, do the default
    // default is optional
    break;
}
  
  
  
}
