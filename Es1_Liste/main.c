#include <stdio.h>
#include <stdlib.h>
/*
Author: Galieti Marco
Class:4A Robotica
Data:10/12/2021
-Es 1
Scrivere un programma che chieda all’utente una stringa composta da parentesi aperte e chiuse:
(,),[,],{,} e che verifichi se le coppie e l’ordine delle (,),[,],{,} sono corretti. Utilizzare uno stack.
*/

struct elem {
    char *nome;
    struct elem *next;
};

struct elem **list2vet(struct elem *p) {
    int i, n = 0;
    struct elem *app, **v;
    app = p;
    while (app != NULL) {
        ++n; /* conta i record della lista */
        app = app->next;
    }
    if (n != 0) {
        v=(struct elem **) malloc(n*sizeof(struct elem*));
        for (i = 0; i < n; ++i) {
            v[i] = p;
            p = p->next;
        }
        return v;
    } else
        return NULL; /* lista vuota */
}

struct elem *crealista(int k) { /* funzione di appoggio, non richiesta */
    /* crea una lista di k record */
    int i;
    struct elem *l, *app;
    char c[21];
    if (k == 0)
        return NULL;
    else {
        app=l=(struct elem *) malloc(sizeof(struct elem)); /* record generatore */
        for(i = 0; i < k; ++i) {
            l->next = (struct elem *)malloc(sizeof(struct elem));
            l = l->next;
            printf("Inserire una tra le parentesi [],{} o (): ");
            scanf("%s",c);
            l->nome = (char *) malloc(strlen(c)+1);
            strcpy(l->nome,c);
        }
        l->next = NULL;
        l = app->next;
        free(app);
        return l;
    }
}

int main () { /* programma principale di test, non richiesto dal compito */
    struct elem *p1, **v;
    int i;
    p1 = crealista(3); /*crea una lista di 3 stringhe */
    v = list2vet(p1);
    for(i = 0; i < 3; ++i)
        printf("Nell’ elemento %d di v sono presenti le parentesi: %s\n",i,v[i]->nome);
}
