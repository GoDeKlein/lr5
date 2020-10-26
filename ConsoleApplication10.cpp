#include <iostream>
#define _USE_MATH_DEFINES
#include "math.h"
#include "windows.h"
using namespace std;


int main()
{
    double a, b, x, y, z;
    printf("Input x: ");
    scanf_s("%lf", &x);
    printf("Input y: ");
    scanf_s("%lf", &y);
    printf("Input z: ");
    scanf_s("%lf", &z);
    a = ((2 * cos(x - (M_PI / 6))) / (1 / 2 + pow(sin(y), 2))) + cos(154 * M_PI / 180);
    b = 1 + (pow(z, 2) / (abs(3 - y) + pow(z, 2) / 5)) + pow(x - 5 * y, 1 / 3) + exp(2 * x - y);
    printf("Answer\n", &a);
    printf("a=%lf\n", a);
    printf("Answer\n", &b);
    printf("b=%lf\n", b);
}
