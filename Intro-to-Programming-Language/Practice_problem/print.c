#include <stdio.h>

void print_number(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++){
        printf("%d", result);
        
        if (i<n){
            printf(" ");
        }
        result++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_number(n);

    return 0;
}