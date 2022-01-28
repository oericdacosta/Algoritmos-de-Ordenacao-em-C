#include <stdio.h>
#include <stdlib.h>
#define tamVetor 1000
void bolha(int n, int *v);//fun��o que ordena vetores

void vetorCrescente(int n, int *v);//fun��o que popula o vetor de forma crescente

void vetorAleatorio(int n, int *v);//Fun��o que popula o vetor de forma aleatoria

void vetorDecrescente(int n, int *v);//Fun��o que popula o vetor de forma decrescente

void imprimeVetor(int n, int *v);//Fun��o que imprime os elementos de um vetor

int main(){
	int v[tamVetor];
	vetorAleatorio(tamVetor,v);
	bolha(tamVetor, v);
	imprimeVetor(tamVetor,v);
	return 0;
}

void bolha(int n, int *v){
	int i, j, temp;
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(v[j]> v[j+1]){
				temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
		}
	}
}

void vetorCrescente(int n, int *v){
	int i,j = 1;
	for(i=0;i<n;i++){
		v[i] = j;
		j++;
	}
}

void vetorAleatorio(int n, int *v){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++){
		v[i] = rand() % n;
	}
}

void vetorDecrescente(int n, int *v){
	int i, j = n;
	for(i=0;i<n;i++){
		v[i] = j;
		j--;
	}
}

void imprimeVetor(int n, int *v){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", v[i]);
	}
}
