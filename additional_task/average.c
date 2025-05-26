#include <stdio.h>

double average(int a, int b) {
    return (a + b) / 2.0;
}

int main() {
    int x = 10, y = 20;
    double result = average(x, y);
    printf("Average: %f\n", result);
    return 0;
}