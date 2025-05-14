#include<stdio.h>
#include<limits.h>
int fun(int a[],int n,int i);
int main(){
    
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int mx=fun(array,n,0);
    printf("%d",mx);
    return 0;
}
int fun(int a[],int n,int i){
    if (i==n){
        return INT_MIN;
    }
    int max=fun(a,n,i+1);
    if (a[i]>max){
        return a[i];
    }
    else{
        return max;
    }
}