#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int qnt_elementos,escolha_modeloEstrutura; 

void WinMain(){

      printf("Digite a quantidade de elementos a ser criada: ");
        scanf("%d",&qnt_elementos);

  
    printf("Escolha um modelo de estrutura: \n1 - Lista Concatenada \n2 - Pilha \n3- Fila\n4 - Arvore Binaria de Busca \n\n0 - Cancelar e Sair\n\nEscolha: ");
    scanf("%d",&escolha_modeloEstrutura);

     switch (escolha_modeloEstrutura)
    {
         case 1:
      
        break;

    case 2:
      
        break;

    case 3:
    
        break;

    case 4:
     
    break;
    }


    printf("\n\n");
   system("pause");
    exit(1);
}