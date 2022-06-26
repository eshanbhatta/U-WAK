#include <Wire.h>
int A = 0; 
//motor A
const int inputPin1  = 10;    // Pin 15 of L293D IC
const int inputPin2  = 11;    // Pin 10 of L293D IC
//Motor B
const int inputPin3  = 9;   // Pin  9 of L293D IC
const int inputPin4  = 8;   // Pin  8 of L293D IC
// switch 1
const int switch1 = 5; // pin 5 switch 1
void setup() 
{
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
    pinMode(inputPin3, OUTPUT);
    pinMode(inputPin4, OUTPUT);  
  
    pinMode(switch1, INPUT);
 
}

void loop() 
{
    A = digitalRead(switch1); // read input value
    if(A==HIGH)
      {
        digitalWrite(inputPin1, HIGH);
        digitalWrite(inputPin2, LOW);
        digitalWrite(inputPin3, HIGH);
        digitalWrite(inputPin4, LOW);  
      }  
     else
      {
        digitalWrite(inputPin1, LOW);
        digitalWrite(inputPin2, LOW);
        digitalWrite(inputPin3, LOW);
        digitalWrite(inputPin4, LOW);
      }

        
 }
