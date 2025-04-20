#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n-1];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int index;
    scanf("%d",&index);

    for(int i=index;i<n-1;i++){
        a[i]=a[i+1];
    }
// n--;
//in for loop logic is : i<n
    for(int i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
    return 0;
}