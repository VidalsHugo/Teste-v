//Criado por Hugo Vidal

#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
	if(n == 0 || n == 1){
		return n;
	}else{
		return fibo(n-1) + fibo(n-2);
	}
}

int main() {

	int n=20, val, i, num=8, flag=0;
	
	// n -> quantiade de elementos na sequencia
	// num -> numero a ser procurado na sequencia
	
	for(i=0;i<n;i++){
		val = fibo(i);
		
		if(val == num){
			flag+=1;
			break;
		}
	}
	
	flag==1 ? printf("Pertence a sequencia de Fibonacci.\n") :
		 printf("Nao pertence a sequencia de Fibonacci.\n");

	return 0;
}
