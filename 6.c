#include <stdio.h>

int esteVocala(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

void inverseazaSir(char sir[]) {
    int lungime = 0;
    while (sir[lungime] != '\0') lungime++;

    for(int i = 0; i < lungime / 2; i++) {
        char temp = sir[i];
        sir[i] = sir[lungime - i - 1];
        sir[lungime - i - 1] = temp;
    }
}

int main() {
    char sir[100];
    int numarVocale = 0;
    int i = 0;

    printf("Introduceti un sir de caractere: ");
    scanf("%99[^\n]", sir);
    getchar();

    inverseazaSir(sir);

    printf("Sirul inversat: %s\n", sir);

    while(sir[i] != '\0') {
        if(esteVocala(sir[i])) {
            numarVocale++;
        }
        i++;
    }

    printf("Numarul de vocale din sirul inversat este: %d\n", numarVocale);

    return 0;
}