#include <Arduino.h>

const int pinFire = A0;
const int pinRelay = 7;

void setup() {
  Serial.begin(9600);  // Kh?i t?o giao ti?p qua c?ng Serial v?i t?c d? 9600
  pinMode(pinFire, INPUT);
  pinMode(pinRelay, OUTPUT);
}

void loop() {
  int value = digitalRead(pinFire);  // �?c gi� tr? t? ch�n A0 - c?m bi?n l?a
                                     // (gi� tr? lu�n n?m trong kho?ng 0-1023)

  Serial.println(value);  // In ra gi� tr? v?a d?c
  if (value == LOW) {
    Serial.println("C� l?a");
    digitalWrite(pinRelay, HIGH);
    delay(5000);
  } else {
    digitalWrite(pinRelay, LOW);
  }

  //-----------------------------------------------------
  delay(50);
}

