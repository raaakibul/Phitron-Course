#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count_before_one(int array[],int number);
int main() {

    int input_number;
    scanf("%d",&input_number);
    
    int array[input_number];
    for (int i=0;i<input_number;i++){
        scanf("%d",&array[i]);
    }
    
    int result = count_before_one(array,input_number);
    printf("%d",result);
    
    return 0;
}
int count_before_one(int array[],int number){
    
    for (int i=0;i<number;i++){
        if (array[i]==1){
            return i;
        }
    }
    return number; 
    
}
