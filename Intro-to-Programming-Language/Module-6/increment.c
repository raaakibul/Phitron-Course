#include<stdio.h>
int main(){
    int i = 10;
    i*=3;
    printf("%d\n",i);

    // post increment 
    for(int i =1;i<=5;i++){
        printf("%d ",i);
    }
    // pre increment 
    for(int i=1;i<=5;++i){
        printf("%d ",i);
    }

    int x = 10;
    int y = x++;
    printf("%d %d", x,y);

}