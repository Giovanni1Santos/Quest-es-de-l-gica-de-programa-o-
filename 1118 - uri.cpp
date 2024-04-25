#include <stdio.h>

int main() {
   float media, num1, num2, x=0;
  
  while(x!=2) {
  
	do{
		scanf("%f", &num1);
		if (num1<0 || num1 >10){
			printf("nota invalida\n");
		}
	}while(num1<0 || num1>10);
	
	do{
		scanf("%f", &num2);
		if (num2 <0 || num2 > 10){
			printf("nota invalida\n");
		}
	}while(num2<0 || num2>10);
	
	media = (num1 + num2)/2;
	printf("media = %.2f\n", media);
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%f", &x);
	if(x==1){
		media = (num1 + num2)/2;
		printf("media = %.2f\n", media);
	}else if((x<1)||(x>2)){
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%f", &x);
	}
}	             
  return 0;
}
