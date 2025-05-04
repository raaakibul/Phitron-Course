#include<stdio.h>
int sum(int num1, int num2){
    int result = num1 + num2;
    // printf("%d", result);
    return result;
}
int main(){
    int ans = sum(10,20);

    printf("%d", ans);
    return 0;
}