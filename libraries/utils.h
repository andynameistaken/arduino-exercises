#ifdef __cplusplus
 extern "C" {
#endif

#ifndef UTILS_H
#define UTILS_H
#include <Arduino.h>

void setPinsOut(int pinArr[], int size);

void setPinsHigh(int pinArr[], int size); 
    
void setPinsLow(int pinArr[], int size);

void analogStepUp(int pint, double delayTime);

void analogStepDown(int pint, double delayTime);
#endif
#ifdef __cplusplus
}
#endif
