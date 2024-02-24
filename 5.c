#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

int main() {
    int array[] = {1, 3, 5, 7, 9, 9, 8, 6, 4, 2, 4 };
    int dimensiune = sizeof(array) / sizeof(array[0]);
    int valoareMaxima;
    int i;

    bubbleSort(array, dimensiune);

    printf("Array-ul sortat: ");
    for(i = 0; i < dimensiune; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


    valoareMaxima = array[dimensiune - 1];

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