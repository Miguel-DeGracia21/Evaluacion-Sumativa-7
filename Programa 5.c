#include <stdio.h>
#include <stdlib.h>
 
int main(){
	float arreglo [10], max;
	int i,contador;
	contador=0;
 
	for (i=0; i<10; i++){
		printf("\nDigite el %d numero: ",i);
		scanf("%f",&arreglo[i]);
	}
	for (i=0; i<10; i++){
		if (max < arreglo[i]){
			max = arreglo[i];
		}
	}
	for (i=0; i<10; i++){
		if (max==arreglo[i]){
			contador++;
		}
		
	}
	printf("\n\nEl numero mayor es el %.2f", max);
	printf("\n\nEl elemento %.2f, se repite %d veces\n\n",max,contador);
	
	system("pause");
	return 0;
}
