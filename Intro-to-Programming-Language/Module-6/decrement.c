#include<stdio.h>
int main(){
    int i = 10;
    i--;
    printf("%d\n",i); //9

    --i;
    printf("%d\n",i); //8
    printf("%d\n",i--);//8
    printf("%d\n",i);//7
    printf("%d\n",--i);//6
    return 0;
}