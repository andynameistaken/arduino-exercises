#include "utils.h"

void setPinsOut(int pinArr[], int size) {
    for (byte i = 0; i < size ; i++) {
        pinMode(pinArr[i], OUTPUT);
    }
}

void setPinsHigh(int pinArr[], int size) {
    for (byte i = 0; i < size ; i++) {
        digitalWrite(pinArr[i], HIGH);
    }
}

void setPinsLow(int pinArr[], int size) {
    for (byte i = 0; i < size ; i++) {
        digitalWrite(pinArr[i], LOW);
    }
}