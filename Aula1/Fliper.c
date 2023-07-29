#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int P, R;
	scanf("%d %d",&P, &R);
	if(P==0){
		printf("C");
	}
	else if(R==0){
		printf("B");
	}
	else{
	printf("A");
	}
	return 0;
}