//Este programa soma ultimo numero digitado com a ultima soma

#include <stdio.h> //Esta parte do código inclui a biblioteca stdio, em que usaremos printf e scanf
int main(){ //Abre-se a função principal (main)
	int num1, num2; //Aqui foram declaradas 2 variáveis do tipo inteiro
	
	printf("Digite um numero:\n"); //Exibe uma mensagem ao usuário
	scanf("%d", &num1); //O valor digitado pelo usuário será armazenado na variável num1
	
	do { //Abrimos o laço do while
		printf("\n\nDigite outro numero: (ou 0 para terminar a soma)\n"); //Pedimos ao usuário que digite outro valor
		scanf("%d", &num2); //O valor digitado será armazenado na variável num2
		
		num1 = num1 + num2; //Soma-se num1 e num2 e armazena-se o resultado na variável num1
		//A variável num1 receberá o resultado do seu valor atual somado ao ultimo numero digitado pelo usuário
		printf("\nResultado: %d\n", num1); //O resultado armazenado na variavel num1 será mostrado ao usuario
	} while(num2!=0); //Enquanto num2 (o valor digitado pelo usuário) for diferente de 0, o laço continuará a ser executado
	
	printf("O resultado final eh: %d", num1); //Se o usuário digitar 0, o laço terminará e este pritf mostrará o resultado final
	return 0; //Aqui, encerra-se o programa e o return 0 mostra que o programa teve o resultado e rodou como esperava-se
} //Fechamento da função main
