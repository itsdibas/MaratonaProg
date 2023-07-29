#include <stdio.h>
#include <stdlib.h>
 
int main(){    	
 
int a, b, nAnos=0;
 
scanf("%d %d", &a, &b);
 
while(a<=b){
 
    a = a*3;
    b = b*2;
    nAnos++;
}
 
printf("%d\n", nAnos);
 
    return 0;
}