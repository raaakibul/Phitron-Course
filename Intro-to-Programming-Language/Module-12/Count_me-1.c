#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int input_value;
    scanf("%d",&input_value);
    
    int array[input_value];
    for (int i=0;i<input_value;i++){
        scanf("%d",&array[i]);
    }
    
    int count_of_two=0,count_of_three=0;
    for (int i=0;i<input_value;i++){
        if(array[i]%2==0 && array[i]%3==0){
            count_of_two++;
        }
        else if (array[i]%2==0){
            count_of_two++;
        }
        else if (array[i]%3==0){
            count_of_three++;
        }
    }
    printf("%d %d",count_of_two,count_of_three);
    return 0;
}
