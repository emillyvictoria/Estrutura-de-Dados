#include <stdio.h>
#include <stdlib.h>


int main (int argc, char* argv[]){

int num, i, primo = 1;

num = atoi(argv[1]);

/*int main() {
    int numero, i, primo = 1;
    printf("Digite um numero: ");
    scanf("%d", &numero);*/
    
    if (num <= 1) {
        primo = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
    }
    
    if (primo == 1) {
        printf("1");
    } else {
        printf("0");
    }
    
    return 0;
}
