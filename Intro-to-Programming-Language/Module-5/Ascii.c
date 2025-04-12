#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        int ascii=ch-32;
        printf("%c",ascii);
    }else{
        int ascii=ch+32;
        printf("%c",ascii);
    }
    return 0;
}