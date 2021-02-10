
/******************************************************************************

URNA ELETRÔNICA - ELEIÇÕES PARA A ESCOLHA DO NOVO DIRETOR DO COLÉGIO                            

*******************************************************************************/

#include <stdio.h>
#include<stdbool.h>

int main()
{
    int cand1, cand2, cand3, cand4, voto, branco, nulo; 
    cand1=0; cand2=0; cand3=0; cand4=0; voto=0; branco=0; nulo=0;
    bool vencedor;
    
    printf("ELEIÇÕES 2021 - CANDIDATOS PARA A NOVA DIRETORIA DO COLÉGIO\n");
    printf("[MARCOS (1) - JOSÉ (2) - MARTA (3) - MARIA - (4) - VOTO EM BRANCO (0)] \n\n");
    printf("******************************************************************************************************\n\n"); 
    
    printf("Eleitor nº1 - Escolha um candidato e depois pressione ENTER para confirmar ou BACKSPACE para corrigir:");
    scanf("%d", &voto); 
    
    if (voto == 1)
     
        cand1=cand1+1;
    else
        if (voto == 2)
        cand2=cand2+1; 
        else
            if (voto == 3)
            cand3=cand3+1;
            else
                if (voto == 4)
                cand4=cand4+1;
                else
                    if (voto == 0)
                    branco=branco+1;
                    else
                        if (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4)
                        nulo=nulo+1;
    
    printf("Eleitor nº2 - Escolha um candidato e depois pressione ENTER para confirmar ou BACKSPACE para corrigir:"); 
    scanf("%d", &voto);
    if (voto == 1)
        cand1=cand1+1;
    else
        if (voto == 2)
        cand2=cand2+1; 
        else
            if (voto == 3)
            cand3=cand3+1;
            else
                if (voto == 4)
                cand4=cand4+1;
                else
                    if (voto == 0)
                    branco=branco+1;
                    else
                        if (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4)
                        nulo=nulo+1;
    
    printf("Eleitor nº3 - Escolha um candidato e depois pressione ENTER para confirmar ou BACKSPACE para corrigir:"); 
    scanf("%d", &voto);
    if (voto == 1)
        cand1=cand1+1;
    else
        if (voto == 2)
        cand2=cand2+1; 
        else
            if (voto == 3)
            cand3=cand3+1;
            else
                if (voto == 4)
                cand4=cand4+1;
                else
                    if (voto == 0)
                    branco=branco+1;
                    else
                        if (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4)
                        nulo=nulo+1;
    
    printf("Eleitor nº4 - Escolha um candidato e depois pressione ENTER para confirmar ou BACKSPACE para corrigir:"); 
    scanf("%d", &voto);
    if (voto == 1)
        cand1=cand1+1;
    else
        if (voto == 2)
        cand2=cand2+1; 
        else
            if (voto == 3)
            cand3=cand3+1;
            else
                if (voto == 4)
                cand4=cand4+1;
                else
                    if (voto == 0)
                    branco=branco+1;
                    else
                        if (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4)
                        nulo=nulo+1;
    
    printf("Eleitor nº5 - Escolha um candidato e depois pressione ENTER para confirmar ou BACKSPACE para corrigir:"); 
    scanf("%d", &voto);
    if (voto == 1)
        cand1=cand1+1;
    else
        if (voto == 2)
        cand2=cand2+1; 
        else
            if (voto == 3)
            cand3=cand3+1;
            else
                if (voto == 4)
                cand4=cand4+1;
                else
                    if (voto == 0)
                    branco=branco+1;
                    else
                        if (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4)
                        nulo=nulo+1;
                        
    printf("\n\n********************************* RESULTADO DA APURAÇÃO ***********************************************\n");                    
     
    printf("MARCOS .......... %d VOTOS \n", cand1);
    printf("JOSÉ ............ %d VOTOS \n", cand2);
    printf("MARTA ........... %d VOTOS \n", cand3);
    printf("MARIA ........... %d VOTOS \n", cand4);
    printf("VOTOS BRANCOS ... %d VOTOS \n", branco);
    printf("VOTOS NULOS ..... %d VOTOS \n", nulo);
    
    if(cand1 > cand2 && cand1 > cand3 && cand1 > cand4)
    {
        printf("\n-----> MARCOS GANHOU A ELEIÇÃO!!! ");
        vencedor = true;
    }
    else
    if (cand2 > cand1 && cand2 > cand3 && cand2 > cand4)
    {
        printf("\n-----> JOSÉ GANHOU A ELEIÇÃO!!!");
        vencedor = true;
    }
    else
    if (cand3 > cand1 && cand3 > cand2 && cand3 > cand4)
    {
        printf("\n-----> MARTA GANHOU A ELEIÇÃO!!!");
        vencedor = true;
    }
    else
    if (cand4 > cand1 && cand4 > cand2 && cand4 > cand3)
    {
        printf("\n-----> MARIA GANHOU A ELEIÇÃO!!!");
        vencedor = true;    
    }
    else
        printf("\n-----> NINGUEM GANHOU!!!");
    
    if (cand1==cand2 && vencedor!=true)
    printf("\n-----> EMPATE ENTRE: MARCOS(1) E JOSÉ(2)\n"); 
    else
        if (cand1==cand3 && vencedor!=true)
        printf("\n-----> EMPATE ENTRE: MARCOS(1) E MARTA(3)\n"); 
        else
            if (cand1==cand4 && vencedor!=true)
            printf("\n-----> EMPATE ENTRE: MARCOS(1) E MARIA(4)\n"); 
            else
                if (cand2==cand3 && vencedor!=true)
                printf("\n-----> EMPATE ENTRE: JOSÉ(2) E MARTA(3)\n"); 
                else
                    if (cand2==cand4 && vencedor!=true)
                    printf("\n-----> EMPATE ENTRE: JOSÉ(1) E MARIA(4)\n"); 
                    else
                        if (cand3==cand4 && vencedor!=true)
                        printf("\n-----> EMPATE ENTRE: MARTA(3) E MARIA(4)\n"); 
                        else
                            
    
    return 0;
}







