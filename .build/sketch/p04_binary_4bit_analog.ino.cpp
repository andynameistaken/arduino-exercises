#include <Arduino.h>
#line 1 "/Users/andy/Devel/Arduino/p04_binary_4bit_analog/p04_binary_4bit_analog.ino"
int analogPins[] = {6, 9, 10, 11};

#line 3 "/Users/andy/Devel/Arduino/p04_binary_4bit_analog/p04_binary_4bit_analog.ino"
void setPinsOut(int pinArr[], int size);
#line 9 "/Users/andy/Devel/Arduino/p04_binary_4bit_analog/p04_binary_4bit_analog.ino"
void analogStepUp(int pin, double delayMs);
#line 17 "/Users/andy/Devel/Arduino/p04_binary_4bit_analog/p04_binary_4bit_analog.ino"
void analogStepDown(int pin, double delayMs);
#line 25 "/Users/andy/Devel/Arduino/p04_binary_4bit_analog/p04_binary_4bit_analog.ino"
void decimalToBinaryLED(int decimalNum, int ledArray[], int size);
#line 46 "/Users/andy/Devel/Arduino/p04_binary_4bit_analog/p04_binary_4bit_analog.ino"
void setup();
#line 52 "/Users/andy/Devel/Arduino/p04_binary_4bit_analog/p04_binary_4bit_analog.ino"
void loop();
#line 3 "/Users/andy/Devel/Arduino/p04_binary_4bit_analog/p04_binary_4bit_analog.ino"
void setPinsOut(int pinArr[], int size) {
    for (byte i = 0; i < size ; i++) {
        pinMode(pinArr[i], OUTPUT);
    }
}

void analogStepUp(int pin, double delayMs) {
    for (int i = 0; i < 256; i++)
    {
        analogWrite(pin, i);
        delay(delayMs);
    }   
}

void analogStepDown(int pin, double delayMs) {
    for (int i = 255; i >= 0; i--)
    {
        analogWrite(pin, i);
        delay(delayMs);
    }   
}

void decimalToBinaryLED(int decimalNum, int ledArray[], int size) {
    Serial.println("in decimalToBinary");
    if (decimalNum < pow(size ,2)) {
        while (size > 0) {
            if (decimalNum % 2 == 1) {
                /* analogStepUp(ledArray[--size], 5); */
                analogWrite(ledArray[--size], 255);
                Serial.print("size in step up");
                Serial.println(size);
            }
            else {
                /* analogStepDown(ledArray[--size], 5); */
                analogWrite(ledArray[--size], 0);
                Serial.print("size in step down");
                Serial.println(size);

            }
        }
    }
}

void setup() {
    setPinsOut(analogPins, 4);
    Serial.begin(115200);

}

void loop() {
    decimalToBinaryLED(1, analogPins, 4);
}
