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
    int flag=0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            // printf("%d %d\n",array[i],array[j]);
            if(array[i] + array[j]==x){
                flag =1;
                // printf("Yes\n");
                printf("%d %d", array[i],array[j]);
            }
        }
    }
    if(flag==0){
        printf("No\n");
    }
    return 0;
}