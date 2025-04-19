#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int positive=0, negative=0;

    for (int i=0;i<n;i++){
        if (array[i]>=0){
            positive=positive+array[i];
        }
        else{
            negative=negative+array[i];
        }
    }
    printf("%d %d",positive,negative);
    return 0;
}