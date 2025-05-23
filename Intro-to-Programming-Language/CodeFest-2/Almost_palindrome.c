#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test_cases;
    scanf("%d", &test_cases);

    for(int i = 0; i<test_cases; i++){
        char array[1000];
        scanf("%s", array);
        
        int freq[26] = {0};
        int len = strlen(array);

        for(int i = 0; i < len; i++){
            freq[array[i] - 'a']++;
        }
        int odd_count = 0;

        for(int i = 0; i < 26; i++){
            if (freq[i]%2 != 0) {
                odd_count++;
            }
        }

        int result;
        if(odd_count <= 1){
            result = 0;
        } 
        else{
            result = odd_count - 1;
        }
        printf("%d\n",result);
    }

    return 0;
}
