#include<stdio.h>
#include<stdbool.h>
int main(){
    printf("Hello World\n");
    int num= 10;
    printf("%d\n", num);
    char ch= 'A';
    printf("%c\n", ch);

    float f= 10.5;
    printf("%f\n", f);
    double d= 10.5;
    printf("%lf\n", d);
    int a= 10, b= 20;
    printf("%d\n", a+b);

    bool isTrue= true;
    printf("%d\n", isTrue);

    int n;
    scanf("%d", &n);
    printf("%d\n", n);

}