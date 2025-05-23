#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, k;
    scanf("%d %d",&n,&k);

    int fuel_tanks[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &fuel_tanks[i]);
    }

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j< n-1-i;j++){
            if (fuel_tanks[j] > fuel_tanks[j+1]){
                int temp = fuel_tanks[j];
                fuel_tanks[j] = fuel_tanks[j+1];
                fuel_tanks[j+1] = temp;
            }
        }
    }

    int left = 0, right = n - 1;
    int shoot = 0;

    while (left < right) {
        if (fuel_tanks[left] +fuel_tanks[right]<= k){
            shoot++;
            left++;
            right--;
        } else {
            right--;
        }
    }

    printf("%d\n",shoot);
    return 0;
}
