#include <stdio.h>

int plus(int a, int b) {
    return a + b;
}

int main() {
    int sum = plus(1, 65);
    printf("%d\n", sum);
    return 1;
}

