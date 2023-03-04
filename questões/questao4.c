//Criado por Hugo Vidal

#include <stdio.h>
#include <stdlib.h>


int main() {

	float dist = 100, vel1 = 110.0, vel2 = 80;
	
	// transformando de KM/H para KM/M
	
	float v1 = vel1/60;
	float v2 = vel2/60;
	
	// i == minutos
	
	int i;
	float vv1 = dist, vv2 = -10;
	for(i=0;i<dist;i++){
		vv1-=v1;
		printf("carro %f\n", vv1);
		
		vv2+=v2;
		printf("caminhao %f\n", vv2);
		
		if(vv1 <= vv2){
			printf("CRUZARAM!\n");
			printf("%d\n", i);
			break;
		}
}

float caminhao, carro;
	caminhao = dist - vv2;
	carro = dist - vv1;

printf("\nO carro percorreu %.2f de distancia de Ribeirao Preto para Franca,\nenquanto o caminhao esta a %.2f de distancia de Ribeirao Preto\n", carro, caminhao);
printf("Ou seja, quando eles se cruzarem, estarao a %.2f de distancia de Ribeirao Preto\n", carro);
	return 0;
}
