#include <stdio.h>

int main(){
    //bubble sort

    int a[3],b[3];

    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(int i=0;i<3;i++){
        printf("%d\n",a[i]);
    }

    printf("\n");

    for(int i=0;i<3;i++){
        printf("%d\n",b[i]);
    }


    return 0;
}