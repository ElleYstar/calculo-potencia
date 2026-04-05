#include <stdio.h>
#include <math.h>

void powAPC(int X, int Y) {
    double potencia = pow(X, Y);

    printf("%.1f", potencia);
    
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    powAPC(X, Y);
    return 0;
}