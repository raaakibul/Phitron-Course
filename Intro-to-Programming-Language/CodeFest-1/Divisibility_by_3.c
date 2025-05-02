#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        
    int N, digit, sum = 0;
    scanf("%d", &N);  

    for (int i=0; i<N; i++) {
        scanf("%d", &digit);
        sum += digit;
    }

    if (sum % 3 == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
