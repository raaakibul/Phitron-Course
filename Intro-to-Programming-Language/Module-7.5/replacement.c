#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++){
        if (array[i]<0){
            array[i]=2;
        }
        else if (array[i]>0){
            array[i]=1;
        }
        else{
            array[i]=0;
        }
    }
    for (int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}