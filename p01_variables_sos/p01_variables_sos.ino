int pin = 13;
int longDelay = 1000;
int shortDelay = 100;

void setup()
{
    pinMode(13, OUTPUT);
}

void loop()
{
    // SOS : S = 3 short blinks, O = 3 long blinks, S = 3 short blinks
    digitalWrite(pin, HIGH);
    delay(shortDelay);
    digitalWrite(pin, LOW);
    // delay(shortDelay);

    // digitalWrite(pin, HIGH);
    // delay(shortDelay);

    // digitalWrite(pin, LOW);
    // delay(shortDelay);
    // digitalWrite(pin, HIGH);
    // delay(shortDelay);
    // digitalWrite(pin, LOW);
    // delay(shortDelay);
    // digitalWrite(pin, HIGH);
    // delay(shortDelay);
    // digitalWrite(pin, LOW);
    // delay(longDelay);

}
