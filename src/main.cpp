#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <Ticker.h>  //Ticker Library
Ticker blinker;
#define LED 2

void changeState()
{
  digitalWrite(LED, !(digitalRead(LED)));  //Invert Current State of LED  
}

void setup()
{
  Serial.begin(115200);
  Serial.println("");
  pinMode(LED,OUTPUT);
  //Initialize Ticker every 0.5s
  blinker.attach(0.5, changeState); //Use <strong>attach_ms</strong> if you need time in ms
}

void loop()
{
}