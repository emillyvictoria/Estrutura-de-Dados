#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

int adicionar_produto(Produto *produtos, int qtdProdutos){
    Produto p;
    int idExistente = 0;
    printf("\n");
    printf("\nDigite o nome do produto: ");
    scanf("%s", &p.nome);
    printf ("\nDigite o ID do produto: ");
    scanf ("%d", &p.id);
    printf ("\nInforme a quantidade do produto:");
    scanf ("%d", &p.qtd);

    for (int i = 0; i < qtdProdutos; i++)
    {
        if (produtos[i].id)   
    }
    if (idExistente)
    {
        printf("ID ja existente");
        return 0;
    }

    produtos [qtdProdutos] = p;

};

void listar_produtos(Produto *produtos, int qtdProdutos){
    printf("\n");
    for(int  i = 0; i < qtdProdutos; i++)
    {
        printf("%d - %s - %d\n", produtos[i].id, produtos[i].nome, produtos[i].qtd);
    }
}
void editar_produto(Produto *produtos, int qtdProdutos){
    int id;
    printf("\nInforme o ID do produto\n");
    scanf("%d",&id);

    for (int i = 0; i < qtdProdutos; i++)
    {
        if (produtos[i].id == id)
        {
            printf ("Edite a quantidade: ");
            scanf ("%d", &produtos[i].qtd);
        }
        
    }   

}

