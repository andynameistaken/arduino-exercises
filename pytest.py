
# void decimalToBinaryLED(int decimalNum, int ledArray[], int size) {
#     Serial.println("in decimalToBinary");
#     if (decimalNum < pow(size ,2)) {
#         while (size > 0) {
#             if (decimalNum % 2 == 1) {
#                 /* analogStepUp(ledArray[--size], 5); */
#                 analogWrite(ledArray[--size], 255);
#                 Serial.print("size in step up");
#                 Serial.println(size);
#             }
#             else {
#                 /* analogStepDown(ledArray[--size], 5); */
#                 analogWrite(ledArray[--size], 0);
#                 Serial.print("size in step down");
#                 Serial.println(size);

#             }
#         }
#     }
# }
def decimalToBinary(decimal, led_array, size):
    if decimal < size ** 2:
        while decimal > 0 and size > 0:
            if decimal % 2 == 1:
                size -= 1
                led_array[size] = 1
            else:
                size -= 1
                led_array[size] = "x"
            decimal = decimal / 10   

leds = [0, 0 , 0 ,0]

decimalToBinary(2, leds, 4)
