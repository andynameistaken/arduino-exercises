# 1 "/Users/andy/Devel/Arduino/p04_binary_4bit_analog/p04_binary_4bit_analog.ino"
int analogPins[] = {6, 9, 10, 11};

void setPinsOut(int pinArr[], int size) {
    for (byte i = 0; i < size ; i++) {
        pinMode(pinArr[i], 0x1);
    }
}

void analogStepUp(int pin, double delayMs) {
    for (int i = 0; i < 256; i++)
    {
        analogWrite(pin, i);
        delay(delayMs);
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
