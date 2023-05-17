//Este programa imprime os numeros pares de um intervalo

#include <stdio.h> //Esta parte do código inclui a biblioteca stdio, em que usaremos printf e scanf
int main(){ //Abre-se a função principal (main)
	int n1, n2; //Aqui foram declaradas 2 variaveis do tipo inteiro
	
	printf("Digite o primeiro numero do intervalo:\n"); //Exibe uma mensagem ao usuário
	scanf("%d", &n1); //O valor digitado pelo usuário será armazenado na variável n1
	printf("Digite o ultimo numero do intervalo:\n"); //Exibe uma mensagem ao usuário
	scanf("%d", &n2); //O valor digitado pelo usuário será armazenado na variável n2
	
	printf("\n\n"); //Este printf "salta" duas linhas
	
	while(n1 <= n2){ //Enquanto n1 for menor que n2 o laço estará "rodando"
		if(n1%2 == 0){ //Se o resto de n1 dividido por 2 for igual a 0, mostrando que o numero é par, o comando abaixo será executado
			printf("%d\n", n1); //O valor de n1 será impresso
		}
		n1++; //Se acrescentará +1 ao valor de n1
	}
	
}
