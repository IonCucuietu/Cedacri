#include <stdio.h>

int esteVocala(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main() {
    char sir[100];
    int numarVocale = 0;
    int i = 0;

    printf("Introduceti un sir de caractere: ");
    scanf("%99[^\n]", sir);

    while(sir[i] != '\0') {
        if(esteVocala(sir[i])) {
            numarVocale++;
        }
        i++;
    }

    printf("Numarul de vocale din sirul dat este: %d\n", numarVocale);

    return 0;
}