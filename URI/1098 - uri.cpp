#include <stdio.h>

int main(){
    float i=0, j=1;
    	while(i<=2.2){
		for(int k=0;k<3;k++){
			if(i==0){
				printf("I=%.f J=%.f\n", i,j);
			}else{
				printf("I=%.1f J=%.1f\n", i,j);
			}
			
			j=j+1;
		}
		i = i+0.2;
		j=i+1;
	}

    
    return 0;
}
