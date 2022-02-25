#include <stdio.h>
#include <stdlib.h>
/*
author: Galieti Marco
class: 4A Robotica
data:26/11/2021
-Es 1
Sia data una struttura dati dinamica di tipo lista semplicemente concatenata.
Ogni nodo della lista contiene un numero intero come valore.  Si scriva la funzione che, dato un vettore di
N numeri interi, restituisce la lista contenente gli N elementi del vettore;
l’elemento di indice 0 va in testa alla lista, ecc.
*/

typedef struct nodo {
    int val;
    struct nodo *next;
} Nodo;

typedef Nodo *lista;

int chiediDim() {
    int n;

    do {
        printf("\nInserisci la dimensione desiderata: ");
        scanf("%d", &n);
    } while(n < 0);

    return n;
}

Nodo crea(int n, int V[]) {
    Nodo testa;
    testa.val = V[0];
    testa.next = crea(n-1, &V[1]);
    return testa;
}

void stampaInverso(lista lis) {
      if (lis == NULL)
        return;
      stampaInverso (lis.next);
      printf ("%d\n", lis.val);
}

int main() {
    int n = chiediDim();
    int vett[n];

    for(int k = 0; k < *(vett+k+n); k++) {
        printf("\nInserisci un valore in posizione [%d]: ", k);
        scanf("%d", *(vett+k));
    }

    stampaInverso(crea(n, vett));

    printf("\n");
    return 0;
}
