#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);

    if (ch>='a'&&ch<='z'){
        if (ch=='z'){
            printf("a\n");
        } 
        else{
            int letter=ch+1;
            printf("%c\n",letter);
        }
    }
    else{
        printf("\n");
    }
    
    return 0;
}