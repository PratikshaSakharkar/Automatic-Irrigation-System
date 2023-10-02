#include <EEPROM.h>

#include <Stepper.h>

#include <ArduinoRobotMotorBoard.h>
#include <EasyTransfer2.h>
#include <LineFollow.h>
#include <Multiplexer.h>

#define flexpin A5

void setup()

{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int flexvalue = analogRead(flexpin);
  Serial.print("Sensor:  ");
  Serial.println(flexvalue);
}
