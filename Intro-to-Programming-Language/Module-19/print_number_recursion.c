#include<stdio.h>

void number_recursion(int n)
{
    if (n==0) 
    return;
    int remainder=n%10;
    recursion(n/10);
    printf("%d ",remainder);
}

int main()
{  
    int test;
    scanf("%d",&test);
    for (int i=0;i<test;i++)
    {
        int number;
        scanf("%d",&number);
        number_recursion(number);
        if (number==0)
        {
            printf("%d",number);
        }
        printf("\n");
    }

    return 0;
}
