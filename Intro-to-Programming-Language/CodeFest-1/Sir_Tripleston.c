#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch;
    int sequence[26]= {0};
    
    for (int i=0; i<77; i++) {
        scanf("%c", &ch);
        sequence[ch-'a']++;
    }
    for (int i=0; i<26; i++) {
        if(sequence[i]==2){
            printf("%c\n",i+'a');
            break;
        }
    }

    return 0;
}
