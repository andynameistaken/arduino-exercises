#include "../utils.h"

int analogPin = 6;

void setup()
{   
    pinMode(analogPin, OUTPUT);
}

void loop()
{
    for (int i = 0; i < 256; i++)
    {   
        // delay(10);
        analogWrite(analogPin, i);
        delay(10);
    }

    for (int i = 255; i >= 0; i--)
    {
        // delay(10);
        analogWrite(analogPin, i);
        delay(10);
    }
    
    // analogWrite(analogPin, 0);
    // delay(100);
    // analogWrite(analogPin, 255);
    // delay(100);
    
}
