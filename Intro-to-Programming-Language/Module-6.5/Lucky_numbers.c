#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int b=N/10,c=N%10;
    if(N%10==0 || b%c==0 || c%b==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}