#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int amount;
    scanf("%d",&amount);
    if(amount%3==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}