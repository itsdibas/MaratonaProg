#include <stdio.h>


int main(){

    int kirikoPower, n, dragonPower[1000], dragonBonus[1000],max=0;
    int temDragao=0;

    scanf("%d", &kirikoPower);
    scanf("%d", &n);
    temDragao=n;

    for(int i=0; i<n; i++){

        scanf("%d", &dragonPower[i]);
        scanf("%d", &dragonBonus[i]);
    }

    while(temDragao>0 && max<10000){
        for(int j=0; j<n; j++, max++){
            if(dragonPower[j]!=-1 && dragonPower[j] < kirikoPower){
                kirikoPower += dragonBonus[j];
                dragonPower[j] = -1;
                temDragao--;
                max=0;
                break;
            }        
        }
        
    }
    if(temDragao==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}