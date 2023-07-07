#include <stdio.h>
#include <math.h>

double convertToSquare(double length) {
    double square = length * length;
    return square;
}

double convertToRectangle(double length, double width) {
    double rectangle = length * width;
    return rectangle;
}

double convertToCircle(double radius) {
    double circle = 3.14 * radius * radius;
    return circle;
}

int main() {
    double length, width, radius;

    printf("Enter the length of a square: ");
    scanf("%lf", &length);
    double squareArea = convertToSquare(length);
    printf("Area of the square: %.2lf\n", squareArea);

    printf("Enter the length and width of a rectangle: ");
    scanf("%lf %lf", &length, &width);
    double rectangleArea = convertToRectangle(length, width);
    printf("Area of the rectangle: %.2lf\n", rectangleArea);

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);
    double circleArea = convertToCircle(radius);
    printf("Area of the circle: %.2lf\n", circleArea);

    return 0;
}
