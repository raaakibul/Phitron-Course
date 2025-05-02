#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char word_array[100];
    scanf("%s", word_array);
    
    int len = strlen(word_array);

    if (word_array[0] == word_array[len - 1]) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
