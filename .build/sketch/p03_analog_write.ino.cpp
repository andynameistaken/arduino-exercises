#include <Arduino.h>
#line 1 "/Users/andy/Devel/Arduino/p03_analog_write/p03_analog_write.ino"
int analogPin = 6;

#line 3 "/Users/andy/Devel/Arduino/p03_analog_write/p03_analog_write.ino"
void setup();
#line 8 "/Users/andy/Devel/Arduino/p03_analog_write/p03_analog_write.ino"
void loop();
#line 3 "/Users/andy/Devel/Arduino/p03_analog_write/p03_analog_write.ino"
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

