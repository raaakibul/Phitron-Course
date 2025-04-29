#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int test_cases;
    scanf("%d",&test_cases);
    for (int i=0;i<test_cases;i++){
        char array[10000];
        scanf("%s",array);
        
        int length=strlen(array);
        int capital_aplhabet=0, small_alphabet=0, digit=0;
        
        for (int i=0;i<length;i++){
            if (array[i]>='A' && array[i]<='Z'){
                capital_aplhabet++;
            }
            else if (array[i]>='a' && array[i]<='z'){
                small_alphabet++;
            }
            else{
                digit++;
            }
        }
        printf("%d %d %d\n",capital_aplhabet,small_alphabet,digit);
    }

    return 0;
}
