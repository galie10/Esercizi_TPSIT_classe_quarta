#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 5

void caricaVettore(int v[],int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("inserire nella cella [%d] = ", k);
        scanf("%d", v + k);
    }
    printf("\n");
}

void stampaVettore(char stringa[], int c[], int i) {
    int k;

    printf("%s", stringa);
    for(k = 0; k < i; k++) {
        printf("   %d", *(c + k));
    }
    printf("\n");
}

void bubbleSort(int vett[], int n) {
    int k, i, a;

    for(i = n - 1; i > 0; i--) {
        for(k = 0; k < i; k++) {
            if(*(vett + k) > *(vett + k + 1)) {
                a = *(vett + k + 1);
                *(vett + k + 1) = *(vett + k);
                *(vett + k) = a;
            }
        }
    }
}

int main() {

    int vett[DIM];

    caricaVettore(vett,DIM);

    stampaVettore("vettore inserito: ", vett, DIM);

    bubbleSort(vett, DIM);

    stampaVettore("vettore ordinato: ", vett, DIM);

    printf("\n");
    return 0;
}
