#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

//Implementacao do MENU INICIAL
void menu(){
    printf("ACADEMICO: <SEU NOME>\n\n");
    printf("\n#########################################");
    printf("\n#   MENU - Lista Estatica Sequencial    #");
    printf("\n#                                       #");
    printf("\n# Digite a opcao desejada               #");
    printf("\n#                                       #");
    printf("\n# 1  - Inserir Elemento no Final        #");
    printf("\n# 2  - Inserir Elemento no Inicio       #");
    printf("\n# 3  - Inserir Elemento no Ordenado     #");
    printf("\n# 4  - Remover Elemento do Final        #");
    printf("\n# 5  - Remover Elemento do Inicio       #");
    printf("\n# 6  - Remover Elemento                 #");
    printf("\n# 7  - Consultar Elemento pela Posicao  #");
    printf("\n# 8  - Consultar Elemento pela Matricula#");
    printf("\n# 9  - Exibir Lista                     #");
    printf("\n# 10 - Exibir o Tamanho da Lista        #");
    printf("\n# 11 - Sair                             #");
    printf("\n#########################################");
    printf("\n");
    printf("\nEscolha uma opcao para continuar >>: ");
}
