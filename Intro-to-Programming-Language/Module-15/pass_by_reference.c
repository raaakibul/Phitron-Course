#include<stdio.h>

void pass_by_ref(int* p){
    *p =20;
    printf("outside function: x = %p\n",&p);

}

int main(){

    int x =10;
    pass_by_ref(&x);
    printf("%d\n",x);
    printf("Main function: x = %p\n",&x);
    return 0;
}