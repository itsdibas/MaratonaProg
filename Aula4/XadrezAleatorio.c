#include <stdio.h>
#include <math.h>

int main() {
    int N, T;
    scanf("%d %d", &N, &T);  

    long long int valid_positions = 0;

    if (T == 0) {
        valid_positions = N; 
    } else{
        valid_positions=1;
        for(int i=0, j=N ; i<T+1; i++, j--){
          valid_positions*=j;
        }
      if(T==2){
        valid_positions=valid_positions/6;
      }
    }

    printf("%lld", valid_positions);

    return 0;
}