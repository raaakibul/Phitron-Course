#include<stdio.h>

int main(){
    
    int n;
    long long int ss;
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        ss=array[i];
    }
    long long int s;
    for(int i=n-1;i>=0;i--){
        scanf("%d ",&array[i]);
        s=array[i];
    }
    if(s==ss){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}