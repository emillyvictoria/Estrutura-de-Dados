#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"


int main(int argc, char* argv[]){
    int opcao = 0;
    int qtdProdutos = 0;
    Produto produtos [100];

    while (opcao != 5){
        printf ("\n");
        printf ("1 - Cadastrar produto\n");
        printf ("2 - Listar produtos\n");
        printf ("3 - Editar produto\n");
        printf ("4 - Excluir produto\n");
        printf ("5 - Sair\n");
        scanf ("%d", &opcao);
        system ("cls");

    

    switch (opcao)
    {
    case 1: adicionar_produto(produtos, qtdProdutos);
        qtdProdutos += adicionar_produto(produtos, qtdProdutos);
        break;
    case 2: listar_produtos(produtos, qtdProdutos);
        qtdProdutos++;
        break;
    case 3: editar_produto(produtos, qtdProdutos);
        break;
    default: 
        printf("Opcao invalida");
        break;
    }
    }

    printf ("Encerrando sistema...\n");

    exit (0);
}
