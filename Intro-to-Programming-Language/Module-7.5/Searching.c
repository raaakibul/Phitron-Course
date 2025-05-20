#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    int x;
    scanf("%d",&x);
    int answer=-1;
    for (int i=0;i<n;i++){
        if (array[i]==x){
            answer=i;
            break;
        }
    }
    printf("%d\n",answer);
    
    return 0;
}