#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int i,aux, total, opcao;

	struct agenda
	{
		char nome[80];
		char pront[9]; //Prontuario
		int idade;
	};
	
	agenda cadastro[total];
	printf("Cadastro de alunos\n\n");
	printf("Quantos cadastros deseja realizar: ");
	scanf("%d",&total);
	for (i=0; i<total; i++){

		printf("\nNome: ");
		fflush(stdin);
		gets(cadastro[i].nome);
		
		printf("Idade: ");
		scanf("%i",&cadastro[i].idade);
		
		printf("Prontuario: ");
		fflush(stdin);
		gets(cadastro[i].pront);
	}
	
	do{	
		printf("\n Escolha a opcao desejada:\n\n");
		printf(" 1 - Classificacao alfabetica\n");
		printf(" 2 - ******\n");
		printf(" 3 - Sair\n");
		printf(" Opcao: ");
		scanf ("%d",&opcao);
		
		switch(opcao){
		
			//ORDEM ALFABETICA
			case 1:

			break;
			
			//*******
			case 2:
				
			break;
			
			//ENCERRAR PROGRAMA
			case 3:
				printf("Exibindo cadastro:");
				for (i = 0; i < total; i++){
					printf("\n\nNome:%s",&cadastro[i].nome);
					printf("\nIdade:%i",&cadastro[i].idade);
					printf("\nProntuario:%s",&cadastro[i].pront);
					printf("\n*****************************");
				}
				printf("\nSaindo...");
				break;
				
				default:
					getchar;
					printf("Opcao invalida!"); break;
	
		}
	}while(opcao != 3);
	return 0;
}
