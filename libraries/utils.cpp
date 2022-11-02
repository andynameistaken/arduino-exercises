#include "utils.h"

void setPinsOut(int pinArr[], int size) {
    for (byte i = 0; i < size ; i++) {
        pinMode(pinArr[i], OUTPUT);
    }
}

void digitalOn(int pinArr[], int size) {
    for (byte i = 0; i < size ; i++) {
        digitalWrite(pinArr[i], HIGH);
    }
}

void digitalOff(int pinArr[], int size) {
    for (byte i = 0; i < size ; i++) {
        digitalWrite(pinArr[i], LOW);
    }
}

void analogStepUp(int pint, double delayTime) {
    for (int i = 0; i < 255; i++)
    {
        analogWrite(pint, i);
        delay(delayTime);
    }
    
}

void analogStepDown(int pint, double delayTime) {
    for (int i = 255; i >= 0; i--)
    {
        analogWrite(pint, i);
        delay(delayTime);
    }
}