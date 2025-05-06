#include<stdio.h>

void pass_by_value(int x){
    x =20;
    printf("outside function: x = %p\n",&x);

}

int main(){

    int x =10;
    pass_by_value(x);
    printf("%d\n",x);
    printf("Main function: x = %p\n",&x);
    return 0;
}