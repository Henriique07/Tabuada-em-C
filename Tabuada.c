#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	
	printf ("Numero: ");//Pede o número para o usuário
	scanf ("%d", &numero);
	getchar();
	
	printf ("=-=-=[TABUADA]=-=-=\n");
	for (int i=0;i<=10;i++){ // Loop for que vai de 0 a 10
		//Multiplicação
		printf ("%d x %d = %d\n", i,numero, i*numero);
	}
}