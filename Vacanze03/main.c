#include <stdio.h>
#include <stdlib.h>
#define DIM 20

/*
Author:Galieti Marco
Class: 4A Robotica
Data: 10/01/2021

-Es 3 Vacanze Paziente.
*/

typedef struct {
    char nome[256]; //assegno alla struttura paziente le voci nome, cognome, matricola, pressione e temperatura
    char cognome[256] ;
    int matricola;
    int pressione[2];
    int temperature[3];
    float parcella;
} Paziente;

void addPaziente(Paziente v[], int k) {
    if(k < DIM) { //se ho ancora spazio nella struttura del paziente chiedo in input ogni dato
        printf("Dammi il nome: ");
        scanf("%s", v[k].nome);

        printf("Dammi il cognome: ");
        scanf("%s", v[k].cognome);

        printf("Dammi la matricola: ");
        scanf("%d", &v[k].matricola);

        printf("Dammi le pressioni(2): ");
        scanf("%d %d", &v[k].pressione[0],&v[k].pressione[1]);

        printf("Dammi le temperature(3): ");
        scanf("%d %d %d", &v[k].temperature[0],&v[k].temperature[1],&v[k].temperature[2]);

        printf("Dammi la parcella: ");
        scanf("%f", &v[k].parcella);
    } else {
        printf("Non ci sono posti disponibili nella clinica\n"); //se non vi è più spazio
    }
}

float getSomma(Paziente v[], int n) {
    float somma = 0; //definisco la variabile float somma per contare la parcella

    for(int k = 0; k < n; k++) {
        somma += v[k].parcella; //per ogni paziente incremento la somma di una quantità definita, parcella
    }
}

int main() {
    Paziente rossi; //definisco il paziente rossi
    Paziente clinica[DIM]; //definisco un vettore di Paziente, la Clinica
    int nPazienti = 0; //utilizzo un contatore per contare la dimensione del vettore finale e poi utilizzarlo

    addPaziente(clinica, nPazienti);
    nPazienti++;

    printf("Saldo totale: %.2f", getSomma(clinica, nPazienti)); //stampo la cifra dovuta al dottore

    return 0;
}
