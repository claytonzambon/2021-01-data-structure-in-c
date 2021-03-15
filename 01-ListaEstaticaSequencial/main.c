#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

int main()
{
    Lista* li;
    li = cria_lista();
    int i = 1;
    int opcao;
    int matricula_aluno;
    int posicao;

    //Declaração uma Struct para armazenar e inserir elementos do tipo aluno
    struct aluno dados_aluno;
    //======================================================================
    while(i == 1){
        system("cls");
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                if(lista_cheia(li)){
                    printf("\n\nLista Cheia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\n\nDigite a Matricula: ");
                    scanf("%d", &dados_aluno.matricula);
                    printf("Digite o Nome: ");
                    fseek(stdin,0,SEEK_END);
                    scanf("%[^\n]", dados_aluno.nome);
                    printf("Digite a Nota 01: ");
                    scanf("%f", &dados_aluno.n1);
                    printf("Digite a Nota 02: ");
                    scanf("%f", &dados_aluno.n2);
                    printf("Digite a Nota 03: ");
                    scanf("%f", &dados_aluno.n3);
                    printf("Digite a Nota 04: ");
                    scanf("%f", &dados_aluno.n4);
                    insere_lista_final(li, dados_aluno);
                    break;
                }
            case 2:
                if(lista_cheia(li))
                {
                    printf("\n\nLista Cheia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\n\nDigite a Matricula: ");
                    scanf("%d", &dados_aluno.matricula);
                    printf("Digite o Nome: ");
                    fseek(stdin,0,SEEK_END);
                    scanf("%[^\n]", dados_aluno.nome);
                    printf("Digite a Nota 01: ");
                    scanf("%f", &dados_aluno.n1);
                    printf("Digite a Nota 02: ");
                    scanf("%f", &dados_aluno.n2);
                    printf("Digite a Nota 03: ");
                    scanf("%f", &dados_aluno.n3);
                    printf("Digite a Nota 04: ");
                    scanf("%f", &dados_aluno.n4);
                    insere_lista_inicio(li, dados_aluno);
                    break;
                }
            case 3:
                if(lista_cheia(li))
                {
                    printf("\n\nLista Cheia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\n\nDigite a Matricula: ");
                    scanf("%d", &dados_aluno.matricula);
                    printf("Digite o Nome: ");
                    fseek(stdin,0,SEEK_END);
                    scanf("%[^\n]", dados_aluno.nome);
                    printf("Digite a Nota 01: ");
                    scanf("%f", &dados_aluno.n1);
                    printf("Digite a Nota 02: ");
                    scanf("%f", &dados_aluno.n2);
                    printf("Digite a Nota 03: ");
                    scanf("%f", &dados_aluno.n3);
                    printf("Digite a Nota 04: ");
                    scanf("%f", &dados_aluno.n4);
                    insere_lista_ordenada(li, dados_aluno);
                    break;
                }
            case 4:
                if(lista_vazia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else if (remover_lista_final(li)) {
                    printf("\n\nElemento Removido com Sucesso\n\n");
                    system("pause");
                    break;
                }
                break;
            case 5:
                if(lista_vazia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else if (remover_lista_inicio(li)) {
                    printf("\n\nElemento Removido com Sucesso\n\n");
                    system("pause");
                    break;
                }
            case 6:
                if(lista_vazia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\nDigite a matricula a ser removida: ");
                    scanf("%d", &matricula_aluno);
                    remover_lista(li, matricula_aluno);
                    system("pause");
                    break;
                }
            case 7:
                if(lista_vazia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\nDigite a posicao a ser buscada: ");
                    scanf("%d", &posicao);
                    consultar_lista_pos(li, posicao, &dados_aluno);
                    system("pause");
                    break;
                }
            case 8:
                if(lista_vazia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\nDigite a matricula a ser buscada: ");
                    scanf("%d", &matricula_aluno);
                    consultar_lista_mat(li, matricula_aluno, &dados_aluno);
                    system("pause");
                    break;
                }
            case 9:
                if(lista_vazia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    imprime_lista(li);
                    system("pause");
                    break;
                }
            case 10:
                if(lista_vazia(li)){
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\n\nO tamanho da Lista eh: %d\n\n", tamanho_lista(li));
                    system("pause");
                    break;
                }
                break;



            case 11:
                printf("\n\n\t\tAte Logo !!!\n\n\n\n\n");
                i = 0;
                break;

            default:
                printf("\n\nOpcao Invalida\n\n");
                system("pause");
                break;
        }
    }
    libera_lista(li);
    system("pause");
    printf("\n\n\n\n");
    return 0;
}
