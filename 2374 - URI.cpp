#include<stdio.h>

int checa_bomba(int N, int M){
	scanf("%d", &N);
	scanf("%d", &M);
	N = N-M;
	return N;
}

int main(){
	int N, M;
	printf("%d", checa_bomba(N, M));
	
	return 0;
}
