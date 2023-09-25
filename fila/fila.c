#include <stdio.h>
#include<stdlib.h>
#include "fila.h"

Fila* fila(){
    Fila* F = malloc(sizeof(Fila));
    F -> inicio = NULL;
    F -> qtd_objetos = 0;
};


void enfileirar(Objeto* o, Fila* F){
    if(F -> inicio == NULL){
        F -> inicio = o;
        F -> final = o;
    }else{
        F -> final -> objeto_anterior = o;
        F -> final = o;
    }
};
Objeto* desenfileirar (Fila* F){
    if (F -> qtd_objetos == 0){
        return NULL;
    }

    Objeto* o = F -> inicio;
    F -> inicio = o -> objeto-anterior;
    F -> qtd_objetos--;
    return o;

};
