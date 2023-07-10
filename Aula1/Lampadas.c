#include <stdio.h>
#include <stdlib.h>

int main(){    	
    // Seu código vai aqui
	int n, A=0, B=0, entrada;
	
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
	scanf("%d", &entrada);
		if(entrada==1){
			if(A==0){
			A=1;
			}
			else{
			A=0;
			}
		}
		else{
			if(A==0){
			A=1;
			}
			else{
			A=0;
			}
			if(B==0){
			B=1;
			}
			else{
			B=0;
			}
		}
	}
	printf("%d\n", A);
	printf("%d\n", B);
    return 0;
}