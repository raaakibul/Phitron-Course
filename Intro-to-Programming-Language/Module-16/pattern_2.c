#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    int input_number;
    scanf("%d",&input_number);
    
    int space=input_number-1,value=1,i,j;
    for (i=1;i<=input_number;i++){
        for (j=1;j<=space;j++){
            printf(" ");
        }
        for (j=i;j>=value;j--){
            printf("%d",j);
        }
        printf("\n");
        space--;
    }
    return 0;
}
