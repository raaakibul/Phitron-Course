#include<stdio.h>
void world(){
    printf("World\n");
}
void hello(){
    printf("Hello\n");
    wrold();
}
int main(){
    printf("Hi\n");
    hello();
    return 0;
}