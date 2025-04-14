// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 10^3).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

// Output
// Print the maximum number.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max =0;
    for(int i=1;i<=n;i++){
        int input_value;
        scanf("%d",&input_value);
        if(input_value>max){
            max = input_value;
        }
    }
    printf("%d",max);

    return 0;
}