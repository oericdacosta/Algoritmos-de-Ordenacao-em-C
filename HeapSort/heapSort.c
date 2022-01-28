#include <stdio.h>
#define tamVetor 1000
/*Funções para ordenar um vetor*/
void heapsort(int *vet, int n);
void peneira(int *vet, int raiz, int fundo);

void vetorCrescente(int n, int *v);//função que popula o vetor de forma crescente

void vetorAleatorio(int n, int *v);//Função que popula o vetor de forma aleatoria

void vetorDecrescente(int n, int *v);//Função que popula o vetor de forma decrescente

void imprimeVetor(int n, int *v);//Função que imprime os elementos de um vetor

int main(){
	int v[tamVetor];
	vetorAleatorio(tamVetor,v);
	heapsort(v, tamVetor);
	imprimeVetor(tamVetor,v);
	return 0;
}

void heapsort(int *vet, int n) {
	int i, tmp;

	for (i = (n / 2); i >= 0; i--) {
		peneira(vet, i, n - 1);
	}

	for (i = n-1; i >= 1; i--) {
		tmp = vet[0];
		vet[0] = vet[i];
		vet[i] = tmp;
		peneira(vet, 0, i-1);
	}
}

void peneira(int *vet, int raiz, int fundo) {
	int pronto, filhoMax, tmp;

	pronto = 0;
	while ((raiz*2 <= fundo) && (!pronto)) {
		if (raiz*2 == fundo) {
			filhoMax = raiz * 2;
		}
		else if (vet[raiz * 2] > vet[raiz * 2 + 1]) {
			filhoMax = raiz * 2;
		}
		else {
			filhoMax = raiz * 2 + 1;
		}

	if (vet[raiz] < vet[filhoMax]) {
		tmp = vet[raiz];
		vet[raiz] = vet[filhoMax];
		vet[filhoMax] = tmp;
		raiz = filhoMax;
    }
	else {
      pronto = 1;
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

