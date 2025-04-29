#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char array[10000];
    scanf("%s",array);

    int length=strlen(array);
    
    int frequency_count[26]={0}, small_alphabet;
    
    for (int i=0;i<length;i++){
       small_alphabet=array[i]-'a';
       frequency_count[small_alphabet]++;
    }
    for (int i=0;i<26;i++){
        if (frequency_count[i]!=0){
            printf("%c - %d\n",i+'a',frequency_count[i]);
        }
    }
    
    return 0;
}
