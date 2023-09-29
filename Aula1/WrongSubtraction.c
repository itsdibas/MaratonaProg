#include <stdio.h>
#include <stdlib.h>
 
int main(){    	
 
int numero, n;
 
scanf("%d", &numero);
scanf("%d", &n);
 
for(int i=0; i < n; i++){
    if(numero%10==0){
        numero = numero/10;
    }
    else{
        numero--;
    }
 
}
 
printf("%d\n", numero);
 
 
return 0;
}