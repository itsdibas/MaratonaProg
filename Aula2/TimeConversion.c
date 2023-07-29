#include <stdio.h>

int main (){

    int N=0,horas=0,min=0,sec=0,resto=0,passou=0;

    scanf("%d", &N);

    if(N>=3600){
    horas = N/3600;
    resto = N%3600;
    passou=1;
    }

    if(passou==1){
    min = resto/60;
    sec = resto%60;
    }
    else{
    min = N/60;
    sec = N%60;
    }

    printf("%d:%d:%d\n", horas, min, sec);

    return 0;
}