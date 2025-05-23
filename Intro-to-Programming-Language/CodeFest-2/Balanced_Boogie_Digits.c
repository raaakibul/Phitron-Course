#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int L, R;
    scanf("%d %d",&L,&R);

    int found = 0;

    for(int i=L; i<=R; i++){
        int even = 0, odd = 0;
        int number =i;

        if (number == 0){
            even = 1;
        } 
        else{
            while (number>0){
                int digit = number % 10;
                if(digit % 2== 0){
                    even++;
                }
                else{
                    odd++;
                }
                number /= 10;
            }
        }

        if(even == odd && even != 0){
            printf("%d\n",i);
            found = 1;
        }
    }

    if(found==0){
        printf("-1\n");
    }
    return 0;
}
