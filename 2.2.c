#include <stdio.h>
#include <math.h>

double calculeazaAriaTriunghiului(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    double aria = sqrt(s * (s - a) * (s - b) * (s - c));
    return aria;
}

int main() {
    double a, b, c;

    printf("Introduceti lungimile celor trei laturi ale triunghiului:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    double aria = calculeazaAriaTriunghiului(a, b, c);
    printf("Aria triunghiului este: %.2lf\n", aria);

    return 0;
}

