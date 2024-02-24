#include <stdio.h>

int factorial(int n) {
    int rezultat = 1;
    for(int i = 1; i <= n; i++) {
        rezultat *= i;
    }
    return rezultat;
}

int main() {
    int numar;
    printf("Introduceti un numar: ");
    scanf("%d", &numar);
    printf("Factorialul lui %d este %ld\n", numar, factorial((numar)));
    return 0;
}
