#include <stdio.h>

int main() {

int array[] = {1, 3, 5, 7, 9, 9, 8, 6, 4, 2, 4 };
int dimensiune = sizeof(array) / sizeof(array[0]);
int valoareMaxima = array[0];
int i;

    for(i = 1; i < dimensiune; i++) {
        if(array[i] > valoareMaxima) {
            valoareMaxima = array[i];
        }
    }

    printf("Valoarea maxima din array este: %d\n", valoareMaxima);
    printf("Apare pe pozitiile: ");

    for(i = 0; i < dimensiune; i++) {
        if(array[i] == valoareMaxima) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

