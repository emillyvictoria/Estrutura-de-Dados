#include <stdio.h>
#include <stdlib.h>

typedef struct Ponto{
    int x;
    float y;
    char* label;
} Ponto;

int main (int argc, char* argv[]){
    Ponto p;
    p.x = 1;
    p.y = 1.8;
    p.label = "TXT 1";
    p.label = malloc (sizeof(char) * 5);
    strcpy(p.label, "TXT 1");

    printf("%d %f\n", p.x, p.y, p.label);

    return 0;
}	