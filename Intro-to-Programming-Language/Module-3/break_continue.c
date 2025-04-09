#include<stdio.h>
int main(){
    int n=10;
    for(int i=1;i<=n;i++){
        if(i==5){
            continue;
            // break;
        }
        printf("%d ",i);
    }

}