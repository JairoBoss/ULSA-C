#include <stdlib.h>
#define SIZE 1000

int main(){

    long long int n, k;
    long long int suma1 = 0, suma2 = 0;
    long long int diamantes[SIZE];

    scanf("%lld", &n);

    for(long long int i = 0; i < n; i++){
        scanf("%lld", &diamantes[i]);
    }
    scanf("%lld", &k);

    for(long long int i = 0; i < n; i++){
        if((n - i) < k) continue;
        for(long long int  j = 0; j < k; j++){
            suma1 += diamantes[i + j];
        }
        if(suma1 >= suma2){
            suma2 = suma1;
            suma1 = 0;
        }
        else{
            suma1 = 0;
        }
    }

    printf("%lld", suma2);

return 0;
}
