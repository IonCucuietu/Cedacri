#include <stdio.h>

#define MAX_SIZE 100

void citesteElemente(int arr[], int *n) {
    printf("Introduceti numarul de elemente (maxim %d): ", MAX_SIZE);
    scanf("%d", n);

    if (*n > MAX_SIZE)
    {
        *n = MAX_SIZE;
        printf("Numarul de elemente a fost limitat la %d.\n", MAX_SIZE);
    }

    for (int i = 0; i < *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void afiseazaElemente(const int arr[], int n) {
    printf("Elementele tabloului sunt:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insereazaLaCapat(int arr[], int *n, int val) {
    if (*n < MAX_SIZE) {
        arr[*n] = val;
        (*n)++;
    } else {
        printf("Tabloul este plin. Nu se poate insera un nou element.\n");
    }
}

void insereazaLaInceput(int arr[], int *n, int val) {
    if (*n < MAX_SIZE) {
        for (int i = *n; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = val;
        (*n)++;
    } else {
        printf("Tabloul este plin. Nu se poate insera un nou element.\n");
    }
}

int main() {
    int arr[MAX_SIZE];
    int n;

    citesteElemente(arr, &n);
    afiseazaElemente(arr, n);

    int val;
    printf("Introduceti un element pentru a fi adaugat la capatul tabloului: ");
    scanf("%d", &val);
    insereazaLaCapat(arr, &n, val);
    afiseazaElemente(arr, n);

    printf("Introduceti un element pentru a fi adaugat la inceputul tabloului: ");
    scanf("%d", &val);
    insereazaLaInceput(arr, &n, val);
    afiseazaElemente(arr, n);

    return 0;
}
