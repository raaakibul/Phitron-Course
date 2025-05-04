#include<stdio.h>
int sum(){
    int a, b;
    scanf("%d %d",&a, &b);
    int result = a + b;
    return result;
}

int main(){
    int add = sum();
    printf("%d",add);
    return 0;
}