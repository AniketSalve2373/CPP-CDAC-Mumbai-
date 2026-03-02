#include <stdio.h>

float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheitToCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {

    float celsius = 25.0;
    float fahrenheit = 98.0;

    float convertedF = celsiusToFahrenheit(celsius);
    float convertedC = fahrenheitToCelsius(fahrenheit);

    printf("Celsius to Fahrenheit:\n");
    printf("%.2f C = %.2f F\n", celsius, convertedF);

    printf("\nFahrenheit to Celsius:\n");
    printf("%.2f F = %.2f C\n", fahrenheit, convertedC);

    return 0;
}