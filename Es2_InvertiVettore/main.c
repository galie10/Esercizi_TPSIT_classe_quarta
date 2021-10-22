#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LUNG 20

/*
author: Galieti Marco
class: 4A Robotica
data: 15/10/2021
-Es 2
2.	Scrivere un programma che chieda n valori interi
(massimo 100, li collochi in un vettore e inverta il vettore;
(scambiando il primo elemento con l’ultimo il secondo con il penultimo…). Si usino i puntatori.
*/

bool controlla(char s[], int n){
    int k = 0;
    bool ok = false;

    while(k < n && ok == false){
        if(s[k] == 'A' || s[k] == 'a'){
            ok = true;
        }else{
            k++;
        }
    }
    return ok;
}

int main()
{
    char s[LUNG];
    int n = 10;

    printf("Inserisci una stringa: ");
    scanf("%s", s);

    if(controlla(s, n)){
        printf("\nLa stringa contiene il carattere 'A' o 'a'\n");
    }else{
        printf("\nLa stringa non contiene il carattere 'A' o 'a'\n");
    }

    printf("\n");
    return 0;
}
