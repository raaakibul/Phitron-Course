#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    int x;
    scanf("%d",&x);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            // printf("%d %d\n",array[i],array[j]);
            if(array[i] + array[j]==x){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
    return 0;
}