#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    
    long long salami[n]; 
    long long max = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &salami[i]);
        if (salami[i] > max) {
            max = salami[i];
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%lld ", max - salami[i]);
    }
    
    printf("\n");
    return 0;
}
