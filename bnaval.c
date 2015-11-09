/**************************************
* Trabalho 3 de Programacao de Computadores I - Jogo Batalha Naval  
* Curso de Sistemas da informacao  
* Aluno: Matheus Ferreira Avila - matricula: 0050013491 
* Professor: Alex Salgado 
***************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int mapa [6][6] = { {0,0,0,0,0,0},
	                    {0,0,1,1,0,1},
						{0,1,1,1,1,0},
						{0,1,0,0,0,1},
						{0,0,0,1,1,0},
						{0,1,0,1,0,1}};
	int i, j;
	char nomedojogador[30];
	char control[6][6];
	int continuar = 1;
	int pontos = 0;
	

        for(i=1; i<6; i++){
             for(j=1; j<6; j++){
                      control[i][j] = '.';
                      printf("%c  ", control[i][j]);
             }
             printf("\n");
    }
    printf("Qual é o seu nome? \n");
    scanf("%s", nomedojogador);
    
    printf("\nEntre com a linha:  ");
    scanf ("%d", &i);
    printf("\nEntre com a Coluna:  ");
    scanf("%d", &j);
    if(mapa[i][j] == 1)
    {
        control[i][j] = 'X';
        pontos ++;
        printf("Bomba!! Parabéns!!\n");
        printf("Por enquanto você fez %d pontos\n", pontos);
    	printf("Deseja Continuar? 1 = Sim / 0= Não:");
    	scanf("%d", &continuar);
        
    }
    else
    {
        control[i][j] = 'O';
        printf("Agua!!, que pena\n");
        printf("Por enquanto você fez %d pontos\n", pontos);
    	printf("Deseja Continuar? 1 = Sim / 0= Não:");
    	scanf("%d", &continuar);
    }
    for(i=1; i<6; i++)
        { 
            for(j=1; j<6; j++)
            {
                printf("%c  ", control[i][j]);
            }
            printf("\n");
        }
            
   while(continuar ==1)
   {
            printf("\nEntre com a linha:  ");
            scanf ("%d", &i);
            printf("\nEntre com a Coluna:  ");
            scanf("%d", &j);
            if(mapa[i][j] == 1)
            {
                control[i][j] = 'X';
                pontos ++;
                printf("Bomba!!\n");
                printf("Por enquanto você fez %d pontos\n", pontos);
            	printf("Deseja Continuar? 1 = Sim / 0= Não:");
            	scanf("%d", &continuar);
                
            }
            else
            {
                control[i][j] = 'O';
                printf("Agua!!\n");
                printf("Por enquanto você fez %d pontos\n", pontos);
            	printf("Deseja Continuar? 1 = Sim / 0= Não:");
            	scanf("%d", &continuar);
            }
            for(i=1; i<6; i++)
                { 
                    for(j=1; j<6; j++)
                    {
                        printf("%c  ", control[i][j]);
                    }
                    printf("\n");
                }
                    
            
            
            
   }
   printf("Olá %s, você ganhou! Fez %d pontos.", nomedojogador, pontos);
	return 0;
}