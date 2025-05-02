#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char word1[100], word2[100];
    int count[26]= {0};
    scanf("%s%s", word1, word2);

    for (int i=0; word1[i] != '\0'; i++) {
        count[word1[i]- 'a']++;
    }

    for (int i=0; word2[i] != '\0'; i++) {
        count[word2[i] -'a']--;
    }

    for (int i=0; i < 26; i++) {
        if (count[i] !=0) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}
