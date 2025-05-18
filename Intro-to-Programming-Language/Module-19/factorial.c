#include<stdio.h>

long long int factorial(int n)
{
    if (n==0){
        return 1;
    }
    long long int ans=factorial(n-1);
    return ans*n;
}

int main(){
    
    int number;
    scanf("%d",&number);

    long long int result=factorial(number);

    printf("%lld",result);

    return 0;
}