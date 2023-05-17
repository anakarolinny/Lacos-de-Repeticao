//Este programa soma ultimo numero digitado com a ultima soma

#include <stdio.h> //Esta parte do c�digo inclui a biblioteca stdio, em que usaremos printf e scanf
int main(){ //Abre-se a fun��o principal (main)
	int num1, num2; //Aqui foram declaradas 2 vari�veis do tipo inteiro
	
	printf("Digite um numero:\n"); //Exibe uma mensagem ao usu�rio
	scanf("%d", &num1); //O valor digitado pelo usu�rio ser� armazenado na vari�vel num1
	
	do { //Abrimos o la�o do while
		printf("\n\nDigite outro numero: (ou 0 para terminar a soma)\n"); //Pedimos ao usu�rio que digite outro valor
		scanf("%d", &num2); //O valor digitado ser� armazenado na vari�vel num2
		
		num1 = num1 + num2; //Soma-se num1 e num2 e armazena-se o resultado na vari�vel num1
		//A vari�vel num1 receber� o resultado do seu valor atual somado ao ultimo numero digitado pelo usu�rio
		printf("\nResultado: %d\n", num1); //O resultado armazenado na variavel num1 ser� mostrado ao usuario
	} while(num2!=0); //Enquanto num2 (o valor digitado pelo usu�rio) for diferente de 0, o la�o continuar� a ser executado
	
	printf("O resultado final eh: %d", num1); //Se o usu�rio digitar 0, o la�o terminar� e este pritf mostrar� o resultado final
	return 0; //Aqui, encerra-se o programa e o return 0 mostra que o programa teve o resultado e rodou como esperava-se
} //Fechamento da fun��o main
