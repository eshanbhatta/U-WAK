#include <Wire.h>
//motor A
const int inputPin1  = 10;    // Pin 15 of L293D IC
const int inputPin2  = 11;    // Pin 10 of L293D IC
//Motor B
const int inputPin3  = 9;   // Pin  9 of L293D IC
const int inputPin4  = 8;   // Pin  8 of L293D IC
//Motor C
const int inputpin5 = 6;  // Pin 6 of L293D 
const int inputpin6 = 7;  // Pin  7 of L293D 
void setup() 
{
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
    pinMode(inputPin3, OUTPUT);
    pinMode(inputPin4, OUTPUT);  
}

void loop() 
{
    
    digitalWrite(inputPin1, LOW);
    digitalWrite(inputPin2, HIGH);
    digitalWrite(inputPin3, HIGH);
    digitalWrite(inputPin4, LOW);  
}
