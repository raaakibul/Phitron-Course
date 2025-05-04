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
    int a,b;
    scanf("%d %d",&a, &b);
    int add = sum(a,b);
    int sub = subtraction(a,b);
    printf("%d\n", add);
    printf("%d\n", sub);
    return 0;
}