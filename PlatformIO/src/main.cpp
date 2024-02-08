#include <Arduino.h>


int input1 = 2; // forward
int input2 = 4; // backward
int pwm = A1; // speed


void setup() {
  Serial.begin(9600);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);

  
}

void loop() {
   digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);
  analogWrite(input2, 255);
  delay(2000); //1150 is 180 deg
  digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
  analogWrite(input1, 255);
  delay(2000); //2k is 360 deg
}


