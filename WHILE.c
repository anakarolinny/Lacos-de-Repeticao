//Este programa imprime os numeros pares de um intervalo

#include <stdio.h> //Esta parte do c�digo inclui a biblioteca stdio, em que usaremos printf e scanf
int main(){ //Abre-se a fun��o principal (main)
	int n1, n2; //Aqui foram declaradas 2 variaveis do tipo inteiro
	
	printf("Digite o primeiro numero do intervalo:\n"); //Exibe uma mensagem ao usu�rio
	scanf("%d", &n1); //O valor digitado pelo usu�rio ser� armazenado na vari�vel n1
	printf("Digite o ultimo numero do intervalo:\n"); //Exibe uma mensagem ao usu�rio
	scanf("%d", &n2); //O valor digitado pelo usu�rio ser� armazenado na vari�vel n2
	
	printf("\n\n"); //Este printf "salta" duas linhas
	
	while(n1 <= n2){ //Enquanto n1 for menor que n2 o la�o estar� "rodando"
		if(n1%2 == 0){ //Se o resto de n1 dividido por 2 for igual a 0, mostrando que o numero � par, o comando abaixo ser� executado
			printf("%d\n", n1); //O valor de n1 ser� impresso
		}
		n1++; //Se acrescentar� +1 ao valor de n1
	}
	
}
