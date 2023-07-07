#include <stdio.h>

double convertToCelsius(double temperatureInFahrenheit) {
    double celsius = (temperatureInFahrenheit - 32) * 5 / 9;
    return celsius;
}

double convertToFahrenheit(double temperatureInCelsius) {
    double fahrenheit = (temperatureInCelsius * 9 / 5) + 32;
    return fahrenheit;
}

int main() {
    double temperature;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &temperature);

    double celsius = convertToCelsius(temperature);
    printf("Temperature in Celsius: %.2lf\n", celsius);

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &temperature);

    double fahrenheit = convertToFahrenheit(temperature);
    printf("Temperature in Fahrenheit: %.2lf\n", fahrenheit);

    return 0;
}
