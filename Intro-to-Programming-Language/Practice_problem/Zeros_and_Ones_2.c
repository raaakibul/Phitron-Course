#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int x;
    scanf("%d", &x);

    if (array[x - 1] == 0){
        array[x - 1] = 1;
    }
    else{
        array[x - 1] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");  
    return 0;
}