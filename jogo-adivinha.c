#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int nums, numd, nivel, tent; //nums --> numero sorteado numd --> número digitado
	char nome[300], sn; //sn --> sim ou não
	
	printf("=================================================================\n");
	printf("|                       JOGO DO ADIVINHA                        |\n");
	printf("=================================================================\n");
	
	printf("\nOlá, seja bem-vindo ao jogo do adivinha. Esperamos que se divirta!!");
	printf("\n\nPra começar, digite seu primeiro nome:\n");
	scanf("[\n]", nome);
	printf("\n\nMuito bem %s, agora vamos para as regras...", nome);
	printf("\n1 --> O objetivo do jogo é descobrir o número que estou pensando.");
	printf("\n2 --> Existem 3 níveis: [1] de 0 a 10 [2] de 0 a 100 [3] de 0 a 1000!!");
	printf("\n3 --> Você tem um total de 10 tentativas.");
	printf("\nBom, chega de conversar e vamos lá!");
	do //caso escolha jogar denovo pra n�o ter que colocar novamente o nome e ler tudo denovo 
	{ 
		printf("\n\nEscolha um nível: [1] [2] [3]\n");
		scanf("%d", &nivel);
	
		if(nivel == 1)
		{
			srand(time(NULL));
			nums = rand() % 10;
	
		printf("\nJá pensei em um número!!");
		
			do 
			{	
				printf("\nTente adivinhar!\n");
				scanf("%d", &numd);
		
				if(numd > nums)
				{
					printf("\n\nO número que estou pensando é menor do que %d", numd);
				}
				else
				{
					if(numd < nums)
					{	
						printf("\n\nO número que estou pensando é maior do que %d", numd);
					}
					else
					{
						printf("\n======   PARABÉNS   ======");
						printf("\nO número que pensei é: %d", nums);
					}
				}
			
			tent++;
			} while ((numd != nums) && (tent <= 10));
		}	
		else
		{
			if(nivel == 2)
			{
				srand(time(NULL));
				nums = rand() % 100;
	
				printf("\nJá pensei em um número!!");
	
				do 
				{	
					printf("\nTente adivinhar!\n");
					scanf("%d", &numd);
		
					if(numd > nums)
					{
						printf("\n\nO número que estou pensando é menor do que %d", numd);
					}
					else
					{
						if(numd < nums)
						{
							printf("\n\nO número que estou pensando é maior do que %d", numd);
						}
						else
						{
							printf("\n======   PARABÉNS   ======");
							printf("\nO número que pensei é: %d", nums);
						}
					
					}
				
					tent++;
				} while ((numd != nums) && (tent <= 10));
			}
			else
			{
				if(nivel == 3)
				{
					srand(time(NULL));
					nums = rand() % 1000;
	
					printf("\nJá pensei em um número!!");
	
					do 
					{	
						printf("\nTente adivinhar!\n");
						scanf("%d", &numd);
			
						if(numd > nums)
						{
							printf("\n\nO número que estou pensando é menor do que %d", numd);
						}
						else
						{
							if(numd < nums)
							{
								printf("\n\nO número que estou pensando é maior do que %d", numd);	
							}
							else
							{
								printf("\n==========================");
								printf("\n======   PARABÉNS   ======");
								printf("\n==========================");
								printf("\nO número que pensei é: %d", nums);
							}
						}
					
						tent++;	
					} while ((numd != nums) && (tent <= 10));
				}
			}
		}
	
		if(tent > 10)
		{
			printf("\n\nVocê ultrapassou o limite de tentativas!!\n");
		}
	
		printf("\n\nDeseja jogar novamente? S / N \n");
		scanf(" %c", &sn);
	
		if((sn == 's') || (sn == 'S'))
		{
			system("clear"); //Limpa a tela
			tent = 0;
		}
		
	} while((sn == 's') || (sn == 'S'));
	
	printf("Pressione qualquer tecla para continuar...");
	scanf("");
	return 0;
}
