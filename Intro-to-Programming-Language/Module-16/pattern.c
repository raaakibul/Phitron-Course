#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    int input_value;
    scanf("%d",&input_value);
    int space=input_value-1,hash_character=1;

    for (int i=1;i<=2*input_value-1;i++){
        for (int j=0;j<space;j++){
            printf(" ");
        }
        for (int j=1;j<=hash_character;j++){          
            if (i%2!=0){
                printf("#");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
        if (i < input_value){
            space--;
            hash_character =hash_character+2; 
        } 
        else{
            space++;
            hash_character = hash_character-2;
        }
    }

    return 0;
}
