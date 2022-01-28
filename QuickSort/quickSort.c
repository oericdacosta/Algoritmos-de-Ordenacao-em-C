#include <stdio.h>
#include <stdlib.h>
#define tamVetor 100
void rapida(int n, int *v);//Função que ordena os elementos de um vetor

void vetorCrescente(int n, int *v);//função que popula o vetor de forma crescente

void vetorAleatorio(int n, int *v);//Função que popula o vetor de forma aleatoria

void vetorDecrescente(int n, int *v);//Função que popula o vetor de forma decrescente

void imprimeVetor(int n, int *v);//Função que imprime os elementos de um vetor

int main(){
	int v[tamVetor];
	vetorDecrescente(tamVetor,v);
	rapida(tamVetor, v);
	imprimeVetor(tamVetor,v);
	return 0;
}

void rapida(int n, int *v){
	if(n>1){
		int x = v[0];
		int a =1; int b = n-1;
		while(1){
			while(a<n && v[a] <=x) a++;
			while(v[b]>x) b--;
			if(a<b){
				int temp = v[a];
				v[a] = v[b];
				v[b] = temp;
				a++;b--;
			}else
				break;
			}
			v[0] = v[b];
			v[b] = x;
			rapida(b,v);
			rapida(n-a,&v[a]);
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
