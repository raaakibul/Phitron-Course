#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int even_sum =0, odd_sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even_sum +=i;
        }else{
            odd_sum +=i;
        }
    }
    printf("Sum of Even Number :%d\n",even_sum);
    printf("Sum of odd Number : %d\n",odd_sum);
    return 0;
}
// output
// n=5
// even sum = 0+2+4 =6
// odd sum = 1+3+5 = 9