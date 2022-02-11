#include <stdio.h>
#include <math.h>

int main(){

	float num1, num2, total;
	int escolha = 1;
		
    
    do{       
    printf("  **** Calculadora ****\n");

    //Entrada de valores
    printf ("\nDigite o primeiro valor: ");
    scanf("%f",&num1);
    printf("Digite o segundo valor: ");
    scanf("%f",&num2);

    //Menu de escolha
    printf("\nQual operacao desejada:\n");
    printf("*************************\n");
    printf("1 - Adicao (+)\n");
    printf("2 - Subtracao (-) \n");
    printf("3 - Multiplicacao (*) \n");
    printf("4 - Divisao (/) \n");
    printf("*************************\n");

    printf("Opcao: ");
    scanf ("%d",&escolha);

	  switch (escolha){
      
    case 1: 
      total = num1 + num2;
      printf("Resultado: %.2f + %.2f =  %.2f" ,num1,num2, total);
    break;
    
    case 2: 
      total = num1 - num2;
      printf("Resultado: %.2f - %.2f =  %.2f" ,num1,num2, total);
    break;
    
    case 3: 
      total = num1 * num2;
      printf("Resultado: %.2f * %.2f =  %.2f" ,num1,num2, total);
    break;
    
    case 4: 
      total = num1 / num2;
      printf("Resultado: %.2f / %.2f =  %.2f" ,num1,num2, total);
    break;
    
    default: printf("\nOpcao invalida!");
    }
    
    printf("\n\nPara sair digite '1' | Para continuar digite '0': ");
    scanf("%d",&escolha);
  }while(escolha != 1); 
	
	return 0;
}	
