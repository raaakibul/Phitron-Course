#include<stdio.h>
int main(){
    int i = 10;
    i*=3; //30
    printf("%d\n",i); //30

    // post increment 
    // 1 2 3 4 5
    for(int i =1;i<=5;i++){
        printf("%d ",i);
    }
    printf("\n");
    // pre increment
    // 1 2 3 4 5 
    for(int i=1;i<=5;++i){
        printf("%d ",i);
    }
    printf("\n");
    int x = 10;
    int y = x++;
    printf("%d %d",x,y); //11 10

    return 0;
}