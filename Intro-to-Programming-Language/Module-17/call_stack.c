#include<stdio.h>
void world(){
    printf("World");
}
void hello(){
    printf("Hello ");
    wrold();
}
int main(){
    printf("Hi, ");
    hello();
    return 0;
}