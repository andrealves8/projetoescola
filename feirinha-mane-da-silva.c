/* PROJETO FINAL TDS IFSUL de Minas - Programação Estruturada 
--------------------FEIRINHA DO MANÉ DA SILVA--------------*/
#include <stdio.h>
#include<stdbool.h>

int main() { // Início do main
    // Declaração das variáveis    
    char fruta1[15] = "Tomate"; 
    char fruta2[15] = "Cebola"; 
    char fruta3[15] = "Cenoura"; 
    char fruta4[15] = "Abobrinha"; 
    char fruta5[15] = "Brócolis";
    int opcaoPreco;
    int opcaoMenu;
    float preco[5] = {2.30, 1.20, 3.70, 5.10, 1.23};
    bool alterado = true;
    
    while(alterado == true) { //Inicio do while
    // Menu principal
    printf("MENU PRINCIPAL\n");
    printf("1 - Listar o nome dos produtos:\n");
    printf("2 - Listar o nome e o preço dos produtos:\n");
    printf("3 - Alterar o preço de um produto:\n");
    printf("4 - Digite a opção desejada ou digite 0 pra sair:");
    scanf("%d", &opcaoMenu);
 
    switch(opcaoMenu){ // Início do escopo do MENU
        case 0:
            return 0;
        default:
            printf("> Opção inválida!");
            printf("\n\n");
            return main();
        case 1: 
            // Mostra a lista de nomes
            printf("\n");
            printf("LISTA DE PRODUTOS\n");
            printf("1 - %s\n", fruta1);
            printf("2 - %s\n", fruta2);
            printf("3 - %s\n", fruta3);
            printf("4 - %s\n", fruta4);
            printf("5 - %s\n", fruta5);
            printf("\n");
        break; 
        case 2: 
            printf("\n");
            printf("LISTA DE PREÇO DOS PRODUTOS\n");
            printf("1 - %s ----- R$%.2f\n", fruta1, preco[0]);
            printf("2 - %s ----- R$%.2f\n", fruta2, preco[1]);
            printf("3 - %s ---- R$%.2f\n", fruta3, preco[2]);
            printf("4 - %s -- R$%.2f\n", fruta4, preco[3]);
            printf("5 - %s --- R$%.2f\n", fruta5, preco[4]);
            printf("\n");
        break;    
        case 3: { // Início altera preço
            printf("\n");
            printf("ALTERAR O PREÇO\n");
            printf("| cód.9001: %s\n", fruta1);
            printf("| cód.9002: %s\n", fruta2);
            printf("| cód.9003: %s\n", fruta3);
            printf("| cód.9004: %s\n", fruta4);
            printf("| cód.9005: %s\n", fruta5);
            printf("Escolha o produto que deseja alterar:");
            scanf("%d", &opcaoPreco);
            
                // Bloco altera preço
                switch(opcaoPreco) { // Início do digite novo valor 
                // ALtera preço do produto 1    
                case 9001:
                    printf("> Digite um novo preço para %s:", fruta1);
                    scanf("%f", &preco[0]); 
                    printf("> Novo valor: R$%.2f", preco[0]);
                    printf("\n");
                    alterado = true; 
                    printf("> Atualizado com sucesso!");
                    printf("\n\n");
                break;    
                case 9002:
                    printf("> Digite um novo preço para %s:", fruta2);
                    scanf("%f", &preco[1]); 
                    printf("> Novo valor: R$%.2f", preco[1]);
                    printf("\n");
                    alterado = true; 
                    printf("> Atualizado com sucesso!");
                    printf("\n\n");
                break;    
                case 9003:
                    printf("> Digite um novo preço para %s:", fruta3);
                    scanf("%f", &preco[2]); 
                    printf("> Novo valor: R$%.2f", preco[2]);
                    printf("\n");
                    alterado = true; 
                    printf("> Atualizado com sucesso!");
                    printf("\n\n");
                break;    
                case 9004:
                    printf("> Digite um novo preço para %s:", fruta4);
                     scanf("%f", &preco[3]); 
                    printf("> Novo valor: R$%.2f", preco[3]);
                    printf("\n");
                    printf("> Atualizado com sucesso!");
                    printf("\n\n");
                break;    
                case 9005:
                    printf("> Digite um novo preço para %s:", fruta5);
                    scanf("%f", &preco[4]); 
                    printf("> Novo valor: R$%.2f", preco[4]);
                    printf("\n");
                    printf("> Atualizado com sucesso!");
                    printf("\n\n");
                break;
                 default:
                    printf("> Produto não existe!");// Fim do digite novo valor 
                    printf("\n\n");
                    return main();
                }    
            } // Fim do altera preco  
        } // fim do while
    } return 0; // Fim do escopo do MENU 
} // Fim do main






