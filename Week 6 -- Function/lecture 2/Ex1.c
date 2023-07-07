#include <stdio.h>

double convertToCentimeters(double lengthInInches) {
    // 1 inch = 2.54 centimeters
    double centimeters = lengthInInches * 2.54;
    return centimeters;
}

double convertToInches(double lengthInCentimeters) {
    // 1 centimeter = 0.393701 inches
    double inches = lengthInCentimeters * 0.393701;
    return inches;
}

int main() {
    double length;

    printf("Enter length in inches: ");
    scanf("%lf", &length);

    double centimeters = convertToCentimeters(length);
    printf("Length in centimeters: %.2lf\n", centimeters);

    printf("Enter length in centimeters: ");
    scanf("%lf", &length);

    double inches = convertToInches(length);
    printf("Length in inches: %.2lf\n", inches);

    return 0;
}
