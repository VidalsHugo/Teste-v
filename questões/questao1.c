//Criado por Hugo Vidal

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int indice = 13, soma = 0, k = 0;
	
	while(k<indice){
		k +=1;
		soma += k;
	}
	printf("Valor da variavel SOMA = %d\n", soma);
	
	
	return 0;
}
