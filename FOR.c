//Este programa imprime uma "escada de numeros", de acordo com o valor digitado pelo usuario

#include <stdio.h> //Esta parte do c�digo inclui a biblioteca stdio, em que usaremos printf e scanf
int main(){ //Abre-se a fun��o principal (main)
	int num, i, j; //Aqui foram declaradas 3 vari�veis do tipo inteiro, duas delas s�o vari�veis auxiliadoras
	
	printf("Digite um numero:\n"); //Exibe uma mensagem ao usu�rio
	scanf("%d", &num); //O valor digitado pelo usu�rio ser� armazenado na vari�vel num
	
	printf("\n\n"); //Este printf "salta" duas linhas
	
	for(i=0; i <= num; i++){ //Inicia-se um la�o for que representar� as linhas
		for(j=0; j <= i; j++){ //Inicia-se um for dentro de outro for para representar as "colunas", ou seja, os numeros que ter�o em cada linha
			printf("%d", j); //O printf imprimir� o valor de j enquanto j for menor que i
		}
		printf("\n"); //Este printf inserir� uma quebra de linha
	}
}


