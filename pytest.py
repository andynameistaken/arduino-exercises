def decimalToBinary(decimal, led_array, size):
    if decimal < size ** 2:
        while decimal > 0 and size > 0:
            if decimal % 2 == 1:
                size -= 1
                led_array[size] = 1
            else:
                size -= 1
                led_array[size] = "x"
            decimal = decimal / 2   

leds = [0, 0 , 0 ,0]

decimalToBinary(3, leds, 4)
print(leds)
