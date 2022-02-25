#include <stdio.h>
#include <stdlib.h>

/*Scrivere un programma che legga una sequenza di caratteri e li stampi in ordine inverso. Usa una
pila.*/

typedef struct nodo {
    char c; // definisco la struttura Nodo con il next e il carattere
    struct nodo * next;
} Nodo;

Nodo * formattaLista() {
    int n;

    printf("Quanti numeri vuoi inserire? "); //chiedo all'utente il numero di numeri da inserire
    scanf("%d", &n);

    Nodo* head; //definisco la head

    if(n > 0) {
        head = (Nodo*)malloc(sizeof(Nodo)); //alloco la pila in caso il numero dato in input sia maggiore di zero
    } else {
        head = NULL; //se non è maggiore di zero non alloco
    }

    Nodo * r = head; // assegno la head alla variabile r
    Nodo * c;

    for(int k = 0; k < n; k++) {
        printf("Dammi il %d car: ", k + 1); //chiedo in input il carattere
        fflush(stdin); //pulisco la tastiera dell'input
        scanf("%c", &r->c); //ricevo il carattere e lo posiziono tramite la head nel carattere della struttura Nodo

        c = NULL;

        if(k < n - 1) {
            c = (Nodo*) malloc (sizeof(Nodo));
        }
        r->next = c;
        r = c;
    }
    return head;
}

void stampaLista(Nodo * l) {
    if(l != NULL) {
        stampaLista(l->next);
        printf("%c\n", l->c);
    }
}

int main() {
    Nodo * head = formattaLista();
    printf("Stampa Inversa: \n");
    stampaLista(head);
    return 0;
}
