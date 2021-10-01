#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 20
#define DIM 2

/*
author: Galieti Marco
class:3A Robotica
data:14/09/2021
-es 1
Si scriva un programma che:
-definisca un tipo di dato Studente. Ogni studente è caratterizzato da un nome, un cognome e una matricola.
-acquisisca i dati di 10 studenti e, per ogni nuovo studente inserito, proceda ad un inserimento ordinato (lo scopo dell’esercizio è ordinare gli studenti durante il processo di inserimento degli stessi e non dopo averli inseriti tutti con un algoritmo di ordinamento).
-stampi i dati degli studenti.
*/

typedef struct {
    char nome[LUNG];
    char cognome[LUNG];
    int matricola;
} Studente;

void caricaVettoreOrdinati(Studente v[], int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("\nInserisci il nome dello studente.");
        scanf("%s", v[k].nome);
        printf("\nInserisci il cognome dello studente.");
        scanf("%s", v[k].cognome);
        printf("\nInserisci la matricola dello studente.");
        scanf("%d", &v[k].matricola);
    }
}

void ordinaVettore(int vett[], int n){
    int i, k, a;

    for(i = n - 1; i > 0; i--){
        for(k = 0; k < i; k++){
            if(vett[k] > vett[k+1]){
                a = vett[k + 1];
                vett[k + 1] = vett[k];
                vett[k] = a;
            }
        }
    }
}

void stampaVettore(Studente v[], int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("%s\t", v[k].nome);
        printf("%s\t", v[k].cognome);
        printf("%d\n", v[k].matricola);
    }
}

int main() {
    Studente v[DIM];

    caricaVettoreOrdinati(v, DIM);
    stampaVettore(v, DIM);

    printf("\n");
    system("PAUSE");
    return 0;
}
