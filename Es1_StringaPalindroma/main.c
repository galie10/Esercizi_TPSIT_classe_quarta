#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LUNG 20

/*
author: Galieti Marco
class: 4A Robotica
data: 15/10/2021
-Es 1
1.	Scrivere un programma che verifichi se la stringa data in input è palindroma o no.
*/

void verificaPalindromo(char s[]) {
    bool ok = true;
    int k = 0;
    int n = 0;



    n = strlen(s);
    int j = n-1;

    while(ok == true && k < n) {
        for(k = 0; k < n; k++) {
            if(s[k] != s[j]) {
                ok = false;
            }
            j--;
        }
    }


    if(ok == true) {
        printf("\nLa parola %s e' palindroma.", s);
    } else {
        printf("\nLa parola %s non e' palindroma.", s);
    }
}



int main() {
    int s[LUNG];

    printf("\nInserisci una parola valida.");
    fflush(stdin);
    gets(s);

    verificaPalindromo(s);


    printf("\n");
    return 0;
}
