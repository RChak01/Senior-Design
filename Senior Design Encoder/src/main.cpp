#include <Arduino.h>
#include "Timer.h"

Timer timer;

int ChannelA = 33;
int ChannelB = 41;


int ChannelAValue = 0;
int ChannelBValue = 0;

void setup() {
  Serial.begin(9600);
  
}

void loop() {

//while (Serial.available()>0){

  ChannelAValue = digitalRead(ChannelA);
  int tempA = ChannelAValue;
  
  ChannelBValue = digitalRead(ChannelB);
  int tempB = ChannelBValue;
  timer.start();
  while(1){
    ChannelAValue = digitalRead(ChannelA);
    if (ChannelAValue != tempA){
      timer.stop();
      Serial.print("time elapsed ms: ");
      Serial.println(timer.read());
    }

  }

  // Serial.print("Channel A:");
  // Serial.println(ChannelAValue);
  // delay(500);
  // Serial.print("Channel B:");
  // Serial.println(ChannelBValue);
  // delay(500);


//}

}


