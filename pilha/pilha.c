#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define MAX_STRING_LENGTH 100


Pilha pilha(){
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->topo = NULL;
    p->quantidade = 0;
    return p;
}


void empilhar ( Objeto* o,Pilha* P){
    o->proximo_objeto = P->topo;
    P->topo = o;
    P->quantidade++;
};
Objeto* desempilhar (Pilha* P){
    Objeto o = P->topo;
    P->topo  = o.proximo_objeto;
    P->quantidade--;
    return o;
};