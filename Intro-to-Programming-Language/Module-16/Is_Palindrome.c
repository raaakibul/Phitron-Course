#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char ch[]);
int main() {

    char array[1000];
    scanf("%s",array);

    int check_palindrome = is_palindrome(array);
    if (check_palindrome!=1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}

int is_palindrome(char ch[]){
     
    int length = strlen(ch);
    int count = 0;
    
    for (int i = 0; i < length/2; i++){
        if (ch[i] !=ch[length-1-i]){
            count = 1;
            break;
        }
        
    }

    return count;
    
}
