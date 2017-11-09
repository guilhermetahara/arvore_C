#include <stdio.h>
#include "arvore.h"

int main()
{
    Arv* a1 = criar('m', criar_vazia(), criar_vazia());
    Arv* a2 = criar('a', criar_vazia(), a1);
    imprimir_arvore(a2);
    printf("\n%d\n",pertence(a2,'j'));
    liberar(a2);


    return 0;
}
