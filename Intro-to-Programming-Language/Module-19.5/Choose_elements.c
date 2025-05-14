#include<stdio.h>

int main(){

    long long int n,m;
    scanf("%lld %lld",&n,&m);

    long long int array[n];
    for (int i=0;i<n;i++){
        scanf("%lld",&array[i]);
    }
    for (int i=0;i<n-1;i++){
       for (int j=i+1;j<n;j++){
            if (array[i]<array[j]){
                int tmp=array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
       }
    }

    long long int result=0;
    for (int i=0;i<m;i++){
        if (array[i]>=0){
            result+=array[i];
            continue;
        }
    }
    printf("%lld",result);
    return 0;
}