#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void odd_even();
int main() {

    odd_even();
    return 0;
}

void odd_even(){
    
    int input_value;
    scanf("%d",&input_value);
    
    int array[input_value];
    
    for (int i=0;i<input_value;i++){
        scanf("%d",&array[i]);
    }

    int even_number=0;
    int odd_number=0;

    for (int i=0;i<input_value;i++){
        if (array[i]%2!=1){
            even_number++;
        }
        else{
            odd_number++;
        }
    }

    printf("%d %d",even_number,odd_number);
}
