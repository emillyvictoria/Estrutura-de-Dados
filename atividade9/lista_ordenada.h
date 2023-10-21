typedef struct No
{
    float valor;
    struct No *proximo_no;
} No;

No *no(char valor, No *proximo_no);
void lista_inserir_no_ordenado(No **L, No *no);

void lista_imprimir(No *L);

void lista_liberar(No *L);

int lista_verificar_existencia(No *L, char valor_busca);

int lista_verificar_ocorrencias(No *L, char valor_busca);