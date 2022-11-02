int analogPins[] = {6, 9, 10, 11};

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
    if (decimalNum < pow(size ,2)) {
        while (size > 0) {
            if (decimalNum % 2 == 1) {
                analogStepUp(--size)
            }
            else {
                analogStepDown(--size)
            }
        }
    }
}

void setup() {
    setPinsOut(analogPins, 4);
}

void loop() {
    for (int i = 0; i < 4; i++) {
        analogStepUp(analogPins[i], 3);
    }
    
}