#include <Arduino.h>

int task1Count = 0;
int task2Count = 0;
const int touchPin = 4;  
const int ledPin = 13;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

   // Initialize touch sensor
  touchAttachInterrupt(touchPin, touchHandler, 40);

  // Initialize LED pin
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); // Initial state: LED off
}

void loop() {
  // Task 1
  void touchHandler() {
  // To Toggle the LED state
  digitalWrite(ledPin, !digitalRead(ledPin));

  // Print a message to Serial Monitor
  Serial.println("LED ON!");

  // Task 2
  if (task2Count< 1000*millis()) {
    Serial.println("This is task 2");
    task2Count++;
  }

  
  
}
