#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(27, OUTPUT);
  pinMode(17, OUTPUT);
  digitalWrite(17, HIGH);
  delay(1000);
  digitalWrite(17, LOW);
  SerialUSB.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(27, HIGH);
  delay(200);
  digitalWrite(27, LOW);
  delay(200);
  SerialUSB.print(".");
}