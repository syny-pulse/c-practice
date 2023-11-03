#include <stdio.h>
#include <math.h>
// √[s(s - a)(s - b)(s - c)]
// s = (a + b + c) / 2

int main() {
    double a, b, c, s;
    printf("Enter the lengths of the sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    // calculate semi-perimeter
    s = (a + b + c) / 2;
    // calculate area using Heron's formula
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is %.3lf\n", area);
    return 0;
}