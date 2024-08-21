#include <Arduino.h>

const int pinFire = A0;
const int pinRelay = 7;

void setup() {
  Serial.begin(9600);  // Kh?i t?o giao ti?p qua c?ng Serial v?i t?c d? 9600
  pinMode(pinFire, INPUT);
  pinMode(pinRelay, OUTPUT);
}

void loop() {
  int value = digitalRead(pinFire);  // Ð?c giá tr? t? chân A0 - c?m bi?n l?a
                                     // (giá tr? luôn n?m trong kho?ng 0-1023)

  Serial.println(value);  // In ra giá tr? v?a d?c
  if (value == LOW) {
    Serial.println("Có l?a");
    digitalWrite(pinRelay, HIGH);
    delay(5000);
  } else {
    digitalWrite(pinRelay, LOW);
  }

  //-----------------------------------------------------
  delay(50);
}

