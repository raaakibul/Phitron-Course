#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    long long min=LLONG_MAX;
    for (int i=0;i<n;i++){
        if (array[i]<min){
            min=array[i];
        }
    }

    long long int count=0;
    for (int i=0;i<n;i++){
        if (array[i]==min){
            count++;
        }
    }
    if (count%2==1){
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }
    return 0;
}