#include <stdio.h>
#include <stdlib.h>
#define tamVetor 1000
void insertSort(int n, int *v);//Função que ordena os elementos de um vetor

void vetorCrescente(int n, int *v);//função que popula o vetor de forma crescente

void vetorAleatorio(int n, int *v);//Função que popula o vetor de forma aleatoria

void vetorDecrescente(int n, int *v);//Função que popula o vetor de forma decrescente

void imprimeVetor(int n, int *v);//Função que imprime os elementos de um vetor

int main(){
	int v[tamVetor];
	vetorAleatorio(tamVetor,v);
	insertSort(tamVetor, v);
	imprimeVetor(tamVetor,v);
	return 0;
}

void insertSort(int n, int *v){
	int j, i, chave;
	for(j=1;j<n;j++){
		chave = v[j];
		i = j-1;
		while(i>-1 && v[i] > chave){
			v[1+i] = v[i];
			i--;
		}
		v[i+1] = chave;
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
