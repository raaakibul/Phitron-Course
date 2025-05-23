#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int check(char str[]){
    int n = strlen(str);
    int odd_position_sum = 0, even_position_sum = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            odd_position_sum += str[i] - '0';            
        }
        else{
            even_position_sum += str[i] - '0';
        }
    }

    return (abs(odd_position_sum - even_position_sum)% 11 == 0);
}

int main(){
    char str[100];

    scanf("%s", str);

    if (check(str))
        printf("YES\n");
    else
        printf("NO");

    return 0;
}