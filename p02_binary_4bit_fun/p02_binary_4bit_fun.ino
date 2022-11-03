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

void decimalToLED(int decimal, int bits, int ledArray[]) {
    if (decimal < pow(2, bits)) {
        int i = --bits;
        while (decimal > 0) {
            if (decimal % 2 == 1) {
                digitalWrite(ledArray[i], HIGH);
            } 
            else {
                digitalWrite(ledArray[i], LOW);
            }
            decimal = decimal / 2;
            i--;

        }
    }
    else {
        for(int i = 0; i < 4; i++) {
            setPinsHigh(ledArray, bits);
            delay(1000);
            setPinsLow(ledArray, bits);
            delay(1000);
        }
    }
}
int pinsArr[] = {8, 7, 4, 2};

void setup()
{
    Serial.begin(115200);
    setPinsOut(pinsArr, 4);
}


void loop()
{

    for (int i = 0; i < 16; i++) {
        decimalToLED(i, 4, pinsArr);
        delay(1000);
        setPinsLow(pinsArr, 4);
        delay(1000);
    }
    // decimalToLED(7, 4, pinsArr);
}


