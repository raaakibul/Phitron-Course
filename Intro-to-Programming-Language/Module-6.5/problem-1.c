#include<stdio.h>
int main(){

    int a,b;
    scanf("%d %d", &a, &b);
    int result = a - b;
    if (result<=0){
        printf("0");
    }
    else{
        printf("%d",result);
    }
    return 0;
}