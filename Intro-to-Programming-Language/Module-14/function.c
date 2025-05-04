#include<stdio.h>
int sum(int num1, int num2){
    int result = num1 + num2;
    // printf("%d", result);
    return result;
}
int subtraction(int num1, int num2){
    int result = num1 - num2;
    return result;
}
int main(){
    int add = sum(10,20);
    int sub = subtraction(20,10);
    printf("%d", add);
    printf("%d", sub);
    return 0;
}