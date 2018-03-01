#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	printf("     ,.   ,.                  \n");
	printf("     \\.\\ /,/                \n");
	printf("      Y Y f        BEM-VINDO  \n");
	printf("      |. .|       AO JOGO DE  \n");
	printf("     ('_, l       ADIVINHAÇÃO!\n");
	printf("      ,- , \\                 \n");
	printf("     (_)(_) Y,.               \n");
	printf("      _j _j |,'               \n");
	printf("     (_,(__,'                 \n");
	printf("\n\n");

	int segundos = time(0);
	srand(segundos);
	int numerogrande = rand();

	int numerosecreto = numerogrande % 100;

	int chute;
	int ganhou = 0;
	int tentativas = 1;
	double pontos = 1000;

	int acertou = 0;

	int nivel;
	printf("Qual o nível de dificuldade?\n");
	printf("(1) Fácil; (2) Médio; (3) Difícil\n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);

	int numerodetentativas;

	switch(nivel){
		case 1:
			numerodetentativas = 20;
			break;
		case 2:
			numerodetentativas = 15;
			break;
		default:
			numerodetentativas = 6;
			break;
	}

	for(int i = 1; i <= numerodetentativas; i++){

		printf("\nTentativa %d \n", tentativas);

		printf("Qual é o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d \n", chute);

		if(chute < 0){
			printf("Você não pode chutar números negativos!\n");

			continue;
		}

		acertou = (chute == numerosecreto);
		int maior = (chute > numerosecreto);

		if(acertou){

			//sair do loop do FOR

			break;
		}
			
		else if(maior){
			printf("\nSeu chute foi maior que o número secreto. \n");
		}
		else {
			printf("\nSeu chute foi menor que o número secreto. \n");
		}
	
		tentativas++;

		double pontosperdidos = abs(chute - numerosecreto) / (double)2;
		pontos = pontos - pontosperdidos;

	}

	printf("\nFim de jogo! \n");

	if(acertou){
		printf("                          .'.                     \n");
		printf("                         /  |                     \n");
		printf("                        /  /                      \n");
		printf("                       / ,'                       \n");
		printf("           .-------.--- /                         \n");
		printf("          '._ __.-/ o. o\\    VOCÊ GANHOU!!!      \n");
		printf("             '   (    Y  )      PARABÊNS!         \n");
		printf("                  )     /                         \n");
		printf("                 /     (                          \n");
		printf("                /       Y                         \n");
		printf("            .-'         |             /\\ /|      \n");
		printf("           /  _     \\    \\           |||| |     \n");
		printf("          /    `. '. ) /' )           \\ | \\     \n");
		printf("         Y       )( / /(,/        _ _ /  @ @      \n");
		printf("        ,|      /     )         /    \\   =>X<=   \n");
		printf("       ( |     /     /        /|      |   /       \n");
		printf("        ' \\_  (__   (__       \\|     /__| |     \n");
		printf("            '-._,)--._,)        \\_____\\ \\__\\  \n");
		printf("\n\n");

		printf("Você acertou em %d tentativa(s)\n", tentativas);
		printf("Total de pontos: %.1f \n", pontos);
	} else{
		printf("                        / \\`\\                                 \n");
		printf("███████▄▄███████████▄   |  \\ `\\      /`/ \\                   \n");      
		printf("▓▓▓▓▓▓█░░░░░░░░░░░░░░█  \\_/`\\  \\-'-/` /\\  \\                \n");
		printf("▓▓▓▓▓▓█░░░░░░░░░░░░░░█       |       |  \\  |   VOCÊ PERDEU!!!  \n");
		printf("▓▓▓▓▓▓█░░░░░░░░░░░░░░█       (d     b)   \\_/  TENTE NOVAMENTE! \n");
		printf("▓▓▓▓▓▓█░░░░░░░░░░░░░░█       /       \\                         \n");
		printf("▓▓▓▓▓▓█░░░░░░░░░░░░░░█   ,'.|.'.\\_/.'.|.',                     \n");
		printf("▓▓▓▓▓▓███░░░░░░░░░░░░█   /   /\' _|_ '/\\   \\                  \n");
		printf("██████▀░░░░░░░██████▀   |  /  '-`'`-'  \\  |                    \n");
		printf("░░░░░░░░░█░░░░█         | |             | |                     \n");
		printf("░░░░░░░░░░░█░░█          \\ \\    \\ /    / /                   \n");
		printf("░░░░░░░░░░░█░░█           `'`\\   :   /''`                      \n");
		printf("░░░░░░░░░░░░▀▀                ` ' ` ' `                         \n");
		printf("\n\n");
	}

	
	
}