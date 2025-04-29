#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char array[100000];
    scanf("%s",array);

    int alphabets_length = strlen(array);
    int consonant_count=0;
    
    for (int i=0;i<alphabets_length;i++){
        if (array[i]!='a' && array[i]!='e' && array[i]!='i' && array[i]!='o' && array[i]!='u'){
            consonant_count++;
        }
    }

    printf("%d",consonant_count);
    
    return 0;
}
