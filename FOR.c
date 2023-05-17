//Este programa imprime uma "escada de numeros", de acordo com o valor digitado pelo usuario

#include <stdio.h> //Esta parte do código inclui a biblioteca stdio, em que usaremos printf e scanf
int main(){ //Abre-se a função principal (main)
	int num, i, j; //Aqui foram declaradas 3 variáveis do tipo inteiro, duas delas são variáveis auxiliadoras
	
	printf("Digite um numero:\n"); //Exibe uma mensagem ao usuário
	scanf("%d", &num); //O valor digitado pelo usuário será armazenado na variável num
	
	printf("\n\n"); //Este printf "salta" duas linhas
	
	for(i=0; i <= num; i++){ //Inicia-se um laço for que representará as linhas
		for(j=0; j <= i; j++){ //Inicia-se um for dentro de outro for para representar as "colunas", ou seja, os numeros que terão em cada linha
			printf("%d", j); //O printf imprimirá o valor de j enquanto j for menor que i
		}
		printf("\n"); //Este printf inserirá uma quebra de linha
	}
}


