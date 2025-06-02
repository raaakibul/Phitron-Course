#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int A;
    long long int B;
    double C;
    char D;

    // Read inputs line by line
    scanf("%d%lld%lf", &A,&B,&C);
    getchar();
    scanf("%c", &D);

    printf("%d\n%lld\n%.2lf\n%c\n", A,B,C,D);
    
    return 0;
}
