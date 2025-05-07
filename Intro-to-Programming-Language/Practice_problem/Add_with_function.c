#include<stdio.h>
int sum(int x, int y){
    int add = x + y;
    return add;
}
int main(){
    int x,y;

    scanf("%d %d",&x,&y);
    int result = sum(x,y);
    printf("%d\n",result);
    return 0;
}