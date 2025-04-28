#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int count0 = 0, count1 = 0;
    int input_number;
    for (int i = 0; i < n; i++) {
        scanf("%d", &input_number);
        if (input_number == 0){
            count0++;
        }
        else if (input_number == 1){
            count1++;
        }
     }
    printf("%d %d\n", count0, count1);
    
    return 0;
}