#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int entrada, maiorN = 0;
	
	while(1){
	scanf("%d", &entrada);
		if(entrada==0){
		printf("%d", maiorN);
		return 0;
		}
		if(entrada>maiorN){
		maiorN = entrada;
		}
	}

    return 0;
}
