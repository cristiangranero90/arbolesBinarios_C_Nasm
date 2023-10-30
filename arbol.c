#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    struct Nodo* izq;
    struct Nodo* der;
    int valor;
    /* data */
};

extern struct Nodo* crearArbolB(struct Nodo* izq, struct Nodo* der, int val);

int main(int argc, char const *argv[])
{
    struct Nodo* nodoIzq = (struct Nodo*)malloc(sizeof(struct Nodo));
    struct Nodo* nodoDer = (struct Nodo*)malloc(sizeof(struct Nodo));
    struct Nodo* rizq = crearArbolB(nodoIzq, nodoDer, 5);
    struct Nodo* rder = crearArbolB(nodoIzq, nodoDer, 7);
    struct Nodo* raiz = crearArbolB(rizq, rder, 10);

    printf("Valor del nodo: %d\n", raiz->valor);
    printf("Valor del nodo izquierdo: %d\n", raiz->izq->valor);
    printf("Valor del nodo derecho: %d\n", raiz->der->valor);

    free(nodoIzq);
    free(nodoDer);
    free(raiz);
    return 0;
}




