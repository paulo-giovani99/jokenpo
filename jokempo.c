#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	
	 int usuario;
	 int computador;
	printf("Jokenpo\n\n");
	
	//Pegar opcao do usuario
	printf("1. Pedra\n");
	printf("2. Papel\n");
	printf("3. Tesoura\n\n");
	printf("Digite a opcao:\n\n");
	
	scanf("%d",&usuario);
	
	//Pegar opcao do computador
	srand(time(NULL));
	computador = rand() % 3 + 1;
	
	switch(computador){
		case 1:
			printf("Computador escolheu pedra!\n");
			break;
		case 2:
			printf("Computador escolheu papel!\n");
			break;
				
		case 3:
			printf("Computador escolheu tesoura!\n");
			break;
	}
	
	
	//  Verificar quem ganhou
	
	if(usuario == computador)
	{
		printf("Empate!");
	}
	else{
		if(computador == 1 && usuario == 3 || computador == 2 && usuario == 1 || computador == 3 && usuario == 2){
			printf("O computador ganhou!");
		}
		else{
			if(usuario == 1 && computador == 3 || usuario == 2 && computador == 1 || usuario == 3 && computador == 2){
				
				printf("Voce ganhou!");
			}
		}
	}
	
	
}
