#include<stdio.h>
#include<limits.h>

void max_min(int n)
{

    long long int array[n];
    for (int i=0;i<n;i++){
        scanf("%lld",&array[i]);
    }
    long long int min=LONG_MAX,max=LONG_MIN;
    for (int i=0;i<n;i++){
        if (array[i]<min){
            min=array[i];
        }
        if (array[i]>max){
            max=array[i];
        }
    }

    printf("%lld %lld",min,max);

}

int main()
{
    
    int n;
    scanf("%d",&n);
    max_min(n);
    return 0;
}